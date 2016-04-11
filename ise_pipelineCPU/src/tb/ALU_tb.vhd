--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   00:53:10 04/10/2016
-- Design Name:   
-- Module Name:   /home/waseemh/Xilinx_Proj/CPU-2016/untested_src/ALU_tb.vhd
-- Project Name:  top_CPU
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: ALU_module
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
 
ENTITY ALU_tb IS
END ALU_tb;
 
ARCHITECTURE behavior OF ALU_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT ALU_module
    PORT(
         operand_a : IN  std_logic_vector(15 downto 0);
         operand_b : IN  std_logic_vector(15 downto 0);
         result : OUT  std_logic_vector(15 downto 0);
         opcode : IN  std_logic_vector(5 downto 0);
         zero : OUT  std_logic;
         lessthan : OUT  std_logic;
         ovf : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal operand_a : std_logic_vector(15 downto 0) := (others => '0');
   signal operand_b : std_logic_vector(15 downto 0) := (others => '0');
   signal opcode : std_logic_vector(5 downto 0) := (others => '0');

 	--Outputs
   signal result : std_logic_vector(15 downto 0);
   signal zero : std_logic;
   signal lessthan : std_logic;
   signal ovf : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: ALU_module PORT MAP (
          operand_a => operand_a,
          operand_b => operand_b,
          result => result,
          opcode => opcode,
          zero => zero,
          lessthan => lessthan,
          ovf => ovf
        );

   -- Clock process definitions
--   clk_process :process
--   begin
--		clk <= '0';
--		wait for clk_period/2;
--		clk <= '1';
--		wait for clk_period/2;
--   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clk_period*10;

			operand_a <= x"FF00" after 10*clk_period;
			operand_b <= x"0ff0" after 10*clk_period;
			opcode 	<=	"000000" after 12*clk_period,
							"000001" after 13*clk_period,
							"000010" after 14*clk_period,
							"000011" after 15*clk_period,
							"000100" after 16*clk_period,
							"000101" after 17*clk_period,
							"000110" after 18*clk_period,
							"000111" after 19*clk_period,
							"001000" after 20*clk_period,
							"001001" after 22*clk_period,
							"001010" after 23*clk_period,
							"001011" after 24*clk_period,
							"001100" after 25*clk_period,
							"001101" after 26*clk_period,
							"001110" after 27*clk_period,
							"001111" after 28*clk_period;
      wait;
   end process;

END;
