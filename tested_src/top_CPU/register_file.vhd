----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    00:13:20 04/08/2016 
-- Design Name: 
-- Module Name:    register_file - Behavioral 
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
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity register_file is
    Port ( data_in 		: in  STD_LOGIC_VECTOR (15 downto 0);
           read_reg_a 	: in  STD_LOGIC_VECTOR (4 downto 0);
           read_reg_b 	: in  STD_LOGIC_VECTOR (4 downto 0);
           reg_write		: in  STD_LOGIC_VECTOR (4 downto 0);
           write_data 	: in  STD_LOGIC;
           clk 			: in  STD_LOGIC;
           rst 			: in  STD_LOGIC;
           data_out_a 	: out  STD_LOGIC_VECTOR (15 downto 0);
			  data_out_b 	: out  STD_LOGIC_VECTOR (15 downto 0));
end register_file;

architecture Behavioral of register_file is
type data_reg is array (0 to 31) of std_logic_vector(15 downto 0); --32 registers, each 16 bit wide
signal regFile : data_reg;
begin
read_a_process: process (clk, rst)
begin
	if falling_edge (clk) then
		if clk ='1' then
			if rst ='1' then
				data_out_a <= (others=>'0');		--make output of this process '0'
			else
					data_out_a 										<= regFile(to_integer(unsigned(read_reg_a)));
			end if;
		end if;
	end if;
end process read_a_process;

read_b_process: process (clk, rst)
begin
	if falling_edge (clk) then
		if clk ='1' then
			if rst ='1' then
				data_out_b <= (others=>'0');		--make output of this process '0'
			else
					data_out_b 										<= regFile(to_integer(unsigned(read_reg_b)));
			end if;
		end if;
	end if;
end process read_b_process;

write_reg_process: process (clk, rst)
begin
	if falling_edge (clk) then
		if clk ='1' then
			if rst ='1' then
				regFile <= (others => (others=>'0'));		--synch reset
			else
				if write_data ='1' then
					regFile(to_integer(unsigned(reg_write))) <= data_in;
				end if;
			end if;
		end if;
	end if;
end process write_reg_process;

end Behavioral;

