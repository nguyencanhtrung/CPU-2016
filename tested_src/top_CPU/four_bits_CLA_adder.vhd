----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    02:37:43 03/30/2016 
-- Design Name: 	 
-- Module Name:    four_bits_CLA_adder - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: Using Carry Look Ahead Adder
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

entity four_bits_CLA_adder is
    Port ( a 			: in  	STD_LOGIC_VECTOR (3 downto 0);
           b 			: in  	STD_LOGIC_VECTOR (3 downto 0);
           c_in 		: in  	STD_LOGIC;
           p_group 	: out  	STD_LOGIC;
           g_group 	: out  	STD_LOGIC;
           sum 		: out  	STD_LOGIC_VECTOR (3 downto 0));
end four_bits_CLA_adder;

architecture Behavioral of four_bits_CLA_adder is
signal g, p : std_logic_vector(3 downto 0);    	-- generation and propagation
signal c: std_logic_vector(4 downto 1);			-- carry
begin
	-- ** internal 
	-- generation signals
	g(0) <= a(0) and b(0);
	g(1) <= a(1) and b(1);
	g(2) <= a(2) and b(2);
	g(3) <= a(3) and b(3);
	-- propagation signals
	p(0) <= a(0) xor b(0);
	p(1) <= a(1) xor b(1);
	p(2) <= a(2) xor b(2);
	p(3) <= a(3) xor b(3);
	-- carry signals
	c(1) <= g(0) or (c_in and p(0));
	c(2) <= g(1) or (c(1) and p(1));
	c(3) <= g(2) or (c(2) and p(2));
	--c(4) <= g(3) or (c(3) and p(3));
	-- ** outputs
	-- sum
	sum(0) <= p(0) xor c_in;
	sum(1) <= p(1) xor c(1);
	sum(2) <= p(2) xor c(2);
	sum(3) <= p(3) xor c(3);
	-- generation and propagation of block 4 bits
	g_group <= g(3) or (g(2) and p(3)) or (g(1) and p(2) and p(3)) or (g(0) and p(1) and p(2) and p(3));
	p_group <= p(0) and p(1) and p(2) and p(3);
	
end Behavioral;

