--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   09:58:35 05/01/2016
-- Design Name:   
-- Module Name:   /home/ctnguyen/Works/CPU-2016/ise_pipelineCPU/tb_processor_core.vhd
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
 
ENTITY tb_processor_core IS
END tb_processor_core;
 
ARCHITECTURE behavior OF tb_processor_core IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT processor_core
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
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: processor_core PORT MAP (
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
		rst 	<=	'1';
      wait for 100 ns;	
		rst	<= '0';
      wait for clk_period*1000;

      -- insert stimulus here 

      assert false report "Simulation Successful" severity failure;
   end process;

END;
