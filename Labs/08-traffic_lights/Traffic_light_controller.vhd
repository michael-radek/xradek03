library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity traffic is 
	port (clk_i: in std_logic;
			srst_n_i: in std_logic;
			ce_2Hz_i: in std_logic;
			lights_o: out std_logic_vector(5 downto 0));
end traffic;

architecture traffic of traffic is
    type state_type is (GreenRed, YellowRed, RedRed1, RedGreen, RedYellow, RedRed2);
	 signal state: state_type;
    signal count : unsigned(3 downto 0);
	 constant s1: unsigned(3 downto 0) := "0001";
    constant s5: unsigned(3 downto 0) := "1001";

	 begin
		process(clk_i, srst_n_i)
		begin
		if srst_n_i = '0' then
							state <= GreenRed;
							count <= X"0";
		elsif rising_edge(clk_i) and ce_2Hz_i = '1' then
					case state is
						when GreenRed =>
								if count < s5 then
									state <= GreenRed;
									count <= count + 1;
								else
									state <= YellowRed;
									count <= X"0";
								end if;
								
						when RedRed1 =>
								if count < s1 then
									state <= RedRed1;
									count <= count + 1;
								else
									state <= RedGreen;
									count <= X"0";
								end if;
								
						when RedYellow =>
								if count < s1 then
									state <= RedYellow;
									count <= count + 1;
								else
									state <= RedRed2;
									count <= X"0";
								end if;
								
						when YellowRed =>
								if count < s1 then
									state <= YellowRed;
									count <= count + 1;
								else
									state <= RedRed1;
									count <= X"0";
								end if;
								
	
						when RedGreen =>
								if count < s5 then
									state <= RedGreen;
									count <= count + 1;
								else
									state <= RedYellow;
									count <= X"0";
								end if;
								

								
						when RedRed2 =>
								if count < s1 then
									state <= RedRed2;
									count <= count + 1;
								else
									state <= GreenRed;
									count <= X"0";
								end if;
						when others =>
								state <= GreenRed;
					end case;
				end if;
			end process;
			
			
			C2: process(state)
			begin
			case state is 
				when GreenRed => lights_o <= "100001";
				
				when YellowRed => lights_o <= "100010";
				
				when RedRed1 => lights_o <= "100100";
				
				when RedGreen => lights_o <= "001100";
				
				when RedYellow => lights_o <= "010100";
				
				when RedRed2 => lights_o <= "100100";
				
				when others => lights_o <= "100001";
			end case;
			end process;		   
end traffic;