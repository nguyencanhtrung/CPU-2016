----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    22:34:29 03/29/2016 
-- Design Name: 
-- Module Name:    full_adder - Behavioral 
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

entity four_bit_adder is
    Port (	a 					: in  STD_LOGIC_VECTOR (3 downto 0);
				b 					: in  STD_LOGIC_VECTOR (3 downto 0);
				c_in 				: in  STD_LOGIC;
					--outputs
				s_out 			: out STD_LOGIC_VECTOR (3 downto 0);
				p_group_out		: out STD_LOGIC;
				g_group_out		: out STD_LOGIC	
			);				
end four_bit_adder;

architecture Behavioral of four_bit_adder is
	--internal signals prop and generate
signal g0 : std_logic;
signal g1 : std_logic;
signal g2 : std_logic;
signal g3 : std_logic;
signal p0 : std_logic;
signal p1 : std_logic;
signal p2 : std_logic;
signal p3 : std_logic;

	--internal siganls carry
signal c1 : std_logic;
signal c2 : std_logic;
signal c3 : std_logic;
--signal c4 std_logic;

begin
		--generate signals
	g0 <= a(0) and b (0);
	g1 <= a(1) and b (1);
	g2 <= a(2) and b (2);
	g3 <= a(3) and b (3);
		--propagte signals
	p0 <= a(0) xor b (0);
	p1 <= a(1) xor b (1);
	p2 <= a(2) xor b (2);
	p3 <= a(3) xor b (3);

		--internal carry signals

	c1 <= g0 or (p0 and c_in );
	c2 <= g1 or (g0 and p1) or (p0 and p1 and c_in);
	c3 <= g2 or (g1 and p2) or (g0 and p1 and p2) or (p0 and p1 and p2 and c_in);

		--group signals

	p_group_out <= p0 and p1 and p2 and p3;
	g_group_out <= g3 or (g2 and p3) or (g1 and p2 and p3) or (g0 and p1 and p2 and p3);
	
--	c4 <= g_out or (p_out and c0);
	
		--sum signals
		
	s_out(0) <= p0 xor c_in;
	s_out(1) <= p1 xor c1;
	s_out(2) <= p2 xor c2;
	s_out(3) <= p3 xor c3;
	
end Behavioral;

