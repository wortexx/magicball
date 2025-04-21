// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_obi_tb.h for the primary calling header

#include "Vspi_obi_tb__pch.h"
#include "Vspi_obi_tb___024root.h"

VlCoroutine Vspi_obi_tb___024root___eval_initial__TOP__Vtiming__0(Vspi_obi_tb___024root* vlSelf);
VlCoroutine Vspi_obi_tb___024root___eval_initial__TOP__Vtiming__1(Vspi_obi_tb___024root* vlSelf);

void Vspi_obi_tb___024root___eval_initial(Vspi_obi_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_obi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_obi_tb___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vspi_obi_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vspi_obi_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__spi_obi_tb__DOT__sck__0 
        = vlSelfRef.spi_obi_tb__DOT__sck;
    vlSelfRef.__Vtrigprevexpr___TOP__spi_obi_tb__DOT__clk__0 
        = vlSelfRef.spi_obi_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__spi_obi_tb__DOT__rst_ni__0 
        = vlSelfRef.spi_obi_tb__DOT__rst_ni;
}

VL_INLINE_OPT VlCoroutine Vspi_obi_tb___024root___eval_initial__TOP__Vtiming__0(Vspi_obi_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_obi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_obi_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.spi_obi_tb__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "spi_obi_tb.sv", 
                                             68);
        vlSelfRef.spi_obi_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.spi_obi_tb__DOT__clk)));
    }
}

void Vspi_obi_tb___024root___act_comb__TOP__0(Vspi_obi_tb___024root* vlSelf);

