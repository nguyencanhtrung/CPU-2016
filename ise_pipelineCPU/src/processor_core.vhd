----------------------------------------------------------------------------------
-- TU Kaiserslautern
-- Students: Waseem Hassan and Trung C. Nguyen
-- 
-- Create Date:    04:47:18 04/09/2016 
-- Design Name: 	 top_processor
-- Module Name:    processor_core - Behavioral 
-- Project Name: 	 Pipeline CPU
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

entity processor_core is
    Port ( addr_bus 		: in  STD_LOGIC_VECTOR (32 downto 0);
           data_bus 		: inout  STD_LOGIC_VECTOR (16 downto 0);
           instr_bus 	: in  STD_LOGIC_VECTOR (32 downto 0);
           clk 			: in  STD_LOGIC;
           rst 			: in  STD_LOGIC);
end processor_core;

architecture Behavioral of processor_core is

-----------------piepline_registers--------------

signal IF_ID	:std_logic_vector (47 downto 0);
signal ID_EXE	:std_logic_vector (85 downto 0);
signal EXE_MEM	:std_logic_vector (43 downto 0);
signal MEM_WB	:std_logic_vector (43 downto 0);
--------------------------------------------------
begin
------------------portmaps------------------------
--ALU
ALU: entity work.ALU_module 
	port map (
				operand_a	=>	ALU_oprndA,		--we can put pipeline registers direcctyl....
				operand_b	=> ALU_oprndB,
				result		=> ALU_result,
				opcode 		=>	ALU_opcode,
				zero 			=>	ALU_zero,
				lessthan 	=>	ALU_lessthan,
				ovf			=>	ALU_ovf);
---------------------------------------
--instrt_memory

mem_instr: entity work.instr_memory_simulation 
	port map (
				address 	=> IM_addr,
				mem_read => IM_readCtrl,
				clk 		=> clk,
				data_out	=> IM_read_data);
---------------------------------------
--data_memory
mem_data: entity work.data_memory_simulation 
	port map (
				address 	=>	DM_addr,
				data_in 	=>	DM_write_data,
				mem_read =>	DM_readCtrl,
				mem_write=>	DM_writeCtrl,
				clk 		=>	clk,
				data_out =>	DM_read_data);
---------------------------------------
--------------------------------------------------
fetch_process: process(clk)
	begin
		--if 
	end process fetch_process;

decode_process: process (clk)
	begin

	end process decode_process;

execute_process: process (clk)
	begin

	end process execute_process;

memory_access_process: process(clk)
	begin

	end process memory_access_process;

writeback_process: process(clk)
	begin

	end process writeback_process;



end Behavioral;
