----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    00:50:09 03/30/2016 
-- Design Name: 
-- Module Name:    add_sub_module - Behavioral 
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

entity add_sub_module is
    Port ( operand_a 		: in  STD_LOGIC_VECTOR (15 downto 0);
           operand_b 		: in  STD_LOGIC_VECTOR (15 downto 0);
           result 			: out  STD_LOGIC_VECTOR (15 downto 0);
           carry_out 		: out  STD_LOGIC;
			  operation			: in	STD_LOGIC);
end add_sub_module;

architecture Behavioral of add_sub_module is

signal b_feed		: std_logic_vector(15 downto 0); 
signal carry_in	:	std_logic;
begin

	b_feed 			<= not(operand_b) when operation='1' else operand_b;
	carry_in 		<= operation;
	
	adder : entity work.sixteen_bit_adder
		port map(
					a 		=> operand_a,
					b 		=> b_feed,
					sum	=>	result,
					c_in 	=> carry_in,
					c_out =>	carry_out
			);	

end Behavioral;

