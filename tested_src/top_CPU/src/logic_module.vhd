----------------------------------------------------------------------------------
-- TU Kaiserslautern
-- Student: Waseem Hassan
-- 
-- Create Date:    01:07:58 03/30/2016 
-- Design Name: 	 ALU unit
-- Module Name:    logic_module - Behavioral 
-- Project Name:   Pipeline CPU 2016
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

entity logic_module is
    Port ( operand_a 	: in  STD_LOGIC_VECTOR (15 downto 0);
           operand_b 	: in  STD_LOGIC_VECTOR (15 downto 0);
           result 		: out  STD_LOGIC_VECTOR (15 downto 0);
           operation 	: in  STD_LOGIC_VECTOR (1 downto 0));
end logic_module;

architecture Behavioral of logic_module is

begin
	result <= 		operand_a nand operand_b	when operation="00"
				else 	operand_a nor 	operand_b 	when operation="01" 
				else 	operand_a xor 	operand_b 	when operation="10"
				else 	operand_a or 	operand_b 	when operation="11";  

end Behavioral;

