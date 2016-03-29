----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    00:10:22 03/30/2016 
-- Design Name: 
-- Module Name:    sixteen_bit_adder - Behavioral 
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

entity sixteen_bit_adder is
    Port ( a : in  STD_LOGIC_VECTOR (15 downto 0);
           b : in  STD_LOGIC_VECTOR (15 downto 0);
           sum : out  STD_LOGIC_VECTOR (15 downto 0);
           c_in : in  STD_LOGIC;
           c_out : out  STD_LOGIC);
end sixteen_bit_adder;

architecture Behavioral of sixteen_bit_adder is
	--P and G signals
signal P_group 		: std_logic_vector (3 downto 0);
signal G_group 		: std_logic_vector (3 downto 0);
signal C_out_group 	: std_logic_vector (4 downto 1);

begin
	four_bit_adder_1 : entity work.four_bit_adder
		port map(
				a 				=> a(3 downto 0),
				b 				=> b(3 downto 0),
				c_in 			=> c_in,
				s_out 		=> sum(3 downto 0),
				p_group_out => P_group(0),
				g_group_out =>	G_group(0)
			);				
	four_bit_adder_2 : entity work.four_bit_adder
		port map(
				a 				=> a(7 downto 4),
				b 				=> b(7 downto 4),
				c_in 			=> C_out_group(1),	--fill this
				s_out 		=> sum(7 downto 4),
				p_group_out => P_group(1),
				g_group_out =>	G_group(1)	
			);				
	four_bit_adder_3 : entity work.four_bit_adder
		port map(
				a 				=> a(11 downto 8),
				b 				=> b(11 downto 8),
				c_in 			=> C_out_group(2),	--fill this
				s_out 		=> sum(11 downto 8),
				p_group_out => P_group(2),
				g_group_out =>	G_group(2)	
			);				
	four_bit_adder_4 : entity work.four_bit_adder
		port map(
				a 				=> a(15 downto 12),
				b 				=> b(15 downto 12),
				c_in 			=> C_out_group(3),	--fill this
				s_out 		=> sum(15 downto 12),
				p_group_out => P_group(3),
				g_group_out =>	G_group(3)	
			);				

	carry_look_ahead : entity work.	carry_lookahaed_module
		port map(
				P_group 		=> P_group,
				G_group 		=> G_group,
				C_out 		=>	C_out_group,
				c_in 			=> c_in
			);				

			c_out <= C_out_group(4);
			
end Behavioral;

