--------------------------------------------------------------------------------
<<<<<<< HEAD
--	TU Kaiserslautern	
-- Students Trung C. Nguyen and Waseem Hassan
--
-- Create Date:   11:15:56 04/11/2016
-- Design Name:   
-- Module Name:   /home/ctnguyen/Works/CPU-2016/ise_pipelineCPU/src/tb/tb_decode_stage.vhd
=======
-- Company: 
-- Engineer:
--
-- Create Date:   23:27:30 04/11/2016
-- Design Name:   
-- Module Name:   /home/waseemh/Xilinx_Proj/CPU-2016/ise_pipelineCPU/src/tb/tb_decode_stage.vhd
>>>>>>> 1c058c99adf7987cf3bd05504fe0c35e39fc914c
-- Project Name:  ise_pipelineCPU
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: decode_stage
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
<<<<<<< HEAD
=======
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
>>>>>>> 1c058c99adf7987cf3bd05504fe0c35e39fc914c
USE ieee.numeric_std.ALL;
 
ENTITY tb_decode_stage IS
END tb_decode_stage;
 
ARCHITECTURE behavior OF tb_decode_stage IS 
<<<<<<< HEAD
 
=======
 --------instruction and their opcodes---------------
constant	add_op 		: std_logic_vector(5 downto 0):="000000";
constant	addi_op 		: std_logic_vector(5 downto 0):="000001";
constant	sub_op 		: std_logic_vector(5 downto 0):="000010";
constant	nor_op		: std_logic_vector(5 downto 0):="000011";
constant	or_op			: std_logic_vector(5 downto 0):="000100";
constant	xor_op		: std_logic_vector(5 downto 0):="000101";
constant	and_op		: std_logic_vector(5 downto 0):="000110";
constant	sll_op	 	: std_logic_vector(5 downto 0):="000111";
constant	srl_op		: std_logic_vector(5 downto 0):="001000";
constant	sw_op 		: std_logic_vector(5 downto 0):="001001";
constant	lw_op		 	: std_logic_vector(5 downto 0):="001010";
constant	beq_op 		: std_logic_vector(5 downto 0):="001011";
constant	bne_op 		: std_logic_vector(5 downto 0):="001100";
constant	slt_op 		: std_logic_vector(5 downto 0):="001101";
constant	slti_op 		: std_logic_vector(5 downto 0):="001110";
constant	jmp_op 		: std_logic_vector(5 downto 0):="001111";
constant	one 			: std_logic:='1';
constant	zero 			: std_logic:='0';
--------------------------------------------------------
>>>>>>> 1c058c99adf7987cf3bd05504fe0c35e39fc914c
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT decode_stage
    PORT(
         IF_ID : IN  std_logic_vector(47 downto 0);
         write_register : IN  std_logic_vector(4 downto 0);
         write_data : IN  std_logic_vector(15 downto 0);
         RegWrite : IN  std_logic;
         clk : IN  std_logic;
         rst : IN  std_logic;
         dec_exe : OUT  std_logic_vector(85 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal IF_ID : std_logic_vector(47 downto 0) := (others => '0');
   signal write_register : std_logic_vector(4 downto 0) := (others => '0');
   signal write_data : std_logic_vector(15 downto 0) := (others => '0');
   signal RegWrite : std_logic := '0';
   signal clk : std_logic := '0';
   signal rst : std_logic := '0';

 	--Outputs
   signal dec_exe : std_logic_vector(85 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: decode_stage PORT MAP (
<<<<<<< HEAD
          IF_ID 				=> IF_ID,
          write_register 	=> write_register,
          write_data 		=> write_data,
          RegWrite 			=> RegWrite,
          clk 					=> clk,
          rst 					=> rst,
          dec_exe 			=> dec_exe
=======
          IF_ID => IF_ID,
          write_register => write_register,
          write_data => write_data,
          RegWrite => RegWrite,
          clk => clk,
          rst => rst,
          dec_exe => dec_exe
>>>>>>> 1c058c99adf7987cf3bd05504fe0c35e39fc914c
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
<<<<<<< HEAD
	variable counter	:	integer := 0;
   begin		
		rst 	<= '1';
      -- hold reset state for 100 ns.
      wait for 100 ns;	
		rst 	<= '0';
      wait for clk_period*10;
			-- Filling the register file
		report "Filling the RegFile";
		while (counter < 32) loop
			
		end loop;
      -- insert stimulus here 
=======
   begin		
		rst						<='1';
      -- hold reset state for 100 ns.
      wait for 100 ns;	
		rst					<='0';
      wait for clk_period*10;
		
	
		for  var in 1 to 32 loop
			RegWrite				<= '1';
			write_register 	<= std_logic_vector(to_unsigned(var,5));
			write_data 			<= std_logic_vector(to_unsigned(var,16));
			wait for clk_period;	
			RegWrite 			<='0';
			wait for clk_period;	
			
		end loop;
		
      wait for clk_period*5;
		IF_ID(47 downto 32)	<= x"fff0";		--fix PC
      wait for clk_period;		
		IF_ID(31 downto 0)	<=	lw_op & "00000" & "00001" & x"0a0a";	--lw
		wait for clk_period;
		IF_ID(31 downto 0)	<=	sw_op & "00010" & "00011" & x"0b0b";	--sw
		wait for clk_period;
		IF_ID(31 downto 0)	<=	add_op & "00100" & "00101" & "00110" & "00000000000";	--add
		wait for clk_period;
		IF_ID(31 downto 0)	<=	addi_op & "00111" & "01000" & x"0c0c";	--addi
		wait for clk_period;
		IF_ID(31 downto 0)	<=	xor_op & "01001" & "01010" & "01011" & "00000000000";	--xor
		wait for clk_period;	
		IF_ID(31 downto 0)	<=	sll_op & "01100" & "01101" & "01110" & "00110000000";	--sll
		wait for clk_period;
		IF_ID(31 downto 0)	<=	beq_op & "01111" & "10000" & x"0d0d";	--beq
		wait for clk_period;
		IF_ID(31 downto 0)	<=	slt_op & "11100" & "11101" & "11110" & "00000000000";	--slt
		wait for clk_period*5;

>>>>>>> 1c058c99adf7987cf3bd05504fe0c35e39fc914c

      wait;
   end process;

END;
