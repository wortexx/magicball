// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_obi_spi_direct.h for the primary calling header

#include "Vtb_obi_spi_direct__pch.h"
#include "Vtb_obi_spi_direct___024root.h"

VlCoroutine Vtb_obi_spi_direct___024root___eval_initial__TOP__Vtiming__0(Vtb_obi_spi_direct___024root* vlSelf);
VlCoroutine Vtb_obi_spi_direct___024root___eval_initial__TOP__Vtiming__1(Vtb_obi_spi_direct___024root* vlSelf);

void Vtb_obi_spi_direct___024root___eval_initial(Vtb_obi_spi_direct___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_obi_spi_direct__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_obi_spi_direct___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_obi_spi_direct___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_obi_spi_direct___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_obi_spi_direct__DOT__clk__0 
        = vlSelfRef.tb_obi_spi_direct__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_obi_spi_direct__DOT__rst_ni__0 
        = vlSelfRef.tb_obi_spi_direct__DOT__rst_ni;
}

VL_INLINE_OPT VlCoroutine Vtb_obi_spi_direct___024root___eval_initial__TOP__Vtiming__0(Vtb_obi_spi_direct___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_obi_spi_direct__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_obi_spi_direct___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_obi_spi_direct__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x61a8ULL, 
                                             nullptr, 
                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                             63);
        vlSelfRef.tb_obi_spi_direct__DOT__clk = (1U 
                                                 & (~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__clk)));
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
    vlSelfRef.tb_obi_spi_direct__DOT__gnt = ((IData)(vlSelfRef.tb_obi_spi_direct__DOT__req) 
                                             & (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__we)) 
                                                 & (8U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelfRef.tb_obi_spi_direct__DOT__addr))) 
                                                | ((IData)(vlSelfRef.tb_obi_spi_direct__DOT__we) 
                                                   & ((0U 
                                                       == (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__state_q)) 
                                                      & ((4U 
                                                          == 
                                                          (0xfffU 
                                                           & vlSelfRef.tb_obi_spi_direct__DOT__addr)) 
                                                         | (0U 
                                                            == 
                                                            (0xfffU 
                                                             & vlSelfRef.tb_obi_spi_direct__DOT__addr)))))));
}

void Vtb_obi_spi_direct___024root___nba_sequent__TOP__0(Vtb_obi_spi_direct___024root* vlSelf);

