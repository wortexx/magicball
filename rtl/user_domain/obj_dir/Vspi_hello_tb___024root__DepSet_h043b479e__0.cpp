// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_hello_tb.h for the primary calling header

#include "Vspi_hello_tb__pch.h"
#include "Vspi_hello_tb___024root.h"

VlCoroutine Vspi_hello_tb___024root___eval_initial__TOP__Vtiming__0(Vspi_hello_tb___024root* vlSelf);
VlCoroutine Vspi_hello_tb___024root___eval_initial__TOP__Vtiming__1(Vspi_hello_tb___024root* vlSelf);

void Vspi_hello_tb___024root___eval_initial(Vspi_hello_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_hello_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_hello_tb___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vspi_hello_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vspi_hello_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__spi_hello_tb__DOT__clk__0 
        = vlSelfRef.spi_hello_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__spi_hello_tb__DOT__rst_n__0 
        = vlSelfRef.spi_hello_tb__DOT__rst_n;
}

VL_INLINE_OPT VlCoroutine Vspi_hello_tb___024root___eval_initial__TOP__Vtiming__1(Vspi_hello_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_hello_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_hello_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "spi_hello_tb.sv", 
                                             13);
        vlSelfRef.spi_hello_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.spi_hello_tb__DOT__clk)));
    }
}

void Vspi_hello_tb___024root___act_sequent__TOP__0(Vspi_hello_tb___024root* vlSelf);

void Vspi_hello_tb___024root___eval_act(Vspi_hello_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_hello_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_hello_tb___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vspi_hello_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vspi_hello_tb___024root___act_sequent__TOP__0(Vspi_hello_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_hello_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_hello_tb___024root___act_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.spi_hello_tb__DOT__sck = 0U;
    if ((2U & (IData)(vlSelfRef.spi_hello_tb__DOT__dut__DOT__state_q))) {
        if ((1U & (~ (IData)(vlSelfRef.spi_hello_tb__DOT__dut__DOT__state_q)))) {
            vlSelfRef.spi_hello_tb__DOT__sck = vlSelfRef.spi_hello_tb__DOT__clk;
        }
    }
}

void Vspi_hello_tb___024root___nba_sequent__TOP__0(Vspi_hello_tb___024root* vlSelf);

void Vspi_hello_tb___024root___eval_nba(Vspi_hello_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_hello_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_hello_tb___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vspi_hello_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vspi_hello_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vspi_hello_tb___024root___nba_sequent__TOP__0(Vspi_hello_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_hello_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_hello_tb___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.spi_hello_tb__DOT__rst_n) {
        if (((IData)(vlSelfRef.spi_hello_tb__DOT__req) 
             & (IData)(vlSelfRef.spi_hello_tb__DOT__we))) {
            if ((4U == vlSelfRef.spi_hello_tb__DOT__addr)) {
                vlSelfRef.spi_hello_tb__DOT__dut__DOT__tx_reg 
                    = (0xffU & vlSelfRef.spi_hello_tb__DOT__wdata);
            }
            if ((4U != vlSelfRef.spi_hello_tb__DOT__addr)) {
                if ((0U == vlSelfRef.spi_hello_tb__DOT__addr)) {
                    vlSelfRef.spi_hello_tb__DOT__dut__DOT__start_flag = 1U;
                }
            }
        } else if ((3U == (IData)(vlSelfRef.spi_hello_tb__DOT__dut__DOT__state_q))) {
            vlSelfRef.spi_hello_tb__DOT__dut__DOT__start_flag = 0U;
        }
        vlSelfRef.spi_hello_tb__DOT__dut__DOT__bit_cnt_q 
            = vlSelfRef.spi_hello_tb__DOT__dut__DOT__bit_cnt_d;
        vlSelfRef.spi_hello_tb__DOT__dut__DOT__state_q 
            = vlSelfRef.spi_hello_tb__DOT__dut__DOT__state_d;
    } else {
        vlSelfRef.spi_hello_tb__DOT__dut__DOT__tx_reg = 0U;
        vlSelfRef.spi_hello_tb__DOT__dut__DOT__bit_cnt_q = 0U;
        vlSelfRef.spi_hello_tb__DOT__dut__DOT__start_flag = 0U;
        vlSelfRef.spi_hello_tb__DOT__dut__DOT__state_q = 0U;
    }
    vlSelfRef.spi_hello_tb__DOT__dut__DOT__busy = 0U;
    vlSelfRef.spi_hello_tb__DOT__dut__DOT__done = 0U;
    vlSelfRef.spi_hello_tb__DOT__cs = 1U;
    vlSelfRef.spi_hello_tb__DOT__dut__DOT__bit_cnt_d 
        = vlSelfRef.spi_hello_tb__DOT__dut__DOT__bit_cnt_q;
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

void Vspi_hello_tb___024root___timing_resume(Vspi_hello_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_hello_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_hello_tb___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vspi_hello_tb___024root___eval_triggers__act(Vspi_hello_tb___024root* vlSelf);

bool Vspi_hello_tb___024root___eval_phase__act(Vspi_hello_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_hello_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_hello_tb___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vspi_hello_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vspi_hello_tb___024root___timing_resume(vlSelf);
        Vspi_hello_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vspi_hello_tb___024root___eval_phase__nba(Vspi_hello_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_hello_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_hello_tb___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vspi_hello_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_hello_tb___024root___dump_triggers__nba(Vspi_hello_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_hello_tb___024root___dump_triggers__act(Vspi_hello_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vspi_hello_tb___024root___eval(Vspi_hello_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_hello_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_hello_tb___024root___eval\n"); );
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
            Vspi_hello_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("spi_hello_tb.sv", 7, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vspi_hello_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("spi_hello_tb.sv", 7, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vspi_hello_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vspi_hello_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vspi_hello_tb___024root___eval_debug_assertions(Vspi_hello_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_hello_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_hello_tb___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
