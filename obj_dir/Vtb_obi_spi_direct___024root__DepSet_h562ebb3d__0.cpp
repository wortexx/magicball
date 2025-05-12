// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_obi_spi_direct.h for the primary calling header

#include "Vtb_obi_spi_direct__pch.h"
#include "Vtb_obi_spi_direct___024root.h"

VL_ATTR_COLD void Vtb_obi_spi_direct___024root___eval_initial__TOP(Vtb_obi_spi_direct___024root* vlSelf);
VlCoroutine Vtb_obi_spi_direct___024root___eval_initial__TOP__Vtiming__0(Vtb_obi_spi_direct___024root* vlSelf);
VlCoroutine Vtb_obi_spi_direct___024root___eval_initial__TOP__Vtiming__1(Vtb_obi_spi_direct___024root* vlSelf);

void Vtb_obi_spi_direct___024root___eval_initial(Vtb_obi_spi_direct___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_obi_spi_direct__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_obi_spi_direct___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_obi_spi_direct___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_obi_spi_direct___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_obi_spi_direct___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_obi_spi_direct__DOT__clk_i__0 
        = vlSelfRef.tb_obi_spi_direct__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_obi_spi_direct__DOT__rst_ni__0 
        = vlSelfRef.tb_obi_spi_direct__DOT__rst_ni;
}

VL_INLINE_OPT VlCoroutine Vtb_obi_spi_direct___024root___eval_initial__TOP__Vtiming__0(Vtb_obi_spi_direct___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_obi_spi_direct__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_obi_spi_direct___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_obi_spi_direct__DOT__clk_i = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x61a8ULL, 
                                             nullptr, 
                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                             41);
        vlSelfRef.tb_obi_spi_direct__DOT__clk_i = (1U 
                                                   & (~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__clk_i)));
    }
}

void Vtb_obi_spi_direct___024root___act_comb__TOP__0(Vtb_obi_spi_direct___024root* vlSelf);

void Vtb_obi_spi_direct___024root___eval_act(Vtb_obi_spi_direct___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_obi_spi_direct__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_obi_spi_direct___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((5ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_obi_spi_direct___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_obi_spi_direct___024root___act_comb__TOP__0(Vtb_obi_spi_direct___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_obi_spi_direct__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_obi_spi_direct___024root___act_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_obi_spi_direct__DOT__gnt_o = ((IData)(vlSelfRef.tb_obi_spi_direct__DOT__req_i) 
                                               & (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__we_i)) 
                                                   & (8U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelfRef.tb_obi_spi_direct__DOT__addr_i))) 
                                                  | ((IData)(vlSelfRef.tb_obi_spi_direct__DOT__we_i) 
                                                     & ((0U 
                                                         == (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__state_q)) 
                                                        & ((4U 
                                                            == 
                                                            (0xfffU 
                                                             & vlSelfRef.tb_obi_spi_direct__DOT__addr_i)) 
                                                           | (0U 
                                                              == 
                                                              (0xfffU 
                                                               & vlSelfRef.tb_obi_spi_direct__DOT__addr_i)))))));
}

void Vtb_obi_spi_direct___024root___nba_sequent__TOP__0(Vtb_obi_spi_direct___024root* vlSelf);
void Vtb_obi_spi_direct___024root___nba_sequent__TOP__1(Vtb_obi_spi_direct___024root* vlSelf);

void Vtb_obi_spi_direct___024root___eval_nba(Vtb_obi_spi_direct___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_obi_spi_direct__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_obi_spi_direct___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_obi_spi_direct___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_obi_spi_direct___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_obi_spi_direct___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vtb_obi_spi_direct___024root___timing_commit(Vtb_obi_spi_direct___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_obi_spi_direct__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_obi_spi_direct___024root___timing_commit\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h72f6d80e__0.commit(
                                                   "@(posedge tb_obi_spi_direct.clk_i)");
    }
}

void Vtb_obi_spi_direct___024root___timing_resume(Vtb_obi_spi_direct___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_obi_spi_direct__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_obi_spi_direct___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h72f6d80e__0.resume(
                                                   "@(posedge tb_obi_spi_direct.clk_i)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_obi_spi_direct___024root___eval_triggers__act(Vtb_obi_spi_direct___024root* vlSelf);

bool Vtb_obi_spi_direct___024root___eval_phase__act(Vtb_obi_spi_direct___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_obi_spi_direct__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_obi_spi_direct___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_obi_spi_direct___024root___eval_triggers__act(vlSelf);
    Vtb_obi_spi_direct___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_obi_spi_direct___024root___timing_resume(vlSelf);
        Vtb_obi_spi_direct___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_obi_spi_direct___024root___eval_phase__nba(Vtb_obi_spi_direct___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_obi_spi_direct__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_obi_spi_direct___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_obi_spi_direct___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_obi_spi_direct___024root___dump_triggers__nba(Vtb_obi_spi_direct___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_obi_spi_direct___024root___dump_triggers__act(Vtb_obi_spi_direct___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_obi_spi_direct___024root___eval(Vtb_obi_spi_direct___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_obi_spi_direct__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_obi_spi_direct___024root___eval\n"); );
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
            Vtb_obi_spi_direct___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/user_domain/tb_obi_spi_direct.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_obi_spi_direct___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/user_domain/tb_obi_spi_direct.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_obi_spi_direct___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_obi_spi_direct___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_obi_spi_direct___024root___eval_debug_assertions(Vtb_obi_spi_direct___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_obi_spi_direct__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_obi_spi_direct___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
