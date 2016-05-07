--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   23:57:01 04/30/2016
-- Design Name:   
-- Module Name:   /home/waseemh/Xilinx_Proj/CPU-2016/ise_pipelineCPU/tb_cpu.vhd
-- Project Name:  ise_pipelineCPU
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: processor_core
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
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY tb_cpu IS
END tb_cpu;
 
ARCHITECTURE behavior OF tb_cpu IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT processor_core
	 generic 	(filename : in string :="/home/ctnguyen/Works/CPU-2016/Software/program.txt");
    PORT(
         addr_instr_bus : OUT  std_logic_vector(10 downto 0);
         addr_data_bus : OUT  std_logic_vector(10 downto 0);
         data_bus : INOUT  std_logic_vector(15 downto 0);
         instr_bus : IN  std_logic_vector(31 downto 0);
         clk : IN  std_logic;
         rst : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal instr_bus : std_logic_vector(31 downto 0) := (others => '0');
   signal clk : std_logic := '0';
   signal rst : std_logic := '0';

	--BiDirs
   signal data_bus : std_logic_vector(15 downto 0);

 	--Outputs
   signal addr_instr_bus : std_logic_vector(10 downto 0);
   signal addr_data_bus : std_logic_vector(10 downto 0);

   -- Clock period definitions
   constant clk_period : time := 20 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: processor_core 
--	generic map 	(filename : in string :="/home/ctnguyen/Works/CPU-2016/Software/program.txt")
	PORT MAP (
          addr_instr_bus => addr_instr_bus,
          addr_data_bus => addr_data_bus,
          data_bus => data_bus,
          instr_bus => instr_bus,
          clk => clk,
          rst => rst
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
   begin		
      -- hold reset state for 100 ns.
		rst	<= '1';
      wait for 100 ns;	
		rst	<='0';
      wait for clk_period*1000;

      -- insert stimulus here 

      wait;
   end process;

END;
