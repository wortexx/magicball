// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuser_domain_sw_cs_tb.h for the primary calling header

#include "Vuser_domain_sw_cs_tb__pch.h"
#include "Vuser_domain_sw_cs_tb___024root.h"

VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024root___eval_initial__TOP(Vuser_domain_sw_cs_tb___024root* vlSelf);
VlCoroutine Vuser_domain_sw_cs_tb___024root___eval_initial__TOP__Vtiming__0(Vuser_domain_sw_cs_tb___024root* vlSelf);
VlCoroutine Vuser_domain_sw_cs_tb___024root___eval_initial__TOP__Vtiming__1(Vuser_domain_sw_cs_tb___024root* vlSelf);

void Vuser_domain_sw_cs_tb___024root___eval_initial(Vuser_domain_sw_cs_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuser_domain_sw_cs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_domain_sw_cs_tb___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vuser_domain_sw_cs_tb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vuser_domain_sw_cs_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vuser_domain_sw_cs_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__user_domain_sw_cs_tb__DOT__clk_i__0 
        = vlSelfRef.user_domain_sw_cs_tb__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__user_domain_sw_cs_tb__DOT__rst_ni__0 
        = vlSelfRef.user_domain_sw_cs_tb__DOT__rst_ni;
}

VL_INLINE_OPT VlCoroutine Vuser_domain_sw_cs_tb___024root___eval_initial__TOP__Vtiming__0(Vuser_domain_sw_cs_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuser_domain_sw_cs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_domain_sw_cs_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.user_domain_sw_cs_tb__DOT__clk_i = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                             91);
        vlSelfRef.user_domain_sw_cs_tb__DOT__clk_i 
            = (1U & (~ (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__clk_i)));
    }
}

VlCoroutine Vuser_domain_sw_cs_tb___024root___eval_initial__TOP__Vtiming__1__0(Vuser_domain_sw_cs_tb___024root* vlSelf);
VlCoroutine Vuser_domain_sw_cs_tb___024root___eval_initial__TOP__Vtiming__1__1(Vuser_domain_sw_cs_tb___024root* vlSelf);

VL_INLINE_OPT VlCoroutine Vuser_domain_sw_cs_tb___024root___eval_initial__TOP__Vtiming__1(Vuser_domain_sw_cs_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuser_domain_sw_cs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_domain_sw_cs_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await Vuser_domain_sw_cs_tb___024root___eval_initial__TOP__Vtiming__1__0(vlSelf);
    co_await Vuser_domain_sw_cs_tb___024root___eval_initial__TOP__Vtiming__1__1(vlSelf);
}

void Vuser_domain_sw_cs_tb___024root___act_comb__TOP__0(Vuser_domain_sw_cs_tb___024root* vlSelf);

