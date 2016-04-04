--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:10:44 04/04/2016
-- Design Name:   
-- Module Name:   /home/ctnguyen/Works/CPU-2016/tested_src/top_CPU/tb_fixedpoint_multiplier_module.vhd
-- Project Name:  top_CPU
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: fixedpoint_multiplier_module
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
 
ENTITY tb_fixedpoint_multiplier_module IS
END tb_fixedpoint_multiplier_module;
 
ARCHITECTURE behavior OF tb_fixedpoint_multiplier_module IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT fixedpoint_multiplier_module
    PORT(
         multiplicand : IN  std_logic_vector(15 downto 0);
         multiplier : IN  std_logic_vector(15 downto 0);
         rst : IN  std_logic;
         clk : IN  std_logic;
         start : IN  std_logic;
         done : OUT  std_logic;
         product : OUT  std_logic_vector(31 downto 0);
         over_flow : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal multiplicand : std_logic_vector(15 downto 0) := (others => '0');
   signal multiplier : std_logic_vector(15 downto 0) := (others => '0');
   signal rst : std_logic := '0';
   signal clk : std_logic := '0';
   signal start : std_logic := '0';

 	--Outputs
   signal done : std_logic;
   signal product : std_logic_vector(31 downto 0);
   signal over_flow : std_logic;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: fixedpoint_multiplier_module PORT MAP (
          multiplicand => multiplicand,
          multiplier => multiplier,
          rst => rst,
          clk => clk,
          start => start,
          done => done,
          product => product,
          over_flow => over_flow
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
		rst <= '1';
		wait for clk_period * 10;
		rst <= '0';
		
      multiplicand <= x"0011";
      multiplier <= x"0011";
      start <= '1';	
		wait for clk_period;
		start <= '0';
		while(done = '0') loop
			wait for clk_period;
		end loop;
		
		multiplicand <= x"FFFD";
      multiplier <= x"0003";
      start <= '1';	
		wait for clk_period;
		start <= '0';
		while(done = '0') loop
			wait for clk_period;
		end loop;

      wait;
   end process;

END;
