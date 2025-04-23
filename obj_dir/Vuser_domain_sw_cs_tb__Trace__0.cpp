// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vuser_domain_sw_cs_tb__Syms.h"


void Vuser_domain_sw_cs_tb___024root__trace_chg_0_sub_0(Vuser_domain_sw_cs_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vuser_domain_sw_cs_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_domain_sw_cs_tb___024root__trace_chg_0\n"); );
    // Init
    Vuser_domain_sw_cs_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vuser_domain_sw_cs_tb___024root*>(voidSelf);
    Vuser_domain_sw_cs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vuser_domain_sw_cs_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vuser_domain_sw_cs_tb___024root__trace_chg_0_sub_0(Vuser_domain_sw_cs_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuser_domain_sw_cs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_domain_sw_cs_tb___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelfRef.user_domain_sw_cs_tb__DOT__ref_clk_i));
        bufp->chgBit(oldp+1,(vlSelfRef.user_domain_sw_cs_tb__DOT__testmode_i));
        bufp->chgIData(oldp+2,((IData)((vlSelfRef.user_domain_sw_cs_tb__DOT__user_mgr_obi_rsp 
                                        >> 5U))),32);
        bufp->chgBit(oldp+3,((1U & (IData)((vlSelfRef.user_domain_sw_cs_tb__DOT__user_mgr_obi_rsp 
                                            >> 4U)))));
        bufp->chgBit(oldp+4,((1U & (IData)((vlSelfRef.user_domain_sw_cs_tb__DOT__user_mgr_obi_rsp 
                                            >> 3U)))));
        bufp->chgBit(oldp+5,((1U & (IData)((vlSelfRef.user_domain_sw_cs_tb__DOT__user_mgr_obi_rsp 
                                            >> 2U)))));
        bufp->chgBit(oldp+6,((1U & (IData)((vlSelfRef.user_domain_sw_cs_tb__DOT__user_mgr_obi_rsp 
                                            >> 1U)))));
        bufp->chgBit(oldp+7,((1U & (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__user_mgr_obi_rsp))));
        bufp->chgSData(oldp+8,(vlSelfRef.user_domain_sw_cs_tb__DOT__gpio_in_sync_i),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U] 
                     | vlSelfRef.__Vm_traceActivity
                     [3U]))) {
        bufp->chgIData(oldp+9,(((vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] 
                                 << 0x16U) | (vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
                                              >> 0xaU))),32);
        bufp->chgBit(oldp+10,((1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
                                     >> 9U))));
        bufp->chgCData(oldp+11,((0xfU & (vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
                                         >> 5U))),4);
        bufp->chgIData(oldp+12,(((vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
                                  << 0x1bU) | (vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
                                               >> 5U))),32);
        bufp->chgCData(oldp+13,((7U & (vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
                                       >> 2U))),3);
        bufp->chgBit(oldp+14,((1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
                                     >> 1U))));
        bufp->chgBit(oldp+15,((1U & vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U])));
        bufp->chgBit(oldp+16,(vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U] 
                     | vlSelfRef.__Vm_traceActivity
                     [6U]))) {
        bufp->chgIData(oldp+17,(((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                                  << 0x16U) | (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[1U] 
                                               >> 0xaU))),32);
        bufp->chgBit(oldp+18,((1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[1U] 
                                     >> 9U))));
        bufp->chgCData(oldp+19,((0xfU & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[1U] 
                                         >> 5U))),4);
        bufp->chgIData(oldp+20,(((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[1U] 
                                  << 0x1bU) | (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0U] 
                                               >> 5U))),32);
        bufp->chgCData(oldp+21,((7U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0U] 
                                       >> 2U))),3);
        bufp->chgBit(oldp+22,((1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0U] 
                                     >> 1U))));
        bufp->chgBit(oldp+23,((1U & vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0U])));
        bufp->chgIData(oldp+24,(((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[4U] 
                                  << 0xcU) | (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                              >> 0x14U))),32);
        bufp->chgBit(oldp+25,((1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                     >> 0x13U))));
        bufp->chgCData(oldp+26,((0xfU & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                         >> 0xfU))),4);
        bufp->chgIData(oldp+27,(((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                  << 0x11U) | (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                                               >> 0xfU))),32);
        bufp->chgCData(oldp+28,((7U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+29,((1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                                     >> 0xbU))));
        bufp->chgBit(oldp+30,((1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                                     >> 0xaU))));
        bufp->chgBit(oldp+31,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_up));
        bufp->chgBit(oldp+32,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_d));
        bufp->chgCData(oldp+33,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_d),2);
        bufp->chgBit(oldp+34,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT____Vcellinp__i_id_fifo__push_i));
        bufp->chgBit(oldp+35,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__gate_clock));
        bufp->chgBit(oldp+36,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_n));
        bufp->chgCData(oldp+37,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_n),2);
        bufp->chgCData(oldp+38,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_n),3);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[5U])) {
        bufp->chgIData(oldp+39,((IData)((((0x4dU >= 
                                           ((IData)(2U) 
                                            + (0x7fU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))
                                           ? (0x1fffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                  (((IData)(0x26U) 
                                                                    + 
                                                                    (0x7fU 
                                                                     & ((IData)(0x27U) 
                                                                        * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                    ? 0x20U
                                                    : 
                                                   ((IData)(0x40U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                                 | (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(2U) 
                                                          + 
                                                          (0x7fU 
                                                           & ((IData)(0x27U) 
                                                              * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                      ? 0ULL
                                                      : 
                                                     ((QData)((IData)(
                                                                      vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                      (((IData)(0x21U) 
                                                                        + 
                                                                        (0x7fU 
                                                                         & ((IData)(0x27U) 
                                                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                       >> 5U)])) 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                                    | ((QData)((IData)(
                                                                       vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(2U) 
                                                                         + 
                                                                         (0x7fU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                        >> 5U)])) 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))))
                                           : 0ULL) 
                                         >> 5U))),32);
        bufp->chgCData(oldp+40,((7U & (IData)((((0x4dU 
                                                 >= 
                                                 ((IData)(2U) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))
                                                 ? 
                                                (0x1fffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                     (((IData)(0x26U) 
                                                                       + 
                                                                       (0x7fU 
                                                                        & ((IData)(0x27U) 
                                                                           * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                      >> 5U)])) 
                                                     << 
                                                     ((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                       ? 0x20U
                                                       : 
                                                      ((IData)(0x40U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                                    | (((0U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(2U) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                         ? 0ULL
                                                         : 
                                                        ((QData)((IData)(
                                                                         vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                         (((IData)(0x21U) 
                                                                           + 
                                                                           (0x7fU 
                                                                            & ((IData)(0x27U) 
                                                                               * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                          >> 5U)])) 
                                                         << 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & ((IData)(2U) 
                                                              + 
                                                              (0x7fU 
                                                               & ((IData)(0x27U) 
                                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                                       | ((QData)((IData)(
                                                                          vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                          (((IData)(2U) 
                                                                            + 
                                                                            (0x7fU 
                                                                             & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                           >> 5U)])) 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(2U) 
                                                              + 
                                                              (0x7fU 
                                                               & ((IData)(0x27U) 
                                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))))
                                                 : 0ULL) 
                                               >> 2U)))),3);
        bufp->chgBit(oldp+41,((1U & (IData)((((0x4dU 
                                               >= ((IData)(2U) 
                                                   + 
                                                   (0x7fU 
                                                    & ((IData)(0x27U) 
                                                       * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))
                                               ? (0x1fffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                      (((IData)(0x26U) 
                                                                        + 
                                                                        (0x7fU 
                                                                         & ((IData)(0x27U) 
                                                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                       >> 5U)])) 
                                                      << 
                                                      ((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                        ? 0x20U
                                                        : 
                                                       ((IData)(0x40U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                                     | (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & ((IData)(2U) 
                                                              + 
                                                              (0x7fU 
                                                               & ((IData)(0x27U) 
                                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                          ? 0ULL
                                                          : 
                                                         ((QData)((IData)(
                                                                          vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                          (((IData)(0x21U) 
                                                                            + 
                                                                            (0x7fU 
                                                                             & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                           >> 5U)])) 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & ((IData)(2U) 
                                                               + 
                                                               (0x7fU 
                                                                & ((IData)(0x27U) 
                                                                   * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                                        | ((QData)((IData)(
                                                                           vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                           (((IData)(2U) 
                                                                             + 
                                                                             (0x7fU 
                                                                              & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                            >> 5U)])) 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(2U) 
                                                               + 
                                                               (0x7fU 
                                                                & ((IData)(0x27U) 
                                                                   * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))))
                                               : 0ULL) 
                                             >> 1U)))));
        bufp->chgBit(oldp+42,((1U & (IData)(((0x4dU 
                                              >= ((IData)(2U) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))
                                              ? (0x1fffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                     (((IData)(0x26U) 
                                                                       + 
                                                                       (0x7fU 
                                                                        & ((IData)(0x27U) 
                                                                           * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                      >> 5U)])) 
                                                     << 
                                                     ((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                       ? 0x20U
                                                       : 
                                                      ((IData)(0x40U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                                    | (((0U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(2U) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                         ? 0ULL
                                                         : 
                                                        ((QData)((IData)(
                                                                         vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                         (((IData)(0x21U) 
                                                                           + 
                                                                           (0x7fU 
                                                                            & ((IData)(0x27U) 
                                                                               * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                          >> 5U)])) 
                                                         << 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & ((IData)(2U) 
                                                              + 
                                                              (0x7fU 
                                                               & ((IData)(0x27U) 
                                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                                       | ((QData)((IData)(
                                                                          vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                          (((IData)(2U) 
                                                                            + 
                                                                            (0x7fU 
                                                                             & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                           >> 5U)])) 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(2U) 
                                                              + 
                                                              (0x7fU 
                                                               & ((IData)(0x27U) 
                                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))))
                                              : 0ULL)))));
        bufp->chgBit(oldp+43,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_down));
        bufp->chgBit(oldp+44,(vlSelfRef.user_domain_sw_cs_tb__DOT__spi_sck_o));
        bufp->chgBit(oldp+45,(vlSelfRef.user_domain_sw_cs_tb__DOT__spi_mosi_o));
        bufp->chgIData(oldp+46,(((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[1U] 
                                  << 0x19U) | (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[0U] 
                                               >> 7U))),32);
        bufp->chgCData(oldp+47,((7U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[0U] 
                                       >> 4U))),3);
        bufp->chgBit(oldp+48,((1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[0U] 
                                     >> 3U))));
        bufp->chgBit(oldp+49,((1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[0U] 
                                     >> 2U))));
        bufp->chgBit(oldp+50,((1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[0U] 
                                     >> 1U))));
        bufp->chgBit(oldp+51,((1U & vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[0U])));
        bufp->chgIData(oldp+52,(((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[2U] 
                                  << 0x12U) | (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[1U] 
                                               >> 0xeU))),32);
        bufp->chgCData(oldp+53,((7U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[1U] 
                                       >> 0xbU))),3);
        bufp->chgBit(oldp+54,((1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[1U] 
                                     >> 0xaU))));
        bufp->chgBit(oldp+55,((1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[1U] 
                                     >> 9U))));
        bufp->chgBit(oldp+56,((1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[1U] 
                                     >> 8U))));
        bufp->chgBit(oldp+57,((1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[1U] 
                                     >> 7U))));
        bufp->chgIData(oldp+58,((IData)((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_error_obi_rsp 
                                         >> 7U))),32);
        bufp->chgCData(oldp+59,((7U & (IData)((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_error_obi_rsp 
                                               >> 4U)))),3);
        bufp->chgBit(oldp+60,((1U & (IData)((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_error_obi_rsp 
                                             >> 3U)))));
        bufp->chgBit(oldp+61,((1U & (IData)((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_error_obi_rsp 
                                             >> 2U)))));
        bufp->chgBit(oldp+62,((1U & (IData)((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_error_obi_rsp 
                                             >> 1U)))));
        bufp->chgBit(oldp+63,((1U & (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_error_obi_rsp))));
        bufp->chgIData(oldp+64,((IData)((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_rsp 
                                         >> 7U))),32);
        bufp->chgCData(oldp+65,((7U & (IData)((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_rsp 
                                               >> 4U)))),3);
        bufp->chgBit(oldp+66,((1U & (IData)((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_rsp 
                                             >> 3U)))));
        bufp->chgBit(oldp+67,((1U & (IData)((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_rsp 
                                             >> 2U)))));
        bufp->chgBit(oldp+68,((1U & (IData)((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_rsp 
                                             >> 1U)))));
        bufp->chgBit(oldp+69,((1U & (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_rsp))));
        bufp->chgBit(oldp+70,((1U & ((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q) 
                                     >> 1U))));
        bufp->chgBit(oldp+71,((1U & (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q))));
        bufp->chgBit(oldp+72,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q));
        bufp->chgCData(oldp+73,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q),2);
        bufp->chgBit(oldp+74,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o));
        bufp->chgBit(oldp+75,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__rvalid_q));
        bufp->chgIData(oldp+76,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__rdata_q),32);
        bufp->chgBit(oldp+77,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__cs_o));
        bufp->chgCData(oldp+78,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_q),2);
        bufp->chgCData(oldp+79,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_d),2);
        bufp->chgBit(oldp+80,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_q));
        bufp->chgCData(oldp+81,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_q),8);
        bufp->chgCData(oldp+82,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q),3);
        bufp->chgCData(oldp+83,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q),3);
        bufp->chgBit(oldp+84,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_d));
        bufp->chgCData(oldp+85,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_d),3);
        bufp->chgCData(oldp+86,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_d),3);
        bufp->chgBit(oldp+87,((4U <= (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q))));
        bufp->chgBit(oldp+88,(((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_req[0U] 
                                & (0x2000U == (0x3ffe00U 
                                               & vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_req[1U]))) 
                               & (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o))));
        bufp->chgCData(oldp+89,((((3U == (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)) 
                                  << 1U) | ((0U != (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)) 
                                            & (3U != (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_q))))),2);
        bufp->chgBit(oldp+90,(((0U != (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)) 
                               & (3U != (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)))));
        bufp->chgBit(oldp+91,((3U == (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_q))));
        bufp->chgBit(oldp+92,(((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_req[1U] 
                                >> 9U) & ((0U == (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)) 
                                          & ((4U == 
                                              ((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_req[2U] 
                                                << 0x16U) 
                                               | (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_req[1U] 
                                                  >> 0xaU))) 
                                             | (0U 
                                                == 
                                                ((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_req[2U] 
                                                  << 0x16U) 
                                                 | (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_req[1U] 
                                                    >> 0xaU))))))));
        bufp->chgCData(oldp+93,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__unnamedblk1__DOT__next_bit_idx_calc),4);
        bufp->chgCData(oldp+94,(((2U >= (3U & ((IData)(3U) 
                                               * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q))))
                                  ? (7U & ((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_q) 
                                           >> (3U & 
                                               ((IData)(3U) 
                                                * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q)))))
                                  : 0U)),3);
        bufp->chgBit(oldp+95,((1U == (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q))));
        bufp->chgBit(oldp+96,((0U == (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q))));
        bufp->chgBit(oldp+97,((1U & (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q))));
        bufp->chgBit(oldp+98,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_n));
        bufp->chgBit(oldp+99,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q));
        bufp->chgBit(oldp+100,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q));
        bufp->chgCData(oldp+101,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q),2);
        bufp->chgCData(oldp+102,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_q),3);
    }
    bufp->chgBit(oldp+103,(vlSelfRef.user_domain_sw_cs_tb__DOT__clk_i));
    bufp->chgBit(oldp+104,(vlSelfRef.user_domain_sw_cs_tb__DOT__rst_ni));
    bufp->chgBit(oldp+105,(((0x4dU >= ((IData)(1U) 
                                       + (0x7fU & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))) 
                            && (1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                      (((IData)(1U) 
                                        + (0x7fU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))) 
                                       >> 5U)] >> (0x1fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))))))));
    bufp->chgBit(oldp+106,(vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_ssd1331_n));
    bufp->chgBit(oldp+107,(vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_adxl345_n));
    bufp->chgBit(oldp+108,(vlSelfRef.user_domain_sw_cs_tb__DOT__tb_dc_ssd1331));
    bufp->chgBit(oldp+109,(vlSelfRef.user_domain_sw_cs_tb__DOT__tb_int_adxl345));
    bufp->chgBit(oldp+110,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx));
    bufp->chgBit(oldp+111,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_addr_decode_periphs__DOT__dec_valid_o));
    bufp->chgBit(oldp+112,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_addr_decode_periphs__DOT__dec_error_o));
    bufp->chgBit(oldp+113,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__matched_rules));
    bufp->chgBit(oldp+114,(((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_up) 
                            ^ (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_down))));
}

void Vuser_domain_sw_cs_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_domain_sw_cs_tb___024root__trace_cleanup\n"); );
    // Init
    Vuser_domain_sw_cs_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vuser_domain_sw_cs_tb___024root*>(voidSelf);
    Vuser_domain_sw_cs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}
