----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    22:54:36 03/30/2016 
-- Design Name: 
-- Module Name:    multiplier_module - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
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
use work.ALL;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity multiplier_module is
    Port ( operand_a 	: 	in  STD_LOGIC_VECTOR (15 downto 0);
           operand_b 	: 	in  STD_LOGIC_VECTOR (15 downto 0);
           result 		: 	out  STD_LOGIC_VECTOR (31 downto 0);
           ovf 			: 	out  STD_LOGIC;
           start 			: 	in  STD_LOGIC;
           done 			: 	out  STD_LOGIC;
			  rst				: 	in	STD_LOGIC;			  
			  clk				: 	in	STD_LOGIC);
end multiplier_module;

architecture Behavioral of multiplier_module is
		--internal registers
signal reg_A 				:std_logic_vector (15 downto 0);
signal reg_A_shifted		:std_logic_vector (15 downto 0);
signal reg_M 				:std_logic_vector (15 downto 0);
signal reg_Q 				:std_logic_vector (15 downto 0);
signal reg_A_Q_Q_last 	:std_logic_vector (33 downto 0);
signal Q_last 				:std_logic_vector	(1 downto 0);
--signal check_reg			:std_logic_vector	(2 downto 0);
		--add sub module signals
signal add_sub_result	:std_logic_vector (15 downto 0);
signal c_out_dummy, over_flow_dummy		:std_logic;
signal operation			:std_logic; 
		--state machine signals
type	state_type is (wait_state ,init ,check_3_bits,collect_result ,concatenate ,shift_right ,check_counter ,done_mult);
signal state 				: state_type;
	 
begin

adder_sub : entity work.sixteen_bits_add_sub
		port map	(
				operand_a 		=> reg_A_shifted,
				operand_b 		=> reg_M,
				result 			=>	add_sub_result,
				carry_out 		=>	c_out_dummy,
				over_flow		=> over_flow_dummy,
				mode				=>	operation
					);		
	process(clk)
	variable check_reg			: std_logic_vector	(2 downto 0);
	variable counter				: integer:=0;
	begin
		if rising_edge(clk) then
			if rst='1' then
				state <= wait_state;
				done	<= '0';
				ovf 	<= '0';
				result <= x"00000000";
			end if;
				case state is
					when wait_state =>
						if start = '1' then
							state				<=init;
						else 
							state				<=wait_state;
						end if;
						
					when init =>
							reg_A 			<= x"0000";
							reg_M				<= operand_a;
							reg_Q				<=	operand_b;
							reg_A_Q_Q_last	<=	(others => '0');
							Q_last 			<="00";
							counter			:=0;
							done				<='0';
							state				<=check_3_bits;							
					when check_3_bits =>
							check_reg		:=reg_Q(0) & Q_last;
							case check_reg is
								when "000" =>	reg_A_shifted <= reg_A; 								--nothing
								when "001" =>	reg_A_shifted <= reg_A; operation <= '0';			--add b
								when "010" =>	reg_A_shifted <= reg_A; operation <= '0';			--add b
								when "011" =>	reg_A_shifted <= to_stdlogicvector(to_bitvector(reg_A) sll 1); operation <= '0';	-- add 2b
								when "100" =>	reg_A_shifted <= to_stdlogicvector(to_bitvector(reg_A) sll 1);	operation <= '1';	-- sub 2b
								when "101" =>	reg_A_shifted <= reg_A; operation <= '1';			-- sub b
								when "110" =>	reg_A_shifted <= reg_A; operation <= '1';			-- sub b
								when "111" =>	reg_A_shifted <= reg_A;									-- nothing
								when others => null;
							end case;
							state 			<=collect_result;
					when collect_result =>		
						reg_A 				<=add_sub_result;
						state					<=concatenate;
					when concatenate		=>
						reg_A_Q_Q_last 	<= reg_A & reg_Q & Q_last;
						state					<= shift_right;
					when shift_right		=> 
						reg_A_Q_Q_last 	<= to_stdlogicvector(to_bitvector(reg_A_Q_Q_last) sra 2);
						state	<=check_counter;
					when check_counter =>
						reg_A					<= reg_A_Q_Q_last(33 downto 18);
						reg_Q					<= reg_A_Q_Q_last(17 downto 2);
						Q_last				<= reg_A_Q_Q_last(1 downto 0);
						counter 				:= counter +1;
						if counter = 8 then 
							state				<= done_mult;
						else 
							state				<= check_3_bits;
						end if;
					when done_mult =>
						result 				<= reg_A & reg_Q;					
						done					<='1';
						state					<=wait_state;
				end case;
			end if;
	end process;
end Behavioral;

