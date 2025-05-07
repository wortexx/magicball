// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_user_domain_hw_ctrl.h for the primary calling header

#include "Vtb_user_domain_hw_ctrl__pch.h"
#include "Vtb_user_domain_hw_ctrl__Syms.h"
#include "Vtb_user_domain_hw_ctrl___024root.h"

VlCoroutine Vtb_user_domain_hw_ctrl___024root___eval_initial__TOP__Vtiming__1__1(Vtb_user_domain_hw_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_hw_ctrl___024root___eval_initial__TOP__Vtiming__1__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__r_addr;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__r_data_val;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__r_data_val = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__r_err;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__r_err = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__timeout_count_gnt;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__timeout_count_rvalid;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__req_txn;
    VL_ZERO_W(74, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__req_txn);
    QData/*36:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__rsp_r_chan_temp;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__rsp_r_chan_temp = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__grant_received;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__grant_received = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__r_addr;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__r_data_val;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__r_data_val = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__r_err;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__r_err = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__timeout_count_gnt;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__timeout_count_rvalid;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__req_txn;
    VL_ZERO_W(74, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__req_txn);
    QData/*36:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__rsp_r_chan_temp;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__rsp_r_chan_temp = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__grant_received;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__grant_received = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__71__cs1_active;
    __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__71__cs1_active = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__71__cs2_active;
    __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__71__cs2_active = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__71__dc_is_data;
    __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__71__dc_is_data = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__71__ctrl_val;
    __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__71__ctrl_val = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__72__w_addr;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__72__w_addr = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__72__w_data;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__72__w_data = 0;
    CData/*3:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__72__w_be;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__72__w_be = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__72__timeout_count;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__72__timeout_count = 0;
    VlWide<3>/*73:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__72__req_txn;
    VL_ZERO_W(74, __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__72__req_txn);
    // Body
    while (((IData)(vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__67__busy_bit) 
            & VL_GTS_III(32, 0x2710U, vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__67__timeout_count))) {
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__r_addr = 0x20001008U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__timeout_count_gnt = 0U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__timeout_count_rvalid = 0U;
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             162);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__req_txn[0U] = 0U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__req_txn[1U] = 0U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__req_txn[2U] = 0U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__req_txn[0U] 
            = (1U | __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__req_txn[0U]);
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__req_txn[1U] 
            = ((0x1ffU & __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__req_txn[1U]) 
               | ((IData)(((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__r_addr)) 
                           << 1U)) << 9U));
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__req_txn[2U] 
            = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__r_addr)) 
                                   << 1U)) >> 0x17U) 
                         | ((IData)((((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__r_addr)) 
                                      << 1U) >> 0x20U)) 
                            << 9U)));
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
            = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__req_txn[0U];
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
            = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__req_txn[1U];
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
            = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__req_txn[2U];
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing = 1U;
        VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x (Sent: %23#)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__r_addr,
                     74,vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req.data());
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__grant_received = 0U;
        {
            while (VL_GTS_III(32, 0x7d0U, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__timeout_count_gnt)) {
                if (((0x9bU >= ((IData)(1U) + (0xffU 
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
                                                   * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))))) {
                    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__grant_received = 1U;
                    goto __Vlabel25;
                }
                co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                                     "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                                     177);
                vlSelfRef.__Vm_traceActivity[3U] = 1U;
                __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__timeout_count_gnt 
                    = ((IData)(1U) + __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__timeout_count_gnt);
            }
            __Vlabel25: ;
        }
        if (VL_UNLIKELY((1U & (~ (IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__grant_received))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:182: Assertion failed in %Ntb_user_domain_hw_ctrl.read_obi: %t : TB: Timeout waiting for OBI grant during read from 0x%x. Last rsp: %12#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__r_addr,
                         39,((((0x9bU >= ((IData)(2U) 
                                          + (0xffU 
                                             & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))
                                ? (0x1fffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                       (((IData)(0x26U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                      | (((0U == (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                           (((IData)(0x21U) 
                                                             + 
                                                             (0xffU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                         | ((QData)((IData)(
                                                            vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                            (((IData)(2U) 
                                                              + 
                                                              (0xffU 
                                                               & ((IData)(0x27U) 
                                                                  * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                             >> 5U)])) 
                                            >> (0x1fU 
                                                & ((IData)(2U) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(0x27U) 
                                                       * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))))
                                : 0ULL) << 2U) | (QData)((IData)(
                                                                 ((((0x9bU 
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
                                                                  | (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__cnt_down))))));
            VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 182, "");
            VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 184, "");
        }
        VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x (Rcvd: %12#)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__r_addr,
                     39,((((0x9bU >= ((IData)(2U) + 
                                      (0xffU & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))
                            ? (0x1fffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x26U) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(0x21U) 
                                                                         + 
                                                                         (0xffU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (((IData)(2U) 
                                                                          + 
                                                                          (0xffU 
                                                                           & ((IData)(0x27U) 
                                                                              * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                         >> 5U)])) 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))))
                            : 0ULL) << 2U) | (QData)((IData)(
                                                             ((((0x9bU 
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
                                                              | (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__cnt_down))))));
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             189);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
            = (0xfffffffeU & vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U]);
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing = 0U;
        VL_WRITEF_NX("%t : TB: OBI Read Req Deasserted.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
        while (((~ (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__cnt_down)) 
                & VL_GTS_III(32, 0x7d0U, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__timeout_count_rvalid))) {
            co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                                 "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                                 195);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__timeout_count_rvalid 
                = ((IData)(1U) + __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__timeout_count_rvalid);
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__timeout_count_rvalid))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:199: Assertion failed in %Ntb_user_domain_hw_ctrl.read_obi: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. Last rsp: %12#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__r_addr,
                         39,((((0x9bU >= ((IData)(2U) 
                                          + (0xffU 
                                             & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))
                                ? (0x1fffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                       (((IData)(0x26U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                      | (((0U == (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                           (((IData)(0x21U) 
                                                             + 
                                                             (0xffU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                         | ((QData)((IData)(
                                                            vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                            (((IData)(2U) 
                                                              + 
                                                              (0xffU 
                                                               & ((IData)(0x27U) 
                                                                  * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                             >> 5U)])) 
                                            >> (0x1fU 
                                                & ((IData)(2U) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(0x27U) 
                                                       * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))))
                                : 0ULL) << 2U) | (QData)((IData)(
                                                                 ((((0x9bU 
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
                                                                  | (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__cnt_down))))));
            VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 199, "");
            VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 201, "");
        }
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__rsp_r_chan_temp 
            = ((0x9bU >= ((IData)(2U) + (0xffU & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))
                ? (0x1fffffffffULL & (((QData)((IData)(
                                                       vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                       (((IData)(0x26U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                      | (((0U == (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                           (((IData)(0x21U) 
                                                             + 
                                                             (0xffU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                         | ((QData)((IData)(
                                                            vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                            (((IData)(2U) 
                                                              + 
                                                              (0xffU 
                                                               & ((IData)(0x27U) 
                                                                  * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                             >> 5U)])) 
                                            >> (0x1fU 
                                                & ((IData)(2U) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(0x27U) 
                                                       * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))))
                : 0ULL);
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__r_data_val 
            = (IData)((__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__rsp_r_chan_temp 
                       >> 5U));
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__r_err 
            = (1U & (IData)((__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__rsp_r_chan_temp 
                             >> 1U)));
        VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x Err=%b RVALID=%b (Rcvd: %12#)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__r_addr,
                     32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__r_data_val,
                     1,(IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__r_err),
                     1,vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__cnt_down,
                     39,((((0x9bU >= ((IData)(2U) + 
                                      (0xffU & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))
                            ? (0x1fffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x26U) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(0x21U) 
                                                                         + 
                                                                         (0xffU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (((IData)(2U) 
                                                                          + 
                                                                          (0xffU 
                                                                           & ((IData)(0x27U) 
                                                                              * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                         >> 5U)])) 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))))
                            : 0ULL) << 2U) | (QData)((IData)(
                                                             ((((0x9bU 
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
                                                              | (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__cnt_down))))));
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             209);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] = 0U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] = 0U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] = 0U;
        vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__67__status_val 
            = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__r_data_val;
        vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__67__read_err 
            = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__r_err;
        if (VL_UNLIKELY(vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__67__read_err)) {
            VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:227: Assertion failed in %Ntb_user_domain_hw_ctrl.wait_spi_engine_idle: %t : TB: OBI Error reading SPI Engine Status!\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9);
            VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 227, "");
            VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 227, "");
        }
        vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__67__busy_bit 
            = (1U & vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__67__status_val);
        vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__67__done_bit_tb 
            = (1U & (vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__67__status_val 
                     >> 1U));
        VL_WRITEF_NX("%t : TB: Polling SPI Engine Status (Addr 0x20001008): 0x%08x (done=%b, busy=%b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__67__status_val,
                     1,(IData)(vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__67__done_bit_tb),
                     1,vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__67__busy_bit);
        vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__67__timeout_count 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__67__timeout_count);
        if (vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__67__busy_bit) {
            co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                                 "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
        }
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x2710U, vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__67__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:238: Assertion failed in %Ntb_user_domain_hw_ctrl.wait_spi_engine_idle: %t : TB: Timeout waiting for SPI Engine to become idle. Last Status: 0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__67__status_val);
        VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 238, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 240, "");
    }
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__r_addr = 0x20001008U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__timeout_count_gnt = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         162);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__req_txn[0U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__req_txn[1U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__req_txn[2U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__req_txn[0U] 
        = (1U | __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__req_txn[0U]);
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__req_txn[1U] 
        = ((0x1ffU & __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__req_txn[1U]) 
           | ((IData)(((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__r_addr)) 
                       << 1U)) << 9U));
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__req_txn[2U] 
        = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__r_addr)) 
                               << 1U)) >> 0x17U) | 
                     ((IData)((((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__r_addr)) 
                                << 1U) >> 0x20U)) << 9U)));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__req_txn[0U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__req_txn[1U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__req_txn[2U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x (Sent: %23#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__r_addr,
                 74,vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req.data());
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__grant_received = 0U;
    {
        while (VL_GTS_III(32, 0x7d0U, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__timeout_count_gnt)) {
            if (((0x9bU >= ((IData)(1U) + (0xffU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                 && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                           (((IData)(1U) + (0xffU & 
                                            ((IData)(0x27U) 
                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                            >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))))) {
                __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__grant_received = 1U;
                goto __Vlabel26;
            }
            co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                                 "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                                 177);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__timeout_count_gnt 
                = ((IData)(1U) + __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__timeout_count_gnt);
        }
        __Vlabel26: ;
    }
    if (VL_UNLIKELY((1U & (~ (IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__grant_received))))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:182: Assertion failed in %Ntb_user_domain_hw_ctrl.read_obi: %t : TB: Timeout waiting for OBI grant during read from 0x%x. Last rsp: %12#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__r_addr,
                     39,((((0x9bU >= ((IData)(2U) + 
                                      (0xffU & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))
                            ? (0x1fffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x26U) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(0x21U) 
                                                                         + 
                                                                         (0xffU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (((IData)(2U) 
                                                                          + 
                                                                          (0xffU 
                                                                           & ((IData)(0x27U) 
                                                                              * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                         >> 5U)])) 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))))
                            : 0ULL) << 2U) | (QData)((IData)(
                                                             ((((0x9bU 
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
                                                              | (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__cnt_down))))));
        VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 182, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 184, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x (Rcvd: %12#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__r_addr,
                 39,((((0x9bU >= ((IData)(2U) + (0xffU 
                                                 & ((IData)(0x27U) 
                                                    * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))
                        ? (0x1fffffffffULL & (((QData)((IData)(
                                                               vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                               (((IData)(0x26U) 
                                                                 + 
                                                                 (0xffU 
                                                                  & ((IData)(0x27U) 
                                                                     * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                >> 5U)])) 
                                               << (
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                    ? 0x20U
                                                    : 
                                                   ((IData)(0x40U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                              | (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(2U) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(0x27U) 
                                                           * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                   ? 0ULL
                                                   : 
                                                  ((QData)((IData)(
                                                                   vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x21U) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                    (((IData)(2U) 
                                                                      + 
                                                                      (0xffU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                     >> 5U)])) 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))))
                        : 0ULL) << 2U) | (QData)((IData)(
                                                         ((((0x9bU 
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
                                                          | (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__cnt_down))))));
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         189);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : TB: OBI Read Req Deasserted.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    while (((~ (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__cnt_down)) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             195);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__timeout_count_rvalid);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:199: Assertion failed in %Ntb_user_domain_hw_ctrl.read_obi: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. Last rsp: %12#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__r_addr,
                     39,((((0x9bU >= ((IData)(2U) + 
                                      (0xffU & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))
                            ? (0x1fffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x26U) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(0x21U) 
                                                                         + 
                                                                         (0xffU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (((IData)(2U) 
                                                                          + 
                                                                          (0xffU 
                                                                           & ((IData)(0x27U) 
                                                                              * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                         >> 5U)])) 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))))
                            : 0ULL) << 2U) | (QData)((IData)(
                                                             ((((0x9bU 
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
                                                              | (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__cnt_down))))));
        VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 199, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 201, "");
    }
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__rsp_r_chan_temp 
        = ((0x9bU >= ((IData)(2U) + (0xffU & ((IData)(0x27U) 
                                              * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))
            ? (0x1fffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                   (((IData)(0x26U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                    >> 5U)])) 
                                   << ((0U == (0x1fU 
                                               & ((IData)(2U) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                        ? 0x20U : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(2U) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(0x27U) 
                                                           * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                  | (((0U == (0x1fU 
                                              & ((IData)(2U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                       ? 0ULL : ((QData)((IData)(
                                                                 vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                 (((IData)(0x21U) 
                                                                   + 
                                                                   (0xffU 
                                                                    & ((IData)(0x27U) 
                                                                       * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                     | ((QData)((IData)(
                                                        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                        (((IData)(2U) 
                                                          + 
                                                          (0xffU 
                                                           & ((IData)(0x27U) 
                                                              * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                         >> 5U)])) 
                                        >> (0x1fU & 
                                            ((IData)(2U) 
                                             + (0xffU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))))
            : 0ULL);
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__r_data_val 
        = (IData)((__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__rsp_r_chan_temp 
                   >> 5U));
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__r_err 
        = (1U & (IData)((__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__rsp_r_chan_temp 
                         >> 1U)));
    VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x Err=%b RVALID=%b (Rcvd: %12#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__r_addr,
                 32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__r_data_val,
                 1,(IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__r_err),
                 1,vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__cnt_down,
                 39,((((0x9bU >= ((IData)(2U) + (0xffU 
                                                 & ((IData)(0x27U) 
                                                    * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))
                        ? (0x1fffffffffULL & (((QData)((IData)(
                                                               vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                               (((IData)(0x26U) 
                                                                 + 
                                                                 (0xffU 
                                                                  & ((IData)(0x27U) 
                                                                     * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                >> 5U)])) 
                                               << (
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                    ? 0x20U
                                                    : 
                                                   ((IData)(0x40U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                              | (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(2U) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(0x27U) 
                                                           * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                   ? 0ULL
                                                   : 
                                                  ((QData)((IData)(
                                                                   vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x21U) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                    (((IData)(2U) 
                                                                      + 
                                                                      (0xffU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                     >> 5U)])) 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))))
                        : 0ULL) << 2U) | (QData)((IData)(
                                                         ((((0x9bU 
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
                                                          | (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__cnt_down))))));
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         209);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] = 0U;
    vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__67__status_val 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__r_data_val;
    vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__67__read_err 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__70__r_err;
    VL_WRITEF_NX("%t : TB: SPI Engine finished. Final Status: 0x%08x (done=%b, busy=%b)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__67__status_val,
                 1,(1U & (vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__67__status_val 
                          >> 1U)),1,(1U & vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__67__status_val));
    __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__71__dc_is_data 
        = vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__send_byte_hw_ctrl__56__is_data;
    __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__71__cs2_active = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__71__cs1_active = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__71__ctrl_val = 0U;
    if ((1U & (~ (IData)((0U != __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__71__cs1_active))))) {
        __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__71__ctrl_val 
            = (1U | __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__71__ctrl_val);
    }
    if ((1U & (~ (IData)((0U != __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__71__cs2_active))))) {
        __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__71__ctrl_val 
            = (2U | __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__71__ctrl_val);
    }
    if ((0U != __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__71__dc_is_data)) {
        __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__71__ctrl_val 
            = (4U | __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__71__ctrl_val);
    }
    VL_WRITEF_NX("%t : TB: Writing HW Ctrl Reg (Addr 0x20002000): 0x%08x (CS1_N=%b, CS2_N=%b, DC=%b)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__71__ctrl_val,
                 1,(1U & __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__71__ctrl_val),
                 1,(1U & (__Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__71__ctrl_val 
                          >> 1U)),1,(1U & (__Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__71__ctrl_val 
                                           >> 2U)));
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__72__w_be = 0xfU;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__72__w_data 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__71__ctrl_val;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__72__w_addr = 0x20002000U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__72__timeout_count = 0U;
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         123);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__72__req_txn[0U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__72__req_txn[1U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__72__req_txn[2U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__72__req_txn[0U] 
        = (1U | __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__72__req_txn[0U]);
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__72__req_txn[0U] 
        = ((0x1fU & __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__72__req_txn[0U]) 
           | ((IData)((((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__72__w_be)) 
                        << 0x20U) | (QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__72__w_data)))) 
              << 5U));
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__72__req_txn[1U] 
        = (((IData)((((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__72__w_be)) 
                      << 0x20U) | (QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__72__w_data)))) 
            >> 0x1bU) | (((IData)((1ULL | ((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__72__w_addr)) 
                                           << 1U))) 
                          << 9U) | ((IData)(((((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__72__w_be)) 
                                               << 0x20U) 
                                              | (QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__72__w_data))) 
                                             >> 0x20U)) 
                                    << 5U)));
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__72__req_txn[2U] 
        = (0x3ffU & (((0x1fU & ((IData)((1ULL | ((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__72__w_addr)) 
                                                 << 1U))) 
                                >> 0x17U)) | ((IData)(
                                                      ((((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__72__w_be)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__72__w_data))) 
                                                       >> 0x20U)) 
                                              >> 0x1bU)) 
                     | ((0x1e0U & ((IData)((1ULL | 
                                            ((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__72__w_addr)) 
                                             << 1U))) 
                                   >> 0x17U)) | ((IData)(
                                                         ((1ULL 
                                                           | ((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__72__w_addr)) 
                                                              << 1U)) 
                                                          >> 0x20U)) 
                                                 << 9U))));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__72__req_txn[0U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__72__req_txn[1U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__72__req_txn[2U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Write Req : Addr=0x%x Data=0x%x BE=0x%b (Sent: %23#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__72__w_addr,
                 32,__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__72__w_data,
                 4,(IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__72__w_be),
                 74,vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req.data());
    while (((~ ((0x9bU >= ((IData)(1U) + (0xffU & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                          (((IData)(1U) + (0xffU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                           >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                + (0xffU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))))) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__72__timeout_count))) {
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             136);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__72__timeout_count 
            = ((IData)(1U) + __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__72__timeout_count);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__72__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:140: Assertion failed in %Ntb_user_domain_hw_ctrl.write_obi: %t : TB: Timeout waiting for OBI grant during write to 0x%x. Last rsp: %12#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__72__w_addr,
                     39,((((0x9bU >= ((IData)(2U) + 
                                      (0xffU & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))
                            ? (0x1fffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x26U) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(0x21U) 
                                                                         + 
                                                                         (0xffU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (((IData)(2U) 
                                                                          + 
                                                                          (0xffU 
                                                                           & ((IData)(0x27U) 
                                                                              * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                         >> 5U)])) 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))))
                            : 0ULL) << 2U) | (QData)((IData)(
                                                             ((((0x9bU 
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
                                                              | (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__cnt_down))))));
        VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 140, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 142, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Write Gnt Rcvd: Addr=0x%x (Rcvd: %12#)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__72__w_addr,
                 39,((((0x9bU >= ((IData)(2U) + (0xffU 
                                                 & ((IData)(0x27U) 
                                                    * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))
                        ? (0x1fffffffffULL & (((QData)((IData)(
                                                               vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                               (((IData)(0x26U) 
                                                                 + 
                                                                 (0xffU 
                                                                  & ((IData)(0x27U) 
                                                                     * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                >> 5U)])) 
                                               << (
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                    ? 0x20U
                                                    : 
                                                   ((IData)(0x40U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                              | (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(2U) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(0x27U) 
                                                           * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                   ? 0ULL
                                                   : 
                                                  ((QData)((IData)(
                                                                   vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x21U) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                    (((IData)(2U) 
                                                                      + 
                                                                      (0xffU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                     >> 5U)])) 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))))
                        : 0ULL) << 2U) | (QData)((IData)(
                                                         ((((0x9bU 
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
                                                          | (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__cnt_down))))));
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         147);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : TB: OBI Write Req Deasserted.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         151);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                         256);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    VL_WRITEF_NX("%t : TB: Finished HW Ctrl Send Byte 0x%02x to CS%0d\n--- Font Byte Sent ---\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__send_byte_hw_ctrl__56__byte_val),
                 32,vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__send_byte_hw_ctrl__56__cs_pin_idx);
    co_await vlSelfRef.__VdlySched.delay(0x3d090ULL, 
                                         nullptr, "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                         350);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x7a120ULL, 
                                         nullptr, "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                         352);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    VL_WRITEF_NX("%t : TB: Test Sequence Complete.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 354, "");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
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
    vlSelfRef.__VactTriggered.set(0U, (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_font_rom_obi_rsp 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__user_font_rom_obi_rsp__1));
    vlSelfRef.__VactTriggered.set(1U, (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_ctrl_obi_rsp 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_ctrl_obi_rsp__1));
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o__1)));
    vlSelfRef.__VactTriggered.set(3U, ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w__1)));
    vlSelfRef.__VactTriggered.set(4U, ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r__1)));
    vlSelfRef.__VactTriggered.set(5U, ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__clk_i) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__clk_i__0))));
    vlSelfRef.__VactTriggered.set(6U, ((~ (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__rst_ni)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__rst_ni__0)));
    vlSelfRef.__VactTriggered.set(7U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__user_font_rom_obi_rsp__1 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_font_rom_obi_rsp;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_ctrl_obi_rsp__1 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_ctrl_obi_rsp;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o__1 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w__1 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r__1 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r;
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
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_user_domain_hw_ctrl___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_user_domain_hw_ctrl___024root___nba_sequent__TOP__1(Vtb_user_domain_hw_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_hw_ctrl___024root___nba_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    if (VL_UNLIKELY((0x400U & vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U]))) {
        __Vtemp_1 = Vtb_user_domain_hw_ctrl___024unit::__Venumtab_enum_name375
            [vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q];
        VL_WRITEF_NX("%t [DUT_OBI_DEBUG] req_i=%b, we_i=%b, addr_i[11:0]=%x, state_q=%@\n                      gnt_for_read=%b, gnt_for_write=%b, gnt_o=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                            >> 0xaU)),1,(1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                               >> 0x13U)),
                     12,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                         >> 0x14U),-1,&(__Vtemp_1),
                     1,(IData)((0x800000U == (0xfff80000U 
                                              & vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U]))),
                     1,((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                         >> 0x13U) & ((0U == (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)) 
                                      & ((4U == (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                 >> 0x14U)) 
                                         | (0U == (
                                                   vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                   >> 0x14U))))),
                     1,(IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o));
        if (VL_UNLIKELY((1U & (~ (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                  >> 0x13U))))) {
            VL_WRITEF_NX("                      status_read_req_comb=%b, read_req_accepted(prev)=%b, rvalid_q(prev)=%b\n",0,
                         1,(((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                              >> 0xaU) & (0x800000U 
                                          == (0xfff80000U 
                                              & vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U]))) 
                            & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o)),
                         1,(IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__read_req_accepted),
                         1,vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rvalid_q);
        }
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__cs_no))))) {
        __Vtemp_2 = Vtb_user_domain_hw_ctrl___024unit::__Venumtab_enum_name375
            [vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q];
        VL_WRITEF_NX("%t [DUT_SPI_DEBUG] CS_N LOW: SCK=%b, MOSI=%b, BitCnt=%1#, SPIClkCnt=%1#, FSMState=%@\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__spi_sck_o),
                     1,vlSelfRef.tb_user_domain_hw_ctrl__DOT__spi_mosi_o,
                     3,(IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q),
                     2,vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q,
                     -1,&(__Vtemp_2));
    }
}

VL_INLINE_OPT void Vtb_user_domain_hw_ctrl___024root___nba_sequent__TOP__2(Vtb_user_domain_hw_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_hw_ctrl___024root___nba_sequent__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    if (vlSelfRef.tb_user_domain_hw_ctrl__DOT__rst_ni) {
        if (VL_UNLIKELY(((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q) 
                         != (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_d)))) {
            __Vtemp_1 = Vtb_user_domain_hw_ctrl___024unit::__Venumtab_enum_name375
                [vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q];
            __Vtemp_2 = Vtb_user_domain_hw_ctrl___024unit::__Venumtab_enum_name375
                [vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_d];
            VL_WRITEF_NX("%t [DUT_FSM_DEBUG] State Transition: %@ -> %@\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,-1,&(__Vtemp_1),-1,&(__Vtemp_2));
        }
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__done_q 
            = ((2U == (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)) 
               & (3U == (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_d)));
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q 
            = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_d;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q 
            = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_d;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_q 
            = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_d;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_q 
            = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_d;
        if (VL_UNLIKELY((((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                           >> 0xaU) & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                       >> 0x13U)) & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o)))) {
            VL_WRITEF_NX("%t [DUT_OBI_WRITE] Write to addr_offset %x granted. Data LSB: 0x%02x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,12,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                >> 0x14U),8,(0xffU 
                                             & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                                                >> 0xfU)));
            if ((4U == (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                        >> 0x14U))) {
                if ((0x8000U & vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U])) {
                    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_q 
                        = (0xffU & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                                    >> 0xfU));
                }
            } else if ((0U == (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                               >> 0x14U))) {
                vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_q = 1U;
            }
        } else if (((0U == (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)) 
                    & (1U == (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_d)))) {
            vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_q = 0U;
        }
        vlSelfRef.__Vdly__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rvalid_q 
            = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__read_req_accepted;
        if (VL_UNLIKELY(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__read_req_accepted)) {
            VL_WRITEF_NX("%t [DUT_OBI_READ] Read granted for addr_offset %x. Latching rdata_q with status_bits={done:%b, busy:%b}. rvalid_q will be high next cycle.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,12,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                >> 0x14U),1,(1U & ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__status_bits) 
                                                   >> 1U)),
                         1,(1U & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__status_bits)));
            vlSelfRef.__Vdly__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rdata_q 
                = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__status_bits;
        } else if ((1U & (~ (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rvalid_q)))) {
            vlSelfRef.__Vdly__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rdata_q = 0U;
        }
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q 
            = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_d;
        if (VL_UNLIKELY(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rvalid_q)) {
            VL_WRITEF_NX("%t [DUT_OBI_READ] rvalid_o is HIGH. rdata_o is 0x%x (status_bits={done:%b, busy:%b})\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,32,vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rdata_q,
                         1,(1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rdata_q 
                                  >> 1U)),1,(1U & vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rdata_q));
        }
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__read_req_accepted 
            = (((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                 >> 0xaU) & (0x800000U == (0xfff80000U 
                                           & vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U]))) 
               & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o));
    } else {
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q = 0U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_q = 0U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_q = 0U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q = 0U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q = 0U;
        vlSelfRef.__Vdly__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rvalid_q = 0U;
        vlSelfRef.__Vdly__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rdata_q = 0U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__done_q = 0U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__read_req_accepted = 0U;
    }
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rdata_q 
        = vlSelfRef.__Vdly__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rdata_q;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rvalid_q 
        = vlSelfRef.__Vdly__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rvalid_q;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_d 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_q;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__spi_sck_o = 0U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_d 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_q;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_d 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__status_bits 
        = (((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__done_q) 
            << 1U) | ((0U != (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)) 
                      & (3U != (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q))));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__spi_mosi_o 
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
            vlSelfRef.tb_user_domain_hw_ctrl__DOT__spi_mosi_o 
                = (1U & ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_q) 
                         >> 7U));
        }
    }
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_d 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_d 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q;
    if ((2U & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q))) {
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__cs_no 
            = (1U & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q));
        if ((1U & (~ (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)))) {
            vlSelfRef.tb_user_domain_hw_ctrl__DOT__spi_sck_o 
                = (2U <= (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q));
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
        }
        if ((1U & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q))) {
            vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_d = 0U;
        } else if ((3U == (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q))) {
            if ((0U == (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q))) {
                vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_d = 3U;
            }
        }
    } else {
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__cs_no 
            = (1U & (~ (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)));
        if ((1U & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q))) {
            vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_d = 0U;
            vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_d = 7U;
            vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_d = 2U;
        } else if (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_q) {
            vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_d = 1U;
        }
    }
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_obi_rsp 
        = ((0x7fULL & vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_obi_rsp) 
           | ((QData)((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rdata_q)) 
              << 7U));
}
