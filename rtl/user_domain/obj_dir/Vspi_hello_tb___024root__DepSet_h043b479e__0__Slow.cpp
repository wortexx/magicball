// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_hello_tb.h for the primary calling header

#include "Vspi_hello_tb__pch.h"
#include "Vspi_hello_tb___024root.h"

VL_ATTR_COLD void Vspi_hello_tb___024root___eval_static__TOP(Vspi_hello_tb___024root* vlSelf);
VL_ATTR_COLD void Vspi_hello_tb___024root____Vm_traceActivitySetAll(Vspi_hello_tb___024root* vlSelf);

VL_ATTR_COLD void Vspi_hello_tb___024root___eval_static(Vspi_hello_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_hello_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_hello_tb___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vspi_hello_tb___024root___eval_static__TOP(vlSelf);
    Vspi_hello_tb___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vspi_hello_tb___024root___eval_static__TOP(Vspi_hello_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_hello_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_hello_tb___024root___eval_static__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.spi_hello_tb__DOT__clk = 0U;
    vlSelfRef.spi_hello_tb__DOT__rst_n = 0U;
}

VL_ATTR_COLD void Vspi_hello_tb___024root___eval_final(Vspi_hello_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_hello_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_hello_tb___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_hello_tb___024root___dump_triggers__stl(Vspi_hello_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vspi_hello_tb___024root___eval_phase__stl(Vspi_hello_tb___024root* vlSelf);

VL_ATTR_COLD void Vspi_hello_tb___024root___eval_settle(Vspi_hello_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_hello_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_hello_tb___024root___eval_settle\n"); );
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
            Vspi_hello_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("spi_hello_tb.sv", 7, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vspi_hello_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_hello_tb___024root___dump_triggers__stl(Vspi_hello_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_hello_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_hello_tb___024root___dump_triggers__stl\n"); );
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

VL_ATTR_COLD void Vspi_hello_tb___024root___stl_sequent__TOP__0(Vspi_hello_tb___024root* vlSelf);

VL_ATTR_COLD void Vspi_hello_tb___024root___eval_stl(Vspi_hello_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_hello_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_hello_tb___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vspi_hello_tb___024root___stl_sequent__TOP__0(vlSelf);
        Vspi_hello_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vspi_hello_tb___024root___stl_sequent__TOP__0(Vspi_hello_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_hello_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_hello_tb___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.spi_hello_tb__DOT__dut__DOT__busy = 0U;
    vlSelfRef.spi_hello_tb__DOT__dut__DOT__done = 0U;
    vlSelfRef.spi_hello_tb__DOT__cs = 1U;
    vlSelfRef.spi_hello_tb__DOT__dut__DOT__bit_cnt_d 
        = vlSelfRef.spi_hello_tb__DOT__dut__DOT__bit_cnt_q;
    vlSelfRef.spi_hello_tb__DOT__sck = 0U;
    vlSelfRef.spi_hello_tb__DOT__dut__DOT__state_d 
        = vlSelfRef.spi_hello_tb__DOT__dut__DOT__state_q;
    if ((2U & (IData)(vlSelfRef.spi_hello_tb__DOT__dut__DOT__state_q))) {
        if ((1U & (~ (IData)(vlSelfRef.spi_hello_tb__DOT__dut__DOT__state_q)))) {
            vlSelfRef.spi_hello_tb__DOT__dut__DOT__busy = 1U;
            if ((0U != (IData)(vlSelfRef.spi_hello_tb__DOT__dut__DOT__bit_cnt_q))) {
                vlSelfRef.spi_hello_tb__DOT__dut__DOT__bit_cnt_d 
                    = (7U & ((IData)(vlSelfRef.spi_hello_tb__DOT__dut__DOT__bit_cnt_q) 
                             - (IData)(1U)));
            }
            vlSelfRef.spi_hello_tb__DOT__sck = vlSelfRef.spi_hello_tb__DOT__clk;
        }
        if ((1U & (IData)(vlSelfRef.spi_hello_tb__DOT__dut__DOT__state_q))) {
            vlSelfRef.spi_hello_tb__DOT__dut__DOT__done = 1U;
            vlSelfRef.spi_hello_tb__DOT__dut__DOT__state_d = 0U;
            vlSelfRef.spi_hello_tb__DOT__cs = 1U;
        } else {
            if ((0U == (IData)(vlSelfRef.spi_hello_tb__DOT__dut__DOT__bit_cnt_q))) {
                vlSelfRef.spi_hello_tb__DOT__dut__DOT__state_d = 3U;
            }
            vlSelfRef.spi_hello_tb__DOT__cs = 0U;
        }
    } else if ((1U & (IData)(vlSelfRef.spi_hello_tb__DOT__dut__DOT__state_q))) {
        vlSelfRef.spi_hello_tb__DOT__dut__DOT__bit_cnt_d = 7U;
        vlSelfRef.spi_hello_tb__DOT__dut__DOT__state_d = 2U;
    } else if (vlSelfRef.spi_hello_tb__DOT__dut__DOT__start_flag) {
        vlSelfRef.spi_hello_tb__DOT__dut__DOT__state_d = 1U;
    }
}

VL_ATTR_COLD void Vspi_hello_tb___024root___eval_triggers__stl(Vspi_hello_tb___024root* vlSelf);

VL_ATTR_COLD bool Vspi_hello_tb___024root___eval_phase__stl(Vspi_hello_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_hello_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_hello_tb___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vspi_hello_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vspi_hello_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_hello_tb___024root___dump_triggers__act(Vspi_hello_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_hello_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_hello_tb___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge spi_hello_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge spi_hello_tb.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_hello_tb___024root___dump_triggers__nba(Vspi_hello_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_hello_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_hello_tb___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge spi_hello_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge spi_hello_tb.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vspi_hello_tb___024root____Vm_traceActivitySetAll(Vspi_hello_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_hello_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_hello_tb___024root____Vm_traceActivitySetAll\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void Vspi_hello_tb___024root___ctor_var_reset(Vspi_hello_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_hello_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_hello_tb___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->spi_hello_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->spi_hello_tb__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->spi_hello_tb__DOT__req = VL_RAND_RESET_I(1);
    vlSelf->spi_hello_tb__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->spi_hello_tb__DOT__wdata = VL_RAND_RESET_I(32);
    vlSelf->spi_hello_tb__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->spi_hello_tb__DOT__sck = VL_RAND_RESET_I(1);
    vlSelf->spi_hello_tb__DOT__cs = VL_RAND_RESET_I(1);
    vlSelf->spi_hello_tb__DOT__dut__DOT__tx_reg = VL_RAND_RESET_I(8);
    vlSelf->spi_hello_tb__DOT__dut__DOT__bit_cnt_q = VL_RAND_RESET_I(3);
    vlSelf->spi_hello_tb__DOT__dut__DOT__bit_cnt_d = VL_RAND_RESET_I(3);
    vlSelf->spi_hello_tb__DOT__dut__DOT__start_flag = VL_RAND_RESET_I(1);
    vlSelf->spi_hello_tb__DOT__dut__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->spi_hello_tb__DOT__dut__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->spi_hello_tb__DOT__dut__DOT__state_q = VL_RAND_RESET_I(2);
    vlSelf->spi_hello_tb__DOT__dut__DOT__state_d = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__spi_hello_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__spi_hello_tb__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
