----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    01:07:58 03/30/2016 
-- Design Name: 
-- Module Name:    logic_module - Behavioral 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity logic_module is
    Port ( operand_a 	: in  STD_LOGIC_VECTOR (15 downto 0);
           operand_b 	: in  STD_LOGIC_VECTOR (15 downto 0);
           result 		: out  STD_LOGIC_VECTOR (15 downto 0);
           operation 	: in  STD_LOGIC_VECTOR (1 downto 0));
end logic_module;

architecture Behavioral of logic_module is

begin
	result <= 		operand_a nand operand_b when operation="00"
				else 	operand_a nor operand_b when operation="01" 
				else 	operand_a xnor operand_b;  

end Behavioral;

