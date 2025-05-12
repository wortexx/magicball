// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_user_domain_hw_ctrl.h for the primary calling header

#include "Vtb_user_domain_hw_ctrl__pch.h"
#include "Vtb_user_domain_hw_ctrl___024root.h"

VL_ATTR_COLD void Vtb_user_domain_hw_ctrl___024root___eval_static(Vtb_user_domain_hw_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_hw_ctrl___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_user_domain_hw_ctrl___024root___eval_final__TOP(Vtb_user_domain_hw_ctrl___024root* vlSelf);

VL_ATTR_COLD void Vtb_user_domain_hw_ctrl___024root___eval_final(Vtb_user_domain_hw_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_hw_ctrl___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_user_domain_hw_ctrl___024root___eval_final__TOP(vlSelf);
}

VL_ATTR_COLD void Vtb_user_domain_hw_ctrl___024root___eval_final__TOP(Vtb_user_domain_hw_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_hw_ctrl___024root___eval_final__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing) {
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
            = (0xfffffffeU & vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U]);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_user_domain_hw_ctrl___024root___dump_triggers__stl(Vtb_user_domain_hw_ctrl___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_user_domain_hw_ctrl___024root___eval_phase__stl(Vtb_user_domain_hw_ctrl___024root* vlSelf);

VL_ATTR_COLD void Vtb_user_domain_hw_ctrl___024root___eval_settle(Vtb_user_domain_hw_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_hw_ctrl___024root___eval_settle\n"); );
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
            Vtb_user_domain_hw_ctrl___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 186, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_user_domain_hw_ctrl___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_user_domain_hw_ctrl___024root___dump_triggers__stl(Vtb_user_domain_hw_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_hw_ctrl___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] tb_user_domain_hw_ctrl.dut.user_prng_obi_rsp)\n");
    }
    if ((4ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] tb_user_domain_hw_ctrl.dut.user_font_rom_obi_rsp)\n");
    }
    if ((8ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 3 is active: @([hybrid] tb_user_domain_hw_ctrl.dut.user_spi_ctrl_obi_rsp)\n");
    }
    if ((0x10ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 4 is active: @([hybrid] tb_user_domain_hw_ctrl.dut.__Vcellout__i_spi_peripheral__gnt_o)\n");
    }
    if ((0x20ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 5 is active: @([hybrid] tb_user_domain_hw_ctrl.dut.i_user_spi_ctrl.grant_w)\n");
    }
    if ((0x40ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 6 is active: @([hybrid] tb_user_domain_hw_ctrl.dut.i_user_spi_ctrl.grant_r)\n");
    }
    if ((0x80ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 7 is active: @([hybrid] tb_user_domain_hw_ctrl.dut.i_user_prng.is_ctrl_write)\n");
    }
    if ((0x100ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 8 is active: @([hybrid] tb_user_domain_hw_ctrl.dut.i_user_prng.is_rdata_read)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_user_domain_hw_ctrl___024root___stl_sequent__TOP__0(Vtb_user_domain_hw_ctrl___024root* vlSelf);
VL_ATTR_COLD void Vtb_user_domain_hw_ctrl___024root____Vm_traceActivitySetAll(Vtb_user_domain_hw_ctrl___024root* vlSelf);
void Vtb_user_domain_hw_ctrl___024root___act_sequent__TOP__0(Vtb_user_domain_hw_ctrl___024root* vlSelf);
void Vtb_user_domain_hw_ctrl___024root___act_sequent__TOP__1(Vtb_user_domain_hw_ctrl___024root* vlSelf);
void Vtb_user_domain_hw_ctrl___024root___act_sequent__TOP__2(Vtb_user_domain_hw_ctrl___024root* vlSelf);
VL_ATTR_COLD void Vtb_user_domain_hw_ctrl___024root___stl_comb__TOP__3(Vtb_user_domain_hw_ctrl___024root* vlSelf);
void Vtb_user_domain_hw_ctrl___024root___act_comb__TOP__3(Vtb_user_domain_hw_ctrl___024root* vlSelf);
void Vtb_user_domain_hw_ctrl___024root___act_comb__TOP__4(Vtb_user_domain_hw_ctrl___024root* vlSelf);

VL_ATTR_COLD void Vtb_user_domain_hw_ctrl___024root___eval_stl(Vtb_user_domain_hw_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_hw_ctrl___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_user_domain_hw_ctrl___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_user_domain_hw_ctrl___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((0x61ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_user_domain_hw_ctrl___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x181ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_user_domain_hw_ctrl___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((0x11ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_user_domain_hw_ctrl___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((0x1fULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_user_domain_hw_ctrl___024root___stl_comb__TOP__3(vlSelf);
        Vtb_user_domain_hw_ctrl___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((0x19fULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_user_domain_hw_ctrl___024root___act_comb__TOP__3(vlSelf);
    }
    if ((0x7fULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_user_domain_hw_ctrl___024root___act_comb__TOP__4(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_user_domain_hw_ctrl___024root___stl_sequent__TOP__0(Vtb_user_domain_hw_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_hw_ctrl___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_addr_decode_user_periphs__DOT__i_addr_decode_dync__DOT__matched_rules = 0U;
    if (((0x20001000U <= ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
                           << 0x16U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
                                        >> 0xaU))) 
         & (0x20002000U > ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
                            << 0x16U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
                                         >> 0xaU))))) {
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_addr_decode_user_periphs__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (1U | (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_addr_decode_user_periphs__DOT__i_addr_decode_dync__DOT__matched_rules));
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_addr_decode_user_periphs__DOT__dec_valid_o = 0U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_addr_decode_user_periphs__DOT__dec_valid_o = 1U;
    } else {
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_addr_decode_user_periphs__DOT__dec_valid_o = 0U;
    }
    if (((0x20002000U <= ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
                           << 0x16U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
                                        >> 0xaU))) 
         & (0x20003000U > ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
                            << 0x16U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
                                         >> 0xaU))))) {
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_addr_decode_user_periphs__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (2U | (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_addr_decode_user_periphs__DOT__i_addr_decode_dync__DOT__matched_rules));
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_addr_decode_user_periphs__DOT__dec_valid_o = 1U;
    }
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_addr_decode_user_periphs__DOT__dec_error_o = 0U;
    if (((0x20001000U <= ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
                           << 0x16U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
                                        >> 0xaU))) 
         & (0x20002000U > ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
                            << 0x16U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
                                         >> 0xaU))))) {
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_addr_decode_user_periphs__DOT__dec_error_o = 0U;
    }
    if (((0x20002000U <= ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
                           << 0x16U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
                                        >> 0xaU))) 
         & (0x20003000U > ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
                            << 0x16U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
                                         >> 0xaU))))) {
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_addr_decode_user_periphs__DOT__dec_error_o = 0U;
    }
    if (((0x20003000U <= ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
                           << 0x16U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
                                        >> 0xaU))) 
         & (0x20004000U > ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
                            << 0x16U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
                                         >> 0xaU))))) {
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_addr_decode_user_periphs__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (4U | (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_addr_decode_user_periphs__DOT__i_addr_decode_dync__DOT__matched_rules));
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_addr_decode_user_periphs__DOT__dec_valid_o = 1U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_addr_decode_user_periphs__DOT__dec_error_o = 0U;
    }
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__cs_no = 1U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_d 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_q;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__spi_sck_o_tb = 0U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_d 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_q;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_d 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__status_bits 
        = (((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__done_q) 
            << 1U) | ((0U != (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)) 
                      & (3U != (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q))));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__spi_mosi_o_tb 
        = (1U & ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_q) 
                 >> (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q)));
    if ((1U & (~ ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)))) {
            if (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_q) {
                vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_d = 0U;
            }
        }
        if ((1U & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q))) {
            vlSelfRef.tb_user_domain_hw_ctrl__DOT__spi_mosi_o_tb 
                = (1U & ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_q) 
                         >> 7U));
        }
    }
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_d 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_d 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q;
    if ((2U & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q))) {
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__cs_no 
            = (1U & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q));
        if ((1U & (~ (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)))) {
            vlSelfRef.tb_user_domain_hw_ctrl__DOT__spi_sck_o_tb 
                = (2U <= (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q));
            vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_d 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q)));
            if ((3U == (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q))) {
                vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_d = 0U;
                if ((0U != (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q))) {
                    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_d 
                        = (7U & ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q) 
                                 - (IData)(1U)));
                }
            }
        }
        if ((1U & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q))) {
            vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_d = 0U;
        } else if ((3U == (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q))) {
            if ((0U == (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q))) {
                vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_d = 3U;
            }
        }
    } else if ((1U & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q))) {
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__cs_no = 0U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_d = 0U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_d = 7U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_d = 2U;
    } else if (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_q) {
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_d = 1U;
    }
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__t1 
        = (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__prng_state_q 
           ^ VL_SHIFTL_III(32,32,32, vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__prng_state_q, 0xdU));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx = 0U;
    if (((0x20001000U <= ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
                           << 0x16U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
                                        >> 0xaU))) 
         & (0x20002000U > ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
                            << 0x16U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
                                         >> 0xaU))))) {
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx = 1U;
    }
    if (((0x20002000U <= ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
                           << 0x16U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
                                        >> 0xaU))) 
         & (0x20003000U > ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
                            << 0x16U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
                                         >> 0xaU))))) {
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx = 2U;
    }
    if (((0x20003000U <= ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
                           << 0x16U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
                                        >> 0xaU))) 
         & (0x20004000U > ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
                            << 0x16U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
                                         >> 0xaU))))) {
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx = 3U;
    }
    if (((0x20004000U <= ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
                           << 0x16U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
                                        >> 0xaU))) 
         & (0x20005000U > ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
                            << 0x16U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
                                         >> 0xaU))))) {
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_addr_decode_user_periphs__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (8U | (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_addr_decode_user_periphs__DOT__i_addr_decode_dync__DOT__matched_rules));
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_addr_decode_user_periphs__DOT__dec_valid_o = 1U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_addr_decode_user_periphs__DOT__dec_error_o = 0U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx = 4U;
    }
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_engine_obi_rsp 
        = ((0x7fULL & vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_engine_obi_rsp) 
           | ((QData)((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rdata_q)) 
              << 7U));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_error_obi_rsp = 0ULL;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_error_obi_rsp 
        = (0x7fULL & vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_error_obi_rsp);
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_error_obi_rsp 
        = ((7ULL & vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_error_obi_rsp) 
           | (0x5d6e558f00ULL | ((QData)((IData)((1U 
                                                  | (((2U 
                                                       >= 
                                                       (3U 
                                                        & ((IData)(3U) 
                                                           * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q))))
                                                       ? 
                                                      (7U 
                                                       & ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_q) 
                                                          >> 
                                                          (3U 
                                                           & ((IData)(3U) 
                                                              * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q)))))
                                                       : 0U) 
                                                     << 1U)))) 
                                 << 3U)));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_error_obi_rsp 
        = ((0x7ffffffffcULL & vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_error_obi_rsp) 
           | (IData)((IData)((((1U != (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q)) 
                               << 1U) | (0U != (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q))))));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__t2 
        = (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__t1 
           ^ VL_SHIFTR_III(32,32,32, vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__t1, 0x11U));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_n 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q;
    if (((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_error_obi_rsp) 
         & (0U != (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_n 
            = ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_n) 
               & ((IData)(1U) + (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q)));
    }
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__prng_state_d 
        = (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__t2 
           ^ VL_SHIFTL_III(32,32,32, vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__t2, 5U));
}

