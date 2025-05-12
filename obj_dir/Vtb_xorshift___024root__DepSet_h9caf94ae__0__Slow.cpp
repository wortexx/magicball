// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_xorshift.h for the primary calling header

#include "Vtb_xorshift__pch.h"
#include "Vtb_xorshift___024root.h"

VL_ATTR_COLD void Vtb_xorshift___024root___eval_static(Vtb_xorshift___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xorshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xorshift___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_xorshift___024root___eval_initial__TOP(Vtb_xorshift___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xorshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xorshift___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U] = 0U;
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[1U] = 0U;
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[2U] = 0U;
    vlSelfRef.tb_xorshift__DOT__req_ongoing = 0U;
}

VL_ATTR_COLD void Vtb_xorshift___024root___eval_final__TOP(Vtb_xorshift___024root* vlSelf);
VL_ATTR_COLD void Vtb_xorshift___024root____Vm_traceActivitySetAll(Vtb_xorshift___024root* vlSelf);

VL_ATTR_COLD void Vtb_xorshift___024root___eval_final(Vtb_xorshift___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xorshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xorshift___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_xorshift___024root___eval_final__TOP(vlSelf);
    Vtb_xorshift___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vtb_xorshift___024root___eval_final__TOP(Vtb_xorshift___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xorshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xorshift___024root___eval_final__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_xorshift__DOT__req_ongoing) {
        vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U] 
            = (0xfffffffeU & vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U]);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_xorshift___024root___dump_triggers__stl(Vtb_xorshift___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_xorshift___024root___eval_phase__stl(Vtb_xorshift___024root* vlSelf);

VL_ATTR_COLD void Vtb_xorshift___024root___eval_settle(Vtb_xorshift___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xorshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xorshift___024root___eval_settle\n"); );
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
            Vtb_xorshift___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/user_domain/tb_xorshift.sv", 5, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_xorshift___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_xorshift___024root___dump_triggers__stl(Vtb_xorshift___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xorshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xorshift___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] tb_xorshift.obi_rsp_o_from_dut)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_xorshift___024root___stl_sequent__TOP__0(Vtb_xorshift___024root* vlSelf);
void Vtb_xorshift___024root___nba_comb__TOP__0(Vtb_xorshift___024root* vlSelf);

VL_ATTR_COLD void Vtb_xorshift___024root___eval_stl(Vtb_xorshift___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xorshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xorshift___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_xorshift___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_xorshift___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_xorshift___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_xorshift___024root___stl_sequent__TOP__0(Vtb_xorshift___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xorshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xorshift___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_xorshift__DOT__dut__DOT__t1 = (vlSelfRef.tb_xorshift__DOT__dut__DOT__prng_state_q 
                                                ^ VL_SHIFTL_III(32,32,32, vlSelfRef.tb_xorshift__DOT__dut__DOT__prng_state_q, 0xdU));
    vlSelfRef.tb_xorshift__DOT__dut__DOT__is_ctrl_write 
        = (vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U] 
           & (0x200U == (0x7200U & vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[1U])));
    vlSelfRef.tb_xorshift__DOT__dut__DOT__read_req 
        = (1U & ((~ (vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[1U] 
                     >> 9U)) & vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U]));
    vlSelfRef.tb_xorshift__DOT__dut__DOT__t2 = (vlSelfRef.tb_xorshift__DOT__dut__DOT__t1 
                                                ^ VL_SHIFTR_III(32,32,32, vlSelfRef.tb_xorshift__DOT__dut__DOT__t1, 0x11U));
    vlSelfRef.tb_xorshift__DOT__dut__DOT__is_rdata_read 
        = ((IData)(vlSelfRef.tb_xorshift__DOT__dut__DOT__read_req) 
           & (0x1000U == (0x7000U & vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[1U])));
    vlSelfRef.tb_xorshift__DOT__dut__DOT__prng_state_d 
        = (vlSelfRef.tb_xorshift__DOT__dut__DOT__t2 
           ^ VL_SHIFTL_III(32,32,32, vlSelfRef.tb_xorshift__DOT__dut__DOT__t2, 5U));
    vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
        = ((0x7ffffffffcULL & vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut) 
           | (IData)((IData)(((((IData)(vlSelfRef.tb_xorshift__DOT__dut__DOT__is_ctrl_write) 
                                | (IData)(vlSelfRef.tb_xorshift__DOT__dut__DOT__is_rdata_read)) 
                               << 1U) | (IData)(vlSelfRef.tb_xorshift__DOT__dut__DOT__rvalid_q)))));
}

VL_ATTR_COLD void Vtb_xorshift___024root___eval_triggers__stl(Vtb_xorshift___024root* vlSelf);

VL_ATTR_COLD bool Vtb_xorshift___024root___eval_phase__stl(Vtb_xorshift___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xorshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xorshift___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_xorshift___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_xorshift___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_xorshift___024root___dump_triggers__act(Vtb_xorshift___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xorshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xorshift___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] tb_xorshift.obi_rsp_o_from_dut)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb_xorshift.clk_i)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge tb_xorshift.rst_ni)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_xorshift___024root___dump_triggers__nba(Vtb_xorshift___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xorshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xorshift___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] tb_xorshift.obi_rsp_o_from_dut)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb_xorshift.clk_i)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge tb_xorshift.rst_ni)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_xorshift___024root____Vm_traceActivitySetAll(Vtb_xorshift___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xorshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xorshift___024root____Vm_traceActivitySetAll\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
}

