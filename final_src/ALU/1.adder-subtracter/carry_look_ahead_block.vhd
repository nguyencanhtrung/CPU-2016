----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    03:23:56 03/30/2016 
-- Design Name: 
-- Module Name:    carry_look_ahead_block - Behavioral 
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

entity carry_look_ahead_block is
    Port ( c_in 		: in  	STD_LOGIC;
           p_group 	: in  	STD_LOGIC_VECTOR (3 downto 0);
           g_group 	: in  	STD_LOGIC_VECTOR (3 downto 0);
           C_OUT 		: inout  	STD_LOGIC_VECTOR (4 downto 1));
end carry_look_ahead_block;

architecture Behavioral of carry_look_ahead_block is

begin
	C_OUT(1) <= g_group(0) or (p_group(0) and c_in);
	C_OUT(2) <= g_group(1) or (p_group(1) and C_OUT(1));
	C_OUT(3) <= g_group(2) or (p_group(2) and C_OUT(2));
	C_OUT(4) <= g_group(3) or (p_group(3) and C_OUT(3));

end Behavioral;