extern const VlWide<12>/*383:0*/ Vtb_user_domain_hw_ctrl__ConstPool__CONST_h1aa720ac_0;

VL_ATTR_COLD void Vtb_user_domain_hw_ctrl___024root___stl_comb__TOP__3(Vtb_user_domain_hw_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_hw_ctrl___024root___stl_comb__TOP__3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[0U] 
        = (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_error_obi_rsp);
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[1U] 
        = (((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_engine_obi_rsp) 
            << 7U) | (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_error_obi_rsp 
                              >> 0x20U)));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[2U] 
        = (((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_ctrl_obi_rsp) 
            << 0xeU) | (((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_engine_obi_rsp) 
                         >> 0x19U) | ((IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_engine_obi_rsp 
                                               >> 0x20U)) 
                                      << 7U)));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[3U] 
        = (((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_font_rom_obi_rsp) 
            << 0x15U) | (((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_ctrl_obi_rsp) 
                          >> 0x12U) | ((IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_ctrl_obi_rsp 
                                                >> 0x20U)) 
                                       << 0xeU)));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[4U] 
        = (((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_prng_obi_rsp) 
            << 0x1cU) | (((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_font_rom_obi_rsp) 
                          >> 0xbU) | ((IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_font_rom_obi_rsp 
                                               >> 0x20U)) 
                                      << 0x15U)));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[5U] 
        = (((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_prng_obi_rsp) 
            >> 4U) | ((IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_prng_obi_rsp 
                               >> 0x20U)) << 0x1cU));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[6U] 
        = ((IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_prng_obi_rsp 
                    >> 0x20U)) >> 4U);
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__cnt_down_sig 
        = ((0xc2U >= (0xffU & ((IData)(0x27U) * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
           && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                     (7U & (((IData)(0x27U) * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)) 
                            >> 5U))] >> (0x1fU & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q))))));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_d 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__forward_this_request = 0U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[0U] 
        = Vtb_user_domain_hw_ctrl__ConstPool__CONST_h1aa720ac_0[0U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[1U] 
        = Vtb_user_domain_hw_ctrl__ConstPool__CONST_h1aa720ac_0[1U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[2U] 
        = Vtb_user_domain_hw_ctrl__ConstPool__CONST_h1aa720ac_0[2U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[3U] 
        = Vtb_user_domain_hw_ctrl__ConstPool__CONST_h1aa720ac_0[3U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[4U] 
        = Vtb_user_domain_hw_ctrl__ConstPool__CONST_h1aa720ac_0[4U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[5U] 
        = Vtb_user_domain_hw_ctrl__ConstPool__CONST_h1aa720ac_0[5U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[6U] 
        = Vtb_user_domain_hw_ctrl__ConstPool__CONST_h1aa720ac_0[6U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[7U] 
        = Vtb_user_domain_hw_ctrl__ConstPool__CONST_h1aa720ac_0[7U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[8U] 
        = Vtb_user_domain_hw_ctrl__ConstPool__CONST_h1aa720ac_0[8U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[9U] 
        = Vtb_user_domain_hw_ctrl__ConstPool__CONST_h1aa720ac_0[9U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[0xaU] 
        = Vtb_user_domain_hw_ctrl__ConstPool__CONST_h1aa720ac_0[0xaU];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[0xbU] 
        = Vtb_user_domain_hw_ctrl__ConstPool__CONST_h1aa720ac_0[0xbU];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__target_is_current_selection 
        = ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx) 
           == (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__no_transactions_in_flight 
        = (0U == (7U & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__i_counter__DOT__counter_q)));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__one_transaction_is_completing 
        = ((1U == (7U & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__i_counter__DOT__counter_q))) 
           & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__cnt_down_sig));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__sub_conditions_for_forwarding 
        = (((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__target_is_current_selection) 
            | (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__no_transactions_in_flight)) 
           | (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__one_transaction_is_completing));
    if ((((~ ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__i_counter__DOT__counter_q) 
              >> 3U)) & vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U]) 
         & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__sub_conditions_for_forwarding))) {
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT____Vlvbound_h19899a0f__0 
            = (1U & vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U]);
        if ((0x171U >= (0x1ffU & ((IData)(0x4aU) * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) {
            vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[(0xfU 
                                                                                & (((IData)(0x4aU) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)) 
                                                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & ((IData)(0x4aU) 
                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                    & vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[
                    (0xfU & (((IData)(0x4aU) * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)) 
                             >> 5U))]) | ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT____Vlvbound_h19899a0f__0) 
                                          << (0x1fU 
                                              & ((IData)(0x4aU) 
                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))));
        }
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__forward_this_request = 1U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT____Vlvbound_h82b62aa2__0[0U] 
            = ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
                << 0x1fU) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
                             >> 1U));
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT____Vlvbound_h82b62aa2__0[1U] 
            = ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
                << 0x1fU) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
                             >> 1U));
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT____Vlvbound_h82b62aa2__0[2U] 
            = (0x1ffU & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
                         >> 1U));
        if ((0x171U >= ((IData)(1U) + (0x1ffU & ((IData)(0x4aU) 
                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))) {
            VL_ASSIGNSEL_WW(370,73,((IData)(1U) + (0x1ffU 
                                                   & ((IData)(0x4aU) 
                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))), vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o, vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT____Vlvbound_h82b62aa2__0);
        }
    }
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__grant_condition_is_met 
        = ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__forward_this_request) 
           & ((0xc2U >= ((IData)(1U) + (0xffU & ((IData)(0x27U) 
                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
              && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                        (((IData)(1U) + (0xffU & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                         >> 5U)] >> (0x1fU & ((IData)(1U) 
                                              + (0xffU 
                                                 & ((IData)(0x27U) 
                                                    * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))));
    if (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__grant_condition_is_met) {
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_d 
            = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx;
    }
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__i_counter__DOT__counter_d 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__i_counter__DOT__counter_q;
    if ((((~ (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__grant_condition_was_met_q)) 
          & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__grant_condition_is_met)) 
         | ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__cnt_down_sig) 
            & (0U != (7U & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__i_counter__DOT__counter_q)))))) {
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__i_counter__DOT__counter_d 
            = (0xfU & ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__cnt_down_sig)
                        ? ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__i_counter__DOT__counter_q) 
                           - (IData)(1U)) : ((IData)(1U) 
                                             + (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__i_counter__DOT__counter_q))));
    }
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o 
        = ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[2U] 
            >> 0xaU) & ((IData)((0x800000U == (0xfff80000U 
                                               & vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[3U]))) 
                        | ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[3U] 
                            >> 0x13U) & ((0U == (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)) 
                                         & ((4U == 
                                             (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[3U] 
                                              >> 0x14U)) 
                                            | (0U == 
                                               (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[3U] 
                                                >> 0x14U)))))));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__rom_byte_data_comb 
        = ((0x474U > (0xfffU & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[8U] 
                                >> 8U))) ? ((0x473U 
                                             >= (0x7ffU 
                                                 & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[8U] 
                                                    >> 8U)))
                                             ? vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__rom_data
                                            [(0x7ffU 
                                              & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[8U] 
                                                 >> 8U))]
                                             : 0U) : 0U);
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__reg_rdata_comb = 0U;
    if ((0U == (0xfffU & ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[6U] 
                           << 2U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[5U] 
                                     >> 0x1eU))))) {
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__reg_rdata_comb 
            = (((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__dc_q) 
                << 2U) | (((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__cs2_n_q) 
                           << 1U) | (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__cs1_n_q)));
    }
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__is_ctrl_write 
        = ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[9U] 
            >> 8U) & (0x20000U == (0x720000U & vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[0xaU])));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__read_req 
        = (1U & ((~ (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[0xaU] 
                     >> 0x11U)) & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[9U] 
                                   >> 8U)));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_prng_obi_rsp 
        = ((7ULL & vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_prng_obi_rsp) 
           | (((QData)((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__rdata_q)) 
               << 7U) | ((QData)((IData)(((0xeU & (
                                                   vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[9U] 
                                                   >> 9U)) 
                                          | (1U & (
                                                   (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[9U] 
                                                    >> 8U) 
                                                   & (~ (IData)(
                                                                (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_prng_obi_rsp 
                                                                 >> 1U)))))))) 
                         << 3U)));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__read_req 
        = (1U & ((~ (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[8U] 
                     >> 7U)) & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[6U] 
                                >> 0x1eU)));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__write_req 
        = (1U & ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[4U] 
                  >> 0x14U) & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[5U] 
                               >> 0x1dU)));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__read_req 
        = (1U & ((~ (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[5U] 
                     >> 0x1dU)) & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[4U] 
                                   >> 0x14U)));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT____Vcellinp__i_id_fifo__push_i 
        = (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[0U] 
                 & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_error_obi_rsp 
                            >> 1U))));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__is_rdata_read 
        = ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__read_req) 
           & (0x100000U == (0x700000U & vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[0xaU])));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_font_rom_obi_rsp 
        = ((0x7ffffffffcULL & vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_font_rom_obi_rsp) 
           | (IData)((IData)(((((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__read_req) 
                                & (0x474U > (0xfffU 
                                             & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[8U] 
                                                >> 8U)))) 
                               << 1U) | (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__rvalid_q)))));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_font_rom_obi_rsp 
        = ((7ULL & vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_font_rom_obi_rsp) 
           | (((QData)((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__rdata_q)) 
               << 7U) | ((QData)((IData)(((0xeU & (
                                                   vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[7U] 
                                                   << 1U)) 
                                          | (1U & (
                                                   ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[6U] 
                                                     >> 0x1eU) 
                                                    & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[8U] 
                                                       >> 7U)) 
                                                   | ((0x474U 
                                                       <= 
                                                       (0xfffU 
                                                        & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[8U] 
                                                           >> 8U))) 
                                                      & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__read_req))))))) 
                         << 3U)));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w 
        = ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__write_req) 
           & (0U == (0xfffU & ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[6U] 
                                << 2U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[5U] 
                                          >> 0x1eU)))));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r 
        = ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__read_req) 
           & (0U == (0xfffU & ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[6U] 
                                << 2U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[5U] 
                                          >> 0x1eU)))));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__gate_clock = 1U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_n 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_n 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT____Vcellinp__i_id_fifo__push_i) 
         & (1U != (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__gate_clock = 0U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_n 
            = ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q) 
               & ((IData)(1U) + (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q)));
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_error_obi_rsp) 
         & (0U != (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT____Vcellinp__i_id_fifo__push_i) 
           & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_error_obi_rsp)) 
          & (1U != (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_n 
            = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q;
    }
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_n 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_q;
    if (((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT____Vcellinp__i_id_fifo__push_i) 
         & (1U != (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT____Vlvbound_h3dcab515__0 
            = (7U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[0U] 
                     >> 2U));
        if ((2U >= (3U & ((IData)(3U) * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q))))) {
            vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_n 
                = (((~ ((IData)(7U) << (3U & ((IData)(3U) 
                                              * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q))))) 
                    & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_n)) 
                   | (7U & ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT____Vlvbound_h3dcab515__0) 
                            << (3U & ((IData)(3U) * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q))))));
        }
    }
}