void Vspi_obi_tb___024root___eval_act(Vspi_obi_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_obi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_obi_tb___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0xaULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vspi_obi_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vspi_obi_tb___024root___act_comb__TOP__0(Vspi_obi_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_obi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_obi_tb___024root___act_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.spi_obi_tb__DOT__gnt = ((IData)(vlSelfRef.spi_obi_tb__DOT__req) 
                                      & (((~ (IData)(vlSelfRef.spi_obi_tb__DOT__we)) 
                                          & (8U == vlSelfRef.spi_obi_tb__DOT__addr)) 
                                         | ((IData)(vlSelfRef.spi_obi_tb__DOT__we) 
                                            & ((0U 
                                                == (IData)(vlSelfRef.spi_obi_tb__DOT__dut__DOT__state_q)) 
                                               & ((4U 
                                                   == vlSelfRef.spi_obi_tb__DOT__addr) 
                                                  | (0U 
                                                     == vlSelfRef.spi_obi_tb__DOT__addr))))));
    vlSelfRef.spi_obi_tb__DOT__dut__DOT__status_read_req 
        = ((~ (IData)(vlSelfRef.spi_obi_tb__DOT__we)) 
           & ((IData)(vlSelfRef.spi_obi_tb__DOT__req) 
              & ((IData)(vlSelfRef.spi_obi_tb__DOT__gnt) 
                 & (8U == vlSelfRef.spi_obi_tb__DOT__addr))));
}

void Vspi_obi_tb___024root___nba_sequent__TOP__0(Vspi_obi_tb___024root* vlSelf);
void Vspi_obi_tb___024root___nba_sequent__TOP__1(Vspi_obi_tb___024root* vlSelf);

void Vspi_obi_tb___024root___eval_nba(Vspi_obi_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_obi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_obi_tb___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vspi_obi_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vspi_obi_tb___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((0xeULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vspi_obi_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vspi_obi_tb___024root___nba_sequent__TOP__0(Vspi_obi_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_obi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_obi_tb___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("%t : SPI Shift - CS=%b MOSI=%b SCK \342\206\221\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelfRef.spi_obi_tb__DOT__cs),
                 1,vlSelfRef.spi_obi_tb__DOT__mosi);
}

VL_INLINE_OPT void Vspi_obi_tb___024root___nba_sequent__TOP__1(Vspi_obi_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_obi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_obi_tb___024root___nba_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.spi_obi_tb__DOT__dut__DOT__rvalid_q = 
        ((IData)(vlSelfRef.spi_obi_tb__DOT__rst_ni) 
         && (IData)(vlSelfRef.spi_obi_tb__DOT__dut__DOT__status_read_req));
    if (vlSelfRef.spi_obi_tb__DOT__rst_ni) {
        vlSelfRef.spi_obi_tb__DOT__dut__DOT__bit_cnt_q 
            = vlSelfRef.spi_obi_tb__DOT__dut__DOT__bit_cnt_d;
        vlSelfRef.spi_obi_tb__DOT__dut__DOT__tx_data_q 
            = vlSelfRef.spi_obi_tb__DOT__dut__DOT__tx_data_d;
        vlSelfRef.spi_obi_tb__DOT__dut__DOT__spi_clk_cnt_q 
            = vlSelfRef.spi_obi_tb__DOT__dut__DOT__spi_clk_cnt_d;
        vlSelfRef.spi_obi_tb__DOT__dut__DOT__rdata_q 
            = ((IData)(vlSelfRef.spi_obi_tb__DOT__dut__DOT__status_read_req)
                ? (((3U == (IData)(vlSelfRef.spi_obi_tb__DOT__dut__DOT__state_q)) 
                    << 1U) | ((0U != (IData)(vlSelfRef.spi_obi_tb__DOT__dut__DOT__state_q)) 
                              & (3U != (IData)(vlSelfRef.spi_obi_tb__DOT__dut__DOT__state_q))))
                : 0U);
        vlSelfRef.spi_obi_tb__DOT__dut__DOT__start_flag_q 
            = vlSelfRef.spi_obi_tb__DOT__dut__DOT__start_flag_d;
        if ((((IData)(vlSelfRef.spi_obi_tb__DOT__req) 
              & (IData)(vlSelfRef.spi_obi_tb__DOT__we)) 
             & (IData)(vlSelfRef.spi_obi_tb__DOT__gnt))) {
            if ((4U == vlSelfRef.spi_obi_tb__DOT__addr)) {
                if ((1U & (IData)(vlSelfRef.spi_obi_tb__DOT__be))) {
                    vlSelfRef.spi_obi_tb__DOT__dut__DOT__tx_data_q 
                        = (0xffU & vlSelfRef.spi_obi_tb__DOT__wdata);
                }
            }
            if ((4U != vlSelfRef.spi_obi_tb__DOT__addr)) {
                if ((0U == vlSelfRef.spi_obi_tb__DOT__addr)) {
                    vlSelfRef.spi_obi_tb__DOT__dut__DOT__start_flag_q = 1U;
                }
            }
        } else if (((0U == (IData)(vlSelfRef.spi_obi_tb__DOT__dut__DOT__state_q)) 
                    & (1U == (IData)(vlSelfRef.spi_obi_tb__DOT__dut__DOT__state_d)))) {
            vlSelfRef.spi_obi_tb__DOT__dut__DOT__start_flag_q = 0U;
        }
        vlSelfRef.spi_obi_tb__DOT__dut__DOT__state_q 
            = vlSelfRef.spi_obi_tb__DOT__dut__DOT__state_d;
    } else {
        vlSelfRef.spi_obi_tb__DOT__dut__DOT__bit_cnt_q = 0U;
        vlSelfRef.spi_obi_tb__DOT__dut__DOT__tx_data_q = 0U;
        vlSelfRef.spi_obi_tb__DOT__dut__DOT__spi_clk_cnt_q = 0U;
        vlSelfRef.spi_obi_tb__DOT__dut__DOT__rdata_q = 0U;
        vlSelfRef.spi_obi_tb__DOT__dut__DOT__start_flag_q = 0U;
        vlSelfRef.spi_obi_tb__DOT__dut__DOT__state_q = 0U;
    }
    vlSelfRef.spi_obi_tb__DOT__dut__DOT__tx_data_d 
        = vlSelfRef.spi_obi_tb__DOT__dut__DOT__tx_data_q;
    vlSelfRef.spi_obi_tb__DOT__cs = 1U;
    vlSelfRef.spi_obi_tb__DOT__dut__DOT__start_flag_d 
        = vlSelfRef.spi_obi_tb__DOT__dut__DOT__start_flag_q;
    if ((1U & (~ ((IData)(vlSelfRef.spi_obi_tb__DOT__dut__DOT__state_q) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelfRef.spi_obi_tb__DOT__dut__DOT__state_q)))) {
            if (vlSelfRef.spi_obi_tb__DOT__dut__DOT__start_flag_q) {
                vlSelfRef.spi_obi_tb__DOT__dut__DOT__start_flag_d = 0U;
            }
        }
    }
    vlSelfRef.spi_obi_tb__DOT__dut__DOT__spi_clk_cnt_d 
        = vlSelfRef.spi_obi_tb__DOT__dut__DOT__spi_clk_cnt_q;
    vlSelfRef.spi_obi_tb__DOT__sck = 0U;
    vlSelfRef.spi_obi_tb__DOT__dut__DOT__bit_cnt_d 
        = vlSelfRef.spi_obi_tb__DOT__dut__DOT__bit_cnt_q;
    vlSelfRef.spi_obi_tb__DOT__dut__DOT__state_d = vlSelfRef.spi_obi_tb__DOT__dut__DOT__state_q;
    vlSelfRef.spi_obi_tb__DOT__mosi = (1U & ((IData)(vlSelfRef.spi_obi_tb__DOT__dut__DOT__tx_data_q) 
                                             >> (7U 
                                                 & ((IData)(7U) 
                                                    - (IData)(vlSelfRef.spi_obi_tb__DOT__dut__DOT__bit_cnt_q)))));
    if ((2U & (IData)(vlSelfRef.spi_obi_tb__DOT__dut__DOT__state_q))) {
        vlSelfRef.spi_obi_tb__DOT__cs = (1U & (IData)(vlSelfRef.spi_obi_tb__DOT__dut__DOT__state_q));
        if ((1U & (~ (IData)(vlSelfRef.spi_obi_tb__DOT__dut__DOT__state_q)))) {
            vlSelfRef.spi_obi_tb__DOT__dut__DOT__spi_clk_cnt_d 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.spi_obi_tb__DOT__dut__DOT__spi_clk_cnt_q)));
            vlSelfRef.spi_obi_tb__DOT__sck = (4U <= (IData)(vlSelfRef.spi_obi_tb__DOT__dut__DOT__spi_clk_cnt_q));
            vlSelfRef.spi_obi_tb__DOT__dut__DOT__unnamedblk1__DOT__next_bit_idx_calc = 0U;
            if ((7U == (IData)(vlSelfRef.spi_obi_tb__DOT__dut__DOT__spi_clk_cnt_q))) {
                vlSelfRef.spi_obi_tb__DOT__dut__DOT__spi_clk_cnt_d = 0U;
                if ((0U != (IData)(vlSelfRef.spi_obi_tb__DOT__dut__DOT__bit_cnt_q))) {
                    vlSelfRef.spi_obi_tb__DOT__dut__DOT__bit_cnt_d 
                        = (7U & ((IData)(vlSelfRef.spi_obi_tb__DOT__dut__DOT__bit_cnt_q) 
                                 - (IData)(1U)));
                }
                vlSelfRef.spi_obi_tb__DOT__dut__DOT__unnamedblk1__DOT__next_bit_idx_calc 
                    = ((0U == (IData)(vlSelfRef.spi_obi_tb__DOT__dut__DOT__bit_cnt_q))
                        ? 0U : (0xfU & ((IData)(7U) 
                                        - ((IData)(vlSelfRef.spi_obi_tb__DOT__dut__DOT__bit_cnt_q) 
                                           - (IData)(1U)))));
                vlSelfRef.spi_obi_tb__DOT__mosi = (1U 
                                                   & ((IData)(vlSelfRef.spi_obi_tb__DOT__dut__DOT__tx_data_q) 
                                                      >> 
                                                      (7U 
                                                       & (IData)(vlSelfRef.spi_obi_tb__DOT__dut__DOT__unnamedblk1__DOT__next_bit_idx_calc))));
            }
        }
        if ((1U & (IData)(vlSelfRef.spi_obi_tb__DOT__dut__DOT__state_q))) {
            vlSelfRef.spi_obi_tb__DOT__dut__DOT__state_d = 0U;
        } else if ((7U == (IData)(vlSelfRef.spi_obi_tb__DOT__dut__DOT__spi_clk_cnt_q))) {
            if ((0U == (IData)(vlSelfRef.spi_obi_tb__DOT__dut__DOT__bit_cnt_q))) {
                vlSelfRef.spi_obi_tb__DOT__dut__DOT__state_d = 3U;
            }
        }
    } else if ((1U & (IData)(vlSelfRef.spi_obi_tb__DOT__dut__DOT__state_q))) {
        vlSelfRef.spi_obi_tb__DOT__cs = 0U;
        vlSelfRef.spi_obi_tb__DOT__dut__DOT__spi_clk_cnt_d = 0U;
        vlSelfRef.spi_obi_tb__DOT__dut__DOT__bit_cnt_d = 7U;
        vlSelfRef.spi_obi_tb__DOT__dut__DOT__state_d = 2U;
        vlSelfRef.spi_obi_tb__DOT__mosi = (1U & ((IData)(vlSelfRef.spi_obi_tb__DOT__dut__DOT__tx_data_q) 
                                                 >> 7U));
    } else if (vlSelfRef.spi_obi_tb__DOT__dut__DOT__start_flag_q) {
        vlSelfRef.spi_obi_tb__DOT__dut__DOT__state_d = 1U;
    }
}

