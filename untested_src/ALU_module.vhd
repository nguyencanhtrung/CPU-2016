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
           result			: out  STD_LOGIC_VECTOR (31 downto 0);;
           ALUctrl 		: in  STD_LOGIC_VECTOR (3 downto 0);
			  zero 			: out  STD_LOGIC;
           lessthan 		: out  STD_LOGIC;
			  ovf				: out STD_LOGIC);
end ALU_module;

architecture Behavioral of ALU_module is

begin


	add_sub: entity work.sixteen_bits_add_sub
		port map	(
				operand_a 		=> operand_a,
				operand_b 		=> operand_b,
				result 			=>	onecmp_divisor,
				carry_out 		=>	ALU_c_out_dummy,
				over_flow		=> ALU_over_flow_dummy,
				mode				=>	mode_sub);	

				

end Behavioral;