void Vuser_domain_sw_cs_tb___024root___eval_act(Vuser_domain_sw_cs_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuser_domain_sw_cs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_domain_sw_cs_tb___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((5ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vuser_domain_sw_cs_tb___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
}

VL_INLINE_OPT void Vuser_domain_sw_cs_tb___024root___act_comb__TOP__0(Vuser_domain_sw_cs_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuser_domain_sw_cs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_domain_sw_cs_tb___024root___act_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__matched_rules = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_addr_decode_periphs__DOT__dec_valid_o = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_addr_decode_periphs__DOT__dec_error_o = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx = 0U;
    if (((0x20001000U <= ((vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] 
                           << 0x16U) | (vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
                                        >> 0xaU))) 
         & (0x20002000U > ((vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] 
                            << 0x16U) | (vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
                                         >> 0xaU))))) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__matched_rules = 1U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_addr_decode_periphs__DOT__dec_valid_o = 1U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_addr_decode_periphs__DOT__dec_error_o = 0U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx = 1U;
    }
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_d 
        = vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q;
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_up = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[1U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[4U] = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q) 
                  >> 1U)))) {
        if ((1U & ((((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx) 
                     == (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)) 
                    | (~ (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q))) 
                   | ((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q) 
                      & (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_down))))) {
            vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT____Vlvbound_h235a59af__0 
                = (1U & vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U]);
            if ((0x93U >= (0xffU & ((IData)(0x4aU) 
                                    * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))) {
                vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[(7U 
                                                                                & (((IData)(0x4aU) 
                                                                                * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x4aU) 
                                             * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))) 
                        & vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[
                        (7U & (((IData)(0x4aU) * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)) 
                               >> 5U))]) | ((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT____Vlvbound_h235a59af__0) 
                                            << (0x1fU 
                                                & ((IData)(0x4aU) 
                                                   * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))));
            }
            vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT____Vlvbound_h19131224__0[0U] 
                = ((vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
                    << 0x1fU) | (vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
                                 >> 1U));
            vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT____Vlvbound_h19131224__0[1U] 
                = ((vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] 
                    << 0x1fU) | (vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
                                 >> 1U));
            vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT____Vlvbound_h19131224__0[2U] 
                = (0x1ffU & (vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] 
                             >> 1U));
            if ((0x93U >= ((IData)(1U) + (0xffU & ((IData)(0x4aU) 
                                                   * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))))) {
                VL_ASSIGNSEL_WW(148,73,((IData)(1U) 
                                        + (0xffU & 
                                           ((IData)(0x4aU) 
                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))), vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o, vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT____Vlvbound_h19131224__0);
            }
        }
    }
    if ((((0x93U >= (0xffU & ((IData)(0x4aU) * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))) 
          && (1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[
                    (7U & (((IData)(0x4aU) * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)) 
                           >> 5U))] >> (0x1fU & ((IData)(0x4aU) 
                                                 * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))))) 
         & ((0x4dU >= ((IData)(1U) + (0x7fU & ((IData)(0x27U) 
                                               * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))) 
            && (1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                      (((IData)(1U) + (0x7fU & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))) 
                       >> 5U)] >> (0x1fU & ((IData)(1U) 
                                            + (0x7fU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))))))))) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_d 
            = vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx;
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_up = 1U;
    }
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_d 
        = vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q;
    if (((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_up) 
         ^ (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_down))) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_d 
            = (3U & ((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_down)
                      ? ((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)) : ((IData)(1U) 
                                           + (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q))));
    }
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT____Vcellinp__i_id_fifo__push_i 
        = (1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0U] 
                 & (IData)((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_error_obi_rsp 
                            >> 1U))));
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__gate_clock = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_n 
        = vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q;
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_n 
        = vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT____Vcellinp__i_id_fifo__push_i) 
         & (1U != (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__gate_clock = 0U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_n 
            = ((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q) 
               & ((IData)(1U) + (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q)));
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_error_obi_rsp) 
         & (0U != (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT____Vcellinp__i_id_fifo__push_i) 
           & (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_error_obi_rsp)) 
          & (1U != (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_n 
            = vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q;
    }
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_n 
        = vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_q;
    if (((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT____Vcellinp__i_id_fifo__push_i) 
         & (1U != (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT____Vlvbound_h3dcab515__0 
            = (7U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0U] 
                     >> 2U));
        if ((2U >= (3U & ((IData)(3U) * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q))))) {
            vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_n 
                = (((~ ((IData)(7U) << (3U & ((IData)(3U) 
                                              * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q))))) 
                    & (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_n)) 
                   | (7U & ((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT____Vlvbound_h3dcab515__0) 
                            << (3U & ((IData)(3U) * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q))))));
        }
    }
}

void Vuser_domain_sw_cs_tb___024root___nba_sequent__TOP__0(Vuser_domain_sw_cs_tb___024root* vlSelf);
void Vuser_domain_sw_cs_tb___024root___nba_comb__TOP__0(Vuser_domain_sw_cs_tb___024root* vlSelf);
void Vuser_domain_sw_cs_tb___024root___nba_comb__TOP__1(Vuser_domain_sw_cs_tb___024root* vlSelf);

void Vuser_domain_sw_cs_tb___024root___eval_nba(Vuser_domain_sw_cs_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuser_domain_sw_cs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_domain_sw_cs_tb___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vuser_domain_sw_cs_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vuser_domain_sw_cs_tb___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vuser_domain_sw_cs_tb___024root___nba_comb__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
    }
}

