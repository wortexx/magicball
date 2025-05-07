// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_user_spi_ctrl.h for the primary calling header

#include "Vtb_user_spi_ctrl__pch.h"
#include "Vtb_user_spi_ctrl___024root.h"

VL_ATTR_COLD void Vtb_user_spi_ctrl___024root___eval_static(Vtb_user_spi_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_spi_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_spi_ctrl___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_user_spi_ctrl___024root___eval_final__TOP(Vtb_user_spi_ctrl___024root* vlSelf);
VL_ATTR_COLD void Vtb_user_spi_ctrl___024root____Vm_traceActivitySetAll(Vtb_user_spi_ctrl___024root* vlSelf);

VL_ATTR_COLD void Vtb_user_spi_ctrl___024root___eval_final(Vtb_user_spi_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_spi_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_spi_ctrl___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_user_spi_ctrl___024root___eval_final__TOP(vlSelf);
    Vtb_user_spi_ctrl___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vtb_user_spi_ctrl___024root___eval_final__TOP(Vtb_user_spi_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_spi_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_spi_ctrl___024root___eval_final__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_user_spi_ctrl__DOT__req_ongoing) {
        vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[0U] 
            = (0xfffffffeU & vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[0U]);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_user_spi_ctrl___024root___dump_triggers__stl(Vtb_user_spi_ctrl___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_user_spi_ctrl___024root___eval_phase__stl(Vtb_user_spi_ctrl___024root* vlSelf);

VL_ATTR_COLD void Vtb_user_spi_ctrl___024root___eval_settle(Vtb_user_spi_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_spi_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_spi_ctrl___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb_user_spi_ctrl___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/user_domain/tb_user_spi_ctrl.sv", 7, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_user_spi_ctrl___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_user_spi_ctrl___024root___dump_triggers__stl(Vtb_user_spi_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_spi_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_spi_ctrl___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_user_spi_ctrl___024root___stl_sequent__TOP__0(Vtb_user_spi_ctrl___024root* vlSelf);

VL_ATTR_COLD void Vtb_user_spi_ctrl___024root___eval_stl(Vtb_user_spi_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_spi_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_spi_ctrl___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_user_spi_ctrl___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_user_spi_ctrl___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_user_spi_ctrl___024root___stl_sequent__TOP__0(Vtb_user_spi_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_spi_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_spi_ctrl___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__reg_rdata = 0U;
    if ((8U == (0xfffU & (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[1U] 
                          >> 0xaU)))) {
        vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__reg_rdata 
            = vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__prng_out_q;
    }
    vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__i_xorshift__DOT__t1 
        = (vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__i_xorshift__DOT__state_q 
           ^ VL_SHIFTL_III(32,32,32, vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__i_xorshift__DOT__state_q, 0xdU));
    vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__read_req 
        = (1U & ((~ (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[1U] 
                     >> 9U)) & vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[0U]));
    vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__write_req 
        = (1U & (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[0U] 
                 & (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[1U] 
                    >> 9U)));
    vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__i_xorshift__DOT__t2 
        = (vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__i_xorshift__DOT__t1 
           ^ VL_SHIFTR_III(32,32,32, vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__i_xorshift__DOT__t1, 0x11U));
    vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__grant_r 
        = ((IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__read_req) 
           & (0x2000U == (0x3ffc00U & vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[1U])));
    vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__grant_w 
        = ((IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__write_req) 
           & ((0U == (0xfffU & (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[1U] 
                                >> 0xaU))) | (4U == 
                                              (0xfffU 
                                               & (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[1U] 
                                                  >> 0xaU)))));
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp = ((0x7ffffffffcULL 
                                                 & vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp) 
                                                | (IData)((IData)(
                                                                  ((((IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__grant_w) 
                                                                     | (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__grant_r)) 
                                                                    << 1U) 
                                                                   | (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__rvalid_q)))));
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp = ((7ULL 
                                                 & vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp) 
                                                | (((QData)((IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__rdata_q)) 
                                                    << 7U) 
                                                   | ((QData)((IData)(
                                                                      ((0xeU 
                                                                        & (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[0U] 
                                                                           >> 1U)) 
                                                                       | (((~ (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__grant_r)) 
                                                                           & (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__read_req)) 
                                                                          | ((~ (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__grant_w)) 
                                                                             & (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__write_req)))))) 
                                                      << 3U)));
    vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT____VdfgRegularize_h3a782e5c_0_4 
        = ((IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__write_req) 
           & (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__grant_w));
    vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT____VdfgExtracted_h3038c0fe__0 
        = ((IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT____VdfgRegularize_h3a782e5c_0_4) 
           & (0U == (0x3ffc00U & vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[1U])));
    vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__cs1_n_d 
        = vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__cs1_n_q;
    vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__cs2_n_d 
        = vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__cs2_n_q;
    vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__dc_d 
        = vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__dc_q;
    if (vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT____VdfgExtracted_h3038c0fe__0) {
        vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__cs1_n_d 
            = (1U & (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[0U] 
                     >> 5U));
        vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__cs2_n_d 
            = (1U & (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[0U] 
                     >> 6U));
        vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__dc_d 
            = (1U & (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[0U] 
                     >> 7U));
    }
}

VL_ATTR_COLD void Vtb_user_spi_ctrl___024root___eval_triggers__stl(Vtb_user_spi_ctrl___024root* vlSelf);

VL_ATTR_COLD bool Vtb_user_spi_ctrl___024root___eval_phase__stl(Vtb_user_spi_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_spi_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_spi_ctrl___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_user_spi_ctrl___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_user_spi_ctrl___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_user_spi_ctrl___024root___dump_triggers__act(Vtb_user_spi_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_spi_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_spi_ctrl___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_user_spi_ctrl.clk_i)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_user_spi_ctrl.rst_ni)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_user_spi_ctrl___024root___dump_triggers__nba(Vtb_user_spi_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_spi_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_spi_ctrl___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_user_spi_ctrl.clk_i)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_user_spi_ctrl.rst_ni)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_user_spi_ctrl___024root____Vm_traceActivitySetAll(Vtb_user_spi_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_spi_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_spi_ctrl___024root____Vm_traceActivitySetAll\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
}

VL_ATTR_COLD void Vtb_user_spi_ctrl___024root___ctor_var_reset(Vtb_user_spi_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_spi_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_spi_ctrl___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_user_spi_ctrl__DOT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->tb_user_spi_ctrl__DOT__rst_ni = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(74, vlSelf->tb_user_spi_ctrl__DOT__obi_req);
    vlSelf->tb_user_spi_ctrl__DOT__obi_rsp = VL_RAND_RESET_Q(39);
    vlSelf->tb_user_spi_ctrl__DOT__req_ongoing = VL_RAND_RESET_I(1);
    vlSelf->tb_user_spi_ctrl__DOT__prng_val1 = VL_RAND_RESET_I(32);
    vlSelf->tb_user_spi_ctrl__DOT__prng_val2 = VL_RAND_RESET_I(32);
    vlSelf->tb_user_spi_ctrl__DOT__dut__DOT__cs1_n_q = VL_RAND_RESET_I(1);
    vlSelf->tb_user_spi_ctrl__DOT__dut__DOT__cs1_n_d = VL_RAND_RESET_I(1);
    vlSelf->tb_user_spi_ctrl__DOT__dut__DOT__cs2_n_q = VL_RAND_RESET_I(1);
    vlSelf->tb_user_spi_ctrl__DOT__dut__DOT__cs2_n_d = VL_RAND_RESET_I(1);
    vlSelf->tb_user_spi_ctrl__DOT__dut__DOT__dc_q = VL_RAND_RESET_I(1);
    vlSelf->tb_user_spi_ctrl__DOT__dut__DOT__dc_d = VL_RAND_RESET_I(1);
    vlSelf->tb_user_spi_ctrl__DOT__dut__DOT__prng_out_q = VL_RAND_RESET_I(32);
    vlSelf->tb_user_spi_ctrl__DOT__dut__DOT__rvalid_q = VL_RAND_RESET_I(1);
    vlSelf->tb_user_spi_ctrl__DOT__dut__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_user_spi_ctrl__DOT__dut__DOT__read_req_accepted = VL_RAND_RESET_I(1);
    vlSelf->tb_user_spi_ctrl__DOT__dut__DOT__write_req = VL_RAND_RESET_I(1);
    vlSelf->tb_user_spi_ctrl__DOT__dut__DOT__read_req = VL_RAND_RESET_I(1);
    vlSelf->tb_user_spi_ctrl__DOT__dut__DOT__reg_rdata = VL_RAND_RESET_I(32);
    vlSelf->tb_user_spi_ctrl__DOT__dut__DOT__grant_w = VL_RAND_RESET_I(1);
    vlSelf->tb_user_spi_ctrl__DOT__dut__DOT__grant_r = VL_RAND_RESET_I(1);
    vlSelf->tb_user_spi_ctrl__DOT__dut__DOT____VdfgExtracted_h3038c0fe__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_user_spi_ctrl__DOT__dut__DOT____VdfgRegularize_h3a782e5c_0_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_user_spi_ctrl__DOT__dut__DOT__i_xorshift__DOT__state_q = VL_RAND_RESET_I(32);
    vlSelf->tb_user_spi_ctrl__DOT__dut__DOT__i_xorshift__DOT__t1 = VL_RAND_RESET_I(32);
    vlSelf->tb_user_spi_ctrl__DOT__dut__DOT__i_xorshift__DOT__t2 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__tb_user_spi_ctrl__DOT__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_user_spi_ctrl__DOT__rst_ni__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
