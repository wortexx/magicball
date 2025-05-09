// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_user_domain_spi_engine_test.h for the primary calling header

#include "Vtb_user_domain_spi_engine_test__pch.h"
#include "Vtb_user_domain_spi_engine_test___024root.h"

VL_ATTR_COLD void Vtb_user_domain_spi_engine_test___024root___eval_initial__TOP(Vtb_user_domain_spi_engine_test___024root* vlSelf);
VlCoroutine Vtb_user_domain_spi_engine_test___024root___eval_initial__TOP__Vtiming__0(Vtb_user_domain_spi_engine_test___024root* vlSelf);
VlCoroutine Vtb_user_domain_spi_engine_test___024root___eval_initial__TOP__Vtiming__1(Vtb_user_domain_spi_engine_test___024root* vlSelf);

void Vtb_user_domain_spi_engine_test___024root___eval_initial(Vtb_user_domain_spi_engine_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_spi_engine_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_spi_engine_test___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_user_domain_spi_engine_test___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_user_domain_spi_engine_test___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_user_domain_spi_engine_test___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_rsp__0 
        = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_rsp;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_rsp__0 
        = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_rsp;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w__0 
        = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r__0 
        = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o__0 
        = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_rsp__1 
        = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_rsp;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_rsp__1 
        = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_rsp;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w__1 
        = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r__1 
        = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o__1 
        = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_spi_engine_test__DOT__clk_i__0 
        = vlSelfRef.tb_user_domain_spi_engine_test__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_spi_engine_test__DOT__rst_ni__0 
        = vlSelfRef.tb_user_domain_spi_engine_test__DOT__rst_ni;
}

VL_INLINE_OPT VlCoroutine Vtb_user_domain_spi_engine_test___024root___eval_initial__TOP__Vtiming__0(Vtb_user_domain_spi_engine_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_spi_engine_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_spi_engine_test___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__clk_i = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x61a8ULL, 
                                             nullptr, 
                                             "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                             47);
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__clk_i 
            = (1U & (~ (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__clk_i)));
    }
}

void Vtb_user_domain_spi_engine_test___024root___act_comb__TOP__0(Vtb_user_domain_spi_engine_test___024root* vlSelf);
void Vtb_user_domain_spi_engine_test___024root___act_sequent__TOP__0(Vtb_user_domain_spi_engine_test___024root* vlSelf);
void Vtb_user_domain_spi_engine_test___024root___act_sequent__TOP__1(Vtb_user_domain_spi_engine_test___024root* vlSelf);
void Vtb_user_domain_spi_engine_test___024root___act_sequent__TOP__2(Vtb_user_domain_spi_engine_test___024root* vlSelf);
void Vtb_user_domain_spi_engine_test___024root___act_sequent__TOP__3(Vtb_user_domain_spi_engine_test___024root* vlSelf);
void Vtb_user_domain_spi_engine_test___024root___act_comb__TOP__1(Vtb_user_domain_spi_engine_test___024root* vlSelf);
void Vtb_user_domain_spi_engine_test___024root___act_comb__TOP__2(Vtb_user_domain_spi_engine_test___024root* vlSelf);
void Vtb_user_domain_spi_engine_test___024root___act_comb__TOP__3(Vtb_user_domain_spi_engine_test___024root* vlSelf);

