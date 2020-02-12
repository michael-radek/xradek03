<<<<<<< HEAD
----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:11:36 02/12/2020 
-- Design Name: 
-- Module Name:    top - Behavioral 
-- Project Name: 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity top is
    port (BTN1,BTN0: in std_logic;
          LD2,LD1,LD0: out std_logic);
end entity top;

architecture Behavioral of top is

begin
    LD0 <= BTN1 and (not(BTN0));
    LD1 <= (BTN1 and BTN0)or((not(BTN1)) and (not(BTN0)));
    LD2 <= (BTN1 or BTN0) and ((not(BTN1)) or BTN0) and ((not(BTN1)) or (not(BTN0)));

end Behavioral;

=======
------------------------------------------------------------------------
--
-- VHDL template for combinational logic circuits.
-- Xilinx XC2C256-TQ144 CPLD, ISE Design Suite 14.7
--
-- Copyright (c) 2018-2020 Tomas Fryza
-- Dept. of Radio Electronics, Brno University of Technology, Czechia
-- This work is licensed under the terms of the MIT license.
--
------------------------------------------------------------------------

library ieee;
use ieee.std_logic_1164.all;

------------------------------------------------------------------------
-- Entity declaration for top level
------------------------------------------------------------------------
entity top is
    port (BTN1, BTN0:    in  std_logic;
          LD2, LD1, LD0: out std_logic);
end entity top;

------------------------------------------------------------------------
-- Architecture declaration for top level
------------------------------------------------------------------------
architecture Behavioral of top is
begin
    LD2 <= '1';
    LD1 <= '0';
    LD0 <= not(not(BTN1) and not(BTN0));
end architecture Behavioral;
>>>>>>> 7c551460245499c60fa07060e37c22da8ff164d4
