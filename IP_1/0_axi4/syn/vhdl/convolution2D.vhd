-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2017.1
-- Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity convolution2D is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    posy : IN STD_LOGIC_VECTOR (9 downto 0);
    posx : IN STD_LOGIC_VECTOR (9 downto 0);
    m_axi_input_r_AWVALID : OUT STD_LOGIC;
    m_axi_input_r_AWREADY : IN STD_LOGIC;
    m_axi_input_r_AWADDR : OUT STD_LOGIC_VECTOR (31 downto 0);
    m_axi_input_r_AWID : OUT STD_LOGIC_VECTOR (0 downto 0);
    m_axi_input_r_AWLEN : OUT STD_LOGIC_VECTOR (31 downto 0);
    m_axi_input_r_AWSIZE : OUT STD_LOGIC_VECTOR (2 downto 0);
    m_axi_input_r_AWBURST : OUT STD_LOGIC_VECTOR (1 downto 0);
    m_axi_input_r_AWLOCK : OUT STD_LOGIC_VECTOR (1 downto 0);
    m_axi_input_r_AWCACHE : OUT STD_LOGIC_VECTOR (3 downto 0);
    m_axi_input_r_AWPROT : OUT STD_LOGIC_VECTOR (2 downto 0);
    m_axi_input_r_AWQOS : OUT STD_LOGIC_VECTOR (3 downto 0);
    m_axi_input_r_AWREGION : OUT STD_LOGIC_VECTOR (3 downto 0);
    m_axi_input_r_AWUSER : OUT STD_LOGIC_VECTOR (0 downto 0);
    m_axi_input_r_WVALID : OUT STD_LOGIC;
    m_axi_input_r_WREADY : IN STD_LOGIC;
    m_axi_input_r_WDATA : OUT STD_LOGIC_VECTOR (7 downto 0);
    m_axi_input_r_WSTRB : OUT STD_LOGIC_VECTOR (0 downto 0);
    m_axi_input_r_WLAST : OUT STD_LOGIC;
    m_axi_input_r_WID : OUT STD_LOGIC_VECTOR (0 downto 0);
    m_axi_input_r_WUSER : OUT STD_LOGIC_VECTOR (0 downto 0);
    m_axi_input_r_ARVALID : OUT STD_LOGIC;
    m_axi_input_r_ARREADY : IN STD_LOGIC;
    m_axi_input_r_ARADDR : OUT STD_LOGIC_VECTOR (31 downto 0);
    m_axi_input_r_ARID : OUT STD_LOGIC_VECTOR (0 downto 0);
    m_axi_input_r_ARLEN : OUT STD_LOGIC_VECTOR (31 downto 0);
    m_axi_input_r_ARSIZE : OUT STD_LOGIC_VECTOR (2 downto 0);
    m_axi_input_r_ARBURST : OUT STD_LOGIC_VECTOR (1 downto 0);
    m_axi_input_r_ARLOCK : OUT STD_LOGIC_VECTOR (1 downto 0);
    m_axi_input_r_ARCACHE : OUT STD_LOGIC_VECTOR (3 downto 0);
    m_axi_input_r_ARPROT : OUT STD_LOGIC_VECTOR (2 downto 0);
    m_axi_input_r_ARQOS : OUT STD_LOGIC_VECTOR (3 downto 0);
    m_axi_input_r_ARREGION : OUT STD_LOGIC_VECTOR (3 downto 0);
    m_axi_input_r_ARUSER : OUT STD_LOGIC_VECTOR (0 downto 0);
    m_axi_input_r_RVALID : IN STD_LOGIC;
    m_axi_input_r_RREADY : OUT STD_LOGIC;
    m_axi_input_r_RDATA : IN STD_LOGIC_VECTOR (7 downto 0);
    m_axi_input_r_RLAST : IN STD_LOGIC;
    m_axi_input_r_RID : IN STD_LOGIC_VECTOR (0 downto 0);
    m_axi_input_r_RUSER : IN STD_LOGIC_VECTOR (0 downto 0);
    m_axi_input_r_RRESP : IN STD_LOGIC_VECTOR (1 downto 0);
    m_axi_input_r_BVALID : IN STD_LOGIC;
    m_axi_input_r_BREADY : OUT STD_LOGIC;
    m_axi_input_r_BRESP : IN STD_LOGIC_VECTOR (1 downto 0);
    m_axi_input_r_BID : IN STD_LOGIC_VECTOR (0 downto 0);
    m_axi_input_r_BUSER : IN STD_LOGIC_VECTOR (0 downto 0);
    input1 : IN STD_LOGIC_VECTOR (31 downto 0);
    operator_address0 : OUT STD_LOGIC_VECTOR (3 downto 0);
    operator_ce0 : OUT STD_LOGIC;
    operator_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    ap_return : OUT STD_LOGIC_VECTOR (31 downto 0) );