void Vtb_obi_spi_direct___024root___eval_nba(Vtb_obi_spi_direct___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_obi_spi_direct__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_obi_spi_direct___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_obi_spi_direct___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_obi_spi_direct___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_obi_spi_direct___024root___nba_sequent__TOP__0(Vtb_obi_spi_direct___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_obi_spi_direct__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_obi_spi_direct___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_obi_spi_direct__DOT__rst_ni) {
        if (VL_UNLIKELY(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q)) {
            VL_WRITEF_NX("%t [DUT_OBI_READ] rvalid_o is HIGH. Outputting rdata_q=0x%x (status={done:%b, busy:%b})\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,32,vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rdata_q,
                         1,(1U & ((IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__status_bits) 
                                  >> 1U)),1,(1U & (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__status_bits)));
            Verilated::runFlushCallbacks();
            vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rdata_q 
                = vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__status_bits;
        } else {
            vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rdata_q = 0U;
        }
        vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__done_q 
            = ((2U == (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__state_q)) 
               & (3U == (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__state_d)));
        vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__bit_cnt_q 
            = vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__bit_cnt_d;
        vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__spi_clk_cnt_q 
            = vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__spi_clk_cnt_d;
        vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__start_flag_q 
            = vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__start_flag_d;
        vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q 
            = vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__read_req_accepted;
        vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__tx_data_q 
            = vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__tx_data_d;
        if ((((IData)(vlSelfRef.tb_obi_spi_direct__DOT__req) 
              & (IData)(vlSelfRef.tb_obi_spi_direct__DOT__we)) 
             & (IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt))) {
            if ((4U == (0xfffU & vlSelfRef.tb_obi_spi_direct__DOT__addr))) {
                if ((1U & (IData)(vlSelfRef.tb_obi_spi_direct__DOT__be))) {
                    vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__tx_data_q 
                        = (0xffU & vlSelfRef.tb_obi_spi_direct__DOT__wdata);
                }
            } else if ((0U == (0xfffU & vlSelfRef.tb_obi_spi_direct__DOT__addr))) {
                vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__start_flag_q = 1U;
            }
        } else if (((0U == (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__state_q)) 
                    & (1U == (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__state_d)))) {
            vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__start_flag_q = 0U;
        }
        vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__read_req_accepted 
            = ((((IData)(vlSelfRef.tb_obi_spi_direct__DOT__req) 
                 & (~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__we))) 
                & (IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt)) 
               & (8U == (0xfffU & vlSelfRef.tb_obi_spi_direct__DOT__addr)));
        vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__state_q 
            = vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__state_d;
    } else {
        vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__state_q = 0U;
        vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__tx_data_q = 0U;
        vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__start_flag_q = 0U;
        vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__bit_cnt_q = 0U;
        vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__spi_clk_cnt_q = 0U;
        vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q = 0U;
        vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rdata_q = 0U;
        vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__done_q = 0U;
        vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__read_req_accepted = 0U;
    }
    vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__tx_data_d 
        = vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__tx_data_q;
    vlSelfRef.tb_obi_spi_direct__DOT__sck_o = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__spi_clk_cnt_d 
        = vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__spi_clk_cnt_q;
    vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__start_flag_d 
        = vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__start_flag_q;
    if ((1U & (~ ((IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__state_q) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__state_q)))) {
            if (vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__start_flag_q) {
                vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__start_flag_d = 0U;
            }
        }
    }
    vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__status_bits 
        = (((IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__done_q) 
            << 1U) | ((0U != (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__state_q)) 
                      & (3U != (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__state_q))));
    vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__bit_cnt_d 
        = vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__bit_cnt_q;
    vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__state_d 
        = vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__state_q;
    vlSelfRef.tb_obi_spi_direct__DOT__mosi_o = (1U 
                                                & ((IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__tx_data_q) 
                                                   >> (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__bit_cnt_q)));
    if ((2U & (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__state_q))) {
        vlSelfRef.tb_obi_spi_direct__DOT__cs_no = (1U 
                                                   & (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__state_q));
        if ((1U & (~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__state_q)))) {
            vlSelfRef.tb_obi_spi_direct__DOT__sck_o 
                = (2U <= (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__spi_clk_cnt_q));
            vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__spi_clk_cnt_d 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__spi_clk_cnt_q)));
            if ((3U == (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__spi_clk_cnt_q))) {
                vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__spi_clk_cnt_d = 0U;
                if ((0U != (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__bit_cnt_q))) {
                    vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__bit_cnt_d 
                        = (7U & ((IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__bit_cnt_q) 
                                 - (IData)(1U)));
                }
                vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__unnamedblk1__DOT__next_bit_idx_calc 
                    = (7U & ((0U == (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__bit_cnt_q))
                              ? (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__bit_cnt_q)
                              : ((IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__bit_cnt_q) 
                                 - (IData)(1U))));
                vlSelfRef.tb_obi_spi_direct__DOT__mosi_o 
                    = (1U & ((IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__tx_data_q) 
                             >> (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__unnamedblk1__DOT__next_bit_idx_calc)));
            }
        }
        if ((1U & (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__state_q))) {
            vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__state_d = 0U;
        } else if ((3U == (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__spi_clk_cnt_q))) {
            if ((0U == (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__bit_cnt_q))) {
                vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__state_d = 3U;
            }
        }
    } else {
        vlSelfRef.tb_obi_spi_direct__DOT__cs_no = (1U 
                                                   & (~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__state_q)));
        if ((1U & (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__state_q))) {
            vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__spi_clk_cnt_d = 0U;
            vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__bit_cnt_d = 7U;
            vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__state_d = 2U;
            vlSelfRef.tb_obi_spi_direct__DOT__mosi_o 
                = (1U & ((IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__tx_data_q) 
                         >> 7U));
        } else if (vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__start_flag_q) {
            vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__state_d = 1U;
        }
    }
}

void Vtb_obi_spi_direct___024root___timing_commit(Vtb_obi_spi_direct___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_obi_spi_direct__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_obi_spi_direct___024root___timing_commit\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hadee6d82__0.commit(
                                                   "@(posedge tb_obi_spi_direct.clk)");
    }
}

void Vtb_obi_spi_direct___024root___timing_resume(Vtb_obi_spi_direct___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_obi_spi_direct__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_obi_spi_direct___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hadee6d82__0.resume(
                                                   "@(posedge tb_obi_spi_direct.clk)");
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
            VL_FATAL_MT("rtl/user_domain/tb_obi_spi_direct.sv", 3, "", "NBA region did not converge.");
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
                VL_FATAL_MT("rtl/user_domain/tb_obi_spi_direct.sv", 3, "", "Active region did not converge.");
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