VL_INLINE_OPT void Vuser_domain_sw_cs_tb___024root___nba_sequent__TOP__0(Vuser_domain_sw_cs_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuser_domain_sw_cs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_domain_sw_cs_tb___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q 
        = ((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__rst_ni) 
           && (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_n));
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q 
        = ((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__rst_ni) 
           && (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_d));
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q 
        = ((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__rst_ni) 
           && (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_n));
    if (vlSelfRef.user_domain_sw_cs_tb__DOT__rst_ni) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q 
            = vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_d;
        if ((1U & (~ (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__gate_clock)))) {
            vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_q 
                = vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_n;
        }
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q 
            = vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_n;
    } else {
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q = 0U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_q = 0U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q = 0U;
    }
    if (VL_UNLIKELY(vlSelfRef.user_domain_sw_cs_tb__DOT__rst_ni)) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q 
            = vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_d;
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q 
            = vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_d;
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_q 
            = vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_d;
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__rdata_q 
            = (((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_req[0U] 
                 & (0x2000U == (0x3ffe00U & vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_req[1U]))) 
                & (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o))
                ? (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__status_bits)
                : 0U);
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_q 
            = vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_d;
        if (VL_UNLIKELY(((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_req[0U] 
                          & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_req[1U] 
                             >> 9U)) & (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o)))) {
            VL_WRITEF_NX("%t : SPI PERIPH READ REQ -> addr_i = 0x%08x | gnt_o = %b | rvalid_q = %b | we_i = %b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,32,((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_req[2U] 
                                 << 0x16U) | (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_req[1U] 
                                              >> 0xaU)),
                         1,(IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o),
                         1,vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__rvalid_q,
                         1,(1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_req[1U] 
                                  >> 9U)));
            if ((4U == ((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_req[2U] 
                         << 0x16U) | (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_req[1U] 
                                      >> 0xaU)))) {
                if ((0x20U & vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_req[1U])) {
                    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_q 
                        = (0xffU & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_req[0U] 
                                    >> 5U));
                }
            } else if ((0U == ((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_req[2U] 
                                << 0x16U) | (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_req[1U] 
                                             >> 0xaU)))) {
                vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_q = 1U;
            }
        } else if (((0U == (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)) 
                    & (1U == (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_d)))) {
            vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_q = 0U;
        }
        VL_WRITEF_NX("%t : SPI PERIPH READ REQ -> addr_i = 0x%08x | gnt_o = %b | rvalid_q = %b | we_i = %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     ((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_req[2U] 
                       << 0x16U) | (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_req[1U] 
                                    >> 0xaU)),1,(IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o),
                     1,vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__rvalid_q,
                     1,(1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_req[1U] 
                              >> 9U)));
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_q 
            = vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_d;
    } else {
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_q = 0U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_q = 0U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_q = 0U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q = 0U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q = 0U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__rvalid_q = 0U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__rdata_q = 0U;
    }
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_error_obi_rsp = 0ULL;
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_error_obi_rsp 
        = (0x7fULL & vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_error_obi_rsp);
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_error_obi_rsp 
        = ((7ULL & vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_error_obi_rsp) 
           | (0x5d6e558f00ULL | ((QData)((IData)((1U 
                                                  | (((2U 
                                                       >= 
                                                       (3U 
                                                        & ((IData)(3U) 
                                                           * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q))))
                                                       ? 
                                                      (7U 
                                                       & ((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_q) 
                                                          >> 
                                                          (3U 
                                                           & ((IData)(3U) 
                                                              * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q)))))
                                                       : 0U) 
                                                     << 1U)))) 
                                 << 3U)));
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_error_obi_rsp 
        = ((0x7ffffffffcULL & vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_error_obi_rsp) 
           | (IData)((IData)((((1U != (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q)) 
                               << 1U) | (0U != (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q))))));
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_d 
        = vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_q;
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_rsp 
        = ((0x7fULL & vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_rsp) 
           | ((QData)((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__rdata_q)) 
              << 7U));
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__cs_o = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__status_bits 
        = (((3U == (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)) 
            << 1U) | ((0U != (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)) 
                      & (3U != (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_q))));
    vlSelfRef.user_domain_sw_cs_tb__DOT__spi_sck_o = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_d 
        = vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_q;
    if ((1U & (~ ((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_q) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)))) {
            if (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_q) {
                vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_d = 0U;
            }
        }
    }
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_d 
        = vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q;
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_d 
        = vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q;
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_d 
        = vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_q;
    vlSelfRef.user_domain_sw_cs_tb__DOT__spi_mosi_o 
        = (1U & ((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_q) 
                 >> (7U & ((IData)(7U) - (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q)))));
    if ((2U & (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_q))) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__cs_o 
            = (1U & (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_q));
        if ((1U & (~ (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)))) {
            vlSelfRef.user_domain_sw_cs_tb__DOT__spi_sck_o 
                = (4U <= (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q));
            vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_d 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q)));
            vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__unnamedblk1__DOT__next_bit_idx_calc = 0U;
            if ((7U == (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q))) {
                vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_d = 0U;
                if ((0U != (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q))) {
                    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_d 
                        = (7U & ((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q) 
                                 - (IData)(1U)));
                }
                vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__unnamedblk1__DOT__next_bit_idx_calc 
                    = ((0U == (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q))
                        ? 0U : (0xfU & ((IData)(7U) 
                                        - ((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q) 
                                           - (IData)(1U)))));
                vlSelfRef.user_domain_sw_cs_tb__DOT__spi_mosi_o 
                    = (1U & ((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_q) 
                             >> (7U & (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__unnamedblk1__DOT__next_bit_idx_calc))));
            }
        }
        if ((1U & (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_q))) {
            vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_d = 0U;
        } else if ((7U == (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q))) {
            if ((0U == (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q))) {
                vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_d = 3U;
            }
        }
    } else if ((1U & (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_q))) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__cs_o = 0U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_d = 0U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_d = 7U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_d = 2U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__spi_mosi_o 
            = (1U & ((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_q) 
                     >> 7U));
    } else if (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_q) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_d = 1U;
    }
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o 
        = (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_req[0U] 
           & ((IData)((0x2000U == (0x3ffe00U & vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_req[1U]))) 
              | ((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_req[1U] 
                  >> 9U) & ((0U == (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)) 
                            & ((4U == ((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_req[2U] 
                                        << 0x16U) | 
                                       (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_req[1U] 
                                        >> 0xaU))) 
                               | (0U == ((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_req[2U] 
                                          << 0x16U) 
                                         | (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_req[1U] 
                                            >> 0xaU))))))));
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_n 
        = vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q;
    if (((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_error_obi_rsp) 
         & (0U != (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_n 
            = ((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_n) 
               & ((IData)(1U) + (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q)));
    }
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_rsp 
        = ((0x7ffffffffcULL & vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_rsp) 
           | (IData)((IData)((((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o) 
                               << 1U) | (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__rvalid_q)))));
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[0U] 
        = (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_error_obi_rsp);
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[1U] 
        = (((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_rsp) 
            << 7U) | (IData)((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_error_obi_rsp 
                              >> 0x20U)));
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[2U] 
        = (((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_rsp) 
            >> 0x19U) | ((IData)((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_rsp 
                                  >> 0x20U)) << 7U));
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_down 
        = ((0x4dU >= (0x7fU & ((IData)(0x27U) * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
           && (1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                     (3U & (((IData)(0x27U) * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)) 
                            >> 5U))] >> (0x1fU & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))));
}

VL_INLINE_OPT void Vuser_domain_sw_cs_tb___024root___nba_comb__TOP__0(Vuser_domain_sw_cs_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuser_domain_sw_cs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_domain_sw_cs_tb___024root___nba_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__matched_rules = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_addr_decode_periphs__DOT__dec_valid_o = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_addr_decode_periphs__DOT__dec_error_o = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx = 0U;
    if (((0x20001000U <= ((vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] 
                           << 0x16U) | (vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
                                        >> 0xaU))) 
         & (0x20002000U > ((vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] 
                            << 0x16U) | (vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
                                         >> 0xaU))))) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__matched_rules = 1U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_addr_decode_periphs__DOT__dec_valid_o = 1U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_addr_decode_periphs__DOT__dec_error_o = 0U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx = 1U;
    }
}

