--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   12:15:01 03/31/2016
-- Design Name:   
-- Module Name:   /home/ctnguyen/Works/CPU-2016/tested_src/top_CPU/tb_multiplier_module.vhd
-- Project Name:  top_CPU
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: multiplier_module
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
USE ieee.numeric_std.ALL;
 
ENTITY tb_multiplier_module IS
END tb_multiplier_module;
 
ARCHITECTURE behavior OF tb_multiplier_module IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT multiplier_module
    PORT(
         operand_a : IN  std_logic_vector(15 downto 0);
         operand_b : IN  std_logic_vector(15 downto 0);
         result : OUT  std_logic_vector(31 downto 0);
         ovf : OUT  std_logic;
         start : IN  std_logic;
         done : OUT  std_logic;
         rst : IN  std_logic;
         clk : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal operand_a : std_logic_vector(15 downto 0) := (others => '0');
   signal operand_b : std_logic_vector(15 downto 0) := (others => '0');
   signal start : std_logic := '0';
   signal rst : std_logic := '0';
   signal clk : std_logic := '0';

 	--Outputs
   signal result : std_logic_vector(31 downto 0);
   signal ovf : std_logic;
   signal done : std_logic := '0';

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: multiplier_module PORT MAP (
          operand_a => operand_a,
          operand_b => operand_b,
          result => result,
          ovf => ovf,
          start => start,
          done => done,
          rst => rst,
          clk => clk
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
		
      operand_a <= x"0003";
      operand_b <= x"0003";
      start <= '1';	
		wait for clk_period;
		start <= '0';
		while(done = '0') loop
			wait for clk_period;
		end loop;
		
		operand_a <= x"FFFD";
      operand_b <= x"0003";
      start <= '1';	
		wait for clk_period;
		start <= '0';
		while(done = '0') loop
			wait for clk_period;
		end loop;
		
		
      -- insert stimulus here 

      wait;
   end process;

END;