VL_ATTR_COLD void Vtb_user_domain_hw_ctrl___024root___eval_triggers__stl(Vtb_user_domain_hw_ctrl___024root* vlSelf);

VL_ATTR_COLD bool Vtb_user_domain_hw_ctrl___024root___eval_phase__stl(Vtb_user_domain_hw_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_hw_ctrl___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_user_domain_hw_ctrl___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_user_domain_hw_ctrl___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_user_domain_hw_ctrl___024root___dump_triggers__act(Vtb_user_domain_hw_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_hw_ctrl___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] tb_user_domain_hw_ctrl.dut.user_prng_obi_rsp)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] tb_user_domain_hw_ctrl.dut.user_font_rom_obi_rsp)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([hybrid] tb_user_domain_hw_ctrl.dut.user_spi_ctrl_obi_rsp)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([hybrid] tb_user_domain_hw_ctrl.dut.__Vcellout__i_spi_peripheral__gnt_o)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([hybrid] tb_user_domain_hw_ctrl.dut.i_user_spi_ctrl.grant_w)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([hybrid] tb_user_domain_hw_ctrl.dut.i_user_spi_ctrl.grant_r)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([hybrid] tb_user_domain_hw_ctrl.dut.i_user_prng.is_ctrl_write)\n");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @([hybrid] tb_user_domain_hw_ctrl.dut.i_user_prng.is_rdata_read)\n");
    }
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @(posedge tb_user_domain_hw_ctrl.clk_i)\n");
    }
    if ((0x200ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @(negedge tb_user_domain_hw_ctrl.rst_ni)\n");
    }
    if ((0x400ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_user_domain_hw_ctrl___024root___dump_triggers__nba(Vtb_user_domain_hw_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_hw_ctrl___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] tb_user_domain_hw_ctrl.dut.user_prng_obi_rsp)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] tb_user_domain_hw_ctrl.dut.user_font_rom_obi_rsp)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([hybrid] tb_user_domain_hw_ctrl.dut.user_spi_ctrl_obi_rsp)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([hybrid] tb_user_domain_hw_ctrl.dut.__Vcellout__i_spi_peripheral__gnt_o)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([hybrid] tb_user_domain_hw_ctrl.dut.i_user_spi_ctrl.grant_w)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([hybrid] tb_user_domain_hw_ctrl.dut.i_user_spi_ctrl.grant_r)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([hybrid] tb_user_domain_hw_ctrl.dut.i_user_prng.is_ctrl_write)\n");
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @([hybrid] tb_user_domain_hw_ctrl.dut.i_user_prng.is_rdata_read)\n");
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @(posedge tb_user_domain_hw_ctrl.clk_i)\n");
    }
    if ((0x200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @(negedge tb_user_domain_hw_ctrl.rst_ni)\n");
    }
    if ((0x400ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_user_domain_hw_ctrl___024root____Vm_traceActivitySetAll(Vtb_user_domain_hw_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_hw_ctrl___024root____Vm_traceActivitySetAll\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__Vm_traceActivity[6U] = 1U;
    vlSelfRef.__Vm_traceActivity[7U] = 1U;
    vlSelfRef.__Vm_traceActivity[8U] = 1U;
}

VL_ATTR_COLD void Vtb_user_domain_hw_ctrl___024root___ctor_var_reset(Vtb_user_domain_hw_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_hw_ctrl___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_user_domain_hw_ctrl__DOT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->tb_user_domain_hw_ctrl__DOT__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->tb_user_domain_hw_ctrl__DOT__ref_clk_i = VL_RAND_RESET_I(1);
    vlSelf->tb_user_domain_hw_ctrl__DOT__testmode_i = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(74, vlSelf->tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req);
    vlSelf->tb_user_domain_hw_ctrl__DOT__user_mgr_obi_rsp_i_tb = VL_RAND_RESET_Q(37);
    vlSelf->tb_user_domain_hw_ctrl__DOT__gpio_in_sync_i_tb = VL_RAND_RESET_I(16);
    vlSelf->tb_user_domain_hw_ctrl__DOT__spi_sck_o_tb = VL_RAND_RESET_I(1);
    vlSelf->tb_user_domain_hw_ctrl__DOT__spi_mosi_o_tb = VL_RAND_RESET_I(1);
    vlSelf->tb_user_domain_hw_ctrl__DOT__req_ongoing = VL_RAND_RESET_I(1);
    vlSelf->tb_user_domain_hw_ctrl__DOT__unnamedblk1__DOT__read_data = VL_RAND_RESET_I(32);
    vlSelf->tb_user_domain_hw_ctrl__DOT__unnamedblk1__DOT__read_err = VL_RAND_RESET_I(1);
    vlSelf->tb_user_domain_hw_ctrl__DOT__unnamedblk1__DOT__font_byte_val = VL_RAND_RESET_I(8);
    vlSelf->tb_user_domain_hw_ctrl__DOT__unnamedblk1__DOT__prng_val1 = VL_RAND_RESET_I(32);
    vlSelf->tb_user_domain_hw_ctrl__DOT__unnamedblk1__DOT__prng_val2 = VL_RAND_RESET_I(32);
    vlSelf->tb_user_domain_hw_ctrl__DOT__unnamedblk1__DOT__font_addr_A_start = VL_RAND_RESET_I(32);
    vlSelf->tb_user_domain_hw_ctrl__DOT__unnamedblk1__DOT__font_addr_A_mid = VL_RAND_RESET_I(32);
    vlSelf->tb_user_domain_hw_ctrl__DOT__unnamedblk1__DOT__font_addr_B_start = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(195, vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__user_error_obi_rsp = VL_RAND_RESET_Q(39);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_engine_obi_rsp = VL_RAND_RESET_Q(39);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_ctrl_obi_rsp = VL_RAND_RESET_Q(39);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__user_font_rom_obi_rsp = VL_RAND_RESET_Q(39);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__user_prng_obi_rsp = VL_RAND_RESET_Q(39);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(370, vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o = VL_RAND_RESET_I(1);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_addr_decode_user_periphs__DOT__dec_valid_o = VL_RAND_RESET_I(1);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_addr_decode_user_periphs__DOT__dec_error_o = VL_RAND_RESET_I(1);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_addr_decode_user_periphs__DOT__i_addr_decode_dync__DOT__matched_rules = VL_RAND_RESET_I(4);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__cnt_down_sig = VL_RAND_RESET_I(1);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_d = VL_RAND_RESET_I(3);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q = VL_RAND_RESET_I(3);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__grant_condition_is_met = VL_RAND_RESET_I(1);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__grant_condition_was_met_q = VL_RAND_RESET_I(1);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__forward_this_request = VL_RAND_RESET_I(1);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__target_is_current_selection = VL_RAND_RESET_I(1);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__no_transactions_in_flight = VL_RAND_RESET_I(1);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__one_transaction_is_completing = VL_RAND_RESET_I(1);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__sub_conditions_for_forwarding = VL_RAND_RESET_I(1);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT____Vlvbound_h19899a0f__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(73, vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT____Vlvbound_h82b62aa2__0);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__i_counter__DOT__counter_q = VL_RAND_RESET_I(4);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__i_counter__DOT__counter_d = VL_RAND_RESET_I(4);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT____Vcellinp__i_id_fifo__push_i = VL_RAND_RESET_I(1);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__gate_clock = VL_RAND_RESET_I(1);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_n = VL_RAND_RESET_I(1);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q = VL_RAND_RESET_I(1);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_n = VL_RAND_RESET_I(1);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q = VL_RAND_RESET_I(1);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_n = VL_RAND_RESET_I(2);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q = VL_RAND_RESET_I(2);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_n = VL_RAND_RESET_I(3);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_q = VL_RAND_RESET_I(3);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT____Vlvbound_h3dcab515__0 = VL_RAND_RESET_I(3);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__cs_no = VL_RAND_RESET_I(1);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q = VL_RAND_RESET_I(2);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_d = VL_RAND_RESET_I(2);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_q = VL_RAND_RESET_I(1);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_d = VL_RAND_RESET_I(1);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_q = VL_RAND_RESET_I(8);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_d = VL_RAND_RESET_I(8);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q = VL_RAND_RESET_I(3);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_d = VL_RAND_RESET_I(3);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q = VL_RAND_RESET_I(2);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_d = VL_RAND_RESET_I(2);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rvalid_q = VL_RAND_RESET_I(1);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__status_bits = VL_RAND_RESET_I(2);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__done_q = VL_RAND_RESET_I(1);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__read_req_granted_q = VL_RAND_RESET_I(1);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__unnamedblk1__DOT__next_mosi_idx = VL_RAND_RESET_I(3);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__cs1_n_q = VL_RAND_RESET_I(1);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__cs2_n_q = VL_RAND_RESET_I(1);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__dc_q = VL_RAND_RESET_I(1);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__rvalid_q = VL_RAND_RESET_I(1);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__read_granted_this_cycle = VL_RAND_RESET_I(1);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__write_req = VL_RAND_RESET_I(1);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__read_req = VL_RAND_RESET_I(1);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__reg_rdata_comb = VL_RAND_RESET_I(32);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w = VL_RAND_RESET_I(1);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1140; ++__Vi0) {
        vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__rom_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__rvalid_q = VL_RAND_RESET_I(1);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__read_req_accepted = VL_RAND_RESET_I(1);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__read_req = VL_RAND_RESET_I(1);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__rom_byte_data_comb = VL_RAND_RESET_I(8);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__check_file_exists_label__DOT__file_handle = 0;
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__prng_state_q = VL_RAND_RESET_I(32);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__prng_state_d = VL_RAND_RESET_I(32);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__trigger_prng_update = VL_RAND_RESET_I(1);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__t1 = VL_RAND_RESET_I(32);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__t2 = VL_RAND_RESET_I(32);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__rvalid_q = VL_RAND_RESET_I(1);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__read_granted_this_cycle = VL_RAND_RESET_I(1);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__is_ctrl_write = VL_RAND_RESET_I(1);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__is_rdata_read = VL_RAND_RESET_I(1);
    vlSelf->tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__read_req = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_tb_user_domain_hw_ctrl__DOT__send_byte_hw_ctrl__40__cs_pin_idx = 0;
    vlSelf->__Vtask_tb_user_domain_hw_ctrl__DOT__send_byte_hw_ctrl__40__is_data = 0;
    vlSelf->__Vtask_tb_user_domain_hw_ctrl__DOT__send_byte_hw_ctrl__40__byte_val = VL_RAND_RESET_I(8);
    vlSelf->__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__51__w_addr = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__51__timeout_count = 0;
    vlSelf->__Vtask_tb_user_domain_hw_ctrl__DOT__send_byte_hw_ctrl__88__cs_pin_idx = 0;
    vlSelf->__Vtask_tb_user_domain_hw_ctrl__DOT__send_byte_hw_ctrl__88__is_data = 0;
    vlSelf->__Vtask_tb_user_domain_hw_ctrl__DOT__send_byte_hw_ctrl__88__byte_val = VL_RAND_RESET_I(8);
    vlSelf->__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__98__r_addr = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__98__r_data_val = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__98__r_err = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__98__timeout_count_rvalid = 0;
    vlSelf->__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__98__grant_received = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__user_prng_obi_rsp__0 = VL_RAND_RESET_Q(39);
    vlSelf->__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__user_font_rom_obi_rsp__0 = VL_RAND_RESET_Q(39);
    vlSelf->__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_ctrl_obi_rsp__0 = VL_RAND_RESET_Q(39);
    vlSelf->__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__is_ctrl_write__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__is_rdata_read__0 = VL_RAND_RESET_I(1);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__user_prng_obi_rsp__1 = VL_RAND_RESET_Q(39);
    vlSelf->__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__user_font_rom_obi_rsp__1 = VL_RAND_RESET_Q(39);
    vlSelf->__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_ctrl_obi_rsp__1 = VL_RAND_RESET_Q(39);
    vlSelf->__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__is_ctrl_write__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__is_rdata_read__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__rst_ni__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
