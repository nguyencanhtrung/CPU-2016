----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    04:47:18 04/09/2016 
-- Design Name: 
-- Module Name:    processor_core - Behavioral 
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

entity processor_core is
    Port ( addr_bus 		: in  STD_LOGIC_VECTOR (32 downto 0);
           data_bus 		: inout  STD_LOGIC_VECTOR (16 downto 0);
           instr_bus 	: in  STD_LOGIC_VECTOR (32 downto 0);
           clk 			: in  STD_LOGIC;
           rst 			: in  STD_LOGIC);
end processor_core;

architecture Behavioral of processor_core is

begin

fetch_process: process
	begin

	end process fetch_process;

decode_process: process
	begin

	end process decode_process;

execute_process: process
	begin

	end process execute_process;

memory_access_process: process
	begin

	end process memory_access_process;

writeback_process: process
	begin

	end process writeback_process;



end Behavioral;