VL_INLINE_OPT void Vuser_domain_sw_cs_tb___024root___nba_comb__TOP__1(Vuser_domain_sw_cs_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuser_domain_sw_cs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_domain_sw_cs_tb___024root___nba_comb__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_d 
        = vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q;
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_up = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[1U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[4U] = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q) 
                  >> 1U)))) {
        if ((1U & ((((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx) 
                     == (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)) 
                    | (~ (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q))) 
                   | ((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q) 
                      & (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_down))))) {
            vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT____Vlvbound_h235a59af__0 
                = (1U & vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U]);
            if ((0x93U >= (0xffU & ((IData)(0x4aU) 
                                    * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))) {
                vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[(7U 
                                                                                & (((IData)(0x4aU) 
                                                                                * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x4aU) 
                                             * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))) 
                        & vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[
                        (7U & (((IData)(0x4aU) * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)) 
                               >> 5U))]) | ((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT____Vlvbound_h235a59af__0) 
                                            << (0x1fU 
                                                & ((IData)(0x4aU) 
                                                   * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))));
            }
            vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT____Vlvbound_h19131224__0[0U] 
                = ((vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
                    << 0x1fU) | (vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
                                 >> 1U));
            vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT____Vlvbound_h19131224__0[1U] 
                = ((vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] 
                    << 0x1fU) | (vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
                                 >> 1U));
            vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT____Vlvbound_h19131224__0[2U] 
                = (0x1ffU & (vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] 
                             >> 1U));
            if ((0x93U >= ((IData)(1U) + (0xffU & ((IData)(0x4aU) 
                                                   * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))))) {
                VL_ASSIGNSEL_WW(148,73,((IData)(1U) 
                                        + (0xffU & 
                                           ((IData)(0x4aU) 
                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))), vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o, vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT____Vlvbound_h19131224__0);
            }
        }
    }
    if ((((0x93U >= (0xffU & ((IData)(0x4aU) * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))) 
          && (1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[
                    (7U & (((IData)(0x4aU) * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)) 
                           >> 5U))] >> (0x1fU & ((IData)(0x4aU) 
                                                 * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))))) 
         & ((0x4dU >= ((IData)(1U) + (0x7fU & ((IData)(0x27U) 
                                               * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))) 
            && (1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                      (((IData)(1U) + (0x7fU & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))) 
                       >> 5U)] >> (0x1fU & ((IData)(1U) 
                                            + (0x7fU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))))))))) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_d 
            = vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx;
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_up = 1U;
    }
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_d 
        = vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q;
    if (((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_up) 
         ^ (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_down))) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_d 
            = (3U & ((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_down)
                      ? ((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)) : ((IData)(1U) 
                                           + (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q))));
    }
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT____Vcellinp__i_id_fifo__push_i 
        = (1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0U] 
                 & (IData)((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_error_obi_rsp 
                            >> 1U))));
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__gate_clock = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_n 
        = vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q;
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_n 
        = vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT____Vcellinp__i_id_fifo__push_i) 
         & (1U != (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__gate_clock = 0U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_n 
            = ((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q) 
               & ((IData)(1U) + (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q)));
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_error_obi_rsp) 
         & (0U != (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT____Vcellinp__i_id_fifo__push_i) 
           & (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_error_obi_rsp)) 
          & (1U != (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_n 
            = vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q;
    }
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_n 
        = vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_q;
    if (((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT____Vcellinp__i_id_fifo__push_i) 
         & (1U != (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT____Vlvbound_h3dcab515__0 
            = (7U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0U] 
                     >> 2U));
        if ((2U >= (3U & ((IData)(3U) * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q))))) {
            vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_n 
                = (((~ ((IData)(7U) << (3U & ((IData)(3U) 
                                              * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q))))) 
                    & (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_n)) 
                   | (7U & ((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT____Vlvbound_h3dcab515__0) 
                            << (3U & ((IData)(3U) * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q))))));
        }
    }
}