end;


architecture behav of convolution2D is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (15 downto 0) := "0000000000000001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (15 downto 0) := "0000000000000010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (15 downto 0) := "0000000000000100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (15 downto 0) := "0000000000001000";
    constant ap_ST_fsm_state5 : STD_LOGIC_VECTOR (15 downto 0) := "0000000000010000";
    constant ap_ST_fsm_state6 : STD_LOGIC_VECTOR (15 downto 0) := "0000000000100000";
    constant ap_ST_fsm_state7 : STD_LOGIC_VECTOR (15 downto 0) := "0000000001000000";
    constant ap_ST_fsm_state8 : STD_LOGIC_VECTOR (15 downto 0) := "0000000010000000";
    constant ap_ST_fsm_state9 : STD_LOGIC_VECTOR (15 downto 0) := "0000000100000000";
    constant ap_ST_fsm_state10 : STD_LOGIC_VECTOR (15 downto 0) := "0000001000000000";
    constant ap_ST_fsm_state11 : STD_LOGIC_VECTOR (15 downto 0) := "0000010000000000";
    constant ap_ST_fsm_state12 : STD_LOGIC_VECTOR (15 downto 0) := "0000100000000000";
    constant ap_ST_fsm_state13 : STD_LOGIC_VECTOR (15 downto 0) := "0001000000000000";
    constant ap_ST_fsm_state14 : STD_LOGIC_VECTOR (15 downto 0) := "0010000000000000";
    constant ap_ST_fsm_state15 : STD_LOGIC_VECTOR (15 downto 0) := "0100000000000000";
    constant ap_ST_fsm_state16 : STD_LOGIC_VECTOR (15 downto 0) := "1000000000000000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv3_0 : STD_LOGIC_VECTOR (2 downto 0) := "000";
    constant ap_const_lv2_0 : STD_LOGIC_VECTOR (1 downto 0) := "00";
    constant ap_const_lv4_0 : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    constant ap_const_lv8_0 : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv32_B : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001011";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv32_C : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001100";
    constant ap_const_lv32_E : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001110";
    constant ap_const_lv3_7 : STD_LOGIC_VECTOR (2 downto 0) := "111";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001111";
    constant ap_const_lv3_2 : STD_LOGIC_VECTOR (2 downto 0) := "010";
    constant ap_const_lv3_1 : STD_LOGIC_VECTOR (2 downto 0) := "001";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (15 downto 0) := "0000000000000001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal input_r_blk_n_AR : STD_LOGIC;
    signal ap_CS_fsm_state5 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state5 : signal is "none";
    signal input_r_blk_n_R : STD_LOGIC;
    signal ap_CS_fsm_state12 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state12 : signal is "none";
    signal j_2_fu_135_p2 : STD_LOGIC_VECTOR (2 downto 0);
    signal j_2_reg_272 : STD_LOGIC_VECTOR (2 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal exitcond1_fu_129_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal j_2_cast_fu_141_p1 : STD_LOGIC_VECTOR (4 downto 0);
    signal j_2_cast_reg_277 : STD_LOGIC_VECTOR (4 downto 0);
    signal sum_fu_175_p2 : STD_LOGIC_VECTOR (21 downto 0);
    signal sum_reg_285 : STD_LOGIC_VECTOR (21 downto 0);
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal exitcond_fu_145_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal i_2_fu_181_p2 : STD_LOGIC_VECTOR (2 downto 0);
    signal i_2_reg_290 : STD_LOGIC_VECTOR (2 downto 0);
    signal tmp_1_fu_205_p2 : STD_LOGIC_VECTOR (4 downto 0);
    signal tmp_1_reg_295 : STD_LOGIC_VECTOR (4 downto 0);
    signal input_addr_reg_300 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal input_addr_read_reg_306 : STD_LOGIC_VECTOR (7 downto 0);
    signal ap_CS_fsm_state13 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state13 : signal is "none";
    signal grp_fu_231_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_4_reg_326 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state15 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state15 : signal is "none";
    signal j_reg_98 : STD_LOGIC_VECTOR (2 downto 0);
    signal i_reg_110 : STD_LOGIC_VECTOR (2 downto 0);
    signal ap_CS_fsm_state16 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state16 : signal is "none";
    signal tmp_11_cast_fu_224_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal sum1_fu_213_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_reg_ioackin_m_axi_input_r_ARREADY : STD_LOGIC := '0';
    signal ap_sig_ioackin_m_axi_input_r_ARREADY : STD_LOGIC;
    signal res_fu_52 : STD_LOGIC_VECTOR (31 downto 0);
    signal res_1_fu_237_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_2_cast_fu_151_p1 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp5_fu_155_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp1_fu_160_p3 : STD_LOGIC_VECTOR (19 downto 0);
    signal j_cast7_fu_171_p1 : STD_LOGIC_VECTOR (21 downto 0);
    signal tmp1_cast_fu_167_p1 : STD_LOGIC_VECTOR (21 downto 0);
    signal tmp_fu_191_p3 : STD_LOGIC_VECTOR (4 downto 0);
    signal i_2_cast_cast_fu_187_p1 : STD_LOGIC_VECTOR (4 downto 0);
    signal tmp_s_fu_199_p2 : STD_LOGIC_VECTOR (4 downto 0);
    signal sum_cast_fu_210_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_fu_231_p0 : STD_LOGIC_VECTOR (7 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (15 downto 0);
    signal grp_fu_231_p00 : STD_LOGIC_VECTOR (31 downto 0);

    component sobel_mul_8ns_32sbkb IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        din0 : IN STD_LOGIC_VECTOR (7 downto 0);
        din1 : IN STD_LOGIC_VECTOR (31 downto 0);
        ce : IN STD_LOGIC;
        dout : OUT STD_LOGIC_VECTOR (31 downto 0) );
    end component;



begin
    sobel_mul_8ns_32sbkb_U0 : component sobel_mul_8ns_32sbkb
    generic map (
        ID => 1,
        NUM_STAGE => 3,
        din0_WIDTH => 8,
        din1_WIDTH => 32,
        dout_WIDTH => 32)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        din0 => grp_fu_231_p0,
        din1 => operator_q0,
        ce => ap_const_logic_1,
        dout => grp_fu_231_p2);





    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_state1;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    ap_reg_ioackin_m_axi_input_r_ARREADY_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_reg_ioackin_m_axi_input_r_ARREADY <= ap_const_logic_0;
            else
                if ((ap_const_logic_1 = ap_CS_fsm_state5)) then
                    if ((ap_sig_ioackin_m_axi_input_r_ARREADY = ap_const_logic_1)) then 
                        ap_reg_ioackin_m_axi_input_r_ARREADY <= ap_const_logic_0;
                    elsif ((ap_const_logic_1 = m_axi_input_r_ARREADY)) then 
                        ap_reg_ioackin_m_axi_input_r_ARREADY <= ap_const_logic_1;
                    end if;
                end if; 
            end if;
        end if;
    end process;


    i_reg_110_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state2) and (ap_const_lv1_0 = exitcond1_fu_129_p2))) then 
                i_reg_110 <= ap_const_lv3_7;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state16)) then 
                i_reg_110 <= i_2_reg_290;
            end if; 
        end if;
    end process;

    j_reg_98_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state3) and (exitcond_fu_145_p2 = ap_const_lv1_1))) then 
                j_reg_98 <= j_2_reg_272;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                j_reg_98 <= ap_const_lv3_7;
            end if; 
        end if;
    end process;

    res_fu_52_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state16)) then 
                res_fu_52 <= res_1_fu_237_p2;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                res_fu_52 <= ap_const_lv32_0;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state3) and (ap_const_lv1_0 = exitcond_fu_145_p2))) then
                i_2_reg_290 <= i_2_fu_181_p2;
                sum_reg_285 <= sum_fu_175_p2;
                tmp_1_reg_295 <= tmp_1_fu_205_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state12) and (m_axi_input_r_RVALID = ap_const_logic_1))) then
                input_addr_read_reg_306 <= m_axi_input_r_RDATA;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state4)) then
                input_addr_reg_300 <= sum1_fu_213_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state2) and (ap_const_lv1_0 = exitcond1_fu_129_p2))) then
                    j_2_cast_reg_277(2 downto 0) <= j_2_cast_fu_141_p1(2 downto 0);
                j_2_reg_272 <= j_2_fu_135_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state15)) then
                tmp_4_reg_326 <= grp_fu_231_p2;
            end if;
        end if;
    end process;
    j_2_cast_reg_277(4 downto 3) <= "00";

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, m_axi_input_r_RVALID, ap_CS_fsm_state5, ap_CS_fsm_state12, ap_CS_fsm_state2, exitcond1_fu_129_p2, ap_CS_fsm_state3, exitcond_fu_145_p2, ap_sig_ioackin_m_axi_input_r_ARREADY)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state2) and (exitcond1_fu_129_p2 = ap_const_lv1_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state3;
                end if;
            when ap_ST_fsm_state3 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state3) and (exitcond_fu_145_p2 = ap_const_lv1_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state4;
                end if;
            when ap_ST_fsm_state4 => 
                ap_NS_fsm <= ap_ST_fsm_state5;
            when ap_ST_fsm_state5 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state5) and (ap_sig_ioackin_m_axi_input_r_ARREADY = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state6;
                else
                    ap_NS_fsm <= ap_ST_fsm_state5;
                end if;
            when ap_ST_fsm_state6 => 
                ap_NS_fsm <= ap_ST_fsm_state7;
            when ap_ST_fsm_state7 => 
                ap_NS_fsm <= ap_ST_fsm_state8;
            when ap_ST_fsm_state8 => 
                ap_NS_fsm <= ap_ST_fsm_state9;
            when ap_ST_fsm_state9 => 
                ap_NS_fsm <= ap_ST_fsm_state10;
            when ap_ST_fsm_state10 => 
                ap_NS_fsm <= ap_ST_fsm_state11;
            when ap_ST_fsm_state11 => 
                ap_NS_fsm <= ap_ST_fsm_state12;
            when ap_ST_fsm_state12 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state12) and (m_axi_input_r_RVALID = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state13;
                else
                    ap_NS_fsm <= ap_ST_fsm_state12;
                end if;
            when ap_ST_fsm_state13 => 
                ap_NS_fsm <= ap_ST_fsm_state14;
            when ap_ST_fsm_state14 => 
                ap_NS_fsm <= ap_ST_fsm_state15;
            when ap_ST_fsm_state15 => 
                ap_NS_fsm <= ap_ST_fsm_state16;
            when ap_ST_fsm_state16 => 
                ap_NS_fsm <= ap_ST_fsm_state3;
            when others =>  
                ap_NS_fsm <= "XXXXXXXXXXXXXXXX";
        end case;
    end process;
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state12 <= ap_CS_fsm(11);
    ap_CS_fsm_state13 <= ap_CS_fsm(12);
    ap_CS_fsm_state15 <= ap_CS_fsm(14);
    ap_CS_fsm_state16 <= ap_CS_fsm(15);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);
    ap_CS_fsm_state4 <= ap_CS_fsm(3);
    ap_CS_fsm_state5 <= ap_CS_fsm(4);

    ap_done_assign_proc : process(ap_start, ap_CS_fsm_state1, ap_CS_fsm_state2, exitcond1_fu_129_p2)
    begin
        if ((((ap_const_logic_0 = ap_start) and (ap_const_logic_1 = ap_CS_fsm_state1)) or ((ap_const_logic_1 = ap_CS_fsm_state2) and (exitcond1_fu_129_p2 = ap_const_lv1_1)))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_const_logic_0 = ap_start) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_ready_assign_proc : process(ap_CS_fsm_state2, exitcond1_fu_129_p2)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state2) and (exitcond1_fu_129_p2 = ap_const_lv1_1))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    ap_return <= res_fu_52;

    ap_sig_ioackin_m_axi_input_r_ARREADY_assign_proc : process(m_axi_input_r_ARREADY, ap_reg_ioackin_m_axi_input_r_ARREADY)
    begin
        if ((ap_const_logic_0 = ap_reg_ioackin_m_axi_input_r_ARREADY)) then 
            ap_sig_ioackin_m_axi_input_r_ARREADY <= m_axi_input_r_ARREADY;
        else 
            ap_sig_ioackin_m_axi_input_r_ARREADY <= ap_const_logic_1;
        end if; 
    end process;

    exitcond1_fu_129_p2 <= "1" when (j_reg_98 = ap_const_lv3_2) else "0";
    exitcond_fu_145_p2 <= "1" when (i_reg_110 = ap_const_lv3_2) else "0";
    grp_fu_231_p0 <= grp_fu_231_p00(8 - 1 downto 0);
    grp_fu_231_p00 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(input_addr_read_reg_306),32));
    i_2_cast_cast_fu_187_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(i_2_fu_181_p2),5));
    i_2_fu_181_p2 <= std_logic_vector(unsigned(i_reg_110) + unsigned(ap_const_lv3_1));

    input_r_blk_n_AR_assign_proc : process(m_axi_input_r_ARREADY, ap_CS_fsm_state5)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            input_r_blk_n_AR <= m_axi_input_r_ARREADY;
        else 
            input_r_blk_n_AR <= ap_const_logic_1;
        end if; 
    end process;


    input_r_blk_n_R_assign_proc : process(m_axi_input_r_RVALID, ap_CS_fsm_state12)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state12)) then 
            input_r_blk_n_R <= m_axi_input_r_RVALID;
        else 
            input_r_blk_n_R <= ap_const_logic_1;
        end if; 
    end process;

    j_2_cast_fu_141_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(j_2_fu_135_p2),5));
    j_2_fu_135_p2 <= std_logic_vector(unsigned(j_reg_98) + unsigned(ap_const_lv3_1));
        j_cast7_fu_171_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(j_reg_98),22));

    m_axi_input_r_ARADDR <= input_addr_reg_300;
    m_axi_input_r_ARBURST <= ap_const_lv2_0;
    m_axi_input_r_ARCACHE <= ap_const_lv4_0;
    m_axi_input_r_ARID <= ap_const_lv1_0;
    m_axi_input_r_ARLEN <= ap_const_lv32_1;
    m_axi_input_r_ARLOCK <= ap_const_lv2_0;
    m_axi_input_r_ARPROT <= ap_const_lv3_0;
    m_axi_input_r_ARQOS <= ap_const_lv4_0;
    m_axi_input_r_ARREGION <= ap_const_lv4_0;
    m_axi_input_r_ARSIZE <= ap_const_lv3_0;
    m_axi_input_r_ARUSER <= ap_const_lv1_0;

    m_axi_input_r_ARVALID_assign_proc : process(ap_CS_fsm_state5, ap_reg_ioackin_m_axi_input_r_ARREADY)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state5) and (ap_const_logic_0 = ap_reg_ioackin_m_axi_input_r_ARREADY))) then 
            m_axi_input_r_ARVALID <= ap_const_logic_1;
        else 
            m_axi_input_r_ARVALID <= ap_const_logic_0;
        end if; 
    end process;

    m_axi_input_r_AWADDR <= ap_const_lv32_0;
    m_axi_input_r_AWBURST <= ap_const_lv2_0;
    m_axi_input_r_AWCACHE <= ap_const_lv4_0;
    m_axi_input_r_AWID <= ap_const_lv1_0;
    m_axi_input_r_AWLEN <= ap_const_lv32_0;
    m_axi_input_r_AWLOCK <= ap_const_lv2_0;
    m_axi_input_r_AWPROT <= ap_const_lv3_0;
    m_axi_input_r_AWQOS <= ap_const_lv4_0;
    m_axi_input_r_AWREGION <= ap_const_lv4_0;
    m_axi_input_r_AWSIZE <= ap_const_lv3_0;
    m_axi_input_r_AWUSER <= ap_const_lv1_0;
    m_axi_input_r_AWVALID <= ap_const_logic_0;
    m_axi_input_r_BREADY <= ap_const_logic_0;

    m_axi_input_r_RREADY_assign_proc : process(m_axi_input_r_RVALID, ap_CS_fsm_state12)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state12) and (m_axi_input_r_RVALID = ap_const_logic_1))) then 
            m_axi_input_r_RREADY <= ap_const_logic_1;
        else 
            m_axi_input_r_RREADY <= ap_const_logic_0;
        end if; 
    end process;

    m_axi_input_r_WDATA <= ap_const_lv8_0;
    m_axi_input_r_WID <= ap_const_lv1_0;
    m_axi_input_r_WLAST <= ap_const_logic_0;
    m_axi_input_r_WSTRB <= ap_const_lv1_0;
    m_axi_input_r_WUSER <= ap_const_lv1_0;
    m_axi_input_r_WVALID <= ap_const_logic_0;
    operator_address0 <= tmp_11_cast_fu_224_p1(4 - 1 downto 0);

    operator_ce0_assign_proc : process(m_axi_input_r_RVALID, ap_CS_fsm_state12)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state12) and (m_axi_input_r_RVALID = ap_const_logic_1))) then 
            operator_ce0 <= ap_const_logic_1;
        else 
            operator_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    res_1_fu_237_p2 <= std_logic_vector(unsigned(res_fu_52) + unsigned(tmp_4_reg_326));
    sum1_fu_213_p2 <= std_logic_vector(unsigned(input1) + unsigned(sum_cast_fu_210_p1));
    sum_cast_fu_210_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(sum_reg_285),32));
    sum_fu_175_p2 <= std_logic_vector(signed(j_cast7_fu_171_p1) + signed(tmp1_cast_fu_167_p1));
    tmp1_cast_fu_167_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp1_fu_160_p3),22));
    tmp1_fu_160_p3 <= (tmp5_fu_155_p2 & posx);
    tmp5_fu_155_p2 <= std_logic_vector(unsigned(posy) + unsigned(tmp_2_cast_fu_151_p1));
    tmp_11_cast_fu_224_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_1_reg_295),32));
    tmp_1_fu_205_p2 <= std_logic_vector(unsigned(tmp_s_fu_199_p2) + unsigned(j_2_cast_reg_277));
        tmp_2_cast_fu_151_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(i_reg_110),10));

    tmp_fu_191_p3 <= (i_2_fu_181_p2 & ap_const_lv2_0);
    tmp_s_fu_199_p2 <= std_logic_vector(unsigned(tmp_fu_191_p3) - unsigned(i_2_cast_cast_fu_187_p1));
end behav;
