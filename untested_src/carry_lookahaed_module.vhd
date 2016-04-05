----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    23:56:31 03/29/2016 
-- Design Name: 
-- Module Name:    carry_lookahaed_module - Behavioral 
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

entity carry_lookahaed_module is
    Port ( P_group : in  STD_LOGIC_VECTOR (3 downto 0);
           G_group : in  STD_LOGIC_VECTOR (3 downto 0);
           C_out : out  STD_LOGIC_VECTOR (4 downto 1);
           c_in : in  STD_LOGIC);
end carry_lookahaed_module;

architecture Behavioral of carry_lookahaed_module is

begin
	C_out(1)	<=	G_group(0) or (c_in and P_group(0));
	C_out(2)	<= G_group(1) or (P_group(1) and G_group(0)) or (c_in and P_group(0) and  P_group(1));
	C_out(3)	<= G_group(2) or (P_group(2) and G_group(1)) or (P_group(2) and P_group(1) and G_group(0)) or (c_in and P_group(2) and  P_group(1) and P_group(0));
	C_out(4)	<= G_group(3) or (G_group(2) and P_group(3)) or (P_group(3) and P_group(2) and G_group(1)) or (P_group(3) and P_group(2) and P_group(1) and G_group(0)) or (c_in and P_group(3) and P_group(2) and  P_group(1) and P_group(0));
end Behavioral;

