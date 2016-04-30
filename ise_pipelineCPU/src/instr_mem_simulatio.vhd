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
use STD.TEXTIO.ALL;
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity instr_memory_simulation is
	generic(
		-- name of file for initialization, formatted as lines of 32 ones or zeroes, each describing one word.
		filename     : in string  := "program.ram";
		-- size in words (32bit)
		size         : in integer := 256
	);

    Port ( 	address 	: in  STD_LOGIC_VECTOR (15 downto 0);	--more than 1024 !!! error output
				clk 		: in  STD_LOGIC;
				data_out	: out STD_LOGIC_VECTOR (31 downto 0));
end instr_memory_simulation;


architecture RTL of instr_memory_simulation is
	constant width : integer := 32;

	-- construct to have in_simulation and in_synthesis for generates in this module
	constant in_simulation : boolean := false
	-- synthesis translate_off
	or true
	-- synthesis translate_on
	;
	constant in_synthesis : boolean := not in_simulation;

	-- type for the memory signal
	type memory_type is array (0 to size - 1) of std_logic_vector(width - 1 downto 0);

	-- this function initializes an array of memory_type with the contents of a given file
	-- function from http://myfpgablog.blogspot.de/2011/12/memory-initialization-methods.html
	--      and from http://www.stefanvhdl.com/vhdl/html/file_read.html
	--      and from http://www.ee.sunysb.edu/~jochoa/vhd_writefile_tutorial.htm

	impure function init_mem(mif_file_name : in string) return memory_type is
		-- input file
		file mif_file : text open read_mode is mif_file_name;
		-- input file read line
		variable mif_line : line;

		-- temporary bit vector for data read from file
		variable temp_bv  : bit_vector(width - 1 downto 0);
		-- temporary memory array
		variable temp_mem : memory_type;
		-- read function success value
		variable good     : boolean;
	begin
		for i in memory_type'range loop
			if not endfile(mif_file) then
				-- if no end of input file, read next line
				readline(mif_file, mif_line);
				-- match line into bit vector
				read(mif_line, temp_bv, good);

				-- synthesis translate_off
				assert good report ("Non-good word in memory location " & integer'image(i)) severity warning; --! give a warning when readline is no good -TF 2014-05-20
				-- synthesis translate_on

				-- copy temporary bit vector into temporary memory array
				temp_mem(i) := to_stdlogicvector(temp_bv);
			else
				-- EOF but memory not yet full, fill up with zeros
				temp_mem(i) := (others => '0');
			end if;
		end loop;

		-- check if program fit into memory
		if not endfile(mif_file) then
			assert false report "memory not large enough for loaded program." severity failure;
		end if;

		-- give back filled array
		return temp_mem;
	end function;
-------------------------------------------------------------------
type instr_mem is array (0 to size-1) of std_logic_vector(width-1 downto 0); --256 registers, each 32 bit wide
signal mem_cell : instr_mem:= init_mem(filename); 

begin
memory_process: process (clk)
begin
	if falling_edge (clk) then
		data_out <= mem_cell(to_integer(unsigned(address)));	
	end if;
end process memory_process;
------------------------------------------------------------------------
end RTL;
