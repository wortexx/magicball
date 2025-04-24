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
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[4U] 
                      | vlSelfRef.__Vm_traceActivity
                      [6U]) | vlSelfRef.__Vm_traceActivity
                     [7U]))) {
        bufp->chgIData(oldp+17,((IData)((((0x4dU >= 
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
        bufp->chgCData(oldp+18,((7U & (IData)((((0x4dU 
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
        bufp->chgBit(oldp+19,((1U & (IData)((((0x4dU 
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
        bufp->chgBit(oldp+20,((1U & (IData)(((0x4dU 
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
        bufp->chgIData(oldp+21,((IData)((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_rsp 
                                         >> 7U))),32);
        bufp->chgCData(oldp+22,((7U & (IData)((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_rsp 
                                               >> 4U)))),3);
        bufp->chgBit(oldp+23,((1U & (IData)((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_rsp 
                                             >> 3U)))));
        bufp->chgBit(oldp+24,((1U & (IData)((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_rsp 
                                             >> 2U)))));
        bufp->chgBit(oldp+25,((1U & (IData)((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_rsp 
                                             >> 1U)))));
        bufp->chgBit(oldp+26,((1U & (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_rsp))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U] 
                     | vlSelfRef.__Vm_traceActivity
                     [7U]))) {
        bufp->chgBit(oldp+27,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_down));
        bufp->chgIData(oldp+28,(((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[1U] 
                                  << 0x19U) | (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[0U] 
                                               >> 7U))),32);
        bufp->chgCData(oldp+29,((7U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[0U] 
                                       >> 4U))),3);
        bufp->chgBit(oldp+30,((1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[0U] 
                                     >> 3U))));
        bufp->chgBit(oldp+31,((1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[0U] 
                                     >> 2U))));
        bufp->chgBit(oldp+32,((1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[0U] 
                                     >> 1U))));
        bufp->chgBit(oldp+33,((1U & vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[0U])));
        bufp->chgIData(oldp+34,(((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[2U] 
                                  << 0x12U) | (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[1U] 
                                               >> 0xeU))),32);
        bufp->chgCData(oldp+35,((7U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[1U] 
                                       >> 0xbU))),3);
        bufp->chgBit(oldp+36,((1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[1U] 
                                     >> 0xaU))));
        bufp->chgBit(oldp+37,((1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[1U] 
                                     >> 9U))));
        bufp->chgBit(oldp+38,((1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[1U] 
                                     >> 8U))));
        bufp->chgBit(oldp+39,((1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[1U] 
                                     >> 7U))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U] 
                     | vlSelfRef.__Vm_traceActivity
                     [8U]))) {
        bufp->chgIData(oldp+40,(((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                                  << 0x16U) | (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[1U] 
                                               >> 0xaU))),32);
        bufp->chgBit(oldp+41,((1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[1U] 
                                     >> 9U))));
        bufp->chgCData(oldp+42,((0xfU & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[1U] 
                                         >> 5U))),4);
        bufp->chgIData(oldp+43,(((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[1U] 
                                  << 0x1bU) | (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0U] 
                                               >> 5U))),32);
        bufp->chgCData(oldp+44,((7U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0U] 
                                       >> 2U))),3);
        bufp->chgBit(oldp+45,((1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0U] 
                                     >> 1U))));
        bufp->chgBit(oldp+46,((1U & vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0U])));
        bufp->chgIData(oldp+47,(((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[4U] 
                                  << 0xcU) | (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                              >> 0x14U))),32);
        bufp->chgBit(oldp+48,((1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                     >> 0x13U))));
        bufp->chgCData(oldp+49,((0xfU & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                         >> 0xfU))),4);
        bufp->chgIData(oldp+50,(((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                  << 0x11U) | (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                                               >> 0xfU))),32);
        bufp->chgCData(oldp+51,((7U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+52,((1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                                     >> 0xbU))));
        bufp->chgBit(oldp+53,((1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                                     >> 0xaU))));
        bufp->chgBit(oldp+54,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_up));
        bufp->chgBit(oldp+55,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_d));
        bufp->chgCData(oldp+56,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_d),2);
        bufp->chgBit(oldp+57,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o));
        bufp->chgBit(oldp+58,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__status_read_req));
        bufp->chgBit(oldp+59,((IData)((0x800000U == 
                                       (0xfff80000U 
                                        & vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U])))));
        bufp->chgBit(oldp+60,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT____Vcellinp__i_id_fifo__push_i));
        bufp->chgBit(oldp+61,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__gate_clock));
        bufp->chgBit(oldp+62,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_n));
        bufp->chgCData(oldp+63,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_n),2);
        bufp->chgCData(oldp+64,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_n),3);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[6U])) {
        bufp->chgBit(oldp+65,(vlSelfRef.user_domain_sw_cs_tb__DOT__spi_sck_o));
        bufp->chgBit(oldp+66,(vlSelfRef.user_domain_sw_cs_tb__DOT__spi_mosi_o));
        bufp->chgIData(oldp+67,((IData)((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_error_obi_rsp 
                                         >> 7U))),32);
        bufp->chgCData(oldp+68,((7U & (IData)((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_error_obi_rsp 
                                               >> 4U)))),3);
        bufp->chgBit(oldp+69,((1U & (IData)((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_error_obi_rsp 
                                             >> 3U)))));
        bufp->chgBit(oldp+70,((1U & (IData)((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_error_obi_rsp 
                                             >> 2U)))));
        bufp->chgBit(oldp+71,((1U & (IData)((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_error_obi_rsp 
                                             >> 1U)))));
        bufp->chgBit(oldp+72,((1U & (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_error_obi_rsp))));
        bufp->chgBit(oldp+73,((1U & ((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q) 
                                     >> 1U))));
        bufp->chgBit(oldp+74,((1U & (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q))));
        bufp->chgBit(oldp+75,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q));
        bufp->chgCData(oldp+76,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q),2);
        bufp->chgBit(oldp+77,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__rvalid_q));
        bufp->chgIData(oldp+78,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__rdata_q),32);
        bufp->chgBit(oldp+79,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__cs_no));
        bufp->chgCData(oldp+80,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_q),2);
        bufp->chgCData(oldp+81,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_d),2);
        bufp->chgBit(oldp+82,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_q));
        bufp->chgBit(oldp+83,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_d));
        bufp->chgCData(oldp+84,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_q),8);
        bufp->chgCData(oldp+85,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q),3);
        bufp->chgCData(oldp+86,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_d),3);
        bufp->chgCData(oldp+87,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q),3);
        bufp->chgCData(oldp+88,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_d),3);
        bufp->chgIData(oldp+89,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__granted_addr_q),32);
        bufp->chgBit(oldp+90,((4U <= (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q))));
        bufp->chgCData(oldp+91,((((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__done_q) 
                                  << 1U) | ((0U != (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)) 
                                            & (3U != (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_q))))),2);
        bufp->chgBit(oldp+92,(((0U != (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)) 
                               & (3U != (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)))));
        bufp->chgBit(oldp+93,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__done_q));
        bufp->chgBit(oldp+94,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__done_d));
        bufp->chgCData(oldp+95,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__unnamedblk1__DOT__next_bit_idx_calc),4);
        bufp->chgCData(oldp+96,(((2U >= (3U & ((IData)(3U) 
                                               * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q))))
                                  ? (7U & ((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_q) 
                                           >> (3U & 
                                               ((IData)(3U) 
                                                * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q)))))
                                  : 0U)),3);
        bufp->chgBit(oldp+97,((1U == (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q))));
        bufp->chgBit(oldp+98,((0U == (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q))));
        bufp->chgBit(oldp+99,((1U & (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q))));
        bufp->chgBit(oldp+100,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_n));
        bufp->chgBit(oldp+101,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q));
        bufp->chgBit(oldp+102,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q));
        bufp->chgCData(oldp+103,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q),2);
        bufp->chgCData(oldp+104,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_q),3);
    }
    bufp->chgBit(oldp+105,(vlSelfRef.user_domain_sw_cs_tb__DOT__clk_i));
    bufp->chgBit(oldp+106,(vlSelfRef.user_domain_sw_cs_tb__DOT__rst_ni));
    bufp->chgBit(oldp+107,(((0x4dU >= ((IData)(1U) 
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
    bufp->chgBit(oldp+108,(vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_ssd1331_n));
    bufp->chgBit(oldp+109,(vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_adxl345_n));
    bufp->chgBit(oldp+110,(vlSelfRef.user_domain_sw_cs_tb__DOT__tb_dc_ssd1331));
    bufp->chgBit(oldp+111,(vlSelfRef.user_domain_sw_cs_tb__DOT__tb_int_adxl345));
    bufp->chgBit(oldp+112,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx));
    bufp->chgBit(oldp+113,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_addr_decode_periphs__DOT__dec_valid_o));
    bufp->chgBit(oldp+114,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_addr_decode_periphs__DOT__dec_error_o));
    bufp->chgBit(oldp+115,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__matched_rules));
    bufp->chgBit(oldp+116,(((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_up) 
                            ^ (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_down))));
    bufp->chgBit(oldp+117,(((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                             >> 0x13U) & ((0U == (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)) 
                                          & ((4U == 
                                              (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                               >> 0x14U)) 
                                             | (0U 
                                                == 
                                                (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                 >> 0x14U)))))));
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
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
}