VL_ATTR_COLD void Vtb_xorshift___024root___ctor_var_reset(Vtb_xorshift___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xorshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xorshift___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_xorshift__DOT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->tb_xorshift__DOT__rst_ni = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(74, vlSelf->tb_xorshift__DOT__obi_req_i_to_dut);
    vlSelf->tb_xorshift__DOT__obi_rsp_o_from_dut = VL_RAND_RESET_Q(39);
    vlSelf->tb_xorshift__DOT__req_ongoing = VL_RAND_RESET_I(1);
    vlSelf->tb_xorshift__DOT__unnamedblk1__DOT__prn_val = VL_RAND_RESET_I(32);
    vlSelf->tb_xorshift__DOT__unnamedblk1__DOT__read_error = VL_RAND_RESET_I(1);
    vlSelf->tb_xorshift__DOT__unnamedblk1__DOT__prev_prn_val = VL_RAND_RESET_I(32);
    vlSelf->tb_xorshift__DOT__unnamedblk1__DOT__invalid_addr = VL_RAND_RESET_I(32);
    vlSelf->tb_xorshift__DOT__dut__DOT__prng_state_q = VL_RAND_RESET_I(32);
    vlSelf->tb_xorshift__DOT__dut__DOT__prng_state_d = VL_RAND_RESET_I(32);
    vlSelf->tb_xorshift__DOT__dut__DOT__trigger_prng_update = VL_RAND_RESET_I(1);
    vlSelf->tb_xorshift__DOT__dut__DOT__t1 = VL_RAND_RESET_I(32);
    vlSelf->tb_xorshift__DOT__dut__DOT__t2 = VL_RAND_RESET_I(32);
    vlSelf->tb_xorshift__DOT__dut__DOT__rvalid_q = VL_RAND_RESET_I(1);
    vlSelf->tb_xorshift__DOT__dut__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_xorshift__DOT__dut__DOT__read_granted_this_cycle = VL_RAND_RESET_I(1);
    vlSelf->tb_xorshift__DOT__dut__DOT__is_ctrl_write = VL_RAND_RESET_I(1);
    vlSelf->tb_xorshift__DOT__dut__DOT__is_rdata_read = VL_RAND_RESET_I(1);
    vlSelf->tb_xorshift__DOT__dut__DOT__read_req = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_xorshift__DOT__obi_rsp_o_from_dut__0 = VL_RAND_RESET_Q(39);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_xorshift__DOT__obi_rsp_o_from_dut__1 = VL_RAND_RESET_Q(39);
    vlSelf->__Vtrigprevexpr___TOP__tb_xorshift__DOT__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_xorshift__DOT__rst_ni__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
