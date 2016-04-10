--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   22:45:57 04/10/2016
-- Design Name:   
-- Module Name:   /home/waseemh/Xilinx_Proj/CPU-2016/untested_src/tb_dual_edge_check.vhd
-- Project Name:  top_CPU
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: dual_edge_check
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
 
ENTITY tb_dual_edge_check IS
END tb_dual_edge_check;
 
ARCHITECTURE behavior OF tb_dual_edge_check IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT dual_edge_check
    PORT(
         clk : IN  std_logic;
         rst : IN  std_logic;
         read_en : INOUT  std_logic;
         write_en : IN  std_logic;
         data_in : IN  std_logic_vector(7 downto 0);
         addr : INOUT  std_logic_vector(7 downto 0);
         data_out : INOUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal rst : std_logic := '0';
   signal write_en : std_logic := '0';
   signal data_in : std_logic_vector(7 downto 0) := (others => '0');

	--BiDirs
   signal read_en : std_logic;
   signal addr : std_logic_vector(7 downto 0);
   signal data_out : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: dual_edge_check PORT MAP (
          clk => clk,
          rst => rst,
          read_en => read_en,
          write_en => write_en,
          data_in => data_in,
          addr => addr,
          data_out => data_out
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
      wait for 100 ns;	

      wait for clk_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