void Vtb_user_domain_spi_engine_test___024root___eval_act(Vtb_user_domain_spi_engine_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_spi_engine_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_spi_engine_test___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0xa0ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_user_domain_spi_engine_test___024root___act_comb__TOP__0(vlSelf);
    }
    if ((0xcULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_user_domain_spi_engine_test___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_user_domain_spi_engine_test___024root___act_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_user_domain_spi_engine_test___024root___act_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_user_domain_spi_engine_test___024root___act_sequent__TOP__3(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((0x13ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_user_domain_spi_engine_test___024root___act_comb__TOP__1(vlSelf);
    }
    if ((0xb3ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_user_domain_spi_engine_test___024root___act_comb__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
    }
    if ((0xbfULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_user_domain_spi_engine_test___024root___act_comb__TOP__3(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_user_domain_spi_engine_test___024root___act_comb__TOP__0(Vtb_user_domain_spi_engine_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_spi_engine_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_spi_engine_test___024root___act_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__matched_rules = 0U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_addr_decode_periphs__DOT__dec_valid_o = 0U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_addr_decode_periphs__DOT__dec_error_o = 0U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx = 0U;
    if (((0x20001000U <= ((vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[2U] 
                           << 0x16U) | (vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[1U] 
                                        >> 0xaU))) 
         & (0x20002000U > ((vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[2U] 
                            << 0x16U) | (vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[1U] 
                                         >> 0xaU))))) {
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__matched_rules = 1U;
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_addr_decode_periphs__DOT__dec_valid_o = 1U;
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_addr_decode_periphs__DOT__dec_error_o = 0U;
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx = 1U;
    }
}

VL_INLINE_OPT void Vtb_user_domain_spi_engine_test___024root___act_sequent__TOP__0(Vtb_user_domain_spi_engine_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_spi_engine_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_spi_engine_test___024root___act_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_rsp 
        = ((0x7ffffffffcULL & vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_rsp) 
           | (IData)((IData)(((((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w) 
                                | (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r)) 
                               << 1U) | (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__rvalid_q)))));
}

VL_INLINE_OPT void Vtb_user_domain_spi_engine_test___024root___act_sequent__TOP__1(Vtb_user_domain_spi_engine_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_spi_engine_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_spi_engine_test___024root___act_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*38:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT____Vlvbound_hac3c7dda__0;
    tb_user_domain_spi_engine_test__DOT__dut__DOT____Vlvbound_hac3c7dda__0 = 0;
    // Body
    tb_user_domain_spi_engine_test__DOT__dut__DOT____Vlvbound_hac3c7dda__0 
        = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_rsp;
    if ((0x4dU >= (0x7fU & ((IData)(0x27U) * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserSpiCtrl))))) {
        VL_ASSIGNSEL_WQ(78,39,(0x7fU & ((IData)(0x27U) 
                                        * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserSpiCtrl))), vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp, tb_user_domain_spi_engine_test__DOT__dut__DOT____Vlvbound_hac3c7dda__0);
    }
}

VL_INLINE_OPT void Vtb_user_domain_spi_engine_test___024root___act_sequent__TOP__2(Vtb_user_domain_spi_engine_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_spi_engine_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_spi_engine_test___024root___act_sequent__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*38:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT____Vlvbound_he21410cb__0;
    tb_user_domain_spi_engine_test__DOT__dut__DOT____Vlvbound_he21410cb__0 = 0;
    // Body
    tb_user_domain_spi_engine_test__DOT__dut__DOT____Vlvbound_he21410cb__0 
        = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_rsp;
    if ((0x4dU >= (0x7fU & ((IData)(0x27U) * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserFontRom))))) {
        VL_ASSIGNSEL_WQ(78,39,(0x7fU & ((IData)(0x27U) 
                                        * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserFontRom))), vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp, tb_user_domain_spi_engine_test__DOT__dut__DOT____Vlvbound_he21410cb__0);
    }
}

VL_INLINE_OPT void Vtb_user_domain_spi_engine_test___024root___act_sequent__TOP__3(Vtb_user_domain_spi_engine_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_spi_engine_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_spi_engine_test___024root___act_sequent__TOP__3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_obi_rsp 
        = ((0x7ffffffffcULL & vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_obi_rsp) 
           | (IData)((IData)((((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o) 
                               << 1U) | (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__rvalid_q)))));
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[0U] 
        = (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_error_obi_rsp);
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[1U] 
        = (((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_obi_rsp) 
            << 7U) | (IData)((vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_error_obi_rsp 
                              >> 0x20U)));
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[2U] 
        = (((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_obi_rsp) 
            >> 0x19U) | ((IData)((vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_obi_rsp 
                                  >> 0x20U)) << 7U));
}

VL_INLINE_OPT void Vtb_user_domain_spi_engine_test___024root___act_comb__TOP__1(Vtb_user_domain_spi_engine_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_spi_engine_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_spi_engine_test___024root___act_comb__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__cnt_down 
        = ((0x4dU >= (0x7fU & ((IData)(0x27U) * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
           && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                     (3U & (((IData)(0x27U) * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__select_q)) 
                            >> 5U))] >> (0x1fU & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__select_q))))));
}

VL_INLINE_OPT void Vtb_user_domain_spi_engine_test___024root___act_comb__TOP__2(Vtb_user_domain_spi_engine_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_spi_engine_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_spi_engine_test___024root___act_comb__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT____VdfgExtracted_h3038c0fe__0;
    tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT____VdfgExtracted_h3038c0fe__0 = 0;
    // Body
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__select_d 
        = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__select_q;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__cnt_up = 0U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0U] = 0U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[1U] = 0U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] = 0U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] = 0U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[4U] = 0U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__forward_condition_met_actual = 0U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__is_same_target_dbg 
        = ((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx) 
           == (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__select_q));
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__no_flight_dbg 
        = (0U == (3U & (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q)));
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__one_completing_dbg 
        = ((1U == (3U & (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q))) 
           & (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__cnt_down));
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__forward_ok_dbg 
        = (((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__is_same_target_dbg) 
            | (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__no_flight_dbg)) 
           | (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__one_completing_dbg));
    if ((1U & (~ ((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q) 
                  >> 2U)))) {
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT____Vlvbound_h281faa94__0 
            = (1U & vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U]);
        if ((0x93U >= (0xffU & ((IData)(0x4aU) * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))) {
            vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[(7U 
                                                                                & (((IData)(0x4aU) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & ((IData)(0x4aU) 
                                                 * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))) 
                    & vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[
                    (7U & (((IData)(0x4aU) * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                           >> 5U))]) | ((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT____Vlvbound_h281faa94__0) 
                                        << (0x1fU & 
                                            ((IData)(0x4aU) 
                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))));
        }
        if ((1U & vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U])) {
            vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__forward_condition_met_actual = 1U;
        }
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT____Vlvbound_h07cd8bd2__0[0U] 
            = ((vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[1U] 
                << 0x1fU) | (vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] 
                             >> 1U));
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT____Vlvbound_h07cd8bd2__0[1U] 
            = ((vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[2U] 
                << 0x1fU) | (vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[1U] 
                             >> 1U));
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT____Vlvbound_h07cd8bd2__0[2U] 
            = (0x1ffU & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[2U] 
                         >> 1U));
        if ((0x93U >= ((IData)(1U) + (0xffU & ((IData)(0x4aU) 
                                               * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))) {
            VL_ASSIGNSEL_WW(148,73,((IData)(1U) + (0xffU 
                                                   & ((IData)(0x4aU) 
                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))), vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o, vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT____Vlvbound_h07cd8bd2__0);
        }
    }
    if ((((0x93U >= (0xffU & ((IData)(0x4aU) * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
          && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[
                    (7U & (((IData)(0x4aU) * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                           >> 5U))] >> (0x1fU & ((IData)(0x4aU) 
                                                 * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))) 
         & ((0x4dU >= ((IData)(1U) + (0x7fU & ((IData)(0x27U) 
                                               * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))) 
            && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                      (((IData)(1U) + (0x7fU & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                       >> 5U)] >> (0x1fU & ((IData)(1U) 
                                            + (0x7fU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))) {
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__select_d 
            = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx;
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__cnt_up = 1U;
    }
    if (VL_UNLIKELY((1U & vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U]))) {
        VL_WRITEF_NX("%t [DEMUX_DBG] InReq=%b, InSel=%1# | State: sel_q=%1#, in_flight=%1#, cnt_down(prev)=%b, overflow=%b\n               CondOrig: same=%b, no_flight=%b, one_comp=%b => forward_ok_orig=%b\n               Out: mgr_req[%1#].req=%b (Forwarded: %b), select_d=%1#, cnt_up=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (1U & vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U]),
                     1,(IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx),
                     1,vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__select_q,
                     2,(3U & (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q)),
                     1,(IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__cnt_down),
                     1,(1U & ((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q) 
                              >> 2U)),1,(IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__is_same_target_dbg),
                     1,vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__no_flight_dbg,
                     1,(IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__one_completing_dbg),
                     1,vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__forward_ok_dbg,
                     1,(IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx),
                     1,((0x93U >= (0xffU & ((IData)(0x4aU) 
                                            * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                        && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[
                                  (7U & (((IData)(0x4aU) 
                                          * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                         >> 5U))] >> 
                                  (0x1fU & ((IData)(0x4aU) 
                                            * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))),
                     1,(IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__forward_condition_met_actual),
                     1,vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__select_d,
                     1,(IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__cnt_up));
    }
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_d 
        = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q;
    if (((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__cnt_up) 
         ^ (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__cnt_down))) {
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_d 
            = (7U & ((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__cnt_down)
                      ? ((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)) : ((IData)(1U) 
                                           + (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q))));
    }
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o 
        = ((vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
            >> 0xaU) & ((IData)((0x800000U == (0xfff80000U 
                                               & vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U]))) 
                        | ((vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                            >> 0x13U) & ((0U == (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)) 
                                         & ((4U == 
                                             (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                              >> 0x14U)) 
                                            | (0U == 
                                               (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                >> 0x14U)))))));
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT____Vcellinp__i_id_fifo__push_i 
        = (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0U] 
                 & (IData)((vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_error_obi_rsp 
                            >> 1U))));
    if ((0x93U >= (0xffU & ((IData)(0x4aU) * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserFontRom))))) {
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_req[0U] 
            = (((0U == (0x1fU & ((IData)(0x4aU) * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserFontRom))))
                 ? 0U : (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[
                         ((IData)(1U) + (7U & (((IData)(0x4aU) 
                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserFontRom)) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x4aU) 
                                                  * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserFontRom)))))) 
               | (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[
                  (7U & (((IData)(0x4aU) * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserFontRom)) 
                         >> 5U))] >> (0x1fU & ((IData)(0x4aU) 
                                               * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserFontRom)))));
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_req[1U] 
            = (((0U == (0x1fU & ((IData)(0x4aU) * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserFontRom))))
                 ? 0U : (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[
                         ((IData)(2U) + (7U & (((IData)(0x4aU) 
                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserFontRom)) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x4aU) 
                                                  * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserFontRom)))))) 
               | (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[
                  ((IData)(1U) + (7U & (((IData)(0x4aU) 
                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserFontRom)) 
                                        >> 5U)))] >> 
                  (0x1fU & ((IData)(0x4aU) * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserFontRom)))));
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_req[2U] 
            = (0x3ffU & (((0U == (0x1fU & ((IData)(0x4aU) 
                                           * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserFontRom))))
                           ? 0U : (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[
                                   ((IData)(3U) + (7U 
                                                   & (((IData)(0x4aU) 
                                                       * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserFontRom)) 
                                                      >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x4aU) 
                                                   * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserFontRom)))))) 
                         | (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[
                            ((IData)(2U) + (7U & (((IData)(0x4aU) 
                                                   * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserFontRom)) 
                                                  >> 5U)))] 
                            >> (0x1fU & ((IData)(0x4aU) 
                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserFontRom))))));
    } else {
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_req[0U] = 0U;
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_req[1U] = 0U;
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_req[2U] = 0U;
    }
    if ((0x93U >= (0xffU & ((IData)(0x4aU) * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserSpiCtrl))))) {
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_req[0U] 
            = (((0U == (0x1fU & ((IData)(0x4aU) * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserSpiCtrl))))
                 ? 0U : (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[
                         ((IData)(1U) + (7U & (((IData)(0x4aU) 
                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserSpiCtrl)) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x4aU) 
                                                  * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserSpiCtrl)))))) 
               | (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[
                  (7U & (((IData)(0x4aU) * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserSpiCtrl)) 
                         >> 5U))] >> (0x1fU & ((IData)(0x4aU) 
                                               * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserSpiCtrl)))));
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_req[1U] 
            = (((0U == (0x1fU & ((IData)(0x4aU) * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserSpiCtrl))))
                 ? 0U : (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[
                         ((IData)(2U) + (7U & (((IData)(0x4aU) 
                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserSpiCtrl)) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x4aU) 
                                                  * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserSpiCtrl)))))) 
               | (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[
                  ((IData)(1U) + (7U & (((IData)(0x4aU) 
                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserSpiCtrl)) 
                                        >> 5U)))] >> 
                  (0x1fU & ((IData)(0x4aU) * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserSpiCtrl)))));
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_req[2U] 
            = (0x3ffU & (((0U == (0x1fU & ((IData)(0x4aU) 
                                           * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserSpiCtrl))))
                           ? 0U : (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[
                                   ((IData)(3U) + (7U 
                                                   & (((IData)(0x4aU) 
                                                       * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserSpiCtrl)) 
                                                      >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x4aU) 
                                                   * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserSpiCtrl)))))) 
                         | (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[
                            ((IData)(2U) + (7U & (((IData)(0x4aU) 
                                                   * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserSpiCtrl)) 
                                                  >> 5U)))] 
                            >> (0x1fU & ((IData)(0x4aU) 
                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserSpiCtrl))))));
    } else {
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_req[0U] = 0U;
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_req[1U] = 0U;
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_req[2U] = 0U;
    }
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__read_req_accepted_this_cycle 
        = (((vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
             >> 0xaU) & (0x800000U == (0xfff80000U 
                                       & vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U]))) 
           & (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o));
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__gate_clock = 1U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_n 
        = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_n 
        = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT____Vcellinp__i_id_fifo__push_i) 
         & (1U != (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__gate_clock = 0U;
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_n 
            = ((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q) 
               & ((IData)(1U) + (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q)));
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_error_obi_rsp) 
         & (0U != (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT____Vcellinp__i_id_fifo__push_i) 
           & (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_error_obi_rsp)) 
          & (1U != (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_n 
            = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q;
    }
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_n 
        = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_q;
    if (((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT____Vcellinp__i_id_fifo__push_i) 
         & (1U != (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT____Vlvbound_h3dcab515__0 
            = (7U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0U] 
                     >> 2U));
        if ((2U >= (3U & ((IData)(3U) * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q))))) {
            vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_n 
                = (((~ ((IData)(7U) << (3U & ((IData)(3U) 
                                              * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q))))) 
                    & (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_n)) 
                   | (7U & ((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT____Vlvbound_h3dcab515__0) 
                            << (3U & ((IData)(3U) * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q))))));
        }
    }
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_font_rom__DOT__read_req 
        = (1U & ((~ (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_req[1U] 
                     >> 9U)) & vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_req[0U]));
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__reg_rdata = 0U;
    if ((8U == (0xfffU & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_req[1U] 
                          >> 0xaU)))) {
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__reg_rdata 
            = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__prng_out_q;
    }
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__read_req 
        = (1U & ((~ (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_req[1U] 
                     >> 9U)) & vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_req[0U]));
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__write_req 
        = (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_req[0U] 
                 & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_req[1U] 
                    >> 9U)));
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_rsp 
        = ((0x7ffffffffcULL & vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_rsp) 
           | (IData)((IData)(((((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_font_rom__DOT__read_req) 
                                & (0x474U > (0xfffU 
                                             & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_req[1U] 
                                                >> 0xaU)))) 
                               << 1U) | (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_font_rom__DOT__rvalid_q)))));
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_rsp 
        = ((7ULL & vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_rsp) 
           | (((QData)((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_font_rom__DOT__rdata_q)) 
               << 7U) | ((QData)((IData)(((0xeU & (
                                                   vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_req[0U] 
                                                   >> 1U)) 
                                          | ((0x474U 
                                              <= (0xfffU 
                                                  & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_req[1U] 
                                                     >> 0xaU))) 
                                             & (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_font_rom__DOT__read_req))))) 
                         << 3U)));
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r 
        = ((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__read_req) 
           & (0x2000U == (0x3ffc00U & vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_req[1U])));
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w 
        = ((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__write_req) 
           & ((0U == (0xfffU & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_req[1U] 
                                >> 0xaU))) | (4U == 
                                              (0xfffU 
                                               & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_req[1U] 
                                                  >> 0xaU)))));
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT____VdfgRegularize_h18fe919a_0_4 
        = ((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__write_req) 
           & (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w));
    tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT____VdfgExtracted_h3038c0fe__0 
        = ((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT____VdfgRegularize_h18fe919a_0_4) 
           & (0U == (0x3ffc00U & vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_req[1U])));
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__cs1_n_d 
        = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__cs1_n_q;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__cs2_n_d 
        = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__cs2_n_q;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__dc_d 
        = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__dc_q;
    if (tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT____VdfgExtracted_h3038c0fe__0) {
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__cs1_n_d 
            = (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_req[0U] 
                     >> 5U));
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__cs2_n_d 
            = (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_req[0U] 
                     >> 6U));
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__dc_d 
            = (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_req[0U] 
                     >> 7U));
    }
}

