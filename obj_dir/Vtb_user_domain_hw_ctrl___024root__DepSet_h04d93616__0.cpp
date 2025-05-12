// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_user_domain_hw_ctrl.h for the primary calling header

#include "Vtb_user_domain_hw_ctrl__pch.h"
#include "Vtb_user_domain_hw_ctrl___024root.h"

VL_ATTR_COLD void Vtb_user_domain_hw_ctrl___024root___eval_initial__TOP(Vtb_user_domain_hw_ctrl___024root* vlSelf);
VlCoroutine Vtb_user_domain_hw_ctrl___024root___eval_initial__TOP__Vtiming__0(Vtb_user_domain_hw_ctrl___024root* vlSelf);
VlCoroutine Vtb_user_domain_hw_ctrl___024root___eval_initial__TOP__Vtiming__1(Vtb_user_domain_hw_ctrl___024root* vlSelf);

void Vtb_user_domain_hw_ctrl___024root___eval_initial(Vtb_user_domain_hw_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_hw_ctrl___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_user_domain_hw_ctrl___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_user_domain_hw_ctrl___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_user_domain_hw_ctrl___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__user_prng_obi_rsp__0 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_prng_obi_rsp;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__user_font_rom_obi_rsp__0 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_font_rom_obi_rsp;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_ctrl_obi_rsp__0 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_ctrl_obi_rsp;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o__0 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w__0 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r__0 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__is_ctrl_write__0 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__is_ctrl_write;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__is_rdata_read__0 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__is_rdata_read;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__user_prng_obi_rsp__1 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_prng_obi_rsp;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__user_font_rom_obi_rsp__1 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_font_rom_obi_rsp;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_ctrl_obi_rsp__1 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_ctrl_obi_rsp;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o__1 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w__1 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r__1 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__is_ctrl_write__1 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__is_ctrl_write;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__is_rdata_read__1 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__is_rdata_read;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__clk_i__0 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__rst_ni__0 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__rst_ni;
}

VL_INLINE_OPT VlCoroutine Vtb_user_domain_hw_ctrl___024root___eval_initial__TOP__Vtiming__0(Vtb_user_domain_hw_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_hw_ctrl___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__clk_i = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x61a8ULL, 
                                             nullptr, 
                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                             256);
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__clk_i 
            = (1U & (~ (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__clk_i)));
    }
}

VlCoroutine Vtb_user_domain_hw_ctrl___024root___eval_initial__TOP__Vtiming__1__0(Vtb_user_domain_hw_ctrl___024root* vlSelf);
VlCoroutine Vtb_user_domain_hw_ctrl___024root___eval_initial__TOP__Vtiming__1__1(Vtb_user_domain_hw_ctrl___024root* vlSelf);
VlCoroutine Vtb_user_domain_hw_ctrl___024root___eval_initial__TOP__Vtiming__1__2(Vtb_user_domain_hw_ctrl___024root* vlSelf);

VL_INLINE_OPT VlCoroutine Vtb_user_domain_hw_ctrl___024root___eval_initial__TOP__Vtiming__1(Vtb_user_domain_hw_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_hw_ctrl___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await Vtb_user_domain_hw_ctrl___024root___eval_initial__TOP__Vtiming__1__0(vlSelf);
    co_await Vtb_user_domain_hw_ctrl___024root___eval_initial__TOP__Vtiming__1__1(vlSelf);
    co_await Vtb_user_domain_hw_ctrl___024root___eval_initial__TOP__Vtiming__1__2(vlSelf);
}

void Vtb_user_domain_hw_ctrl___024root___act_comb__TOP__0(Vtb_user_domain_hw_ctrl___024root* vlSelf);
void Vtb_user_domain_hw_ctrl___024root___act_sequent__TOP__0(Vtb_user_domain_hw_ctrl___024root* vlSelf);
void Vtb_user_domain_hw_ctrl___024root___act_sequent__TOP__1(Vtb_user_domain_hw_ctrl___024root* vlSelf);
void Vtb_user_domain_hw_ctrl___024root___act_sequent__TOP__2(Vtb_user_domain_hw_ctrl___024root* vlSelf);
void Vtb_user_domain_hw_ctrl___024root___act_comb__TOP__1(Vtb_user_domain_hw_ctrl___024root* vlSelf);
void Vtb_user_domain_hw_ctrl___024root___act_comb__TOP__2(Vtb_user_domain_hw_ctrl___024root* vlSelf);
void Vtb_user_domain_hw_ctrl___024root___act_comb__TOP__3(Vtb_user_domain_hw_ctrl___024root* vlSelf);
void Vtb_user_domain_hw_ctrl___024root___act_comb__TOP__4(Vtb_user_domain_hw_ctrl___024root* vlSelf);

