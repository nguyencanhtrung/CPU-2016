----------------------------------------------------------------------------------
-- Company: 
-- Engineer: Trung C. Nguyen
-- 
-- Create Date:    09:51:19 04/04/2016 
-- Design Name: 
-- Module Name:    fixedpoint_multiplier_module - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: Booth 2-bit Multiplier
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use work.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity fixedpoint_multiplier_module is
    Port ( multiplicand : in  STD_LOGIC_VECTOR (15 downto 0);
           multiplier 	: in  STD_LOGIC_VECTOR (15 downto 0);
			  rst				: in  STD_LOGIC;
			  clk				: in  STD_LOGIC;
			  start			: in 	STD_LOGIC;
			  done			: out STD_LOGIC;
           product 		: out  STD_LOGIC_VECTOR (31 downto 0);
           over_flow 	: out  STD_LOGIC);
end fixedpoint_multiplier_module;

architecture Behavioral of fixedpoint_multiplier_module is
signal accumulator:	std_logic_vector(31 downto 0);
signal ALU_operand:	std_logic_vector(15 downto 0);
signal ALU_mode	:	std_logic;
signal ALU_result :	std_logic_vector(15 downto 0);
signal ALU_c_out_dummy, ALU_over_flow_dummy : std_logic;


Type state_type is (init, check, wait_state, collect_ALU_result, shift_right, complete);
signal nx_state, pre_state: state_type;
begin
ALU_block: entity work.sixteen_bits_add_sub
		port map	(
				operand_a 		=> accumulator(31 downto 16),
				operand_b 		=> ALU_operand,
				result 			=>	ALU_result,
				carry_out 		=>	ALU_c_out_dummy,
				over_flow		=> ALU_over_flow_dummy,
				mode				=>	ALU_mode);	

sequential_block: process(clk, rst)
Begin
	if rising_edge(clk) then
		if (rst = '1') then
			pre_state <= init;
		else
			pre_state <= nx_state;
		end if;
	end if;
End process sequential_block;

combinational_block: process(pre_state, start)
variable iteration_counter	:	integer;
variable check_bits	:	std_logic_vector(1 downto 0);
Begin
	case pre_state is
		when init =>
			if (start = '1') then
				check_bits 	:= "00";
				accumulator <= x"0000" & multiplier;
				nx_state 	<= check;
				iteration_counter := 0;
			else
				nx_state 	<= init;
			end if;
			done <= '0';
		
		when check =>
			check_bits 	:= accumulator(0) & check_bits(1);
			case check_bits is
				when "00" =>		-- do nothing
					ALU_mode 	<= '0';
					ALU_operand <= x"0000";
				when "01" =>		-- add Multiplicand
					ALU_mode 	<= '0';
					ALU_operand <= multiplicand;
				when "10" =>		-- sub Multiplicand
					ALU_mode 	<= '1';
					ALU_operand <= multiplicand;
				when "11" =>		-- do nothing
					ALU_mode 	<= '0';
					ALU_operand <= x"0000";
				when others =>
					null;
			end case;
			nx_state <= wait_state;
		
		when wait_state =>
			nx_state <= collect_ALU_result;
		
		when collect_ALU_result =>
			accumulator(31 downto 16) <= ALU_result;
			nx_state <= shift_right;
			
		when shift_right =>
			accumulator <= to_stdlogicvector(to_bitvector(accumulator) sra 1);
			iteration_counter := iteration_counter + 1;
			if(iteration_counter = 17) then 
				nx_state <= complete;
			else
				nx_state <= check;
			end if;
			
		when complete =>
			done <= '1';
			product <= accumulator;
			nx_state <= init;
	end case;
End process combinational_block;
end Behavioral;

