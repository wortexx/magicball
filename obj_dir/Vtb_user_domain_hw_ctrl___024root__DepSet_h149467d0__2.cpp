// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_user_domain_hw_ctrl.h for the primary calling header

#include "Vtb_user_domain_hw_ctrl__pch.h"
#include "Vtb_user_domain_hw_ctrl__Syms.h"
#include "Vtb_user_domain_hw_ctrl___024root.h"

VlCoroutine Vtb_user_domain_hw_ctrl___024root___eval_initial__TOP__Vtiming__1__2(Vtb_user_domain_hw_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_hw_ctrl___024root___eval_initial__TOP__Vtiming__1__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__95__status_val;
    __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__95__status_val = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__95__read_err_local;
    __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__95__read_err_local = 0;
    QData/*36:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__98__rsp_r_chan_temp;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__98__rsp_r_chan_temp = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__99__w_addr;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__99__w_addr = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__99__w_data;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__99__w_data = 0;
    CData/*3:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__99__w_be;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__99__w_be = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__99__timeout_count;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__99__timeout_count = 0;
    VlWide<3>/*73:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__99__req_txn;
    VL_ZERO_W(74, __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__99__req_txn);
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__100__w_addr;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__100__w_addr = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__100__w_data;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__100__w_data = 0;
    CData/*3:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__100__w_be;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__100__w_be = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__100__timeout_count;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__100__timeout_count = 0;
    VlWide<3>/*73:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__100__req_txn;
    VL_ZERO_W(74, __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__100__req_txn);
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__101__status_val;
    __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__101__status_val = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__101__busy_bit;
    __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__101__busy_bit = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__101__done_bit_tb;
    __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__101__done_bit_tb = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__101__read_err_local;
    __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__101__read_err_local = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__101__timeout_count;
    __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__101__timeout_count = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__r_addr;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__r_data_val;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__r_data_val = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__r_err;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__r_err = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__expect_grant;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__expect_grant = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__timeout_count_gnt;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__timeout_count_rvalid;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__req_txn;
    VL_ZERO_W(74, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__req_txn);
    QData/*36:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__rsp_r_chan_temp;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__rsp_r_chan_temp = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__grant_received;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__grant_received = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__r_addr;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__r_data_val;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__r_data_val = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__r_err;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__r_err = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__expect_grant;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__expect_grant = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__timeout_count_gnt;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__timeout_count_rvalid;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__req_txn;
    VL_ZERO_W(74, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__req_txn);
    QData/*36:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__rsp_r_chan_temp;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__rsp_r_chan_temp = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__grant_received;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__grant_received = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__r_addr;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__r_data_val;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__r_data_val = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__r_err;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__r_err = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__expect_grant;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__expect_grant = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__timeout_count_gnt;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__timeout_count_rvalid;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__req_txn;
    VL_ZERO_W(74, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__req_txn);
    QData/*36:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__rsp_r_chan_temp;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__rsp_r_chan_temp = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__grant_received;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__grant_received = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__105__cs1_active;
    __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__105__cs1_active = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__105__cs2_active;
    __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__105__cs2_active = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__105__dc_is_data;
    __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__105__dc_is_data = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__105__ctrl_val;
    __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__105__ctrl_val = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__105__dummy_rdata;
    __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__105__dummy_rdata = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__105__dummy_rerr;
    __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__105__dummy_rerr = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__106__w_addr;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__106__w_addr = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__106__w_data;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__106__w_data = 0;
    CData/*3:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__106__w_be;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__106__w_be = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__106__timeout_count;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__106__timeout_count = 0;
    VlWide<3>/*73:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__106__req_txn;
    VL_ZERO_W(74, __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__106__req_txn);
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__r_addr;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__r_data_val;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__r_data_val = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__r_err;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__r_err = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__expect_grant;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__expect_grant = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__timeout_count_gnt;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__timeout_count_rvalid;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__req_txn;
    VL_ZERO_W(74, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__req_txn);
    QData/*36:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__rsp_r_chan_temp;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__rsp_r_chan_temp = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__grant_received;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__grant_received = 0;
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__98__grant_received)) {
        VL_WRITEF_NX("%t : TB: Waiting for OBI rvalid from Addr=0x%x...\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__98__r_addr);
        while (((~ (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__cnt_down_sig)) 
                & VL_GTS_III(32, 0xbb8U, vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__98__timeout_count_rvalid))) {
            co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                                 "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                                 364);
            vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__98__timeout_count_rvalid 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__98__timeout_count_rvalid);
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0xbb8U, vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__98__timeout_count_rvalid))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:368: Assertion failed in %Ntb_user_domain_hw_ctrl.read_obi: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. RVALID=%b. Rsp: %12#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__98__r_addr,
                         1,(IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__cnt_down_sig),
                         39,((((0xc2U >= ((IData)(2U) 
                                          + (0xffU 
                                             & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))
                                ? (0x1fffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                       (((IData)(0x26U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q))))))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))) 
                                      | (((0U == (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q))))))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                           (((IData)(0x21U) 
                                                             + 
                                                             (0xffU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))) 
                                         | ((QData)((IData)(
                                                            vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                            (((IData)(2U) 
                                                              + 
                                                              (0xffU 
                                                               & ((IData)(0x27U) 
                                                                  * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                             >> 5U)])) 
                                            >> (0x1fU 
                                                & ((IData)(2U) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(0x27U) 
                                                       * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))))
                                : 0ULL) << 2U) | (QData)((IData)(
                                                                 ((((0xc2U 
                                                                     >= 
                                                                     ((IData)(1U) 
                                                                      + 
                                                                      (0xffU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                                                                    && (1U 
                                                                        & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                           (((IData)(1U) 
                                                                             + 
                                                                             (0xffU 
                                                                              & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                            >> 5U)] 
                                                                           >> 
                                                                           (0x1fU 
                                                                            & ((IData)(1U) 
                                                                               + 
                                                                               (0xffU 
                                                                                & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__cnt_down_sig))))));
            VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 368, "");
            vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__98__r_err = 1U;
            VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 370, "");
        }
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__98__rsp_r_chan_temp 
            = ((0xc2U >= ((IData)(2U) + (0xffU & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))
                ? (0x1fffffffffULL & (((QData)((IData)(
                                                       vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                       (((IData)(0x26U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q))))))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))) 
                                      | (((0U == (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q))))))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                           (((IData)(0x21U) 
                                                             + 
                                                             (0xffU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))) 
                                         | ((QData)((IData)(
                                                            vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                            (((IData)(2U) 
                                                              + 
                                                              (0xffU 
                                                               & ((IData)(0x27U) 
                                                                  * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                             >> 5U)])) 
                                            >> (0x1fU 
                                                & ((IData)(2U) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(0x27U) 
                                                       * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))))
                : 0ULL);
        vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__98__r_data_val 
            = (IData)((__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__98__rsp_r_chan_temp 
                       >> 5U));
        vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__98__r_err 
            = (1U & (IData)((__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__98__rsp_r_chan_temp 
                             >> 1U)));
        VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x Err=%b RVALID=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__98__r_addr,
                     32,vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__98__r_data_val,
                     1,(IData)(vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__98__r_err),
                     1,vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__cnt_down_sig);
    } else {
        vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__98__r_err = 1U;
        VL_WRITEF_NX("%t : TB: No grant for Addr=0x%x, r_err set to %b by TB, r_data_val is 0x%x.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__98__r_addr,
                     1,(IData)(vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__98__r_err),
                     32,vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__98__r_data_val);
    }
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         381);
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__95__status_val 
        = vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__98__r_data_val;
    __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__95__read_err_local 
        = vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__98__r_err;
    VL_WRITEF_NX("%t : TB: SPI Engine finished. Final Status: 0x%08x (done=%b, busy=%b)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__95__status_val,
                 1,(1U & (__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__95__status_val 
                          >> 1U)),1,(1U & __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__95__status_val));
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__99__w_be = 1U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__99__w_data 
        = vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__send_byte_hw_ctrl__88__byte_val;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__99__w_addr = 0x20001004U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__99__timeout_count = 0U;
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         276);
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__99__req_txn[0U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__99__req_txn[1U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__99__req_txn[2U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__99__req_txn[0U] 
        = (1U | __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__99__req_txn[0U]);
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__99__req_txn[1U] 
        = ((0x1ffU & __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__99__req_txn[1U]) 
           | ((IData)((1ULL | ((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__99__w_addr)) 
                               << 1U))) << 9U));
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__99__req_txn[2U] 
        = (0x3ffU & (((IData)((1ULL | ((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__99__w_addr)) 
                                       << 1U))) >> 0x17U) 
                     | ((IData)(((1ULL | ((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__99__w_addr)) 
                                          << 1U)) >> 0x20U)) 
                        << 9U)));
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__99__req_txn[0U] 
        = ((3U & __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__99__req_txn[0U]) 
           | ((IData)((((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__99__w_be)) 
                        << 0x23U) | (((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__99__w_data)) 
                                      << 3U) | (QData)((IData)(
                                                               (7U 
                                                                & VL_MODDIVS_III(32, __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__99__timeout_count, (IData)(8U)))))))) 
              << 2U));
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__99__req_txn[1U] 
        = ((0xfffffe00U & __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__99__req_txn[1U]) 
           | (((IData)((((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__99__w_be)) 
                         << 0x23U) | (((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__99__w_data)) 
                                       << 3U) | (QData)((IData)(
                                                                (7U 
                                                                 & VL_MODDIVS_III(32, __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__99__timeout_count, (IData)(8U)))))))) 
               >> 0x1eU) | ((IData)(((((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__99__w_be)) 
                                       << 0x23U) | 
                                      (((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__99__w_data)) 
                                        << 3U) | (QData)((IData)(
                                                                 (7U 
                                                                  & VL_MODDIVS_III(32, __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__99__timeout_count, (IData)(8U))))))) 
                                     >> 0x20U)) << 2U)));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__99__req_txn[0U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__99__req_txn[1U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__99__req_txn[2U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Write Req : Addr=0x%x, Data=0x%x, BE=0x%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__99__w_addr,
                 32,__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__99__w_data,
                 4,(IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__99__w_be));
    while (((~ ((0xc2U >= ((IData)(1U) + (0xffU & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                          (((IData)(1U) + (0xffU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                           >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                + (0xffU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))))) 
            & VL_GTS_III(32, 0xbb8U, __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__99__timeout_count))) {
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             289);
        __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__99__timeout_count 
            = ((IData)(1U) + __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__99__timeout_count);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0xbb8U, __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__99__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:293: Assertion failed in %Ntb_user_domain_hw_ctrl.write_obi: %t : TB: Timeout waiting for OBI grant during write to 0x%x. GNT=%b. Rsp: %12#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__99__w_addr,
                     1,((0xc2U >= ((IData)(1U) + (0xffU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                        && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                  (((IData)(1U) + (0xffU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                   >> 5U)] >> (0x1fU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))),
                     39,((((0xc2U >= ((IData)(2U) + 
                                      (0xffU & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))
                            ? (0x1fffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x26U) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q))))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q))))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(0x21U) 
                                                                         + 
                                                                         (0xffU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (((IData)(2U) 
                                                                          + 
                                                                          (0xffU 
                                                                           & ((IData)(0x27U) 
                                                                              * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                                         >> 5U)])) 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))))
                            : 0ULL) << 2U) | (QData)((IData)(
                                                             ((((0xc2U 
                                                                 >= 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (0xffU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                                                                && (1U 
                                                                    & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(1U) 
                                                                         + 
                                                                         (0xffU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)] 
                                                                       >> 
                                                                       (0x1fU 
                                                                        & ((IData)(1U) 
                                                                           + 
                                                                           (0xffU 
                                                                            & ((IData)(0x27U) 
                                                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                                               << 1U) 
                                                              | (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__cnt_down_sig))))));
        VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 293, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 294, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Write Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__99__w_addr);
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         298);
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : TB: OBI Write Req Deasserted.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         302);
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__100__w_be = 1U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__100__w_data = 1U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__100__w_addr = 0x20001000U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__100__timeout_count = 0U;
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         276);
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__100__req_txn[0U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__100__req_txn[1U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__100__req_txn[2U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__100__req_txn[0U] 
        = (1U | __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__100__req_txn[0U]);
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__100__req_txn[1U] 
        = ((0x1ffU & __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__100__req_txn[1U]) 
           | ((IData)((1ULL | ((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__100__w_addr)) 
                               << 1U))) << 9U));
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__100__req_txn[2U] 
        = (0x3ffU & (((IData)((1ULL | ((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__100__w_addr)) 
                                       << 1U))) >> 0x17U) 
                     | ((IData)(((1ULL | ((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__100__w_addr)) 
                                          << 1U)) >> 0x20U)) 
                        << 9U)));
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__100__req_txn[0U] 
        = ((3U & __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__100__req_txn[0U]) 
           | ((IData)((((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__100__w_be)) 
                        << 0x23U) | (((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__100__w_data)) 
                                      << 3U) | (QData)((IData)(
                                                               (7U 
                                                                & VL_MODDIVS_III(32, __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__100__timeout_count, (IData)(8U)))))))) 
              << 2U));
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__100__req_txn[1U] 
        = ((0xfffffe00U & __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__100__req_txn[1U]) 
           | (((IData)((((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__100__w_be)) 
                         << 0x23U) | (((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__100__w_data)) 
                                       << 3U) | (QData)((IData)(
                                                                (7U 
                                                                 & VL_MODDIVS_III(32, __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__100__timeout_count, (IData)(8U)))))))) 
               >> 0x1eU) | ((IData)(((((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__100__w_be)) 
                                       << 0x23U) | 
                                      (((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__100__w_data)) 
                                        << 3U) | (QData)((IData)(
                                                                 (7U 
                                                                  & VL_MODDIVS_III(32, __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__100__timeout_count, (IData)(8U))))))) 
                                     >> 0x20U)) << 2U)));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__100__req_txn[0U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__100__req_txn[1U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__100__req_txn[2U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Write Req : Addr=0x%x, Data=0x%x, BE=0x%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__100__w_addr,
                 32,__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__100__w_data,
                 4,(IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__100__w_be));
    while (((~ ((0xc2U >= ((IData)(1U) + (0xffU & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                          (((IData)(1U) + (0xffU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                           >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                + (0xffU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))))) 
            & VL_GTS_III(32, 0xbb8U, __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__100__timeout_count))) {
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             289);
        __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__100__timeout_count 
            = ((IData)(1U) + __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__100__timeout_count);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0xbb8U, __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__100__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:293: Assertion failed in %Ntb_user_domain_hw_ctrl.write_obi: %t : TB: Timeout waiting for OBI grant during write to 0x%x. GNT=%b. Rsp: %12#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__100__w_addr,
                     1,((0xc2U >= ((IData)(1U) + (0xffU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                        && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                  (((IData)(1U) + (0xffU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                   >> 5U)] >> (0x1fU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))),
                     39,((((0xc2U >= ((IData)(2U) + 
                                      (0xffU & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))
                            ? (0x1fffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x26U) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q))))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q))))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(0x21U) 
                                                                         + 
                                                                         (0xffU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (((IData)(2U) 
                                                                          + 
                                                                          (0xffU 
                                                                           & ((IData)(0x27U) 
                                                                              * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                                         >> 5U)])) 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))))
                            : 0ULL) << 2U) | (QData)((IData)(
                                                             ((((0xc2U 
                                                                 >= 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (0xffU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                                                                && (1U 
                                                                    & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(1U) 
                                                                         + 
                                                                         (0xffU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)] 
                                                                       >> 
                                                                       (0x1fU 
                                                                        & ((IData)(1U) 
                                                                           + 
                                                                           (0xffU 
                                                                            & ((IData)(0x27U) 
                                                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                                               << 1U) 
                                                              | (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__cnt_down_sig))))));
        VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 293, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 294, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Write Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__100__w_addr);
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         298);
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : TB: OBI Write Req Deasserted.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         302);
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__101__timeout_count = 0U;
    VL_WRITEF_NX("%t : TB: Waiting for SPI Engine to finish...\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         391);
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__expect_grant = 1U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__r_addr = 0x20001008U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__timeout_count_gnt = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__timeout_count_rvalid = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__r_data_val = 0xdeadbeefU;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__r_err = 0U;
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         322);
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__req_txn[0U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__req_txn[1U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__req_txn[2U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__req_txn[0U] 
        = (1U | __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__req_txn[0U]);
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__req_txn[1U] 
        = ((0x1fU & __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__req_txn[1U]) 
           | ((IData)((0xfULL | ((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__r_addr)) 
                                 << 5U))) << 5U));
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__req_txn[2U] 
        = (0x3ffU & (((IData)((0xfULL | ((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__r_addr)) 
                                         << 5U))) >> 0x1bU) 
                     | ((IData)(((0xfULL | ((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__r_addr)) 
                                            << 5U)) 
                                 >> 0x20U)) << 5U)));
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__req_txn[0U] 
        = ((0xffffffe3U & __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__req_txn[0U]) 
           | (0x1cU & (VL_MODDIVS_III(32, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__timeout_count_gnt, (IData)(8U)) 
                       << 2U)));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__req_txn[0U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__req_txn[1U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__req_txn[2U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x (Expect Grant: %b)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__r_addr,
                 1,(IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__expect_grant));
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__grant_received = 0U;
    if (__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__expect_grant) {
        while (((~ ((0xc2U >= ((IData)(1U) + (0xffU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                    && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                              (((IData)(1U) + (0xffU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                               >> 5U)] >> (0x1fU & 
                                           ((IData)(1U) 
                                            + (0xffU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))))) 
                & VL_GTS_III(32, 0xbb8U, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__timeout_count_gnt))) {
            co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                                 "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                                 336);
            __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__timeout_count_gnt 
                = ((IData)(1U) + __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__timeout_count_gnt);
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0xbb8U, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__timeout_count_gnt))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:340: Assertion failed in %Ntb_user_domain_hw_ctrl.read_obi: %t : TB: Timeout waiting for OBI grant during read from 0x%x. GNT=%b. Rsp: %12#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__r_addr,
                         1,((0xc2U >= ((IData)(1U) 
                                       + (0xffU & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                            && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                      (((IData)(1U) 
                                        + (0xffU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                       >> 5U)] >> (0x1fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))),
                         39,((((0xc2U >= ((IData)(2U) 
                                          + (0xffU 
                                             & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))
                                ? (0x1fffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                       (((IData)(0x26U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q))))))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))) 
                                      | (((0U == (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q))))))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                           (((IData)(0x21U) 
                                                             + 
                                                             (0xffU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))) 
                                         | ((QData)((IData)(
                                                            vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                            (((IData)(2U) 
                                                              + 
                                                              (0xffU 
                                                               & ((IData)(0x27U) 
                                                                  * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                             >> 5U)])) 
                                            >> (0x1fU 
                                                & ((IData)(2U) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(0x27U) 
                                                       * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))))
                                : 0ULL) << 2U) | (QData)((IData)(
                                                                 ((((0xc2U 
                                                                     >= 
                                                                     ((IData)(1U) 
                                                                      + 
                                                                      (0xffU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                                                                    && (1U 
                                                                        & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                           (((IData)(1U) 
                                                                             + 
                                                                             (0xffU 
                                                                              & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                            >> 5U)] 
                                                                           >> 
                                                                           (0x1fU 
                                                                            & ((IData)(1U) 
                                                                               + 
                                                                               (0xffU 
                                                                                & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__cnt_down_sig))))));
            VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 340, "");
            __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__r_err = 1U;
            VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 342, "");
        }
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__grant_received = 1U;
        VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__r_addr);
    } else {
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             347);
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             347);
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             347);
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             347);
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             347);
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             347);
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             347);
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             347);
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             347);
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             347);
        if (VL_UNLIKELY(((0xc2U >= ((IData)(1U) + (0xffU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                         && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                   (((IData)(1U) + 
                                     (0xffU & ((IData)(0x27U) 
                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                    >> 5U)] >> (0x1fU 
                                                & ((IData)(1U) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(0x27U) 
                                                       * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:349: Assertion failed in %Ntb_user_domain_hw_ctrl.read_obi: %t : TB: Expected NO grant for addr 0x%x, but received grant!\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__r_addr);
            VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 349, "");
            __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__r_err = 1U;
        }
        VL_WRITEF_NX("%t : TB: OBI Read No Grant (as expected for invalid addr): Addr=0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__r_addr,
                     1,((0xc2U >= ((IData)(1U) + (0xffU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                        && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                  (((IData)(1U) + (0xffU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                   >> 5U)] >> (0x1fU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))));
    }
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         357);
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing = 0U;
    if (VL_UNLIKELY(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__grant_received)) {
        VL_WRITEF_NX("%t : TB: Waiting for OBI rvalid from Addr=0x%x...\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__r_addr);
        while (((~ (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__cnt_down_sig)) 
                & VL_GTS_III(32, 0xbb8U, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__timeout_count_rvalid))) {
            co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                                 "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                                 364);
            __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__timeout_count_rvalid 
                = ((IData)(1U) + __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__timeout_count_rvalid);
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0xbb8U, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__timeout_count_rvalid))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:368: Assertion failed in %Ntb_user_domain_hw_ctrl.read_obi: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. RVALID=%b. Rsp: %12#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__r_addr,
                         1,(IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__cnt_down_sig),
                         39,((((0xc2U >= ((IData)(2U) 
                                          + (0xffU 
                                             & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))
                                ? (0x1fffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                       (((IData)(0x26U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q))))))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))) 
                                      | (((0U == (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q))))))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                           (((IData)(0x21U) 
                                                             + 
                                                             (0xffU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))) 
                                         | ((QData)((IData)(
                                                            vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                            (((IData)(2U) 
                                                              + 
                                                              (0xffU 
                                                               & ((IData)(0x27U) 
                                                                  * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                             >> 5U)])) 
                                            >> (0x1fU 
                                                & ((IData)(2U) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(0x27U) 
                                                       * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))))
                                : 0ULL) << 2U) | (QData)((IData)(
                                                                 ((((0xc2U 
                                                                     >= 
                                                                     ((IData)(1U) 
                                                                      + 
                                                                      (0xffU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                                                                    && (1U 
                                                                        & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                           (((IData)(1U) 
                                                                             + 
                                                                             (0xffU 
                                                                              & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                            >> 5U)] 
                                                                           >> 
                                                                           (0x1fU 
                                                                            & ((IData)(1U) 
                                                                               + 
                                                                               (0xffU 
                                                                                & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__cnt_down_sig))))));
            VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 368, "");
            __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__r_err = 1U;
            VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 370, "");
        }
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__rsp_r_chan_temp 
            = ((0xc2U >= ((IData)(2U) + (0xffU & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))
                ? (0x1fffffffffULL & (((QData)((IData)(
                                                       vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                       (((IData)(0x26U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q))))))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))) 
                                      | (((0U == (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q))))))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                           (((IData)(0x21U) 
                                                             + 
                                                             (0xffU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))) 
                                         | ((QData)((IData)(
                                                            vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                            (((IData)(2U) 
                                                              + 
                                                              (0xffU 
                                                               & ((IData)(0x27U) 
                                                                  * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                             >> 5U)])) 
                                            >> (0x1fU 
                                                & ((IData)(2U) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(0x27U) 
                                                       * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))))
                : 0ULL);
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__r_data_val 
            = (IData)((__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__rsp_r_chan_temp 
                       >> 5U));
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__r_err 
            = (1U & (IData)((__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__rsp_r_chan_temp 
                             >> 1U)));
        VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x Err=%b RVALID=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__r_addr,
                     32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__r_data_val,
                     1,(IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__r_err),
                     1,vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__cnt_down_sig);
    } else {
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__r_err = 1U;
        VL_WRITEF_NX("%t : TB: No grant for Addr=0x%x, r_err set to %b by TB, r_data_val is 0x%x.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__r_addr,
                     1,(IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__r_err),
                     32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__r_data_val);
    }
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         381);
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__101__status_val 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__r_data_val;
    __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__101__read_err_local 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__102__r_err;
    if (VL_UNLIKELY(__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__101__read_err_local)) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:396: Assertion failed in %Ntb_user_domain_hw_ctrl.wait_spi_engine_idle: %t : TB: OBI Error reading SPI Engine Status while waiting for idle! Addr=0x20001008\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9);
        VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 396, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 397, "");
    }
    __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__101__busy_bit 
        = (1U & __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__101__status_val);
    __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__101__done_bit_tb 
        = (1U & (__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__101__status_val 
                 >> 1U));
    VL_WRITEF_NX("%t : TB: Polling SPI Engine Status (Addr 0x20001008): 0x%08x (done=%b, busy=%b)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__101__status_val,
                 1,(IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__101__done_bit_tb),
                 1,__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__101__busy_bit);
    __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__101__timeout_count 
        = ((IData)(1U) + __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__101__timeout_count);
    if (__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__101__busy_bit) {
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             404);
    }
    while (((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__101__busy_bit) 
            & VL_GTS_III(32, 0x61a8U, __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__101__timeout_count))) {
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__expect_grant = 1U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__r_addr = 0x20001008U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__timeout_count_gnt = 0U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__timeout_count_rvalid = 0U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__r_data_val = 0xdeadbeefU;
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__r_err = 0U;
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             322);
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__req_txn[0U] = 0U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__req_txn[1U] = 0U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__req_txn[2U] = 0U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__req_txn[0U] 
            = (1U | __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__req_txn[0U]);
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__req_txn[1U] 
            = ((0x1fU & __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__req_txn[1U]) 
               | ((IData)((0xfULL | ((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__r_addr)) 
                                     << 5U))) << 5U));
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__req_txn[2U] 
            = (0x3ffU & (((IData)((0xfULL | ((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__r_addr)) 
                                             << 5U))) 
                          >> 0x1bU) | ((IData)(((0xfULL 
                                                 | ((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__r_addr)) 
                                                    << 5U)) 
                                                >> 0x20U)) 
                                       << 5U)));
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__req_txn[0U] 
            = ((0xffffffe3U & __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__req_txn[0U]) 
               | (0x1cU & (VL_MODDIVS_III(32, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__timeout_count_gnt, (IData)(8U)) 
                           << 2U)));
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
            = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__req_txn[0U];
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
            = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__req_txn[1U];
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
            = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__req_txn[2U];
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing = 1U;
        VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x (Expect Grant: %b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__r_addr,
                     1,(IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__expect_grant));
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__grant_received = 0U;
        if (__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__expect_grant) {
            while (((~ ((0xc2U >= ((IData)(1U) + (0xffU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                        && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                  (((IData)(1U) + (0xffU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                   >> 5U)] >> (0x1fU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))))) 
                    & VL_GTS_III(32, 0xbb8U, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__timeout_count_gnt))) {
                co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                                     "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                                     336);
                __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__timeout_count_gnt 
                    = ((IData)(1U) + __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__timeout_count_gnt);
            }
            if (VL_UNLIKELY(VL_LTES_III(32, 0xbb8U, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__timeout_count_gnt))) {
                VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:340: Assertion failed in %Ntb_user_domain_hw_ctrl.read_obi: %t : TB: Timeout waiting for OBI grant during read from 0x%x. GNT=%b. Rsp: %12#\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1000),
                             -9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__r_addr,
                             1,((0xc2U >= ((IData)(1U) 
                                           + (0xffU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                                && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                          (((IData)(1U) 
                                            + (0xffU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                           >> 5U)] 
                                          >> (0x1fU 
                                              & ((IData)(1U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))),
                             39,((((0xc2U >= ((IData)(2U) 
                                              + (0xffU 
                                                 & ((IData)(0x27U) 
                                                    * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))
                                    ? (0x1fffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                           (((IData)(0x26U) 
                                                             + 
                                                             (0xffU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                            >> 5U)])) 
                                           << ((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(2U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(0x27U) 
                                                        * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q))))))
                                                ? 0x20U
                                                : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(2U) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(0x27U) 
                                                           * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))) 
                                          | (((0U == 
                                               (0x1fU 
                                                & ((IData)(2U) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(0x27U) 
                                                       * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q))))))
                                               ? 0ULL
                                               : ((QData)((IData)(
                                                                  vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                  (((IData)(0x21U) 
                                                                    + 
                                                                    (0xffU 
                                                                     & ((IData)(0x27U) 
                                                                        * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(2U) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(0x27U) 
                                                           * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                (((IData)(2U) 
                                                                  + 
                                                                  (0xffU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                                 >> 5U)])) 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(2U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(0x27U) 
                                                        * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))))
                                    : 0ULL) << 2U) 
                                 | (QData)((IData)(
                                                   ((((0xc2U 
                                                       >= 
                                                       ((IData)(1U) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                                                      && (1U 
                                                          & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                             (((IData)(1U) 
                                                               + 
                                                               (0xffU 
                                                                & ((IData)(0x27U) 
                                                                   * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                              >> 5U)] 
                                                             >> 
                                                             (0x1fU 
                                                              & ((IData)(1U) 
                                                                 + 
                                                                 (0xffU 
                                                                  & ((IData)(0x27U) 
                                                                     * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__cnt_down_sig))))));
                VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 340, "");
                __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__r_err = 1U;
                VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 342, "");
            }
            __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__grant_received = 1U;
            VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__r_addr);
        } else {
            co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                                 "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                                 347);
            co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                                 "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                                 347);
            co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                                 "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                                 347);
            co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                                 "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                                 347);
            co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                                 "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                                 347);
            co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                                 "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                                 347);
            co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                                 "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                                 347);
            co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                                 "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                                 347);
            co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                                 "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                                 347);
            co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                                 "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                                 347);
            if (VL_UNLIKELY(((0xc2U >= ((IData)(1U) 
                                        + (0xffU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                             && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                       (((IData)(1U) 
                                         + (0xffU & 
                                            ((IData)(0x27U) 
                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                        >> 5U)] >> 
                                       (0x1fU & ((IData)(1U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:349: Assertion failed in %Ntb_user_domain_hw_ctrl.read_obi: %t : TB: Expected NO grant for addr 0x%x, but received grant!\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1000),
                             -9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__r_addr);
                VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 349, "");
                __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__r_err = 1U;
            }
            VL_WRITEF_NX("%t : TB: OBI Read No Grant (as expected for invalid addr): Addr=0x%x. GNT=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__r_addr,
                         1,((0xc2U >= ((IData)(1U) 
                                       + (0xffU & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                            && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                      (((IData)(1U) 
                                        + (0xffU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                       >> 5U)] >> (0x1fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))));
        }
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             357);
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
            = (0xfffffffeU & vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U]);
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing = 0U;
        if (VL_UNLIKELY(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__grant_received)) {
            VL_WRITEF_NX("%t : TB: Waiting for OBI rvalid from Addr=0x%x...\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__r_addr);
            while (((~ (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__cnt_down_sig)) 
                    & VL_GTS_III(32, 0xbb8U, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__timeout_count_rvalid))) {
                co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                                     "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                                     364);
                __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__timeout_count_rvalid 
                    = ((IData)(1U) + __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__timeout_count_rvalid);
            }
            if (VL_UNLIKELY(VL_LTES_III(32, 0xbb8U, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__timeout_count_rvalid))) {
                VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:368: Assertion failed in %Ntb_user_domain_hw_ctrl.read_obi: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. RVALID=%b. Rsp: %12#\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1000),
                             -9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__r_addr,
                             1,(IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__cnt_down_sig),
                             39,((((0xc2U >= ((IData)(2U) 
                                              + (0xffU 
                                                 & ((IData)(0x27U) 
                                                    * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))
                                    ? (0x1fffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                           (((IData)(0x26U) 
                                                             + 
                                                             (0xffU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                            >> 5U)])) 
                                           << ((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(2U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(0x27U) 
                                                        * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q))))))
                                                ? 0x20U
                                                : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(2U) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(0x27U) 
                                                           * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))) 
                                          | (((0U == 
                                               (0x1fU 
                                                & ((IData)(2U) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(0x27U) 
                                                       * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q))))))
                                               ? 0ULL
                                               : ((QData)((IData)(
                                                                  vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                  (((IData)(0x21U) 
                                                                    + 
                                                                    (0xffU 
                                                                     & ((IData)(0x27U) 
                                                                        * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(2U) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(0x27U) 
                                                           * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                (((IData)(2U) 
                                                                  + 
                                                                  (0xffU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                                 >> 5U)])) 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(2U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(0x27U) 
                                                        * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))))
                                    : 0ULL) << 2U) 
                                 | (QData)((IData)(
                                                   ((((0xc2U 
                                                       >= 
                                                       ((IData)(1U) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                                                      && (1U 
                                                          & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                             (((IData)(1U) 
                                                               + 
                                                               (0xffU 
                                                                & ((IData)(0x27U) 
                                                                   * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                              >> 5U)] 
                                                             >> 
                                                             (0x1fU 
                                                              & ((IData)(1U) 
                                                                 + 
                                                                 (0xffU 
                                                                  & ((IData)(0x27U) 
                                                                     * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__cnt_down_sig))))));
                VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 368, "");
                __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__r_err = 1U;
                VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 370, "");
            }
            __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__rsp_r_chan_temp 
                = ((0xc2U >= ((IData)(2U) + (0xffU 
                                             & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))
                    ? (0x1fffffffffULL & (((QData)((IData)(
                                                           vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                           (((IData)(0x26U) 
                                                             + 
                                                             (0xffU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                            >> 5U)])) 
                                           << ((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(2U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(0x27U) 
                                                        * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q))))))
                                                ? 0x20U
                                                : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(2U) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(0x27U) 
                                                           * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))) 
                                          | (((0U == 
                                               (0x1fU 
                                                & ((IData)(2U) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(0x27U) 
                                                       * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q))))))
                                               ? 0ULL
                                               : ((QData)((IData)(
                                                                  vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                  (((IData)(0x21U) 
                                                                    + 
                                                                    (0xffU 
                                                                     & ((IData)(0x27U) 
                                                                        * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(2U) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(0x27U) 
                                                           * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                (((IData)(2U) 
                                                                  + 
                                                                  (0xffU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                                 >> 5U)])) 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(2U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(0x27U) 
                                                        * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))))
                    : 0ULL);
            __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__r_data_val 
                = (IData)((__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__rsp_r_chan_temp 
                           >> 5U));
            __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__r_err 
                = (1U & (IData)((__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__rsp_r_chan_temp 
                                 >> 1U)));
            VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x Err=%b RVALID=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__r_addr,
                         32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__r_data_val,
                         1,(IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__r_err),
                         1,vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__cnt_down_sig);
        } else {
            __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__r_err = 1U;
            VL_WRITEF_NX("%t : TB: No grant for Addr=0x%x, r_err set to %b by TB, r_data_val is 0x%x.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__r_addr,
                         1,(IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__r_err),
                         32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__r_data_val);
        }
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             381);
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] = 0U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] = 0U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] = 0U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__101__status_val 
            = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__r_data_val;
        __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__101__read_err_local 
            = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__103__r_err;
        if (VL_UNLIKELY(__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__101__read_err_local)) {
            VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:396: Assertion failed in %Ntb_user_domain_hw_ctrl.wait_spi_engine_idle: %t : TB: OBI Error reading SPI Engine Status while waiting for idle! Addr=0x20001008\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9);
            VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 396, "");
            VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 397, "");
        }
        __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__101__busy_bit 
            = (1U & __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__101__status_val);
        __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__101__done_bit_tb 
            = (1U & (__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__101__status_val 
                     >> 1U));
        VL_WRITEF_NX("%t : TB: Polling SPI Engine Status (Addr 0x20001008): 0x%08x (done=%b, busy=%b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__101__status_val,
                     1,(IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__101__done_bit_tb),
                     1,__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__101__busy_bit);
        __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__101__timeout_count 
            = ((IData)(1U) + __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__101__timeout_count);
        if (__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__101__busy_bit) {
            co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                                 "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                                 404);
        }
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x61a8U, __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__101__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:408: Assertion failed in %Ntb_user_domain_hw_ctrl.wait_spi_engine_idle: %t : TB: Timeout waiting for SPI Engine to become idle. Last Status: 0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__101__status_val);
        VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 408, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 409, "");
    }
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__expect_grant = 1U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__r_addr = 0x20001008U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__timeout_count_gnt = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__timeout_count_rvalid = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__r_data_val = 0xdeadbeefU;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__r_err = 0U;
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         322);
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__req_txn[0U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__req_txn[1U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__req_txn[2U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__req_txn[0U] 
        = (1U | __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__req_txn[0U]);
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__req_txn[1U] 
        = ((0x1fU & __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__req_txn[1U]) 
           | ((IData)((0xfULL | ((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__r_addr)) 
                                 << 5U))) << 5U));
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__req_txn[2U] 
        = (0x3ffU & (((IData)((0xfULL | ((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__r_addr)) 
                                         << 5U))) >> 0x1bU) 
                     | ((IData)(((0xfULL | ((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__r_addr)) 
                                            << 5U)) 
                                 >> 0x20U)) << 5U)));
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__req_txn[0U] 
        = ((0xffffffe3U & __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__req_txn[0U]) 
           | (0x1cU & (VL_MODDIVS_III(32, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__timeout_count_gnt, (IData)(8U)) 
                       << 2U)));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__req_txn[0U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__req_txn[1U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__req_txn[2U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x (Expect Grant: %b)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__r_addr,
                 1,(IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__expect_grant));
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__grant_received = 0U;
    if (__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__expect_grant) {
        while (((~ ((0xc2U >= ((IData)(1U) + (0xffU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                    && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                              (((IData)(1U) + (0xffU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                               >> 5U)] >> (0x1fU & 
                                           ((IData)(1U) 
                                            + (0xffU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))))) 
                & VL_GTS_III(32, 0xbb8U, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__timeout_count_gnt))) {
            co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                                 "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                                 336);
            __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__timeout_count_gnt 
                = ((IData)(1U) + __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__timeout_count_gnt);
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0xbb8U, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__timeout_count_gnt))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:340: Assertion failed in %Ntb_user_domain_hw_ctrl.read_obi: %t : TB: Timeout waiting for OBI grant during read from 0x%x. GNT=%b. Rsp: %12#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__r_addr,
                         1,((0xc2U >= ((IData)(1U) 
                                       + (0xffU & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                            && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                      (((IData)(1U) 
                                        + (0xffU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                       >> 5U)] >> (0x1fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))),
                         39,((((0xc2U >= ((IData)(2U) 
                                          + (0xffU 
                                             & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))
                                ? (0x1fffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                       (((IData)(0x26U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q))))))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))) 
                                      | (((0U == (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q))))))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                           (((IData)(0x21U) 
                                                             + 
                                                             (0xffU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))) 
                                         | ((QData)((IData)(
                                                            vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                            (((IData)(2U) 
                                                              + 
                                                              (0xffU 
                                                               & ((IData)(0x27U) 
                                                                  * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                             >> 5U)])) 
                                            >> (0x1fU 
                                                & ((IData)(2U) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(0x27U) 
                                                       * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))))
                                : 0ULL) << 2U) | (QData)((IData)(
                                                                 ((((0xc2U 
                                                                     >= 
                                                                     ((IData)(1U) 
                                                                      + 
                                                                      (0xffU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                                                                    && (1U 
                                                                        & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                           (((IData)(1U) 
                                                                             + 
                                                                             (0xffU 
                                                                              & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                            >> 5U)] 
                                                                           >> 
                                                                           (0x1fU 
                                                                            & ((IData)(1U) 
                                                                               + 
                                                                               (0xffU 
                                                                                & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__cnt_down_sig))))));
            VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 340, "");
            __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__r_err = 1U;
            VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 342, "");
        }
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__grant_received = 1U;
        VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__r_addr);
    } else {
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             347);
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             347);
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             347);
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             347);
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             347);
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             347);
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             347);
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             347);
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             347);
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             347);
        if (VL_UNLIKELY(((0xc2U >= ((IData)(1U) + (0xffU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                         && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                   (((IData)(1U) + 
                                     (0xffU & ((IData)(0x27U) 
                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                    >> 5U)] >> (0x1fU 
                                                & ((IData)(1U) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(0x27U) 
                                                       * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:349: Assertion failed in %Ntb_user_domain_hw_ctrl.read_obi: %t : TB: Expected NO grant for addr 0x%x, but received grant!\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__r_addr);
            VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 349, "");
            __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__r_err = 1U;
        }
        VL_WRITEF_NX("%t : TB: OBI Read No Grant (as expected for invalid addr): Addr=0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__r_addr,
                     1,((0xc2U >= ((IData)(1U) + (0xffU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                        && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                  (((IData)(1U) + (0xffU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                   >> 5U)] >> (0x1fU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))));
    }
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         357);
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing = 0U;
    if (VL_UNLIKELY(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__grant_received)) {
        VL_WRITEF_NX("%t : TB: Waiting for OBI rvalid from Addr=0x%x...\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__r_addr);
        while (((~ (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__cnt_down_sig)) 
                & VL_GTS_III(32, 0xbb8U, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__timeout_count_rvalid))) {
            co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                                 "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                                 364);
            __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__timeout_count_rvalid 
                = ((IData)(1U) + __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__timeout_count_rvalid);
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0xbb8U, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__timeout_count_rvalid))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:368: Assertion failed in %Ntb_user_domain_hw_ctrl.read_obi: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. RVALID=%b. Rsp: %12#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__r_addr,
                         1,(IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__cnt_down_sig),
                         39,((((0xc2U >= ((IData)(2U) 
                                          + (0xffU 
                                             & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))
                                ? (0x1fffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                       (((IData)(0x26U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q))))))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))) 
                                      | (((0U == (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q))))))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                           (((IData)(0x21U) 
                                                             + 
                                                             (0xffU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))) 
                                         | ((QData)((IData)(
                                                            vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                            (((IData)(2U) 
                                                              + 
                                                              (0xffU 
                                                               & ((IData)(0x27U) 
                                                                  * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                             >> 5U)])) 
                                            >> (0x1fU 
                                                & ((IData)(2U) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(0x27U) 
                                                       * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))))
                                : 0ULL) << 2U) | (QData)((IData)(
                                                                 ((((0xc2U 
                                                                     >= 
                                                                     ((IData)(1U) 
                                                                      + 
                                                                      (0xffU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                                                                    && (1U 
                                                                        & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                           (((IData)(1U) 
                                                                             + 
                                                                             (0xffU 
                                                                              & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                            >> 5U)] 
                                                                           >> 
                                                                           (0x1fU 
                                                                            & ((IData)(1U) 
                                                                               + 
                                                                               (0xffU 
                                                                                & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__cnt_down_sig))))));
            VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 368, "");
            __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__r_err = 1U;
            VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 370, "");
        }
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__rsp_r_chan_temp 
            = ((0xc2U >= ((IData)(2U) + (0xffU & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))
                ? (0x1fffffffffULL & (((QData)((IData)(
                                                       vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                       (((IData)(0x26U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q))))))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))) 
                                      | (((0U == (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q))))))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                           (((IData)(0x21U) 
                                                             + 
                                                             (0xffU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))) 
                                         | ((QData)((IData)(
                                                            vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                            (((IData)(2U) 
                                                              + 
                                                              (0xffU 
                                                               & ((IData)(0x27U) 
                                                                  * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                             >> 5U)])) 
                                            >> (0x1fU 
                                                & ((IData)(2U) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(0x27U) 
                                                       * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))))
                : 0ULL);
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__r_data_val 
            = (IData)((__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__rsp_r_chan_temp 
                       >> 5U));
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__r_err 
            = (1U & (IData)((__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__rsp_r_chan_temp 
                             >> 1U)));
        VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x Err=%b RVALID=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__r_addr,
                     32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__r_data_val,
                     1,(IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__r_err),
                     1,vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__cnt_down_sig);
    } else {
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__r_err = 1U;
        VL_WRITEF_NX("%t : TB: No grant for Addr=0x%x, r_err set to %b by TB, r_data_val is 0x%x.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__r_addr,
                     1,(IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__r_err),
                     32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__r_data_val);
    }
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         381);
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__101__status_val 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__r_data_val;
    __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__101__read_err_local 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__104__r_err;
    VL_WRITEF_NX("%t : TB: SPI Engine finished. Final Status: 0x%08x (done=%b, busy=%b)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__101__status_val,
                 1,(1U & (__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__101__status_val 
                          >> 1U)),1,(1U & __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__101__status_val));
    __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__105__dc_is_data 
        = vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__send_byte_hw_ctrl__88__is_data;
    __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__105__cs2_active = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__105__cs1_active = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__105__ctrl_val = 0U;
    if ((1U & (~ (IData)((0U != __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__105__cs1_active))))) {
        __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__105__ctrl_val 
            = (1U | __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__105__ctrl_val);
    }
    if ((1U & (~ (IData)((0U != __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__105__cs2_active))))) {
        __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__105__ctrl_val 
            = (2U | __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__105__ctrl_val);
    }
    if ((0U != __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__105__dc_is_data)) {
        __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__105__ctrl_val 
            = (4U | __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__105__ctrl_val);
    }
    VL_WRITEF_NX("%t : TB: Writing HW Ctrl Reg (Addr 0x20002000): 0x%08x (CS1_N_out=%b, CS2_N_out=%b, DC_out=%b)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__105__ctrl_val,
                 1,(1U & __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__105__ctrl_val),
                 1,(1U & (__Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__105__ctrl_val 
                          >> 1U)),1,(1U & (__Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__105__ctrl_val 
                                           >> 2U)));
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__106__w_be = 1U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__106__w_data 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__105__ctrl_val;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__106__w_addr = 0x20002000U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__106__timeout_count = 0U;
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         276);
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__106__req_txn[0U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__106__req_txn[1U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__106__req_txn[2U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__106__req_txn[0U] 
        = (1U | __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__106__req_txn[0U]);
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__106__req_txn[1U] 
        = ((0x1ffU & __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__106__req_txn[1U]) 
           | ((IData)((1ULL | ((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__106__w_addr)) 
                               << 1U))) << 9U));
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__106__req_txn[2U] 
        = (0x3ffU & (((IData)((1ULL | ((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__106__w_addr)) 
                                       << 1U))) >> 0x17U) 
                     | ((IData)(((1ULL | ((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__106__w_addr)) 
                                          << 1U)) >> 0x20U)) 
                        << 9U)));
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__106__req_txn[0U] 
        = ((3U & __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__106__req_txn[0U]) 
           | ((IData)((((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__106__w_be)) 
                        << 0x23U) | (((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__106__w_data)) 
                                      << 3U) | (QData)((IData)(
                                                               (7U 
                                                                & VL_MODDIVS_III(32, __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__106__timeout_count, (IData)(8U)))))))) 
              << 2U));
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__106__req_txn[1U] 
        = ((0xfffffe00U & __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__106__req_txn[1U]) 
           | (((IData)((((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__106__w_be)) 
                         << 0x23U) | (((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__106__w_data)) 
                                       << 3U) | (QData)((IData)(
                                                                (7U 
                                                                 & VL_MODDIVS_III(32, __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__106__timeout_count, (IData)(8U)))))))) 
               >> 0x1eU) | ((IData)(((((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__106__w_be)) 
                                       << 0x23U) | 
                                      (((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__106__w_data)) 
                                        << 3U) | (QData)((IData)(
                                                                 (7U 
                                                                  & VL_MODDIVS_III(32, __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__106__timeout_count, (IData)(8U))))))) 
                                     >> 0x20U)) << 2U)));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__106__req_txn[0U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__106__req_txn[1U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__106__req_txn[2U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Write Req : Addr=0x%x, Data=0x%x, BE=0x%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__106__w_addr,
                 32,__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__106__w_data,
                 4,(IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__106__w_be));
    while (((~ ((0xc2U >= ((IData)(1U) + (0xffU & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                          (((IData)(1U) + (0xffU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                           >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                + (0xffU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))))) 
            & VL_GTS_III(32, 0xbb8U, __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__106__timeout_count))) {
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             289);
        __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__106__timeout_count 
            = ((IData)(1U) + __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__106__timeout_count);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0xbb8U, __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__106__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:293: Assertion failed in %Ntb_user_domain_hw_ctrl.write_obi: %t : TB: Timeout waiting for OBI grant during write to 0x%x. GNT=%b. Rsp: %12#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__106__w_addr,
                     1,((0xc2U >= ((IData)(1U) + (0xffU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                        && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                  (((IData)(1U) + (0xffU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                   >> 5U)] >> (0x1fU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))),
                     39,((((0xc2U >= ((IData)(2U) + 
                                      (0xffU & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))
                            ? (0x1fffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x26U) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q))))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q))))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(0x21U) 
                                                                         + 
                                                                         (0xffU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (((IData)(2U) 
                                                                          + 
                                                                          (0xffU 
                                                                           & ((IData)(0x27U) 
                                                                              * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                                         >> 5U)])) 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))))
                            : 0ULL) << 2U) | (QData)((IData)(
                                                             ((((0xc2U 
                                                                 >= 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (0xffU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                                                                && (1U 
                                                                    & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(1U) 
                                                                         + 
                                                                         (0xffU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)] 
                                                                       >> 
                                                                       (0x1fU 
                                                                        & ((IData)(1U) 
                                                                           + 
                                                                           (0xffU 
                                                                            & ((IData)(0x27U) 
                                                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                                               << 1U) 
                                                              | (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__cnt_down_sig))))));
        VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 293, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 294, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Write Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__106__w_addr);
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         298);
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : TB: OBI Write Req Deasserted.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         302);
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] = 0U;
    VL_WRITEF_NX("%t : TB: Dummy Read from UserSpiCtrl (GPIO Addr 0x20002000) after CS/DC write.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__expect_grant = 1U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__r_addr = 0x20002000U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__timeout_count_gnt = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__timeout_count_rvalid = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__r_data_val = 0xdeadbeefU;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__r_err = 0U;
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         322);
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__req_txn[0U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__req_txn[1U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__req_txn[2U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__req_txn[0U] 
        = (1U | __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__req_txn[0U]);
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__req_txn[1U] 
        = ((0x1fU & __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__req_txn[1U]) 
           | ((IData)((0xfULL | ((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__r_addr)) 
                                 << 5U))) << 5U));
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__req_txn[2U] 
        = (0x3ffU & (((IData)((0xfULL | ((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__r_addr)) 
                                         << 5U))) >> 0x1bU) 
                     | ((IData)(((0xfULL | ((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__r_addr)) 
                                            << 5U)) 
                                 >> 0x20U)) << 5U)));
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__req_txn[0U] 
        = ((0xffffffe3U & __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__req_txn[0U]) 
           | (0x1cU & (VL_MODDIVS_III(32, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__timeout_count_gnt, (IData)(8U)) 
                       << 2U)));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__req_txn[0U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__req_txn[1U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__req_txn[2U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x (Expect Grant: %b)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__r_addr,
                 1,(IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__expect_grant));
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__grant_received = 0U;
    if (__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__expect_grant) {
        while (((~ ((0xc2U >= ((IData)(1U) + (0xffU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                    && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                              (((IData)(1U) + (0xffU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                               >> 5U)] >> (0x1fU & 
                                           ((IData)(1U) 
                                            + (0xffU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))))) 
                & VL_GTS_III(32, 0xbb8U, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__timeout_count_gnt))) {
            co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                                 "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                                 336);
            __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__timeout_count_gnt 
                = ((IData)(1U) + __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__timeout_count_gnt);
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0xbb8U, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__timeout_count_gnt))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:340: Assertion failed in %Ntb_user_domain_hw_ctrl.read_obi: %t : TB: Timeout waiting for OBI grant during read from 0x%x. GNT=%b. Rsp: %12#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__r_addr,
                         1,((0xc2U >= ((IData)(1U) 
                                       + (0xffU & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                            && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                      (((IData)(1U) 
                                        + (0xffU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                       >> 5U)] >> (0x1fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))),
                         39,((((0xc2U >= ((IData)(2U) 
                                          + (0xffU 
                                             & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))
                                ? (0x1fffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                       (((IData)(0x26U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q))))))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))) 
                                      | (((0U == (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q))))))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                           (((IData)(0x21U) 
                                                             + 
                                                             (0xffU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))) 
                                         | ((QData)((IData)(
                                                            vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                            (((IData)(2U) 
                                                              + 
                                                              (0xffU 
                                                               & ((IData)(0x27U) 
                                                                  * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                             >> 5U)])) 
                                            >> (0x1fU 
                                                & ((IData)(2U) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(0x27U) 
                                                       * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))))
                                : 0ULL) << 2U) | (QData)((IData)(
                                                                 ((((0xc2U 
                                                                     >= 
                                                                     ((IData)(1U) 
                                                                      + 
                                                                      (0xffU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                                                                    && (1U 
                                                                        & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                           (((IData)(1U) 
                                                                             + 
                                                                             (0xffU 
                                                                              & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                            >> 5U)] 
                                                                           >> 
                                                                           (0x1fU 
                                                                            & ((IData)(1U) 
                                                                               + 
                                                                               (0xffU 
                                                                                & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__cnt_down_sig))))));
            VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 340, "");
            __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__r_err = 1U;
            VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 342, "");
        }
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__grant_received = 1U;
        VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__r_addr);
    } else {
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             347);
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             347);
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             347);
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             347);
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             347);
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             347);
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             347);
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             347);
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             347);
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             347);
        if (VL_UNLIKELY(((0xc2U >= ((IData)(1U) + (0xffU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                         && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                   (((IData)(1U) + 
                                     (0xffU & ((IData)(0x27U) 
                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                    >> 5U)] >> (0x1fU 
                                                & ((IData)(1U) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(0x27U) 
                                                       * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:349: Assertion failed in %Ntb_user_domain_hw_ctrl.read_obi: %t : TB: Expected NO grant for addr 0x%x, but received grant!\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__r_addr);
            VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 349, "");
            __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__r_err = 1U;
        }
        VL_WRITEF_NX("%t : TB: OBI Read No Grant (as expected for invalid addr): Addr=0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__r_addr,
                     1,((0xc2U >= ((IData)(1U) + (0xffU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                        && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                  (((IData)(1U) + (0xffU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                   >> 5U)] >> (0x1fU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))));
    }
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         357);
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing = 0U;
    if (VL_UNLIKELY(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__grant_received)) {
        VL_WRITEF_NX("%t : TB: Waiting for OBI rvalid from Addr=0x%x...\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__r_addr);
        while (((~ (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__cnt_down_sig)) 
                & VL_GTS_III(32, 0xbb8U, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__timeout_count_rvalid))) {
            co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                                 "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                                 364);
            __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__timeout_count_rvalid 
                = ((IData)(1U) + __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__timeout_count_rvalid);
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0xbb8U, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__timeout_count_rvalid))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:368: Assertion failed in %Ntb_user_domain_hw_ctrl.read_obi: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. RVALID=%b. Rsp: %12#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__r_addr,
                         1,(IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__cnt_down_sig),
                         39,((((0xc2U >= ((IData)(2U) 
                                          + (0xffU 
                                             & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))
                                ? (0x1fffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                       (((IData)(0x26U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q))))))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))) 
                                      | (((0U == (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q))))))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                           (((IData)(0x21U) 
                                                             + 
                                                             (0xffU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))) 
                                         | ((QData)((IData)(
                                                            vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                            (((IData)(2U) 
                                                              + 
                                                              (0xffU 
                                                               & ((IData)(0x27U) 
                                                                  * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                             >> 5U)])) 
                                            >> (0x1fU 
                                                & ((IData)(2U) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(0x27U) 
                                                       * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))))
                                : 0ULL) << 2U) | (QData)((IData)(
                                                                 ((((0xc2U 
                                                                     >= 
                                                                     ((IData)(1U) 
                                                                      + 
                                                                      (0xffU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                                                                    && (1U 
                                                                        & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                           (((IData)(1U) 
                                                                             + 
                                                                             (0xffU 
                                                                              & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                            >> 5U)] 
                                                                           >> 
                                                                           (0x1fU 
                                                                            & ((IData)(1U) 
                                                                               + 
                                                                               (0xffU 
                                                                                & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__cnt_down_sig))))));
            VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 368, "");
            __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__r_err = 1U;
            VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 370, "");
        }
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__rsp_r_chan_temp 
            = ((0xc2U >= ((IData)(2U) + (0xffU & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))
                ? (0x1fffffffffULL & (((QData)((IData)(
                                                       vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                       (((IData)(0x26U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q))))))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))) 
                                      | (((0U == (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q))))))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                           (((IData)(0x21U) 
                                                             + 
                                                             (0xffU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))) 
                                         | ((QData)((IData)(
                                                            vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                            (((IData)(2U) 
                                                              + 
                                                              (0xffU 
                                                               & ((IData)(0x27U) 
                                                                  * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                             >> 5U)])) 
                                            >> (0x1fU 
                                                & ((IData)(2U) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(0x27U) 
                                                       * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))))
                : 0ULL);
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__r_data_val 
            = (IData)((__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__rsp_r_chan_temp 
                       >> 5U));
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__r_err 
            = (1U & (IData)((__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__rsp_r_chan_temp 
                             >> 1U)));
        VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x Err=%b RVALID=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__r_addr,
                     32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__r_data_val,
                     1,(IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__r_err),
                     1,vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__cnt_down_sig);
    } else {
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__r_err = 1U;
        VL_WRITEF_NX("%t : TB: No grant for Addr=0x%x, r_err set to %b by TB, r_data_val is 0x%x.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__r_addr,
                     1,(IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__r_err),
                     32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__r_data_val);
    }
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         381);
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__105__dummy_rdata 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__r_data_val;
    __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__105__dummy_rerr 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__107__r_err;
    if (VL_UNLIKELY(__Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__105__dummy_rerr)) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:431: Assertion failed in %Ntb_user_domain_hw_ctrl.set_hw_cs_dc: Error during dummy read of SPI HW Ctrl\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 431, "");
    }
    if (VL_UNLIKELY((__Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__105__dummy_rdata 
                     != __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__105__ctrl_val))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_user_domain_hw_ctrl.sv:432: %Ntb_user_domain_hw_ctrl.set_hw_cs_dc: Dummy read of SPI HW Ctrl (0x20002000) got 0x%x, expected 0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,__Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__105__dummy_rdata,
                     32,__Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__105__ctrl_val);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                         433);
    VL_WRITEF_NX("%t : TB: Finished HW Ctrl Send Byte 0x%02x to CS%0d (DC=%s)\n--- Font Byte Sent ---\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__send_byte_hw_ctrl__88__byte_val),
                 32,vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__send_byte_hw_ctrl__88__cs_pin_idx,
                 32,((0U != vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__send_byte_hw_ctrl__88__is_data)
                      ? 0x44617461U : 0x436d64U));
    co_await vlSelfRef.__VdlySched.delay(0x7a120ULL, 
                                         nullptr, "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                         537);
    VL_WRITEF_NX("%t : TB: Full User Domain Test Sequence Complete.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 539, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_user_domain_hw_ctrl___024root___dump_triggers__act(Vtb_user_domain_hw_ctrl___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_user_domain_hw_ctrl___024root___eval_triggers__act(Vtb_user_domain_hw_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_hw_ctrl___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o__1)));
    vlSelfRef.__VactTriggered.set(1U, (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_prng_obi_rsp 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__user_prng_obi_rsp__1));
    vlSelfRef.__VactTriggered.set(2U, (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_font_rom_obi_rsp 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__user_font_rom_obi_rsp__1));
    vlSelfRef.__VactTriggered.set(3U, (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_ctrl_obi_rsp 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_ctrl_obi_rsp__1));
    vlSelfRef.__VactTriggered.set(4U, ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w__1)));
    vlSelfRef.__VactTriggered.set(5U, ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r__1)));
    vlSelfRef.__VactTriggered.set(6U, ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__is_ctrl_write) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__is_ctrl_write__1)));
    vlSelfRef.__VactTriggered.set(7U, ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__is_rdata_read) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__is_rdata_read__1)));
    vlSelfRef.__VactTriggered.set(8U, ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__clk_i) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__clk_i__0))));
    vlSelfRef.__VactTriggered.set(9U, ((~ (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__rst_ni)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__rst_ni__0)));
    vlSelfRef.__VactTriggered.set(0xaU, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o__1 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__user_prng_obi_rsp__1 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_prng_obi_rsp;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__user_font_rom_obi_rsp__1 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_font_rom_obi_rsp;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_ctrl_obi_rsp__1 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_ctrl_obi_rsp;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w__1 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r__1 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__is_ctrl_write__1 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__is_ctrl_write;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__is_rdata_read__1 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__is_rdata_read;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__clk_i__0 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__rst_ni__0 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__rst_ni;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(0U, 1U);
        vlSelfRef.__VactTriggered.set(1U, 1U);
        vlSelfRef.__VactTriggered.set(2U, 1U);
        vlSelfRef.__VactTriggered.set(3U, 1U);
        vlSelfRef.__VactTriggered.set(4U, 1U);
        vlSelfRef.__VactTriggered.set(5U, 1U);
        vlSelfRef.__VactTriggered.set(6U, 1U);
        vlSelfRef.__VactTriggered.set(7U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_user_domain_hw_ctrl___024root___dump_triggers__act(vlSelf);
    }
#endif
}

extern const VlWide<12>/*383:0*/ Vtb_user_domain_hw_ctrl__ConstPool__CONST_h1aa720ac_0;

VL_INLINE_OPT void Vtb_user_domain_hw_ctrl___024root___act_comb__TOP__2(Vtb_user_domain_hw_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_hw_ctrl___024root___act_comb__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    std::string __Vtemp_4;
    // Body
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_d 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__forward_this_request = 0U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[0U] 
        = Vtb_user_domain_hw_ctrl__ConstPool__CONST_h1aa720ac_0[0U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[1U] 
        = Vtb_user_domain_hw_ctrl__ConstPool__CONST_h1aa720ac_0[1U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[2U] 
        = Vtb_user_domain_hw_ctrl__ConstPool__CONST_h1aa720ac_0[2U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[3U] 
        = Vtb_user_domain_hw_ctrl__ConstPool__CONST_h1aa720ac_0[3U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[4U] 
        = Vtb_user_domain_hw_ctrl__ConstPool__CONST_h1aa720ac_0[4U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[5U] 
        = Vtb_user_domain_hw_ctrl__ConstPool__CONST_h1aa720ac_0[5U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[6U] 
        = Vtb_user_domain_hw_ctrl__ConstPool__CONST_h1aa720ac_0[6U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[7U] 
        = Vtb_user_domain_hw_ctrl__ConstPool__CONST_h1aa720ac_0[7U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[8U] 
        = Vtb_user_domain_hw_ctrl__ConstPool__CONST_h1aa720ac_0[8U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[9U] 
        = Vtb_user_domain_hw_ctrl__ConstPool__CONST_h1aa720ac_0[9U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[0xaU] 
        = Vtb_user_domain_hw_ctrl__ConstPool__CONST_h1aa720ac_0[0xaU];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[0xbU] 
        = Vtb_user_domain_hw_ctrl__ConstPool__CONST_h1aa720ac_0[0xbU];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__target_is_current_selection 
        = ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx) 
           == (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__no_transactions_in_flight 
        = (0U == (7U & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__i_counter__DOT__counter_q)));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__one_transaction_is_completing 
        = ((1U == (7U & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__i_counter__DOT__counter_q))) 
           & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__cnt_down_sig));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__sub_conditions_for_forwarding 
        = (((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__target_is_current_selection) 
            | (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__no_transactions_in_flight)) 
           | (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__one_transaction_is_completing));
    if ((((~ ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__i_counter__DOT__counter_q) 
              >> 3U)) & vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U]) 
         & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__sub_conditions_for_forwarding))) {
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT____Vlvbound_h19899a0f__0 
            = (1U & vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U]);
        if ((0x171U >= (0x1ffU & ((IData)(0x4aU) * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) {
            vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[(0xfU 
                                                                                & (((IData)(0x4aU) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)) 
                                                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & ((IData)(0x4aU) 
                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                    & vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[
                    (0xfU & (((IData)(0x4aU) * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)) 
                             >> 5U))]) | ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT____Vlvbound_h19899a0f__0) 
                                          << (0x1fU 
                                              & ((IData)(0x4aU) 
                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))));
        }
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__forward_this_request = 1U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT____Vlvbound_h82b62aa2__0[0U] 
            = ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
                << 0x1fU) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
                             >> 1U));
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT____Vlvbound_h82b62aa2__0[1U] 
            = ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
                << 0x1fU) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
                             >> 1U));
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT____Vlvbound_h82b62aa2__0[2U] 
            = (0x1ffU & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
                         >> 1U));
        if ((0x171U >= ((IData)(1U) + (0x1ffU & ((IData)(0x4aU) 
                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))) {
            VL_ASSIGNSEL_WW(370,73,((IData)(1U) + (0x1ffU 
                                                   & ((IData)(0x4aU) 
                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))), vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o, vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT____Vlvbound_h82b62aa2__0);
        }
    }
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__grant_condition_is_met 
        = ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__forward_this_request) 
           & ((0xc2U >= ((IData)(1U) + (0xffU & ((IData)(0x27U) 
                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
              && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                        (((IData)(1U) + (0xffU & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                         >> 5U)] >> (0x1fU & ((IData)(1U) 
                                              + (0xffU 
                                                 & ((IData)(0x27U) 
                                                    * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))));
    if (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__grant_condition_is_met) {
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_d 
            = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx;
    }
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__i_counter__DOT__counter_d 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__i_counter__DOT__counter_q;
    if ((((~ (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__grant_condition_was_met_q)) 
          & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__grant_condition_is_met)) 
         | ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__cnt_down_sig) 
            & (0U != (7U & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__i_counter__DOT__counter_q)))))) {
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__i_counter__DOT__counter_d 
            = (0xfU & ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__cnt_down_sig)
                        ? ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__i_counter__DOT__counter_q) 
                           - (IData)(1U)) : ((IData)(1U) 
                                             + (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__i_counter__DOT__counter_q))));
    }
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__rom_byte_data_comb 
        = ((0x474U > (0xfffU & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[8U] 
                                >> 8U))) ? ((0x473U 
                                             >= (0x7ffU 
                                                 & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[8U] 
                                                    >> 8U)))
                                             ? vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__rom_data
                                            [(0x7ffU 
                                              & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[8U] 
                                                 >> 8U))]
                                             : 0U) : 0U);
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__reg_rdata_comb = 0U;
    if ((0U == (0xfffU & ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[6U] 
                           << 2U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[5U] 
                                     >> 0x1eU))))) {
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__reg_rdata_comb 
            = (((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__dc_q) 
                << 2U) | (((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__cs2_n_q) 
                           << 1U) | (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__cs1_n_q)));
    }
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__is_ctrl_write 
        = ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[9U] 
            >> 8U) & (0x20000U == (0x720000U & vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[0xaU])));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__read_req 
        = (1U & ((~ (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[0xaU] 
                     >> 0x11U)) & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[9U] 
                                   >> 8U)));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT____VdfgRegularize_h62409202_0_3 
        = (1U & ((~ (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[3U] 
                     >> 0x13U)) & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[2U] 
                                   >> 0xaU)));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_prng_obi_rsp 
        = ((7ULL & vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_prng_obi_rsp) 
           | (((QData)((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__rdata_q)) 
               << 7U) | ((QData)((IData)(((0xeU & (
                                                   vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[9U] 
                                                   >> 9U)) 
                                          | (1U & (
                                                   (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[9U] 
                                                    >> 8U) 
                                                   & (~ (IData)(
                                                                (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_prng_obi_rsp 
                                                                 >> 1U)))))))) 
                         << 3U)));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__read_req 
        = (1U & ((~ (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[8U] 
                     >> 7U)) & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[6U] 
                                >> 0x1eU)));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__write_req 
        = (1U & ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[4U] 
                  >> 0x14U) & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[5U] 
                               >> 0x1dU)));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__read_req 
        = (1U & ((~ (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[5U] 
                     >> 0x1dU)) & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[4U] 
                                   >> 0x14U)));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT____Vcellinp__i_id_fifo__push_i 
        = (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[0U] 
                 & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_error_obi_rsp 
                            >> 1U))));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__is_rdata_read 
        = ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__read_req) 
           & (0x100000U == (0x700000U & vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[0xaU])));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o 
        = (((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT____VdfgRegularize_h62409202_0_3) 
            & (8U == (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[3U] 
                      >> 0x14U))) | ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[2U] 
                                      >> 0xaU) & (IData)(
                                                         (((0x88000U 
                                                            == 
                                                            (0x88000U 
                                                             & vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[3U])) 
                                                           & (0U 
                                                              == (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q))) 
                                                          & ((4U 
                                                              == 
                                                              (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[3U] 
                                                               >> 0x14U)) 
                                                             | (0U 
                                                                == 
                                                                (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[3U] 
                                                                 >> 0x14U)))))));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_font_rom_obi_rsp 
        = ((0x7ffffffffcULL & vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_font_rom_obi_rsp) 
           | (IData)((IData)(((((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__read_req) 
                                & (0x474U > (0xfffU 
                                             & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[8U] 
                                                >> 8U)))) 
                               << 1U) | (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__rvalid_q)))));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_font_rom_obi_rsp 
        = ((7ULL & vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_font_rom_obi_rsp) 
           | (((QData)((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__rdata_q)) 
               << 7U) | ((QData)((IData)(((0xeU & (
                                                   vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[7U] 
                                                   << 1U)) 
                                          | (1U & (
                                                   ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[6U] 
                                                     >> 0x1eU) 
                                                    & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[8U] 
                                                       >> 7U)) 
                                                   | ((0x474U 
                                                       <= 
                                                       (0xfffU 
                                                        & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[8U] 
                                                           >> 8U))) 
                                                      & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__read_req))))))) 
                         << 3U)));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w 
        = ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__write_req) 
           & (0U == (0xfffU & ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[6U] 
                                << 2U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[5U] 
                                          >> 0x1eU)))));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r 
        = ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__read_req) 
           & (0U == (0xfffU & ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[6U] 
                                << 2U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[5U] 
                                          >> 0x1eU)))));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__gate_clock = 1U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_n 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_n 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT____Vcellinp__i_id_fifo__push_i) 
         & (1U != (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__gate_clock = 0U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_n 
            = ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q) 
               & ((IData)(1U) + (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q)));
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_error_obi_rsp) 
         & (0U != (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT____Vcellinp__i_id_fifo__push_i) 
           & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_error_obi_rsp)) 
          & (1U != (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_n 
            = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q;
    }
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_n 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_q;
    if (((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT____Vcellinp__i_id_fifo__push_i) 
         & (1U != (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT____Vlvbound_h3dcab515__0 
            = (7U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[0U] 
                     >> 2U));
        if ((2U >= (3U & ((IData)(3U) * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q))))) {
            vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_n 
                = (((~ ((IData)(7U) << (3U & ((IData)(3U) 
                                              * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q))))) 
                    & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_n)) 
                   | (7U & ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT____Vlvbound_h3dcab515__0) 
                            << (3U & ((IData)(3U) * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q))))));
        }
    }
    if (VL_UNLIKELY((0x400U & vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[2U]))) {
        __Vtemp_4 = Vtb_user_domain_hw_ctrl___024unit::__Venumtab_enum_name363
            [vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q];
        VL_WRITEF_NX("%t [DUT_OBI_DEBUG] req_i=%b, we_i=%b, addr_i[11:0]=%x, gnt_o=%b, state_q=%@\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[2U] 
                            >> 0xaU)),1,(1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[3U] 
                                               >> 0x13U)),
                     12,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[3U] 
                         >> 0x14U),1,(IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o),
                     -1,&(__Vtemp_4));
    }
}