VL_INLINE_OPT void Vtb_user_domain_spi_engine_test___024root___act_comb__TOP__3(Vtb_user_domain_spi_engine_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_spi_engine_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_spi_engine_test___024root___act_comb__TOP__3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_rsp 
        = ((7ULL & vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_rsp) 
           | (((QData)((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__rdata_q)) 
               << 7U) | ((QData)((IData)(((0xeU & (
                                                   vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_req[0U] 
                                                   >> 1U)) 
                                          | (((~ (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r)) 
                                              & (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__read_req)) 
                                             | ((~ (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w)) 
                                                & (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__write_req)))))) 
                         << 3U)));
}

void Vtb_user_domain_spi_engine_test___024root___nba_sequent__TOP__0(Vtb_user_domain_spi_engine_test___024root* vlSelf);
void Vtb_user_domain_spi_engine_test___024root___nba_sequent__TOP__1(Vtb_user_domain_spi_engine_test___024root* vlSelf);
void Vtb_user_domain_spi_engine_test___024root___nba_comb__TOP__0(Vtb_user_domain_spi_engine_test___024root* vlSelf);
void Vtb_user_domain_spi_engine_test___024root___nba_sequent__TOP__2(Vtb_user_domain_spi_engine_test___024root* vlSelf);
void Vtb_user_domain_spi_engine_test___024root___nba_comb__TOP__2(Vtb_user_domain_spi_engine_test___024root* vlSelf);

