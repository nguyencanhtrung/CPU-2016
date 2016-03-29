--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   23:20:53 03/29/2016
-- Design Name:   
-- Module Name:   C:/Xilinx/Project/iA_CPU/ALU_exe/four_bit_adder_testbench.vhd
-- Project Name:  ALU_exe
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: four_bit_adder
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
 
ENTITY four_bit_adder_testbench IS
END four_bit_adder_testbench;
 
ARCHITECTURE behavior OF four_bit_adder_testbench IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT four_bit_adder
    PORT(
         a : IN  std_logic_vector(3 downto 0);
         b : IN  std_logic_vector(3 downto 0);
         c_in : IN  std_logic;
         s_out : OUT  std_logic_vector(3 downto 0);
         p_group_out : OUT  std_logic;
         g_group_out : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal a : std_logic_vector(3 downto 0) := (others => '0');
   signal b : std_logic_vector(3 downto 0) := (others => '0');
   signal c_in : std_logic := '0';

 	--Outputs
   signal s_out : std_logic_vector(3 downto 0);
   signal p_group_out : std_logic;
   signal g_group_out : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
--   constant <clock>_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: four_bit_adder PORT MAP (
          a => a,
          b => b,
          c_in => c_in,
          s_out => s_out,
          p_group_out => p_group_out,
          g_group_out => g_group_out
        );

   -- Clock process definitions
--   <clock>_process :process
--   begin
--		<clock> <= '0';
--		wait for <clock>_period/2;
--		<clock> <= '1';
--		wait for <clock>_period/2;
--   end process;
-- 

   -- Stimulus process
  -- stim_proc: process
   --begin		
      -- hold reset state for 100 ns.
      --wait for 100 ns;	

    --  wait for <clock>_period*10;

      a <= "0000" after 1000*ns, "0001" after 2000*ns, "0011" after 3000*ns;
      b <= "0001" after 1000*ns, "0010" after 2000*ns, "0100" after 3000*ns;
		
  -- end process;

END;
