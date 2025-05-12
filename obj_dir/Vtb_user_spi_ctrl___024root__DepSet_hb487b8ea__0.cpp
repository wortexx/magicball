// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_user_spi_ctrl.h for the primary calling header

#include "Vtb_user_spi_ctrl__pch.h"
#include "Vtb_user_spi_ctrl___024root.h"

VL_ATTR_COLD void Vtb_user_spi_ctrl___024root___eval_initial__TOP(Vtb_user_spi_ctrl___024root* vlSelf);
VlCoroutine Vtb_user_spi_ctrl___024root___eval_initial__TOP__Vtiming__0(Vtb_user_spi_ctrl___024root* vlSelf);
VlCoroutine Vtb_user_spi_ctrl___024root___eval_initial__TOP__Vtiming__1(Vtb_user_spi_ctrl___024root* vlSelf);

void Vtb_user_spi_ctrl___024root___eval_initial(Vtb_user_spi_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_spi_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_spi_ctrl___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_user_spi_ctrl___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_user_spi_ctrl___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_user_spi_ctrl___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_spi_ctrl__DOT__clk_i__0 
        = vlSelfRef.tb_user_spi_ctrl__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_spi_ctrl__DOT__rst_ni__0 
        = vlSelfRef.tb_user_spi_ctrl__DOT__rst_ni;
}

VL_INLINE_OPT VlCoroutine Vtb_user_spi_ctrl___024root___eval_initial__TOP__Vtiming__0(Vtb_user_spi_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_spi_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_spi_ctrl___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_user_spi_ctrl__DOT__clk_i = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x61a8ULL, 
                                             nullptr, 
                                             "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                             45);
        vlSelfRef.tb_user_spi_ctrl__DOT__clk_i = (1U 
                                                  & (~ (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__clk_i)));
    }
}

void Vtb_user_spi_ctrl___024root___act_comb__TOP__0(Vtb_user_spi_ctrl___024root* vlSelf);

void Vtb_user_spi_ctrl___024root___eval_act(Vtb_user_spi_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_spi_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_spi_ctrl___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((5ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_user_spi_ctrl___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_user_spi_ctrl___024root___act_comb__TOP__0(Vtb_user_spi_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_spi_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_spi_ctrl___024root___act_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__reg_rdata_comb = 0U;
    if ((0U == (0xfffU & (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U] 
                          >> 0xaU)))) {
        vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__reg_rdata_comb 
            = (((IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__dc_q) 
                << 2U) | (((IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__cs2_n_q) 
                           << 1U) | (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__cs1_n_q)));
    }
    vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__write_req 
        = (1U & (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[0U] 
                 & (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U] 
                    >> 9U)));
    vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__read_req 
        = (1U & ((~ (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U] 
                     >> 9U)) & vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[0U]));
    vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__grant_w 
        = ((IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__write_req) 
           & (0U == (0x3ffc00U & vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U])));
    vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__grant_r 
        = ((IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__read_req) 
           & (0U == (0x3ffc00U & vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U])));
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp_o_from_dut 
        = ((0x7ffffffffcULL & vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp_o_from_dut) 
           | (IData)((IData)(((((IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__grant_w) 
                                | (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__grant_r)) 
                               << 1U) | (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__rvalid_q)))));
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp_o_from_dut 
        = ((7ULL & vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp_o_from_dut) 
           | (((QData)((IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__rdata_q)) 
               << 7U) | ((QData)((IData)(((0xeU & (
                                                   vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[0U] 
                                                   >> 1U)) 
                                          | (((~ (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__grant_r)) 
                                              & (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__read_req)) 
                                             | ((~ (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__grant_w)) 
                                                & (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__write_req)))))) 
                         << 3U)));
    vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__read_granted_this_cycle 
        = ((IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__read_req) 
           & (IData)((vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp_o_from_dut 
                      >> 1U)));
}

void Vtb_user_spi_ctrl___024root___nba_sequent__TOP__0(Vtb_user_spi_ctrl___024root* vlSelf);
void Vtb_user_spi_ctrl___024root___nba_comb__TOP__0(Vtb_user_spi_ctrl___024root* vlSelf);
void Vtb_user_spi_ctrl___024root___nba_comb__TOP__1(Vtb_user_spi_ctrl___024root* vlSelf);

