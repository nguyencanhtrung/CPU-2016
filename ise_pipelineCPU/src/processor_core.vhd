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
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity processor_core is
	generic 	(filename : in string :="/home/waseemh/Xilinx_Proj/CPU-2016/Software/program.txt");
    Port (	addr_instr_bus : out  STD_LOGIC_VECTOR (10 downto 0);
				addr_data_bus	: out	 STD_LOGIC_VECTOR (10 downto 0);
				data_bus 		: inout  STD_LOGIC_VECTOR (15 downto 0);
				instr_bus 		: in  STD_LOGIC_VECTOR (31 downto 0);
				clk 				: in  STD_LOGIC;
				rst 				: in  STD_LOGIC);
end processor_core;

architecture Behavioral of processor_core is

constant pc_constant	:	std_logic_vector:=x"0001";
-----------------piepline_registers--------------

signal IF_ID	:	std_logic_vector (47 downto 0);
signal ID_EXE	:	std_logic_vector (85 downto 0);
signal EXE_MEM	:	std_logic_vector (58 downto 0);
signal MEM_WB	:	std_logic_vector (38 downto 0);
						--details
--1)IF_ID
--0 to 31 		=> instruction
--32 to 47		=> pc_next

--2)ID_EXE
--	0 to 4 	=> instr(11-15)/rd as reg_write
--	5 to 9 	=> instrc(16-20)/rt as reg_write
--	10 to 25 => immediate field
--	26 to 41 => operand_b
--	42 to 57 => operand_a
--	58 to 73 => pc_next
--	74 to 78 => ALU_opcode 	i.e. EXE stage signal
--		79 	=> ALUsrc	i.e. EXE stage signal
--		80		=> RegDst	i.e. EXE stage signal	
--		81		=> MemRead	i.e. MEM stage signal	
--		82		=> MemWrite	i.e. MEM stage signal	
--		83		=> Branch	i.e. MEM stage signal
--		84		=> RegWrite	i.e. WB stage signal		
--		85		=> Mem2Reg	i.e. WB stage signal		

--3)EXE_MEM
--0 to 4 		=>	reg no. to be written i.e. rt/rd 
--5 to 20		=>	data to be written in data mem i.e. sw opr
--21 to 36		=>	result of ALU
--	37				=> zero flag of ALU
--38 to 53		=> forwarded pc
--	54 			=> MemRead (EXE stage)
--	55				=>	MemWrite(EXE stage)
--	56				=>	Branch	(EXE stage)
-- 57 			=>	RegWrite	(WB stage)
--	58 			=> Mem2Reg	(WB stage)

--4)MEM_WB
--0 to 4 		=>	reg no. to be written i.e. rt/rd
--5 to 20		=>	result of ALU
--21	to 36		=>	data mem content read
--	37 			=> RegWrite	(WB stage)
--	38				=>	Mem2Reg	(WB stage)
--------------------------------------------------

--signals for fetch stage portmap
signal pc_current			:	std_logic_vector (15 downto 0);
signal instruction		:	std_logic_vector (31 downto 0);
signal pc_next				:	std_logic_vector (15 downto 0);	--send in IF_ID reg
signal ovf_pc_dummy		:	std_logic;
signal cin_pc_dummy		:	std_logic;
signal cout_pc_dummy		:	std_logic;
--signals for decode stage portmap
signal wb_output			: std_logic_vector(15 downto 0);
--signals for exe stage portmap
signal branch_addr		: std_logic_vector (15 downto 0); 
signal ovf_exe_dummy		: std_logic;
signal cin_exe_dummy		: std_logic;
signal cout_exe_dummy	: std_logic;
signal RegDst				: std_logic;	--RegDst MUX singal
signal ALU_rslt			: std_logic_vector (15 downto 0);	--ALU output signal
signal ALU_oprndB			: std_logic_vector (15 downto 0);
signal ALU_oprndA			: std_logic_vector (15 downto 0);
signal ALU_opcode			: std_logic_vector (5 downto 0);
signal ALU_zero			: std_logic;
signal ALU_lessthan		: std_logic;
signal ALU_ovf				: std_logic;
signal ALUSrc				: std_logic;
signal reg_write_dest	: std_logic_vector (4 downto 0);
--signals for mem stage portmap
signal PCSrc				: std_logic;
signal DM_addr				:	std_logic_vector (15 downto 0);
signal DM_write_data 	:	std_logic_vector (15 downto 0);
signal DM_readCtrl		:	std_logic;
signal DM_writeCtrl		:	std_logic;
signal DM_read_data		:	std_logic_vector (15 downto 0);
--signals for writeback stage portmap
signal Mem2Reg				: std_logic;

begin
------------------portmaps------------------------
--instrt_memory

mem_instr: entity work.instr_memory_simulation 
	generic map(
				filename	=> filename,
				size		=> 256)
	port map (
				address 	=> pc_current,
				clk 		=> clk,
				data_out	=> instruction);
---------------------------------------
--adder for pc in fetch stage
adder_pc: entity work.sixteen_bits_adder
	Port map ( 
			  operand_a => pc_current,
           operand_b => pc_constant,		--i.e. 1
           sum 		=> pc_next,
			  over_flow	=> ovf_pc_dummy,
           carry_in 	=> '0',
           carry_out => cout_pc_dummy);
