----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    01:18:00 04/10/2016 
-- Design Name: 
-- Module Name:    data_memory_simulation - Behavioral 
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

entity data_memory_simulation is
    Port ( address 	: in  STD_LOGIC_VECTOR (15 downto 0);
           data_in 	: in  STD_LOGIC_VECTOR (15 downto 0);
           mem_read 	: in  STD_LOGIC;
           mem_write : in  STD_LOGIC;
           clk 		: in  STD_LOGIC;
           data_out 	: out STD_LOGIC_VECTOR (15 downto 0));
end data_memory_simulation;

architecture Behavioral of data_memory_simulation is
type data_mem is array (0 to 1024) of std_logic_vector(15 downto 0); --1K registers, each 16 bit wide
signal mem_cell : data_mem;

begin
memory_process: process (clk)
begin
	if falling_edge (clk) then	--synch read write!
			if mem_read ='1' then
				data_out <= mem_cell(to_integer(unsigned(address)));	
			elsif mem_write ='1' then
				mem_cell(to_integer(unsigned(address))) <= data_in;
			else
				null;
			end if;
	end if;
end process memory_process;

end Behavioral;

