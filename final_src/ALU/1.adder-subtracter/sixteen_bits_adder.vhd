----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    03:58:33 03/30/2016 
-- Design Name: 
-- Module Name:    sixteen_bits_adder - Behavioral 
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
use work.all;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity sixteen_bits_adder is
    Port ( operand_a : in  STD_LOGIC_VECTOR (15 downto 0);
           operand_b : in  STD_LOGIC_VECTOR (15 downto 0);
           sum 		: inout STD_LOGIC_VECTOR (15 downto 0);
			  over_flow	: out STD_LOGIC;
           carry_in 	: in  STD_LOGIC;
           carry_out : out STD_LOGIC);
end sixteen_bits_adder;

architecture Behavioral of sixteen_bits_adder is
signal p_group, g_group	: std_logic_vector(3 downto 0);
signal c_group				: std_logic_vector(4 downto 1);
begin
	first_4bits: entity work.four_bits_CLA_adder
    Port map ( a 			=> operand_a(3 downto 0),	
					b 			=> operand_b(3 downto 0),
					c_in 		=> carry_in,
					p_group 	=> p_group(0),
					g_group 	=> g_group(0),
					sum 		=> sum(3 downto 0));
	second_4bits: entity work.four_bits_CLA_adder
    Port map ( a 			=> operand_a(7 downto 4),	
					b 			=> operand_b(7 downto 4),
					c_in 		=> c_group(1),
					p_group 	=> p_group(1),
					g_group 	=> g_group(1),
					sum 		=> sum(7 downto 4));
	third_4bits: entity work.four_bits_CLA_adder
    Port map ( a 			=> operand_a(11 downto 8),	
					b 			=> operand_b(11 downto 8),
					c_in 		=> c_group(2),
					p_group 	=> p_group(2),
					g_group 	=> g_group(2),
					sum 		=> sum(11 downto 8));
	fourth_4bits: entity work.four_bits_CLA_adder
    Port map ( a 			=> operand_a(15 downto 12),	
					b 			=> operand_b(15 downto 12),
					c_in 		=> c_group(3),
					p_group 	=> p_group(3),
					g_group 	=> g_group(3),
					sum 		=> sum(15 downto 12));
	CLA_block: entity work.carry_look_ahead_block
	Port map ( 	c_in 		=> carry_in,
					p_group 	=> p_group,
					g_group 	=> g_group,
					C_OUT 	=> c_group);
	-- carry out of 16-bit adder
	carry_out <= c_group(4);
	over_flow <= (not(operand_a(15)) and not(operand_b(15)) and sum(15)) 
					or (operand_a(15) and operand_b(15) and not(sum(15)));
end Behavioral;

