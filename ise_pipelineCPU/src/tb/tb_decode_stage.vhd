--------------------------------------------------------------------------------
--	TU Kaiserslautern	
-- Students Trung C. Nguyen and Waseem Hassan
--
-- Create Date:   11:15:56 04/11/2016
-- Design Name:   
-- Module Name:   /home/ctnguyen/Works/CPU-2016/ise_pipelineCPU/src/tb/tb_decode_stage.vhd
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
USE ieee.numeric_std.ALL;
 
ENTITY tb_decode_stage IS
END tb_decode_stage;
 
ARCHITECTURE behavior OF tb_decode_stage IS 
 
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
          IF_ID 				=> IF_ID,
          write_register 	=> write_register,
          write_data 		=> write_data,
          RegWrite 			=> RegWrite,
          clk 					=> clk,
          rst 					=> rst,
          dec_exe 			=> dec_exe
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

      wait;
   end process;

END;