VL_INLINE_OPT void Vtb_user_domain_hw_ctrl___024root___nba_sequent__TOP__0(Vtb_user_domain_hw_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_hw_ctrl___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rvalid_q_internal;
    __Vdly__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rvalid_q_internal = 0;
    IData/*31:0*/ __Vdly__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__rdata_q;
    __Vdly__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__rdata_q = 0;
    CData/*0:0*/ __Vdly__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__rvalid_q;
    __Vdly__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__rvalid_q = 0;
    IData/*31:0*/ __Vdly__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__rdata_q;
    __Vdly__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__rdata_q = 0;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    __Vdly__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__rdata_q 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__rdata_q;
    __Vdly__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__rvalid_q 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__rvalid_q;
    __Vdly__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__rdata_q 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__rdata_q;
    __Vdly__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rvalid_q_internal 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rvalid_q_internal;
    if (vlSelfRef.tb_user_domain_hw_ctrl__DOT__rst_ni) {
        if (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__read_granted_this_cycle) {
            if (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__is_rdata_read) {
                VL_WRITEF_NX("%t [PRNG_OBI_READ_LATCH] Read granted for RDATA_REG. Latching rdata_q=0x%x. rvalid_q becomes 1 NEXT cycle.\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,32,vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__prng_state_q);
                __Vdly__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__rdata_q 
                    = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__prng_state_q;
            } else {
                VL_WRITEF_NX("%t [PRNG_OBI_READ_LATCH] Read granted for UNKNOWN REG (should not happen if gnt is correct). Latching rdata_q=0. rvalid_q becomes 1 NEXT cycle.\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9);
                __Vdly__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__rdata_q = 0U;
            }
        } else if ((1U & (~ (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__rvalid_q)))) {
            __Vdly__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__rdata_q = 0U;
        }
        if (VL_UNLIKELY(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__trigger_prng_update)) {
            VL_WRITEF_NX("%t [PRNG_OBI_CTRL_WRITE] Write to CTRL_REG granted. trigger_prng_update asserted. Next PRNG state will be 0x%x.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,32,vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__prng_state_d);
        }
        if (VL_UNLIKELY(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__rvalid_q)) {
            VL_WRITEF_NX("%t [PRNG_OBI_RVALID_HIGH] rvalid_o is HIGH. rdata_o is 0x%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,32,vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__rdata_q);
        }
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__rvalid_q 
            = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__read_granted_this_cycle;
    } else {
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__rvalid_q = 0U;
        __Vdly__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__rdata_q = 0U;
    }
    if (vlSelfRef.tb_user_domain_hw_ctrl__DOT__rst_ni) {
        __Vdly__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__rvalid_q 
            = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__read_req_accepted;
        if (VL_UNLIKELY(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__read_req_accepted)) {
            VL_WRITEF_NX("%t [FONT_ROM_FF] read_req_accepted=1. Addr=0x%x (Offset=0x%x). Byte read=0x%x. rdata_q set to 0x%x. rvalid_q becomes 1.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,32,((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[9U] 
                                 << 0x18U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[8U] 
                                              >> 8U)),
                         12,(0xfffU & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[8U] 
                                       >> 8U)),8,(IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__rom_byte_data_comb),
                         32,vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__rdata_q);
            vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__rdata_q 
                = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__rom_byte_data_comb;
        } else if ((1U & (~ (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__rvalid_q)))) {
            vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__rdata_q = 0U;
        }
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__read_req_accepted 
            = ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__read_req) 
               & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_font_rom_obi_rsp 
                          >> 1U)));
    } else {
        __Vdly__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__rvalid_q = 0U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__rdata_q = 0U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__read_req_accepted = 0U;
    }
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q 
        = ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__rst_ni) 
           && (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_n));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__grant_condition_was_met_q 
        = ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__rst_ni) 
           && (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__grant_condition_is_met));
    if (vlSelfRef.tb_user_domain_hw_ctrl__DOT__rst_ni) {
        if ((((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__write_req) 
              & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w)) 
             & (0U == (0xfffU & ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[6U] 
                                  << 2U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[5U] 
                                            >> 0x1eU)))))) {
            if (VL_UNLIKELY((0x2000000U & vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[5U]))) {
                VL_WRITEF_NX("%t [SPI_CTRL_GPIO_WRITE] AddrOff=0x%x, Data=0x%x -> CS1_N=%b, CS2_N=%b, DC=%b\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,12,(0xfffU & ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[6U] 
                                               << 2U) 
                                              | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[5U] 
                                                 >> 0x1eU))),
                             32,((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[5U] 
                                  << 7U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[4U] 
                                            >> 0x19U)),
                             1,(1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[4U] 
                                      >> 0x19U)),1,
                             (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[4U] 
                                    >> 0x1aU)),1,(1U 
                                                  & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[4U] 
                                                     >> 0x1bU)));
                vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__cs1_n_q 
                    = (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[4U] 
                             >> 0x19U));
                vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__cs2_n_q 
                    = (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[4U] 
                             >> 0x1aU));
                vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__dc_q 
                    = (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[4U] 
                             >> 0x1bU));
            }
        }
        if (VL_UNLIKELY(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__read_granted_this_cycle)) {
            VL_WRITEF_NX("%t [SPI_CTRL_READ_LATCH] Read granted for AddrOff=0x%x. Latching rdata_q=0x%x. rvalid_q becomes 1 NEXT cycle.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,12,(0xfffU & ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[6U] 
                                           << 2U) | 
                                          (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[5U] 
                                           >> 0x1eU))),
                         32,vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__reg_rdata_comb);
            __Vdly__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__rdata_q 
                = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__reg_rdata_comb;
        } else if ((1U & (~ (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__rvalid_q)))) {
            __Vdly__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__rdata_q = 0U;
        }
        if (VL_UNLIKELY(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__rvalid_q)) {
            VL_WRITEF_NX("%t [SPI_CTRL_RVALID_HIGH] rvalid_o is HIGH. rdata_o is 0x%x for AddrOff=0x%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,32,vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__rdata_q,
                         12,(0xfffU & ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[6U] 
                                        << 2U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[5U] 
                                                  >> 0x1eU))));
        }
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__rvalid_q 
            = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__read_granted_this_cycle;
    } else {
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__cs1_n_q = 1U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__cs2_n_q = 1U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__dc_q = 0U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__rvalid_q = 0U;
        __Vdly__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__rdata_q = 0U;
    }
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q 
        = ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__rst_ni) 
           && (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_n));
    if (vlSelfRef.tb_user_domain_hw_ctrl__DOT__rst_ni) {
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__i_counter__DOT__counter_q 
            = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__i_counter__DOT__counter_d;
        if ((1U & (~ (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__gate_clock)))) {
            vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_q 
                = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_n;
        }
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q 
            = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_n;
    } else {
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__i_counter__DOT__counter_q = 0U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_q = 0U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q = 0U;
    }
    if (vlSelfRef.tb_user_domain_hw_ctrl__DOT__rst_ni) {
        if (VL_UNLIKELY(((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q) 
                         != (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_d)))) {
            __Vtemp_1 = Vtb_user_domain_hw_ctrl___024unit::__Venumtab_enum_name363
                [vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q];
            __Vtemp_2 = Vtb_user_domain_hw_ctrl___024unit::__Venumtab_enum_name363
                [vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_d];
            VL_WRITEF_NX("%t [DUT_FSM_DEBUG] State Transition: %@ -> %@\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,-1,&(__Vtemp_1),-1,&(__Vtemp_2));
        }
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q 
            = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_d;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q 
            = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_d;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_q 
            = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_d;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_q 
            = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_d;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__done_q 
            = ((2U == (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)) 
               & (3U == (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_d)));
        if (VL_UNLIKELY((((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[2U] 
                           >> 0xaU) & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[3U] 
                                       >> 0x13U)) & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o)))) {
            VL_WRITEF_NX("%t [DUT_OBI_WRITE] Write to addr_offset %x granted. Data LSB: 0x%02x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,12,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[3U] 
                                >> 0x14U),8,(0xffU 
                                             & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[2U] 
                                                >> 0xfU)));
            if ((4U == (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[3U] 
                        >> 0x14U))) {
                if ((0x8000U & vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[3U])) {
                    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_q 
                        = (0xffU & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[2U] 
                                    >> 0xfU));
                }
            } else if ((0U == (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[3U] 
                               >> 0x14U))) {
                if ((0x8000U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[3U] 
                                & vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[2U]))) {
                    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_q = 1U;
                }
            }
        }
        if (VL_UNLIKELY(((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT____VdfgRegularize_h62409202_0_3) 
                         & ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o) 
                            & (8U == (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[3U] 
                                      >> 0x14U)))))) {
            VL_WRITEF_NX("%t [DUT_READ_PATH] Read to STATUS_REG granted. Asserting rvalid. rdata = 0x%x. Status: {done=%b, busy=%b}\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,32,(IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__status_bits),
                         1,(1U & ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__status_bits) 
                                  >> 1U)),1,(1U & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__status_bits)));
            __Vdly__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rvalid_q_internal = 1U;
            vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rdata_q_internal 
                = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__status_bits;
        } else {
            if ((1U & (~ (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rvalid_q_internal)))) {
                vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rdata_q_internal = 0U;
            }
            __Vdly__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rvalid_q_internal = 0U;
        }
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q 
            = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_d;
    } else {
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q = 0U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_q = 0U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_q = 0U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q = 0U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q = 0U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__done_q = 0U;
        __Vdly__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rvalid_q_internal = 0U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rdata_q_internal = 0U;
    }
    if (vlSelfRef.tb_user_domain_hw_ctrl__DOT__rst_ni) {
        if (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__trigger_prng_update) {
            vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__prng_state_q 
                = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__prng_state_d;
        }
    } else {
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__prng_state_q = 0xdeadbeefU;
    }
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__rdata_q 
        = __Vdly__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__rdata_q;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__rvalid_q 
        = __Vdly__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__rvalid_q;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__rdata_q 
        = __Vdly__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__rdata_q;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rvalid_q_internal 
        = __Vdly__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rvalid_q_internal;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_error_obi_rsp = 0ULL;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_error_obi_rsp 
        = (0x7fULL & vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_error_obi_rsp);
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_error_obi_rsp 
        = ((7ULL & vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_error_obi_rsp) 
           | (0x5d6e558f00ULL | ((QData)((IData)((1U 
                                                  | (((2U 
                                                       >= 
                                                       (3U 
                                                        & ((IData)(3U) 
                                                           * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q))))
                                                       ? 
                                                      (7U 
                                                       & ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_q) 
                                                          >> 
                                                          (3U 
                                                           & ((IData)(3U) 
                                                              * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q)))))
                                                       : 0U) 
                                                     << 1U)))) 
                                 << 3U)));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_error_obi_rsp 
        = ((0x7ffffffffcULL & vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_error_obi_rsp) 
           | (IData)((IData)((((1U != (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q)) 
                               << 1U) | (0U != (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q))))));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_d 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_q;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_d 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_d 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_q;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__spi_sck_o_tb = 0U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__status_bits 
        = (((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__done_q) 
            << 1U) | ((0U != (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)) 
                      & (3U != (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q))));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_d 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__spi_mosi_o_tb 
        = (1U & ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_q) 
                 >> (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q)));
    if ((1U & (~ ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)))) {
            if (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_q) {
                vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_d = 0U;
            }
        }
        if ((1U & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q))) {
            vlSelfRef.tb_user_domain_hw_ctrl__DOT__spi_mosi_o_tb 
                = (1U & ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_q) 
                         >> 7U));
        }
    }
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_d 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q;
    if ((2U & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)))) {
            vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_d 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q)));
            if ((3U == (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q))) {
                vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_d = 0U;
                if ((0U != (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q))) {
                    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_d 
                        = (7U & ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q) 
                                 - (IData)(1U)));
                }
            }
            vlSelfRef.tb_user_domain_hw_ctrl__DOT__spi_sck_o_tb 
                = (2U <= (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q));
        }
        if ((1U & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q))) {
            vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_d = 0U;
        } else if ((3U == (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q))) {
            if ((0U == (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q))) {
                vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_d = 3U;
            }
        }
    } else if ((1U & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q))) {
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_d = 0U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_d = 7U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_d = 2U;
    } else if (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_q) {
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_d = 1U;
    }
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_engine_obi_rsp 
        = ((0x7fULL & vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_engine_obi_rsp) 
           | ((QData)((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rdata_q_internal)) 
              << 7U));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_n 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q;
    if (((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_error_obi_rsp) 
         & (0U != (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_n 
            = ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_n) 
               & ((IData)(1U) + (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q)));
    }
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__t1 
        = (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__prng_state_q 
           ^ VL_SHIFTL_III(32,32,32, vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__prng_state_q, 0xdU));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__t2 
        = (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__t1 
           ^ VL_SHIFTR_III(32,32,32, vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__t1, 0x11U));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__prng_state_d 
        = (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__t2 
           ^ VL_SHIFTL_III(32,32,32, vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__t2, 5U));
}
