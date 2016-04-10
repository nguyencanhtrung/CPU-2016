----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    23:28:12 04/10/2016 
-- Design Name: 
-- Module Name:    decode_stage - Behavioral 
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
use wrok.ALL;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity decode_stage is
    Port ( instruction 		: in  STD_LOGIC_VECTOR (31 downto 0);
           write_register 	: in  STD_LOGIC_VECTOR (4 downto 0);
           write_data 		: in  STD_LOGIC_VECTOR (15 downto 0);
           RegWrite 			: in  STD_LOGIC;
           clk 				: in  STD_LOGIC;
           rst 				: in  STD_LOGIC;			  
           dec_exe 			: out  STD_LOGIC_VECTOR (43 downto 0));
end decode_stage;

architecture Behavioral of decode_stage is

begin
-------------instantiion-------------
--regsiter_file
regFile: entity work.register_file 
	port map (
			data_in 		=> write_data,			--data to be written
         read_reg_a 	=> read_register_1,	--reg no. 1 to be read
         read_reg_b 	=> read_register_2,	--reg no. 2 to be  read
         reg_write	=> write_register,	--reg no. to be written
         write_data 	=> Regwrite,			--write enable signal
         clk 			=>	clk,
         rst 			=> rst,
         data_out_a 	=>	read_data_1,		--read data 1
			data_out_b 	=>	read_data_2);		--read data 2
---------------------------------------
decode_process: process (clk)
	begin
		
	end process decode_process;

end Behavioral;