void Vtb_user_spi_ctrl___024root___eval_nba(Vtb_user_spi_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_spi_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_spi_ctrl___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_user_spi_ctrl___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_user_spi_ctrl___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_user_spi_ctrl___024root___nba_comb__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_user_spi_ctrl___024root___nba_sequent__TOP__0(Vtb_user_spi_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_spi_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_spi_ctrl___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__tb_user_spi_ctrl__DOT__dut__DOT__rdata_q;
    __Vdly__tb_user_spi_ctrl__DOT__dut__DOT__rdata_q = 0;
    // Body
    __Vdly__tb_user_spi_ctrl__DOT__dut__DOT__rdata_q 
        = vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__rdata_q;
    if (vlSelfRef.tb_user_spi_ctrl__DOT__rst_ni) {
        if ((((IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__write_req) 
              & (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__grant_w)) 
             & (0U == (0x3ffc00U & vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U])))) {
            if (VL_UNLIKELY((0x20U & vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U]))) {
                VL_WRITEF_NX("%t [SPI_CTRL_GPIO_WRITE] AddrOff=0x%x, Data=0x%x -> CS1_N=%b, CS2_N=%b, DC=%b\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,12,(0xfffU & (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U] 
                                              >> 0xaU)),
                             32,((vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U] 
                                  << 0x1bU) | (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[0U] 
                                               >> 5U)),
                             1,(1U & (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[0U] 
                                      >> 5U)),1,(1U 
                                                 & (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[0U] 
                                                    >> 6U)),
                             1,(1U & (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[0U] 
                                      >> 7U)));
                vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__cs1_n_q 
                    = (1U & (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[0U] 
                             >> 5U));
                vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__cs2_n_q 
                    = (1U & (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[0U] 
                             >> 6U));
                vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__dc_q 
                    = (1U & (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[0U] 
                             >> 7U));
            }
        }
        if (VL_UNLIKELY(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__read_granted_this_cycle)) {
            VL_WRITEF_NX("%t [SPI_CTRL_READ_LATCH] Read granted for AddrOff=0x%x. Latching rdata_q=0x%x. rvalid_q becomes 1 NEXT cycle.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,12,(0xfffU & (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U] 
                                          >> 0xaU)),
                         32,vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__reg_rdata_comb);
            __Vdly__tb_user_spi_ctrl__DOT__dut__DOT__rdata_q 
                = vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__reg_rdata_comb;
        } else if ((1U & (~ (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__rvalid_q)))) {
            __Vdly__tb_user_spi_ctrl__DOT__dut__DOT__rdata_q = 0U;
        }
        if (VL_UNLIKELY(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__rvalid_q)) {
            VL_WRITEF_NX("%t [SPI_CTRL_RVALID_HIGH] rvalid_o is HIGH. rdata_o is 0x%x for AddrOff=0x%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,32,vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__rdata_q,
                         12,(0xfffU & (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U] 
                                       >> 0xaU)));
        }
        vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__rvalid_q 
            = vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__read_granted_this_cycle;
    } else {
        vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__cs1_n_q = 1U;
        vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__cs2_n_q = 1U;
        vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__dc_q = 0U;
        vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__rvalid_q = 0U;
        __Vdly__tb_user_spi_ctrl__DOT__dut__DOT__rdata_q = 0U;
    }
    vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__rdata_q 
        = __Vdly__tb_user_spi_ctrl__DOT__dut__DOT__rdata_q;
}

VL_INLINE_OPT void Vtb_user_spi_ctrl___024root___nba_comb__TOP__0(Vtb_user_spi_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_spi_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_spi_ctrl___024root___nba_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__read_req 
        = (1U & ((~ (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U] 
                     >> 9U)) & vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[0U]));
    vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__write_req 
        = (1U & (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[0U] 
                 & (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U] 
                    >> 9U)));
    vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__grant_r 
        = ((IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__read_req) 
           & (0U == (0x3ffc00U & vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U])));
    vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__grant_w 
        = ((IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__write_req) 
           & (0U == (0x3ffc00U & vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U])));
}

VL_INLINE_OPT void Vtb_user_spi_ctrl___024root___nba_comb__TOP__1(Vtb_user_spi_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_spi_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_spi_ctrl___024root___nba_comb__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__reg_rdata_comb = 0U;
    if ((0U == (0xfffU & (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U] 
                          >> 0xaU)))) {
        vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__reg_rdata_comb 
            = (((IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__dc_q) 
                << 2U) | (((IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__cs2_n_q) 
                           << 1U) | (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__cs1_n_q)));
    }
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp_o_from_dut 
        = ((0x7ffffffffcULL & vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp_o_from_dut) 
           | (IData)((IData)(((((IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__grant_w) 
                                | (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__grant_r)) 
                               << 1U) | (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__rvalid_q)))));
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp_o_from_dut 
        = ((7ULL & vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp_o_from_dut) 
           | (((QData)((IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__rdata_q)) 
               << 7U) | ((QData)((IData)(((0xeU & (
                                                   vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[0U] 
                                                   >> 1U)) 
                                          | (((~ (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__grant_r)) 
                                              & (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__read_req)) 
                                             | ((~ (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__grant_w)) 
                                                & (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__write_req)))))) 
                         << 3U)));
    vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__read_granted_this_cycle 
        = ((IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__read_req) 
           & (IData)((vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp_o_from_dut 
                      >> 1U)));
}

void Vtb_user_spi_ctrl___024root___timing_commit(Vtb_user_spi_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_spi_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_spi_ctrl___024root___timing_commit\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_he028f39d__0.commit(
                                                   "@(posedge tb_user_spi_ctrl.clk_i)");
    }
}

void Vtb_user_spi_ctrl___024root___timing_resume(Vtb_user_spi_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_spi_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_spi_ctrl___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_he028f39d__0.resume(
                                                   "@(posedge tb_user_spi_ctrl.clk_i)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_user_spi_ctrl___024root___eval_triggers__act(Vtb_user_spi_ctrl___024root* vlSelf);

bool Vtb_user_spi_ctrl___024root___eval_phase__act(Vtb_user_spi_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_spi_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_spi_ctrl___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_user_spi_ctrl___024root___eval_triggers__act(vlSelf);
    Vtb_user_spi_ctrl___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_user_spi_ctrl___024root___timing_resume(vlSelf);
        Vtb_user_spi_ctrl___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_user_spi_ctrl___024root___eval_phase__nba(Vtb_user_spi_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_spi_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_spi_ctrl___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_user_spi_ctrl___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_user_spi_ctrl___024root___dump_triggers__nba(Vtb_user_spi_ctrl___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_user_spi_ctrl___024root___dump_triggers__act(Vtb_user_spi_ctrl___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_user_spi_ctrl___024root___eval(Vtb_user_spi_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_spi_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_spi_ctrl___024root___eval\n"); );
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
            Vtb_user_spi_ctrl___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/user_domain/tb_user_spi_ctrl.sv", 5, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_user_spi_ctrl___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/user_domain/tb_user_spi_ctrl.sv", 5, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_user_spi_ctrl___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_user_spi_ctrl___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_user_spi_ctrl___024root___eval_debug_assertions(Vtb_user_spi_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_spi_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_spi_ctrl___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