void Vtb_user_domain_spi_engine_test___024root___eval_nba(Vtb_user_domain_spi_engine_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_spi_engine_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_spi_engine_test___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x60ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_user_domain_spi_engine_test___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[7U] = 1U;
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_user_domain_spi_engine_test___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0xa0ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_user_domain_spi_engine_test___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x6cULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_user_domain_spi_engine_test___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x60ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_user_domain_spi_engine_test___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[8U] = 1U;
    }
    if ((0x70ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_user_domain_spi_engine_test___024root___nba_comb__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[9U] = 1U;
    }
    if ((0xf0ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_user_domain_spi_engine_test___024root___act_comb__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[0xaU] = 1U;
    }
    if ((0xfcULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_user_domain_spi_engine_test___024root___act_comb__TOP__3(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_user_domain_spi_engine_test___024root___nba_sequent__TOP__0(Vtb_user_domain_spi_engine_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_spi_engine_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_spi_engine_test___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__rdata_q 
        = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__rdata_q;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__cs1_n_q 
        = ((1U & (~ (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__rst_ni))) 
           || (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__cs1_n_d));
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__cs2_n_q 
        = ((1U & (~ (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__rst_ni))) 
           || (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__cs2_n_d));
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__dc_q 
        = ((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__rst_ni) 
           && (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__dc_d));
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q 
        = ((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__rst_ni) 
           && (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_n));
    if (vlSelfRef.tb_user_domain_spi_engine_test__DOT__rst_ni) {
        if (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__read_req_accepted) {
            vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__rdata_q 
                = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__reg_rdata;
            vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__rvalid_q = 1U;
        } else {
            if ((1U & (~ (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__rvalid_q)))) {
                vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__rdata_q = 0U;
            }
            vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__rvalid_q = 0U;
        }
        if (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_font_rom__DOT__read_req_accepted) {
            vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_font_rom__DOT__rdata_q 
                = ((0x474U > (0xfffU & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_req[1U] 
                                        >> 0xaU))) ? 
                   ((0x473U >= (0x7ffU & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_req[1U] 
                                          >> 0xaU)))
                     ? vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_font_rom__DOT__rom_data
                    [(0x7ffU & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_req[1U] 
                                >> 0xaU))] : 0U) : 0U);
            vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_font_rom__DOT__rvalid_q = 1U;
        } else {
            if ((1U & (~ (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_font_rom__DOT__rvalid_q)))) {
                vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_font_rom__DOT__rdata_q = 0U;
            }
            vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_font_rom__DOT__rvalid_q = 0U;
        }
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__prng_out_q 
            = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__i_xorshift__DOT__state_q;
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q 
            = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_d;
        if ((1U & (~ (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__gate_clock)))) {
            vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_q 
                = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_n;
        }
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q 
            = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_n;
        if (((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT____VdfgRegularize_h18fe919a_0_4) 
             & ((vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_req[0U] 
                 >> 5U) & (0x1000U == (0x3ffc00U & 
                                       vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_req[1U]))))) {
            vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__i_xorshift__DOT__state_q 
                = (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__i_xorshift__DOT__t2 
                   ^ VL_SHIFTL_III(32,32,32, vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__i_xorshift__DOT__t2, 5U));
        }
    } else {
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__rvalid_q = 0U;
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__rdata_q = 0U;
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_font_rom__DOT__rvalid_q = 0U;
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_font_rom__DOT__rdata_q = 0U;
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__prng_out_q = 0U;
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q = 0U;
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_q = 0U;
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q = 0U;
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__i_xorshift__DOT__state_q = 0xcafebabeU;
    }
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q 
        = ((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__rst_ni) 
           && (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_n));
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__select_q 
        = ((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__rst_ni) 
           && (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__select_d));
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__read_req_accepted 
        = ((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__rst_ni) 
           && ((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__read_req) 
               & (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r)));
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_font_rom__DOT__read_req_accepted 
        = ((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__rst_ni) 
           && ((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_font_rom__DOT__read_req) 
               & (IData)((vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_rsp 
                          >> 1U))));
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_error_obi_rsp = 0ULL;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_error_obi_rsp 
        = (0x7fULL & vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_error_obi_rsp);
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_error_obi_rsp 
        = ((7ULL & vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_error_obi_rsp) 
           | (0x5d6e558f00ULL | ((QData)((IData)((1U 
                                                  | (((2U 
                                                       >= 
                                                       (3U 
                                                        & ((IData)(3U) 
                                                           * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q))))
                                                       ? 
                                                      (7U 
                                                       & ((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_q) 
                                                          >> 
                                                          (3U 
                                                           & ((IData)(3U) 
                                                              * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q)))))
                                                       : 0U) 
                                                     << 1U)))) 
                                 << 3U)));
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_error_obi_rsp 
        = ((0x7ffffffffcULL & vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_error_obi_rsp) 
           | (IData)((IData)((((1U != (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q)) 
                               << 1U) | (0U != (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q))))));
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_n 
        = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q;
    if (((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_error_obi_rsp) 
         & (0U != (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_n 
            = ((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_n) 
               & ((IData)(1U) + (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q)));
    }
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__i_xorshift__DOT__t1 
        = (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__i_xorshift__DOT__state_q 
           ^ VL_SHIFTL_III(32,32,32, vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__i_xorshift__DOT__state_q, 0xdU));
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__i_xorshift__DOT__t2 
        = (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__i_xorshift__DOT__t1 
           ^ VL_SHIFTR_III(32,32,32, vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__i_xorshift__DOT__t1, 0x11U));
}

VL_INLINE_OPT void Vtb_user_domain_spi_engine_test___024root___nba_comb__TOP__0(Vtb_user_domain_spi_engine_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_spi_engine_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_spi_engine_test___024root___nba_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__matched_rules = 0U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_addr_decode_periphs__DOT__dec_valid_o = 0U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_addr_decode_periphs__DOT__dec_error_o = 0U;
    if (((0x20001000U <= ((vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[2U] 
                           << 0x16U) | (vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[1U] 
                                        >> 0xaU))) 
         & (0x20002000U > ((vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[2U] 
                            << 0x16U) | (vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[1U] 
                                         >> 0xaU))))) {
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__matched_rules = 1U;
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_addr_decode_periphs__DOT__dec_valid_o = 1U;
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_addr_decode_periphs__DOT__dec_error_o = 0U;
    }
}

VL_INLINE_OPT void Vtb_user_domain_spi_engine_test___024root___nba_comb__TOP__2(Vtb_user_domain_spi_engine_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_spi_engine_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_spi_engine_test___024root___nba_comb__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_obi_rsp 
        = ((0x7ffffffffcULL & vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_obi_rsp) 
           | (IData)((IData)((((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o) 
                               << 1U) | (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__rvalid_q)))));
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[0U] 
        = (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_error_obi_rsp);
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[1U] 
        = (((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_obi_rsp) 
            << 7U) | (IData)((vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_error_obi_rsp 
                              >> 0x20U)));
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[2U] 
        = (((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_obi_rsp) 
            >> 0x19U) | ((IData)((vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_obi_rsp 
                                  >> 0x20U)) << 7U));
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__cnt_down 
        = ((0x4dU >= (0x7fU & ((IData)(0x27U) * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
           && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                     (3U & (((IData)(0x27U) * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__select_q)) 
                            >> 5U))] >> (0x1fU & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__select_q))))));
}

