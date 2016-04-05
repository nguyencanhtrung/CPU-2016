----------------------------------------------------------------------------------
-- TU Kaiserslautern
-- Student:  Waseen Hassan
-- 
-- Create Date:    22:21:56 04/04/2016 
-- Design Name: 	 ALU unit
-- Module Name:    unsigned_fixedpoint_divider_module - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--				A : B -- A is a dividend and B is a divisor
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
use IEEE.NUMERIC_STD.ALL;

entity unsigned_fixedpoint_divider_module is
    Port ( operand_a : in 	STD_LOGIC_VECTOR (15 downto 0); -- dividend
           operand_b : in 	STD_LOGIC_VECTOR (15 downto 0); -- divisor  
           quotient 	: out STD_LOGIC_VECTOR (15 downto 0);
			  rem_out 	: out STD_LOGIC_VECTOR (15 downto 0);
           start 		: in  STD_LOGIC;
           done 		: out STD_LOGIC;
           rst 		: in  STD_LOGIC;
           clk 		: in  STD_LOGIC);
end unsigned_fixedpoint_divider_module;

architecture Behavioral of unsigned_fixedpoint_divider_module is
		--internal signals for divide operation
signal 	remainder				: std_logic_vector (31 downto 0);
signal 	divisor					: std_logic_vector (15 downto 0);
		--internal signals for subtract operation
signal 	trans_divisor			: std_logic_vector (15 downto 0);
signal 	trans_remainder		: std_logic_vector (15 downto 0);	--16 bit since sub is 16 bit only!
signal 	subtraction_result	: std_logic_vector (15 downto 0);
signal   dummy_over_flow		: std_logic;
signal	dummy_carry_out		: std_logic;			
signal	operation_signal		: std_logic;			
		--state machine signals
type		state_type is (wait_state ,shift_left_remainder,subtract_divisor,wait_state_sub,test_remainder,remainder_positive,remainder_negative,counter_check,done_state);
signal 	state 					: state_type;

begin
	add_sub_instance: entity sixteen_bits_add_sub
	port map (
				operand_a 	=>	trans_remainder,
				operand_b	=>	trans_divisor,
				result		=>	subtraction_result,
				carry_out	=>	dummy_carry_out,
				over_flow	=> dummy_over_flow,
				mode			=>	operation_signal
				);
          
	divide_process: process (clk, rst)
	variable counter 						: integer:=0;
	begin
		if rising_edge(clk) then
			if rst='1' then
				state 										<= wait_state;
				done											<= '0';
				quotient										<= (others =>'0');
				rem_out										<= (others =>'0');
				remainder									<= (others =>'0');
				divisor										<= (others => '0');
				trans_divisor								<= (others => '0');
				trans_remainder							<= (others => '0');
				dummy_carry_out							<= '0';
				operation_signal							<=	'1';		--by default subtract
				counter										:=  0;
			end if;
				case state is
					when wait_state				 	=>
						if start = '1' then
							done								<= '0';
							remainder						<= x"0000" & operand_a;
							divisor							<= operand_b;	
							state 							<= shift_left_remainder;
						else
							state 							<= wait_state;
						end if;
						
					when shift_left_remainder 		=>
						trans_divisor						<= divisor;						
						remainder							<= to_stdlogicvector(to_bitvector(remainder) sll 1);
						state 								<= subtract_divisor;
						
					when subtract_divisor			=>
						trans_remainder					<= remainder (31 downto 16);		--only 16 bit
						state 								<= wait_state_sub;
						
					when wait_state_sub				=>
						state									<= test_remainder;
						
					when test_remainder				=>
						if subtraction_result(15) = '1' then
							state								<=	remainder_negative;
						else 
							remainder (31 downto 16) 	<=	subtraction_result;
							state								<= remainder_positive;
						end if;
						
					when remainder_positive			=>
							remainder						<= to_stdlogicvector(to_bitvector(remainder) sll 1);
							remainder(0)					<= '1';
							state								<= counter_check;
							
					when remainder_negative			=>
							remainder						<= to_stdlogicvector(to_bitvector(remainder) sll 1);
							state								<= counter_check;
							
					when counter_check				=>
							counter 							:= counter + 1;
							if counter >17 then
								state							<=	done_state;
							--	remainder (31 downto 16)	<= to_stdlogicvector(to_bitvector(remainder(31 downto 16)) srl 1);
							else 
								state							<= subtract_divisor;
							end if;
							
					when done_state					=>
							quotient 						<= remainder (15 downto 0);
							rem_out							<=	to_stdlogicvector(to_bitvector(remainder(31 downto 16)) srl 1);
							done								<= '1';
					when others 						=> null;
				end case;
		end if;
	end process divide_process;
end Behavioral;

