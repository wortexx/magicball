// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuser_domain_sw_cs_tb.h for the primary calling header

#include "Vuser_domain_sw_cs_tb__pch.h"
#include "Vuser_domain_sw_cs_tb___024root.h"

VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024root___eval_static(Vuser_domain_sw_cs_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuser_domain_sw_cs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_domain_sw_cs_tb___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024root___eval_initial__TOP(Vuser_domain_sw_cs_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuser_domain_sw_cs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_domain_sw_cs_tb___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.user_domain_sw_cs_tb__DOT__ref_clk_i = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__testmode_i = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__gpio_in_sync_i = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_mgr_obi_rsp = 0ULL;
    vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_ssd1331_n = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_adxl345_n = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__tb_dc_ssd1331 = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__tb_int_adxl345 = 0U;
}

VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024root___eval_final__TOP(Vuser_domain_sw_cs_tb___024root* vlSelf);
VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024root____Vm_traceActivitySetAll(Vuser_domain_sw_cs_tb___024root* vlSelf);

VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024root___eval_final(Vuser_domain_sw_cs_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuser_domain_sw_cs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_domain_sw_cs_tb___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vuser_domain_sw_cs_tb___024root___eval_final__TOP(vlSelf);
    Vuser_domain_sw_cs_tb___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024root___eval_final__TOP(Vuser_domain_sw_cs_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuser_domain_sw_cs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_domain_sw_cs_tb___024root___eval_final__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
            = (0xfffffffeU & vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U]);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024root___dump_triggers__stl(Vuser_domain_sw_cs_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vuser_domain_sw_cs_tb___024root___eval_phase__stl(Vuser_domain_sw_cs_tb___024root* vlSelf);

VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024root___eval_settle(Vuser_domain_sw_cs_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuser_domain_sw_cs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_domain_sw_cs_tb___024root___eval_settle\n"); );
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
            Vuser_domain_sw_cs_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 10, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vuser_domain_sw_cs_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024root___dump_triggers__stl(Vuser_domain_sw_cs_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuser_domain_sw_cs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_domain_sw_cs_tb___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] user_domain_sw_cs_tb.dut.__Vcellout__i_spi_peripheral__gnt_o)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024root___stl_sequent__TOP__0(Vuser_domain_sw_cs_tb___024root* vlSelf);
VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024root___stl_comb__TOP__0(Vuser_domain_sw_cs_tb___024root* vlSelf);

VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024root___eval_stl(Vuser_domain_sw_cs_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuser_domain_sw_cs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_domain_sw_cs_tb___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vuser_domain_sw_cs_tb___024root___stl_sequent__TOP__0(vlSelf);
        Vuser_domain_sw_cs_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vuser_domain_sw_cs_tb___024root___stl_comb__TOP__0(vlSelf);
        Vuser_domain_sw_cs_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024root___stl_sequent__TOP__0(Vuser_domain_sw_cs_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuser_domain_sw_cs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_domain_sw_cs_tb___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__matched_rules = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_addr_decode_periphs__DOT__dec_valid_o = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_addr_decode_periphs__DOT__dec_error_o = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_d 
        = vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_q;
    vlSelfRef.user_domain_sw_cs_tb__DOT__spi_sck_o = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_d 
        = vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_q;
    if ((1U & (~ ((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_q) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)))) {
            if (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_q) {
                vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_d = 0U;
            }
        }
    }
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_d 
        = vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q;
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_d 
        = vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q;
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_d 
        = vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_q;
    vlSelfRef.user_domain_sw_cs_tb__DOT__spi_mosi_o 
        = (1U & ((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_q) 
                 >> (7U & ((IData)(7U) - (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q)))));
    if ((2U & (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_q))) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__cs_no 
            = (1U & (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_q));
        if ((1U & (~ (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)))) {
            vlSelfRef.user_domain_sw_cs_tb__DOT__spi_sck_o 
                = (4U <= (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q));
            vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_d 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q)));
            vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__unnamedblk1__DOT__next_bit_idx_calc = 0U;
            if ((7U == (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q))) {
                vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_d = 0U;
                if ((0U != (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q))) {
                    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_d 
                        = (7U & ((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q) 
                                 - (IData)(1U)));
                }
                vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__unnamedblk1__DOT__next_bit_idx_calc 
                    = ((0U == (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q))
                        ? 0U : (0xfU & ((IData)(7U) 
                                        - ((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q) 
                                           - (IData)(1U)))));
                vlSelfRef.user_domain_sw_cs_tb__DOT__spi_mosi_o 
                    = (1U & ((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_q) 
                             >> (7U & (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__unnamedblk1__DOT__next_bit_idx_calc))));
            }
        }
        if ((1U & (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_q))) {
            vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_d = 0U;
        } else if ((7U == (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q))) {
            if ((0U == (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q))) {
                vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_d = 3U;
            }
        }
    } else {
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__cs_no 
            = (1U & (~ (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)));
        if ((1U & (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_q))) {
            vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_d = 0U;
            vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_d = 7U;
            vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_d = 2U;
            vlSelfRef.user_domain_sw_cs_tb__DOT__spi_mosi_o 
                = (1U & ((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_q) 
                         >> 7U));
        } else if (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_q) {
            vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_d = 1U;
        }
    }
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx = 0U;
    if (((0x20001000U <= ((vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] 
                           << 0x16U) | (vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
                                        >> 0xaU))) 
         & (0x20002000U > ((vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] 
                            << 0x16U) | (vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
                                         >> 0xaU))))) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__matched_rules = 1U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_addr_decode_periphs__DOT__dec_valid_o = 1U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_addr_decode_periphs__DOT__dec_error_o = 0U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx = 1U;
    }
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_rsp 
        = ((0x7fULL & vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_rsp) 
           | ((QData)((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__rdata_q)) 
              << 7U));
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_error_obi_rsp = 0ULL;
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_error_obi_rsp 
        = (0x7fULL & vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_error_obi_rsp);
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_error_obi_rsp 
        = ((7ULL & vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_error_obi_rsp) 
           | (0x5d6e558f00ULL | ((QData)((IData)((1U 
                                                  | (((2U 
                                                       >= 
                                                       (3U 
                                                        & ((IData)(3U) 
                                                           * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q))))
                                                       ? 
                                                      (7U 
                                                       & ((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_q) 
                                                          >> 
                                                          (3U 
                                                           & ((IData)(3U) 
                                                              * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q)))))
                                                       : 0U) 
                                                     << 1U)))) 
                                 << 3U)));
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_error_obi_rsp 
        = ((0x7ffffffffcULL & vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_error_obi_rsp) 
           | (IData)((IData)((((1U != (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q)) 
                               << 1U) | (0U != (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q))))));
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_n 
        = vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q;
    if (((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_error_obi_rsp) 
         & (0U != (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_n 
            = ((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_n) 
               & ((IData)(1U) + (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q)));
    }
}

VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024root___stl_comb__TOP__0(Vuser_domain_sw_cs_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuser_domain_sw_cs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_domain_sw_cs_tb___024root___stl_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_rsp 
        = ((0x7ffffffffcULL & vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_rsp) 
           | (IData)((IData)((((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o) 
                               << 1U) | (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__rvalid_q)))));
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[0U] 
        = (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_error_obi_rsp);
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[1U] 
        = (((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_rsp) 
            << 7U) | (IData)((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_error_obi_rsp 
                              >> 0x20U)));
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[2U] 
        = (((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_rsp) 
            >> 0x19U) | ((IData)((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_rsp 
                                  >> 0x20U)) << 7U));
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_down 
        = ((0x4dU >= (0x7fU & ((IData)(0x27U) * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
           && (1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                     (3U & (((IData)(0x27U) * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)) 
                            >> 5U))] >> (0x1fU & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))));
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_d 
        = vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q;
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_up = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[1U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[4U] = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q) 
                  >> 1U)))) {
        if ((1U & ((((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx) 
                     == (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)) 
                    | (~ (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q))) 
                   | ((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q) 
                      & (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_down))))) {
            vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT____Vlvbound_h235a59af__0 
                = (1U & vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U]);
            if ((0x93U >= (0xffU & ((IData)(0x4aU) 
                                    * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))) {
                vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[(7U 
                                                                                & (((IData)(0x4aU) 
                                                                                * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x4aU) 
                                             * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))) 
                        & vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[
                        (7U & (((IData)(0x4aU) * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)) 
                               >> 5U))]) | ((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT____Vlvbound_h235a59af__0) 
                                            << (0x1fU 
                                                & ((IData)(0x4aU) 
                                                   * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))));
            }
            vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT____Vlvbound_h19131224__0[0U] 
                = ((vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
                    << 0x1fU) | (vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
                                 >> 1U));
            vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT____Vlvbound_h19131224__0[1U] 
                = ((vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] 
                    << 0x1fU) | (vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
                                 >> 1U));
            vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT____Vlvbound_h19131224__0[2U] 
                = (0x1ffU & (vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] 
                             >> 1U));
            if ((0x93U >= ((IData)(1U) + (0xffU & ((IData)(0x4aU) 
                                                   * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))))) {
                VL_ASSIGNSEL_WW(148,73,((IData)(1U) 
                                        + (0xffU & 
                                           ((IData)(0x4aU) 
                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))), vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o, vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT____Vlvbound_h19131224__0);
            }
        }
    }
    if ((((0x93U >= (0xffU & ((IData)(0x4aU) * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))) 
          && (1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[
                    (7U & (((IData)(0x4aU) * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)) 
                           >> 5U))] >> (0x1fU & ((IData)(0x4aU) 
                                                 * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))))) 
         & ((0x4dU >= ((IData)(1U) + (0x7fU & ((IData)(0x27U) 
                                               * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))) 
            && (1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                      (((IData)(1U) + (0x7fU & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))) 
                       >> 5U)] >> (0x1fU & ((IData)(1U) 
                                            + (0x7fU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))))))))) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_d 
            = vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx;
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_up = 1U;
    }
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_d 
        = vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q;
    if (((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_up) 
         ^ (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_down))) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_d 
            = (3U & ((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_down)
                      ? ((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)) : ((IData)(1U) 
                                           + (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q))));
    }
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o 
        = ((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
            >> 0xaU) & ((IData)((0x800000U == (0xfff80000U 
                                               & vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U]))) 
                        | ((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                            >> 0x13U) & ((0U == (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)) 
                                         & ((4U == 
                                             (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                              >> 0x14U)) 
                                            | (0U == 
                                               (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                >> 0x14U)))))));
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__status_read_req 
        = ((~ (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
               >> 0x13U)) & (8U == vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__granted_addr_q));
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT____Vcellinp__i_id_fifo__push_i 
        = (1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0U] 
                 & (IData)((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_error_obi_rsp 
                            >> 1U))));
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__gate_clock = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_n 
        = vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q;
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_n 
        = vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT____Vcellinp__i_id_fifo__push_i) 
         & (1U != (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__gate_clock = 0U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_n 
            = ((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q) 
               & ((IData)(1U) + (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q)));
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_error_obi_rsp) 
         & (0U != (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT____Vcellinp__i_id_fifo__push_i) 
           & (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_error_obi_rsp)) 
          & (1U != (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_n 
            = vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q;
    }
    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_n 
        = vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_q;
    if (((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT____Vcellinp__i_id_fifo__push_i) 
         & (1U != (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT____Vlvbound_h3dcab515__0 
            = (7U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0U] 
                     >> 2U));
        if ((2U >= (3U & ((IData)(3U) * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q))))) {
            vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_n 
                = (((~ ((IData)(7U) << (3U & ((IData)(3U) 
                                              * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q))))) 
                    & (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_n)) 
                   | (7U & ((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT____Vlvbound_h3dcab515__0) 
                            << (3U & ((IData)(3U) * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q))))));
        }
    }
}

VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024root___eval_triggers__stl(Vuser_domain_sw_cs_tb___024root* vlSelf);

VL_ATTR_COLD bool Vuser_domain_sw_cs_tb___024root___eval_phase__stl(Vuser_domain_sw_cs_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuser_domain_sw_cs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_domain_sw_cs_tb___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vuser_domain_sw_cs_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vuser_domain_sw_cs_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024root___dump_triggers__act(Vuser_domain_sw_cs_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuser_domain_sw_cs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_domain_sw_cs_tb___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] user_domain_sw_cs_tb.dut.__Vcellout__i_spi_peripheral__gnt_o)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge user_domain_sw_cs_tb.clk_i)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge user_domain_sw_cs_tb.rst_ni)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024root___dump_triggers__nba(Vuser_domain_sw_cs_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuser_domain_sw_cs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_domain_sw_cs_tb___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] user_domain_sw_cs_tb.dut.__Vcellout__i_spi_peripheral__gnt_o)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge user_domain_sw_cs_tb.clk_i)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge user_domain_sw_cs_tb.rst_ni)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024root____Vm_traceActivitySetAll(Vuser_domain_sw_cs_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuser_domain_sw_cs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_domain_sw_cs_tb___024root____Vm_traceActivitySetAll\n"); );
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

VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024root___ctor_var_reset(Vuser_domain_sw_cs_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuser_domain_sw_cs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_domain_sw_cs_tb___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->user_domain_sw_cs_tb__DOT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->user_domain_sw_cs_tb__DOT__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->user_domain_sw_cs_tb__DOT__ref_clk_i = VL_RAND_RESET_I(1);
    vlSelf->user_domain_sw_cs_tb__DOT__testmode_i = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(74, vlSelf->user_domain_sw_cs_tb__DOT__user_sbr_obi_req);
    vlSelf->user_domain_sw_cs_tb__DOT__user_mgr_obi_rsp = VL_RAND_RESET_Q(37);
    vlSelf->user_domain_sw_cs_tb__DOT__gpio_in_sync_i = VL_RAND_RESET_I(16);
    vlSelf->user_domain_sw_cs_tb__DOT__spi_sck_o = VL_RAND_RESET_I(1);
    vlSelf->user_domain_sw_cs_tb__DOT__spi_mosi_o = VL_RAND_RESET_I(1);
    vlSelf->user_domain_sw_cs_tb__DOT__tb_cs_ssd1331_n = VL_RAND_RESET_I(1);
    vlSelf->user_domain_sw_cs_tb__DOT__tb_cs_adxl345_n = VL_RAND_RESET_I(1);
    vlSelf->user_domain_sw_cs_tb__DOT__tb_dc_ssd1331 = VL_RAND_RESET_I(1);
    vlSelf->user_domain_sw_cs_tb__DOT__tb_int_adxl345 = VL_RAND_RESET_I(1);
    vlSelf->user_domain_sw_cs_tb__DOT__req_ongoing = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(78, vlSelf->user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp);
    vlSelf->user_domain_sw_cs_tb__DOT__dut__DOT__user_error_obi_rsp = VL_RAND_RESET_Q(39);
    vlSelf->user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_rsp = VL_RAND_RESET_Q(39);
    vlSelf->user_domain_sw_cs_tb__DOT__dut__DOT__user_idx = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(148, vlSelf->user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o);
    vlSelf->user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o = VL_RAND_RESET_I(1);
    vlSelf->user_domain_sw_cs_tb__DOT__dut__DOT__i_addr_decode_periphs__DOT__dec_valid_o = VL_RAND_RESET_I(1);
    vlSelf->user_domain_sw_cs_tb__DOT__dut__DOT__i_addr_decode_periphs__DOT__dec_error_o = VL_RAND_RESET_I(1);
    vlSelf->user_domain_sw_cs_tb__DOT__dut__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__matched_rules = VL_RAND_RESET_I(1);
    vlSelf->user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_up = VL_RAND_RESET_I(1);
    vlSelf->user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_down = VL_RAND_RESET_I(1);
    vlSelf->user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_d = VL_RAND_RESET_I(1);
    vlSelf->user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q = VL_RAND_RESET_I(1);
    vlSelf->user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT____Vlvbound_h235a59af__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(73, vlSelf->user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT____Vlvbound_h19131224__0);
    vlSelf->user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q = VL_RAND_RESET_I(2);
    vlSelf->user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_d = VL_RAND_RESET_I(2);
    vlSelf->user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT____Vcellinp__i_id_fifo__push_i = VL_RAND_RESET_I(1);
    vlSelf->user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__gate_clock = VL_RAND_RESET_I(1);
    vlSelf->user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_n = VL_RAND_RESET_I(1);
    vlSelf->user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q = VL_RAND_RESET_I(1);
    vlSelf->user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_n = VL_RAND_RESET_I(1);
    vlSelf->user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q = VL_RAND_RESET_I(1);
    vlSelf->user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_n = VL_RAND_RESET_I(2);
    vlSelf->user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q = VL_RAND_RESET_I(2);
    vlSelf->user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_n = VL_RAND_RESET_I(3);
    vlSelf->user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_q = VL_RAND_RESET_I(3);
    vlSelf->user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT____Vlvbound_h3dcab515__0 = VL_RAND_RESET_I(3);
    vlSelf->user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__cs_no = VL_RAND_RESET_I(1);
    vlSelf->user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_q = VL_RAND_RESET_I(2);
    vlSelf->user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_d = VL_RAND_RESET_I(2);
    vlSelf->user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_q = VL_RAND_RESET_I(1);
    vlSelf->user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_d = VL_RAND_RESET_I(1);
    vlSelf->user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_q = VL_RAND_RESET_I(8);
    vlSelf->user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_d = VL_RAND_RESET_I(8);
    vlSelf->user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q = VL_RAND_RESET_I(3);
    vlSelf->user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_d = VL_RAND_RESET_I(3);
    vlSelf->user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q = VL_RAND_RESET_I(3);
    vlSelf->user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_d = VL_RAND_RESET_I(3);
    vlSelf->user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__rvalid_q = VL_RAND_RESET_I(1);
    vlSelf->user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__granted_addr_q = VL_RAND_RESET_I(32);
    vlSelf->user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__status_read_req = VL_RAND_RESET_I(1);
    vlSelf->user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__done_q = VL_RAND_RESET_I(1);
    vlSelf->user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__done_d = VL_RAND_RESET_I(1);
    vlSelf->user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__unnamedblk1__DOT__next_bit_idx_calc = VL_RAND_RESET_I(4);
    vlSelf->__Vtask_user_domain_sw_cs_tb__DOT__send_data__150__device = 0;
    vlSelf->__Vtask_user_domain_sw_cs_tb__DOT__send_data__150__data = VL_RAND_RESET_I(8);
    vlSelf->__Vtask_user_domain_sw_cs_tb__DOT__send_spi_byte_raw__153__spi_data = VL_RAND_RESET_I(8);
    vlSelf->__Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__154__status_val = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__154__busy_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__154__timeout_count = 0;
    vlSelf->__Vtrigprevexpr___TOP__user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o__0 = VL_RAND_RESET_I(1);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__user_domain_sw_cs_tb__DOT__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__user_domain_sw_cs_tb__DOT__rst_ni__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