void Vspi_obi_tb___024root___timing_commit(Vspi_obi_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_obi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_obi_tb___024root___timing_commit\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (2ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h4919987f__0.commit(
                                                   "@(posedge spi_obi_tb.clk)");
    }
}

void Vspi_obi_tb___024root___timing_resume(Vspi_obi_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_obi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_obi_tb___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h4919987f__0.resume(
                                                   "@(posedge spi_obi_tb.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vspi_obi_tb___024root___eval_triggers__act(Vspi_obi_tb___024root* vlSelf);

bool Vspi_obi_tb___024root___eval_phase__act(Vspi_obi_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_obi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_obi_tb___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vspi_obi_tb___024root___eval_triggers__act(vlSelf);
    Vspi_obi_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vspi_obi_tb___024root___timing_resume(vlSelf);
        Vspi_obi_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vspi_obi_tb___024root___eval_phase__nba(Vspi_obi_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_obi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_obi_tb___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vspi_obi_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_obi_tb___024root___dump_triggers__nba(Vspi_obi_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_obi_tb___024root___dump_triggers__act(Vspi_obi_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vspi_obi_tb___024root___eval(Vspi_obi_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_obi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_obi_tb___024root___eval\n"); );
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
            Vspi_obi_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("spi_obi_tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vspi_obi_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("spi_obi_tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vspi_obi_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vspi_obi_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vspi_obi_tb___024root___eval_debug_assertions(Vspi_obi_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_obi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_obi_tb___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
