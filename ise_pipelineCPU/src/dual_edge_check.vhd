----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    22:10:47 04/10/2016 
-- Design Name: 
-- Module Name:    dual_edge_check - Behavioral 
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

entity dual_edge_check is
    Port ( clk 		: in  STD_LOGIC;
           rst 		: in  STD_LOGIC;
			  read_en	: inout STD_LOGIC;
			  write_en	: in STD_LOGIC;
           data_in 	: in  STD_LOGIC_VECTOR (7 downto 0);
           addr 		: inout  STD_LOGIC_VECTOR (7 downto 0);
           data_out 	: inout  STD_LOGIC_VECTOR (7 downto 0));
end dual_edge_check;

architecture Behavioral of dual_edge_check is

--type memory is array(255 downto 0) of std_logic_vector( 7 downto 0);
--signal cell	: memory;
signal IF_DEC : std_logic_vector(15 downto 0);

begin
-----memory simulation process------
memory_sim: process(clk,rst)
variable data_value_dummy :	integer:=1;
	begin
		if falling_edge(clk) then
			if clk='0' then
				if rst ='1' then
					data_out 		<= x"00";
				else
					if read_en ='1' then
						data_out 	<= std_logic_vector(to_unsigned(data_value_dummy,8));	
					end if;
					--if write_en ='1' then
						--cell(to_integer(unsigned(addr)))	<= data_in;	
					--end if;
					data_value_dummy := data_value_dummy+1;
				end if;
			end if;
		end if;
	end process memory_sim;
------------------------------------
-------dual edge process------------
dual_edge: process(clk)
variable  	data	: std_logic_vector(7 downto 0);
--variable 	addr	: std_logic_vector(7 downto 0);
variable addr_int	: integer :=0;
	begin
		if falling_edge(clk) then
			if clk='0' then	
				read_en 		<='1';
				data 			:= data_out;
				addr_int 	:= addr_int +1;
				addr 			<= std_logic_vector(to_unsigned(addr_int,8));
				--read_en		<='0';
			end if;
		end if;
		if rising_edge(clk) then
			if clk='1' then
				IF_DEC <= x"0a" & data;	
			end if;
		end if;
	end process dual_edge;
------------------------------------
end Behavioral;