void Vtb_user_domain_hw_ctrl___024root___eval_act(Vtb_user_domain_hw_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_hw_ctrl___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x500ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_user_domain_hw_ctrl___024root___act_comb__TOP__0(vlSelf);
    }
    if ((0x30ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_user_domain_hw_ctrl___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0xc0ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_user_domain_hw_ctrl___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_user_domain_hw_ctrl___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((0xfULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_user_domain_hw_ctrl___024root___act_comb__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((0x50fULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_user_domain_hw_ctrl___024root___act_comb__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((0x5cfULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_user_domain_hw_ctrl___024root___act_comb__TOP__3(vlSelf);
    }
    if ((0x53fULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_user_domain_hw_ctrl___024root___act_comb__TOP__4(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_user_domain_hw_ctrl___024root___act_comb__TOP__0(Vtb_user_domain_hw_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_hw_ctrl___024root___act_comb__TOP__0\n"); );
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
}

VL_INLINE_OPT void Vtb_user_domain_hw_ctrl___024root___act_sequent__TOP__0(Vtb_user_domain_hw_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_hw_ctrl___024root___act_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_ctrl_obi_rsp 
        = ((0x7ffffffffcULL & vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_ctrl_obi_rsp) 
           | (IData)((IData)(((((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w) 
                                | (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r)) 
                               << 1U) | (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__rvalid_q)))));
}

VL_INLINE_OPT void Vtb_user_domain_hw_ctrl___024root___act_sequent__TOP__1(Vtb_user_domain_hw_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_hw_ctrl___024root___act_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_prng_obi_rsp 
        = ((0x7ffffffffcULL & vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_prng_obi_rsp) 
           | (IData)((IData)(((((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__is_ctrl_write) 
                                | (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__is_rdata_read)) 
                               << 1U) | (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__rvalid_q)))));
}

VL_INLINE_OPT void Vtb_user_domain_hw_ctrl___024root___act_sequent__TOP__2(Vtb_user_domain_hw_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_hw_ctrl___024root___act_sequent__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_engine_obi_rsp 
        = ((0x7ffffffffcULL & vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_engine_obi_rsp) 
           | (IData)((IData)((((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o) 
                               << 1U) | (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rvalid_q)))));
}

VL_INLINE_OPT void Vtb_user_domain_hw_ctrl___024root___act_comb__TOP__1(Vtb_user_domain_hw_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_hw_ctrl___024root___act_comb__TOP__1\n"); );
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
}

extern const VlWide<12>/*383:0*/ Vtb_user_domain_hw_ctrl__ConstPool__CONST_h1aa720ac_0;

VL_INLINE_OPT void Vtb_user_domain_hw_ctrl___024root___act_comb__TOP__2(Vtb_user_domain_hw_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_hw_ctrl___024root___act_comb__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_INLINE_OPT void Vtb_user_domain_hw_ctrl___024root___act_comb__TOP__3(Vtb_user_domain_hw_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_hw_ctrl___024root___act_comb__TOP__3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__trigger_prng_update 
        = ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__is_ctrl_write) 
           & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_prng_obi_rsp 
                      >> 1U)));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__read_granted_this_cycle 
        = ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__read_req) 
           & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_prng_obi_rsp 
                      >> 1U)));
}

VL_INLINE_OPT void Vtb_user_domain_hw_ctrl___024root___act_comb__TOP__4(Vtb_user_domain_hw_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_hw_ctrl___024root___act_comb__TOP__4\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_ctrl_obi_rsp 
        = ((7ULL & vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_ctrl_obi_rsp) 
           | (((QData)((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__rdata_q)) 
               << 7U) | ((QData)((IData)(((0xeU & (
                                                   vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[4U] 
                                                   >> 0x15U)) 
                                          | (((~ (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r)) 
                                              & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__read_req)) 
                                             | ((~ (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w)) 
                                                & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__write_req)))))) 
                         << 3U)));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__read_granted_this_cycle 
        = ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__read_req) 
           & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_ctrl_obi_rsp 
                      >> 1U)));
}

void Vtb_user_domain_hw_ctrl___024root___nba_sequent__TOP__0(Vtb_user_domain_hw_ctrl___024root* vlSelf);
void Vtb_user_domain_hw_ctrl___024root___nba_sequent__TOP__1(Vtb_user_domain_hw_ctrl___024root* vlSelf);
void Vtb_user_domain_hw_ctrl___024root___nba_comb__TOP__0(Vtb_user_domain_hw_ctrl___024root* vlSelf);
void Vtb_user_domain_hw_ctrl___024root___nba_sequent__TOP__2(Vtb_user_domain_hw_ctrl___024root* vlSelf);
void Vtb_user_domain_hw_ctrl___024root___nba_comb__TOP__5(Vtb_user_domain_hw_ctrl___024root* vlSelf);