void Vuser_domain_sw_cs_tb___024root___timing_commit(Vuser_domain_sw_cs_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuser_domain_sw_cs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_domain_sw_cs_tb___024root___timing_commit\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h7829ce67__0.commit(
                                                   "@(posedge user_domain_sw_cs_tb.clk_i)");
    }
}

void Vuser_domain_sw_cs_tb___024root___timing_resume(Vuser_domain_sw_cs_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuser_domain_sw_cs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_domain_sw_cs_tb___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h7829ce67__0.resume(
                                                   "@(posedge user_domain_sw_cs_tb.clk_i)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vuser_domain_sw_cs_tb___024root___eval_triggers__act(Vuser_domain_sw_cs_tb___024root* vlSelf);

bool Vuser_domain_sw_cs_tb___024root___eval_phase__act(Vuser_domain_sw_cs_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuser_domain_sw_cs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_domain_sw_cs_tb___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vuser_domain_sw_cs_tb___024root___eval_triggers__act(vlSelf);
    Vuser_domain_sw_cs_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vuser_domain_sw_cs_tb___024root___timing_resume(vlSelf);
        Vuser_domain_sw_cs_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vuser_domain_sw_cs_tb___024root___eval_phase__nba(Vuser_domain_sw_cs_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuser_domain_sw_cs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_domain_sw_cs_tb___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vuser_domain_sw_cs_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024root___dump_triggers__nba(Vuser_domain_sw_cs_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024root___dump_triggers__act(Vuser_domain_sw_cs_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vuser_domain_sw_cs_tb___024root___eval(Vuser_domain_sw_cs_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuser_domain_sw_cs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_domain_sw_cs_tb___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vuser_domain_sw_cs_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 10, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vuser_domain_sw_cs_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 10, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vuser_domain_sw_cs_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vuser_domain_sw_cs_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vuser_domain_sw_cs_tb___024root___eval_debug_assertions(Vuser_domain_sw_cs_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuser_domain_sw_cs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_domain_sw_cs_tb___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
