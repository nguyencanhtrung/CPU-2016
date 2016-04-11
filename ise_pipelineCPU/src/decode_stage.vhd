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
use work.ALL;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity decode_stage is
    Port ( IF_ID		 		: in  STD_LOGIC_VECTOR (47 downto 0);
           write_register 	: in  STD_LOGIC_VECTOR (4 downto 0);
           write_data 		: in  STD_LOGIC_VECTOR (15 downto 0);
           RegWrite 			: in  STD_LOGIC;
           clk 				: in  STD_LOGIC;
           rst 				: in  STD_LOGIC;			  
           dec_exe 			: out  STD_LOGIC_VECTOR (85 downto 0));
end decode_stage;

architecture Behavioral of decode_stage is
--------instruction and their opcodes---------------
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
--------------------------------------------------------

---details of dec_exe register------------------
--	0 to 4 	=> instr(11-15)/rd as reg_write
--	5 to 9 	=> instrc(16-20)/rt as reg_write
--	10 to 25 => immediate field
--	26 to 41 => operand_b
--	42 to 57 => operand_a
--	58 to 73 => PC
--	74 to 78 => ALU MUX 	i.e. EXE stage signal
--		79 	=> ALUsrc	i.e. EXE stage signal
--		80		=> RegDst	i.e. EXE stage signal	
--		81		=> ReadMem	i.e. MEM stage signal
--		82		=> WriteMem	i.e. MEM stage signal
--		83		=> Branch	i.e. MEM stage signal
--		84		=> RegWrite	i.e. WB stage signal
--		85		=> Mem2Reg	i.e. WB stage signal

-------------------------------------------------
------signals----------------
signal read_register_1 	: std_logic_vector(4 downto 0);
signal read_register_2 	: std_logic_vector(4 downto 0);
signal read_data_1 		: std_logic_vector(15 downto 0);
signal read_data_2 		: std_logic_vector(15 downto 0);
signal ALUsrc		 		: std_logic;
signal RegDst				:std_logic;
signal ReadMem				:std_logic;
signal WriteMem			:std_logic;
signal Branch				:std_logic;
signal Reg_Write			:std_logic;
signal Mem2Reg				:std_logic;


-----------------------------
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

----------concurrent part--------------
read_register_1 	<=	IF_ID(25 downto 21);
read_register_2 	<=	IF_ID(20 downto 16);
ALUsrc					<= '1' when IF_ID (30 downto 26)=addi_op else	
								'1' when	IF_ID (30 downto 26)=lw_op else		
								'1' when	IF_ID (30 downto 26)=sw_op else
								'1' when	IF_ID (30 downto 26)=beq_op else
								'1' when	IF_ID (30 downto 26)=bne_op else
								'1' when	IF_ID (30 downto 26)=slti_op
								else '0';
RegDst					<= '1' when IF_ID (30 downto 26)=addi_op	
								or	IF_ID (30 downto 26)=lw_op		
								or	IF_ID (30 downto 26)=sw_op
								or	IF_ID (30 downto 26)=beq_op
								or	IF_ID (30 downto 26)=bne_op
								or	IF_ID (30 downto 26)=slti_op
								else '0';
ReadMem					<= '1' when IF_ID (30 downto 26)=lw_op	
									else '0';
WriteMem					<= '1' when IF_ID (30 downto 26)=sw_op	
								else '0';
Branch					<= '1' when IF_ID (30 downto 26)=beq_op
								or	IF_ID (30 downto 26)=bne_op
								else '0';
Reg_Write					<= '0' when IF_ID (30 downto 26)=sw_op
											or IF_ID (30 downto 26)=beq_op
											or	IF_ID (30 downto 26)=bne_op
									else '1';

Mem2Reg					<= '1' when IF_ID (30 downto 26)=lw_op	
									else '0';
------------------------------------------
update_dec_exe_process: process (clk)
	begin
		if rising_edge(clk)	then	--write pipeline register
					--fixed signals; do NOT changes with instruction type
				dec_exe(4 downto 0) 		<=	IF_ID (15 downto 11);
				dec_exe(9 downto 5) 		<=	IF_ID (20 downto 16);
				dec_exe(25 downto 10) 	<=	IF_ID (15 downto 0);	
				dec_exe(41 downto 26) 	<=	read_data_2;	
				dec_exe(57 downto 42) 	<=	read_data_1;
				dec_exe(73 downto 58) 	<=	IF_ID (47 downto 32);	
					--signals changing wiht instruction
				dec_exe(78 downto 74)	<= IF_ID (30 downto 26);		--i.e. opcode field without MSB	
					--ALUsrc Signal MUX 
				dec_exe(79)					<= ALUsrc;
						--RegDst Signal MUX						
				dec_exe(80)					<=RegDst;
													
				dec_exe(81)					<= ReadMem;
				
				dec_exe(82)					<= WriteMem;
				
				dec_exe(83)					<= Branch;
				
				dec_exe(84)					<= Reg_Write;
				
				dec_exe(85)					<= Mem2Reg;
													
				
			end if;
	end process update_dec_exe_process;

end Behavioral;