void Vtb_user_domain_hw_ctrl___024root___eval_nba(Vtb_user_domain_hw_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_hw_ctrl___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x300ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_user_domain_hw_ctrl___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_user_domain_hw_ctrl___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x500ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_user_domain_hw_ctrl___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x3c0ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_user_domain_hw_ctrl___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((0x330ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_user_domain_hw_ctrl___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x308ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_user_domain_hw_ctrl___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((0x300ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_user_domain_hw_ctrl___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
    }
    if ((0x30fULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_user_domain_hw_ctrl___024root___act_comb__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[7U] = 1U;
    }
    if ((0x70fULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_user_domain_hw_ctrl___024root___nba_comb__TOP__5(vlSelf);
        vlSelfRef.__Vm_traceActivity[8U] = 1U;
    }
    if ((0x7cfULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_user_domain_hw_ctrl___024root___act_comb__TOP__3(vlSelf);
    }
    if ((0x73fULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_user_domain_hw_ctrl___024root___act_comb__TOP__4(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_user_domain_hw_ctrl___024root___nba_comb__TOP__0(Vtb_user_domain_hw_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_hw_ctrl___024root___nba_comb__TOP__0\n"); );
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
    }
    if (((0x20002000U <= ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
                           << 0x16U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
                                        >> 0xaU))) 
         & (0x20003000U > ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
                            << 0x16U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
                                         >> 0xaU))))) {
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_addr_decode_user_periphs__DOT__i_addr_decode_dync__DOT__matched_rules 
            = (2U | (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_addr_decode_user_periphs__DOT__i_addr_decode_dync__DOT__matched_rules));
    }
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_addr_decode_user_periphs__DOT__dec_valid_o = 0U;
    if (((0x20001000U <= ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
                           << 0x16U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
                                        >> 0xaU))) 
         & (0x20002000U > ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
                            << 0x16U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
                                         >> 0xaU))))) {
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_addr_decode_user_periphs__DOT__dec_valid_o = 1U;
    }
    if (((0x20002000U <= ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
                           << 0x16U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
                                        >> 0xaU))) 
         & (0x20003000U > ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
                            << 0x16U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
                                         >> 0xaU))))) {
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_addr_decode_user_periphs__DOT__dec_valid_o = 1U;
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
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_addr_decode_user_periphs__DOT__dec_error_o = 0U;
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
    }
}

VL_INLINE_OPT void Vtb_user_domain_hw_ctrl___024root___nba_sequent__TOP__2(Vtb_user_domain_hw_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_hw_ctrl___024root___nba_sequent__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q 
        = vlSelfRef.__Vdly__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__cs_no = 1U;
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
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q 
        = ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__rst_ni)
            ? (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_d)
            : 0U);
}

VL_INLINE_OPT void Vtb_user_domain_hw_ctrl___024root___nba_comb__TOP__5(Vtb_user_domain_hw_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_hw_ctrl___024root___nba_comb__TOP__5\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vtb_user_domain_hw_ctrl___024root___timing_commit(Vtb_user_domain_hw_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_hw_ctrl___024root___timing_commit\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (0x100ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h15786638__0.commit(
                                                   "@(posedge tb_user_domain_hw_ctrl.clk_i)");
    }
}

void Vtb_user_domain_hw_ctrl___024root___timing_resume(Vtb_user_domain_hw_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_hw_ctrl___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h15786638__0.resume(
                                                   "@(posedge tb_user_domain_hw_ctrl.clk_i)");
    }
    if ((0x400ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_user_domain_hw_ctrl___024root___eval_triggers__act(Vtb_user_domain_hw_ctrl___024root* vlSelf);

bool Vtb_user_domain_hw_ctrl___024root___eval_phase__act(Vtb_user_domain_hw_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_hw_ctrl___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<11> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_user_domain_hw_ctrl___024root___eval_triggers__act(vlSelf);
    Vtb_user_domain_hw_ctrl___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_user_domain_hw_ctrl___024root___timing_resume(vlSelf);
        Vtb_user_domain_hw_ctrl___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_user_domain_hw_ctrl___024root___eval_phase__nba(Vtb_user_domain_hw_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_hw_ctrl___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_user_domain_hw_ctrl___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_user_domain_hw_ctrl___024root___dump_triggers__nba(Vtb_user_domain_hw_ctrl___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_user_domain_hw_ctrl___024root___dump_triggers__act(Vtb_user_domain_hw_ctrl___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_user_domain_hw_ctrl___024root___eval(Vtb_user_domain_hw_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_hw_ctrl___024root___eval\n"); );
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
            Vtb_user_domain_hw_ctrl___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 186, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_user_domain_hw_ctrl___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 186, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_user_domain_hw_ctrl___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_user_domain_hw_ctrl___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_user_domain_hw_ctrl___024root___eval_debug_assertions(Vtb_user_domain_hw_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_hw_ctrl___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
