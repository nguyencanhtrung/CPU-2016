--
--	Package File Template
--
--	Purpose: This package defines supplemental types, subtypes, 
--		 constants, and functions 
--
--   To use any of the example code shown below, uncomment the lines and modify as necessary
--

library IEEE;
use IEEE.STD_LOGIC_1164.all;

package cpu_package is

-- type <new_type> is
--  record
--    <type_name>        : std_logic_vector( 7 downto 0);
--    <type_name>        : std_logic;
-- end record;
--
-- Declare constants
--
		--instruction and their opcodes
constant	add_op 		: std_logic_vector(4 downto 0):="00000";
constant	addi_op 		: std_logic_vector(4 downto 0):="00001";
constant	sub_op 		: std_logic_vector(4 downto 0):="00010";
constant	nor_op		: std_logic_vector(4 downto 0):="00011";
constant	or_op			: std_logic_vector(4 downto 0):="00100";
constant	xor_op		: std_logic_vector(4 downto 0):="00101";
constant	and_op		: std_logic_vector(4 downto 0):="00110";
constant	sll_op	 	: std_logic_vector(4 downto 0):="00111";
constant	srl_op		: std_logic_vector(4 downto 0):="01000";
constant	sw_op 		: std_logic_vector(4 downto 0):="01001";
constant	lw_op		 	: std_logic_vector(4 downto 0):="01010";
constant	beq_op 		: std_logic_vector(4 downto 0):="01011";
constant	bne_op 		: std_logic_vector(4 downto 0):="01100";
constant	slt_op 		: std_logic_vector(4 downto 0):="01101";
constant	slti_op 		: std_logic_vector(4 downto 0):="01110";
constant	jmp_op 		: std_logic_vector(4 downto 0):="01111";
constant	one 			: std_logic:='1';
constant	zero 			: std_logic:='0';
		--CPU data and instruction width
constant data_path_width 	:	natural:= 16;
constant instr_size 			:	natural:= 32;		
constant pc_width 			:	natural:= 16;
constant opcode_width		: 	natural:=6;
		--memory sizes and register file sizes
constant instr_mem_size   	: 	natural:= 1024;
constant	data_mem_size		:	natural:= 1024;
constant reg_file_size		: 	natural:=32; 
--
-- Declare functions and procedure
--
-- function <function_name>  (signal <signal_name> : in <type_declaration>) return <type_declaration>;
-- procedure <procedure_name> (<type_declaration> <constant_name>	: in <type_declaration>);
--

end cpu_package;

package body cpu_package is

---- Example 1
--  function <function_name>  (signal <signal_name> : in <type_declaration>  ) return <type_declaration> is
--    variable <variable_name>     : <type_declaration>;
--  begin
--    <variable_name> := <signal_name> xor <signal_name>;
--    return <variable_name>; 
--  end <function_name>;

---- Example 2
--  function <function_name>  (signal <signal_name> : in <type_declaration>;
--                         signal <signal_name>   : in <type_declaration>  ) return <type_declaration> is
--  begin
--    if (<signal_name> = '1') then
--      return <signal_name>;
--    else
--      return 'Z';
--    end if;
--  end <function_name>;

---- Procedure Example
--  procedure <procedure_name>  (<type_declaration> <constant_name>  : in <type_declaration>) is
--    
--  begin
--    
--  end <procedure_name>;
 
end cpu_package;