void Vtb_user_domain_spi_engine_test___024root___timing_commit(Vtb_user_domain_spi_engine_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_spi_engine_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_spi_engine_test___024root___timing_commit\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (0x20ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h2977615d__0.commit(
                                                   "@(posedge tb_user_domain_spi_engine_test.clk_i)");
    }
}

void Vtb_user_domain_spi_engine_test___024root___timing_resume(Vtb_user_domain_spi_engine_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_spi_engine_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_spi_engine_test___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h2977615d__0.resume(
                                                   "@(posedge tb_user_domain_spi_engine_test.clk_i)");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_user_domain_spi_engine_test___024root___eval_triggers__act(Vtb_user_domain_spi_engine_test___024root* vlSelf);

bool Vtb_user_domain_spi_engine_test___024root___eval_phase__act(Vtb_user_domain_spi_engine_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_spi_engine_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_spi_engine_test___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<8> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_user_domain_spi_engine_test___024root___eval_triggers__act(vlSelf);
    Vtb_user_domain_spi_engine_test___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_user_domain_spi_engine_test___024root___timing_resume(vlSelf);
        Vtb_user_domain_spi_engine_test___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_user_domain_spi_engine_test___024root___eval_phase__nba(Vtb_user_domain_spi_engine_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_spi_engine_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_spi_engine_test___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_user_domain_spi_engine_test___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_user_domain_spi_engine_test___024root___dump_triggers__nba(Vtb_user_domain_spi_engine_test___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_user_domain_spi_engine_test___024root___dump_triggers__act(Vtb_user_domain_spi_engine_test___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_user_domain_spi_engine_test___024root___eval(Vtb_user_domain_spi_engine_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_spi_engine_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_spi_engine_test___024root___eval\n"); );
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
            Vtb_user_domain_spi_engine_test___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 6, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_user_domain_spi_engine_test___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 6, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_user_domain_spi_engine_test___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_user_domain_spi_engine_test___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_user_domain_spi_engine_test___024root___eval_debug_assertions(Vtb_user_domain_spi_engine_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_spi_engine_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_spi_engine_test___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
