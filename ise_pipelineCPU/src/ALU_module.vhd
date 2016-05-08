----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    00:07:45 04/07/2016 
-- Design Name: 
-- Module Name:    ALU_module - Behavioral 
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
use work.cpu_package;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity ALU_module is
    Port ( operand_a 	: in  STD_LOGIC_VECTOR (15 downto 0);
           operand_b 	: in  STD_LOGIC_VECTOR (15 downto 0);
           result			: out  STD_LOGIC_VECTOR (15 downto 0);
           opcode 		: in  STD_LOGIC_VECTOR (5 downto 0);
			  zero 			: out  STD_LOGIC;
           lessthan 		: out  STD_LOGIC;
			  ovf				: out STD_LOGIC);
end ALU_module;

architecture Behavioral of ALU_module is

signal mode_sub 				:	std_logic;
signal logic_opr 				:	std_logic_vector (2 downto 0);
signal extracted_oprnd_b	:  std_logic_vector(4 downto 0);
signal shift_opr 				:	std_logic;
signal ovf_dummy				:	std_logic;
signal ALU_over_flow_dummy	: 	std_logic;
signal ALU_c_out_dummy		: 	std_logic;
signal addsub_result			:	std_logic_vector (15 downto 0);
signal logic_result			:	std_logic_vector (15 downto 0);
signal shift_result			:	std_logic_vector (15 downto 0);

begin


	add_sub: entity work.sixteen_bits_add_sub
		port map	(
				operand_a 		=> operand_a,
				operand_b 		=> operand_b,
				result 			=>	addsub_result,
				carry_out 		=>	ALU_c_out_dummy,
				over_flow		=> ALU_over_flow_dummy,
				mode				=>	mode_sub);	

	logic: entity work.logic_module
		port map	(
				operand_a 		=> operand_a,
				operand_b 		=> operand_b,
				result 			=> logic_result,
				operation 		=>	logic_opr);
				
	shift: entity work.shift_module
		port map	(
				operand_a 		=> operand_a,
				operand_b 		=> operand_b,
				result 			=> shift_result,
				shamt				=> extracted_oprnd_b,
				operation 		=>	shift_opr);

	result	<= 		addsub_result 	when 	opcode ='0' & work.cpu_package.add_op	or 
														opcode ='0' & work.cpu_package.addi_op or 
														opcode ='0' & work.cpu_package.sub_op 	or  
														opcode ='0' & work.cpu_package.sw_op	or
														opcode ='0' & work.cpu_package.lw_op	or
														opcode ='0' & work.cpu_package.beq_op	or
														opcode ='0' & work.cpu_package.bne_op	or
														opcode ='0' & work.cpu_package.slt_op	or
														opcode ='0' & work.cpu_package.slti_op
					else	logic_result 	when  opcode ='0' & work.cpu_package.nor_op 	or 
														opcode ='0' & work.cpu_package.or_op 	or 
														opcode ='0' & work.cpu_package.xor_op	or 
														opcode ='0' & work.cpu_package.and_op
					else 	shift_result	when  opcode ='0' & work.cpu_package.sll_op	or 
														opcode ='0' & work.cpu_package.srl_op
					else x"0123";
	
	extracted_oprnd_b <=	operand_b(11 downto 7);
	lessthan				<= addsub_result(15) xor (ALU_over_flow_dummy);
	zero 					<= '1' when addsub_result = x"0000" else '0'; 

			--control signals for internal muxes
	mode_sub				<= '0' when opcode ='0' & work.cpu_package.add_op or 
											opcode ='0' & work.cpu_package.addi_op or 
											opcode ='0' & work.cpu_package.sw_op or
											opcode ='0' & work.cpu_package.lw_op 											
								else  '1';
	logic_opr			<= opcode (2 downto 0);
	shift_opr			<=	opcode (3);
	ovf					<= ALU_over_flow_dummy;
end Behavioral;

