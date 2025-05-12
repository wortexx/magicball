// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_obi_spi_direct.h for the primary calling header

#include "Vtb_obi_spi_direct__pch.h"
#include "Vtb_obi_spi_direct___024root.h"

VL_ATTR_COLD void Vtb_obi_spi_direct___024root___eval_static(Vtb_obi_spi_direct___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_obi_spi_direct__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_obi_spi_direct___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_obi_spi_direct___024root___eval_initial__TOP(Vtb_obi_spi_direct___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_obi_spi_direct__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_obi_spi_direct___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_obi_spi_direct__DOT__req_i = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__we_i = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__be_i = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__addr_i = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__wdata_i = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 0U;
}

VL_ATTR_COLD void Vtb_obi_spi_direct___024root___eval_final__TOP(Vtb_obi_spi_direct___024root* vlSelf);
VL_ATTR_COLD void Vtb_obi_spi_direct___024root____Vm_traceActivitySetAll(Vtb_obi_spi_direct___024root* vlSelf);

VL_ATTR_COLD void Vtb_obi_spi_direct___024root___eval_final(Vtb_obi_spi_direct___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_obi_spi_direct__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_obi_spi_direct___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_obi_spi_direct___024root___eval_final__TOP(vlSelf);
    Vtb_obi_spi_direct___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vtb_obi_spi_direct___024root___eval_final__TOP(Vtb_obi_spi_direct___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_obi_spi_direct__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_obi_spi_direct___024root___eval_final__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing) {
        vlSelfRef.tb_obi_spi_direct__DOT__req_i = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_obi_spi_direct___024root___dump_triggers__stl(Vtb_obi_spi_direct___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_obi_spi_direct___024root___eval_phase__stl(Vtb_obi_spi_direct___024root* vlSelf);

VL_ATTR_COLD void Vtb_obi_spi_direct___024root___eval_settle(Vtb_obi_spi_direct___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_obi_spi_direct__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_obi_spi_direct___024root___eval_settle\n"); );
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
            Vtb_obi_spi_direct___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/user_domain/tb_obi_spi_direct.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_obi_spi_direct___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_obi_spi_direct___024root___dump_triggers__stl(Vtb_obi_spi_direct___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_obi_spi_direct__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_obi_spi_direct___024root___dump_triggers__stl\n"); );
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

VL_ATTR_COLD void Vtb_obi_spi_direct___024root___stl_sequent__TOP__0(Vtb_obi_spi_direct___024root* vlSelf);

VL_ATTR_COLD void Vtb_obi_spi_direct___024root___eval_stl(Vtb_obi_spi_direct___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_obi_spi_direct__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_obi_spi_direct___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_obi_spi_direct___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_obi_spi_direct___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_obi_spi_direct___024root___stl_sequent__TOP__0(Vtb_obi_spi_direct___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_obi_spi_direct__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_obi_spi_direct___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_obi_spi_direct__DOT__cs_no = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__tx_data_d 
        = vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__tx_data_q;
    vlSelfRef.tb_obi_spi_direct__DOT__sck_o = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__start_flag_d 
        = vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__start_flag_q;
    vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__spi_clk_cnt_d 
        = vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__spi_clk_cnt_q;
    vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__status_bits 
        = (((IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__done_q) 
            << 1U) | ((0U != (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__state_q)) 
                      & (3U != (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__state_q))));
    vlSelfRef.tb_obi_spi_direct__DOT__mosi_o = (1U 
                                                & ((IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__tx_data_q) 
                                                   >> (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__bit_cnt_q)));
    if ((1U & (~ ((IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__state_q) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__state_q)))) {
            if (vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__start_flag_q) {
                vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__start_flag_d = 0U;
            }
        }
        if ((1U & (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__state_q))) {
            vlSelfRef.tb_obi_spi_direct__DOT__mosi_o 
                = (1U & ((IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__tx_data_q) 
                         >> 7U));
        }
    }
    vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__bit_cnt_d 
        = vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__bit_cnt_q;
    vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__state_d 
        = vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__state_q;
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
            }
        }
        if ((1U & (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__state_q))) {
            vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__state_d = 0U;
        } else if ((3U == (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__spi_clk_cnt_q))) {
            if ((0U == (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__bit_cnt_q))) {
                vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__state_d = 3U;
            }
        }
    } else if ((1U & (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__state_q))) {
        vlSelfRef.tb_obi_spi_direct__DOT__cs_no = 0U;
        vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__spi_clk_cnt_d = 0U;
        vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__bit_cnt_d = 7U;
        vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__state_d = 2U;
    } else if (vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__start_flag_q) {
        vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__state_d = 1U;
    }
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

VL_ATTR_COLD void Vtb_obi_spi_direct___024root___eval_triggers__stl(Vtb_obi_spi_direct___024root* vlSelf);

VL_ATTR_COLD bool Vtb_obi_spi_direct___024root___eval_phase__stl(Vtb_obi_spi_direct___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_obi_spi_direct__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_obi_spi_direct___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_obi_spi_direct___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_obi_spi_direct___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_obi_spi_direct___024root___dump_triggers__act(Vtb_obi_spi_direct___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_obi_spi_direct__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_obi_spi_direct___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_obi_spi_direct.clk_i)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_obi_spi_direct.rst_ni)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_obi_spi_direct___024root___dump_triggers__nba(Vtb_obi_spi_direct___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_obi_spi_direct__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_obi_spi_direct___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_obi_spi_direct.clk_i)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_obi_spi_direct.rst_ni)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_obi_spi_direct___024root____Vm_traceActivitySetAll(Vtb_obi_spi_direct___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_obi_spi_direct__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_obi_spi_direct___024root____Vm_traceActivitySetAll\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void Vtb_obi_spi_direct___024root___ctor_var_reset(Vtb_obi_spi_direct___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_obi_spi_direct__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_obi_spi_direct___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_obi_spi_direct__DOT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->tb_obi_spi_direct__DOT__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->tb_obi_spi_direct__DOT__req_i = VL_RAND_RESET_I(1);
    vlSelf->tb_obi_spi_direct__DOT__we_i = VL_RAND_RESET_I(1);
    vlSelf->tb_obi_spi_direct__DOT__be_i = VL_RAND_RESET_I(4);
    vlSelf->tb_obi_spi_direct__DOT__addr_i = VL_RAND_RESET_I(32);
    vlSelf->tb_obi_spi_direct__DOT__wdata_i = VL_RAND_RESET_I(32);
    vlSelf->tb_obi_spi_direct__DOT__gnt_o = VL_RAND_RESET_I(1);
    vlSelf->tb_obi_spi_direct__DOT__sck_o = VL_RAND_RESET_I(1);
    vlSelf->tb_obi_spi_direct__DOT__mosi_o = VL_RAND_RESET_I(1);
    vlSelf->tb_obi_spi_direct__DOT__cs_no = VL_RAND_RESET_I(1);
    vlSelf->tb_obi_spi_direct__DOT__req_ongoing = VL_RAND_RESET_I(1);
    vlSelf->tb_obi_spi_direct__DOT__dut__DOT__state_q = VL_RAND_RESET_I(2);
    vlSelf->tb_obi_spi_direct__DOT__dut__DOT__state_d = VL_RAND_RESET_I(2);
    vlSelf->tb_obi_spi_direct__DOT__dut__DOT__start_flag_q = VL_RAND_RESET_I(1);
    vlSelf->tb_obi_spi_direct__DOT__dut__DOT__start_flag_d = VL_RAND_RESET_I(1);
    vlSelf->tb_obi_spi_direct__DOT__dut__DOT__tx_data_q = VL_RAND_RESET_I(8);
    vlSelf->tb_obi_spi_direct__DOT__dut__DOT__tx_data_d = VL_RAND_RESET_I(8);
    vlSelf->tb_obi_spi_direct__DOT__dut__DOT__bit_cnt_q = VL_RAND_RESET_I(3);
    vlSelf->tb_obi_spi_direct__DOT__dut__DOT__bit_cnt_d = VL_RAND_RESET_I(3);
    vlSelf->tb_obi_spi_direct__DOT__dut__DOT__spi_clk_cnt_q = VL_RAND_RESET_I(2);
    vlSelf->tb_obi_spi_direct__DOT__dut__DOT__spi_clk_cnt_d = VL_RAND_RESET_I(2);
    vlSelf->tb_obi_spi_direct__DOT__dut__DOT__rvalid_q = VL_RAND_RESET_I(1);
    vlSelf->tb_obi_spi_direct__DOT__dut__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_obi_spi_direct__DOT__dut__DOT__status_bits = VL_RAND_RESET_I(2);
    vlSelf->tb_obi_spi_direct__DOT__dut__DOT__done_q = VL_RAND_RESET_I(1);
    vlSelf->tb_obi_spi_direct__DOT__dut__DOT__read_req_granted_q = VL_RAND_RESET_I(1);
    vlSelf->tb_obi_spi_direct__DOT__dut__DOT__unnamedblk1__DOT__next_mosi_idx = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__tb_obi_spi_direct__DOT__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_obi_spi_direct__DOT__rst_ni__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