----------------------------------------
--decoder
DECODER: entity work.decode_stage
	port map(
				IF_ID		 		=> IF_ID,
				write_register =>	MEM_WB(4 downto 0),		--reg no. to be written
				write_data 		=>	wb_output,					--data to be written
				RegWrite 		=>	MEM_WB(37),					--write enable control signal
				clk 				=> clk,
				rst 				=>	rst,		  
				dec_exe 			=> ID_EXE);
----------------------------------------
--ALU
ALU: entity work.ALU_module 
	port map (
				operand_a	=>	ALU_oprndA,		--we can put pipeline registers direcctyl....
				operand_b	=> ALU_oprndB,
				result		=> ALU_rslt,
				opcode 		=>	ALU_opcode,
				zero 			=>	ALU_zero,
				lessthan 	=>	ALU_lessthan,
				ovf			=>	ALU_ovf);
---------------------------------------
--adder for pc/branch in EXE stage
adder_exe: entity work.sixteen_bits_adder
	Port map ( 
			  operand_a => ID_EXE(73 downto 58),
           operand_b => ID_EXE(25 downto 10),		
           sum 		=> branch_addr,	-- to be put in EXE_MEM(53 downto 38)
			  over_flow	=> ovf_exe_dummy,
           carry_in 	=> cin_exe_dummy,
           carry_out => cout_exe_dummy);
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
---------------concurrent parts and MUXes---------
--fetch stage
--pc_current 		<= pc_next 					when PCSrc='0' else
--						EXE_MEM(53 downto 38);
---------------------------------------
--exe stage
ALUSrc			<=	ID_EXE(79);
ALU_oprndA		<=	ID_EXE(57 downto 42);
ALU_opcode		<=	'0' & ID_EXE(78 downto 74);
RegDst			<= ID_EXE(80);
ALU_oprndB 		<= ID_EXE(25 downto 10)		when ALUSrc='1' else	--immediate field
						ID_EXE(41 downto 26);	--rt register value						
reg_write_dest	<=	EXE_MEM(4 downto 0) when RegDst='1' else
						EXE_MEM(9 downto 5);			--Reg
---------------------------------------
--mem stage
PCSrc				<= EXE_MEM(37) and EXE_MEM(56);	--Branch AND gate
DM_addr			<=	EXE_MEM (36 downto 21);
DM_write_data 	<=	EXE_MEM (20 downto 5);
DM_readCtrl		<=	EXE_MEM (54);
DM_writeCtrl	<=	EXE_MEM (55);
---------------------------------------
--wb stage
Mem2Reg			<= MEM_WB(38);
wb_output		<= MEM_WB (20 downto 5) when Mem2Reg='1' else
						MEM_WB (36 downto 21);
--------------------------------------------------
fetch_process: process(clk,rst)
	begin
		if rst='1' then
			IF_ID			<= (others => '0');
			pc_current	<=x"0000";
		else
			if rising_edge (clk) then
				if PCSrc ='1' then
					pc_current 			<=	EXE_MEM(53 downto 38);
				else 
					pc_current 			<=	pc_next;--std_logic_vector(to_unsigned(to_integer(unsigned(pc_current))+ 1, 16));
				end if;	
				IF_ID(31 downto 0) 	<=	instruction;
				IF_ID(47 downto 32) 	<=	pc_next;
			end if;
		end if;
	end process fetch_process;

execute_process: process (clk,rst)
	begin
		if rst='1' then
			EXE_MEM 						<= (others => '0');
		else
			if rising_edge (clk) then
				EXE_MEM(4 downto 0) 	<=	reg_write_dest;		--write reg no.
				EXE_MEM(20 downto 5) <=	ID_EXE(41 downto 26);--sw operation data to be written
				EXE_MEM(36 downto 21)<=	ALU_rslt;				
				EXE_MEM(37) 			<=	ALU_zero;
				EXE_MEM(53 downto 38)<=	ID_EXE(73 downto 58);	--forwarded pc
				EXE_MEM(54) 			<=	ID_EXE(81);	--MemRead
				EXE_MEM(55) 			<=	ID_EXE(82);	--MemWrite
				EXE_MEM(56)				<=	ID_EXE(83);	--Branch
				EXE_MEM(57)				<=	ID_EXE(84);	--RegWrite
				EXE_MEM(58)				<=	ID_EXE(85);	--Mem2Reg
			end if;
		end if;
	end process execute_process;

memory_access_process: process(clk,rst)
	begin
		if rst <='1' then
			MEM_WB						<= (others => '0');
		else
			if rising_edge (clk) then
				MEM_WB(4 downto 0) 	<=	EXE_MEM(4 downto 0);	--write reg no.
				MEM_WB(20 downto 5)	<=	EXE_MEM(36 downto 21);	--ALU result
				MEM_WB(36 downto 21)	<=	DM_read_data;		--read data for lw instrc.
				MEM_WB(37)				<=	EXE_MEM(57);	--RegWrite
				MEM_WB(38)				<=	EXE_MEM(58);	--Mem2Reg
			end if;
		end if;
	end process memory_access_process;
end Behavioral;

