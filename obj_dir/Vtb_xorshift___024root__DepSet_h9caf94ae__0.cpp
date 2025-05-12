// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_xorshift.h for the primary calling header

#include "Vtb_xorshift__pch.h"
#include "Vtb_xorshift___024root.h"

VL_ATTR_COLD void Vtb_xorshift___024root___eval_initial__TOP(Vtb_xorshift___024root* vlSelf);
VlCoroutine Vtb_xorshift___024root___eval_initial__TOP__Vtiming__0(Vtb_xorshift___024root* vlSelf);
VlCoroutine Vtb_xorshift___024root___eval_initial__TOP__Vtiming__1(Vtb_xorshift___024root* vlSelf);

void Vtb_xorshift___024root___eval_initial(Vtb_xorshift___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xorshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xorshift___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_xorshift___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_xorshift___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_xorshift___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_xorshift__DOT__obi_rsp_o_from_dut__0 
        = vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_xorshift__DOT__obi_rsp_o_from_dut__1 
        = vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_xorshift__DOT__clk_i__0 
        = vlSelfRef.tb_xorshift__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_xorshift__DOT__rst_ni__0 
        = vlSelfRef.tb_xorshift__DOT__rst_ni;
}

VL_INLINE_OPT VlCoroutine Vtb_xorshift___024root___eval_initial__TOP__Vtiming__0(Vtb_xorshift___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xorshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xorshift___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_xorshift__DOT__clk_i = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x61a8ULL, 
                                             nullptr, 
                                             "rtl/user_domain/tb_xorshift.sv", 
                                             48);
        vlSelfRef.tb_xorshift__DOT__clk_i = (1U & (~ (IData)(vlSelfRef.tb_xorshift__DOT__clk_i)));
    }
}

void Vtb_xorshift___024root___act_comb__TOP__0(Vtb_xorshift___024root* vlSelf);
void Vtb_xorshift___024root___act_comb__TOP__1(Vtb_xorshift___024root* vlSelf);
void Vtb_xorshift___024root___act_comb__TOP__2(Vtb_xorshift___024root* vlSelf);

void Vtb_xorshift___024root___eval_act(Vtb_xorshift___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xorshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xorshift___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0xbULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_xorshift___024root___act_comb__TOP__0(vlSelf);
    }
    if ((0xaULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_xorshift___024root___act_comb__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((0xbULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_xorshift___024root___act_comb__TOP__2(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_xorshift___024root___act_comb__TOP__0(Vtb_xorshift___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xorshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xorshift___024root___act_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
        = ((7ULL & vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut) 
           | (((QData)((IData)(vlSelfRef.tb_xorshift__DOT__dut__DOT__rdata_q)) 
               << 7U) | ((QData)((IData)(((0xeU & (
                                                   vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U] 
                                                   >> 1U)) 
                                          | (1U & (
                                                   vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U] 
                                                   & (~ (IData)(
                                                                (vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
                                                                 >> 1U)))))))) 
                         << 3U)));
}

VL_INLINE_OPT void Vtb_xorshift___024root___act_comb__TOP__1(Vtb_xorshift___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xorshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xorshift___024root___act_comb__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_xorshift__DOT__dut__DOT__is_ctrl_write 
        = (vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U] 
           & (0x200U == (0x7200U & vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[1U])));
    vlSelfRef.tb_xorshift__DOT__dut__DOT__read_req 
        = (1U & ((~ (vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[1U] 
                     >> 9U)) & vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U]));
    vlSelfRef.tb_xorshift__DOT__dut__DOT__is_rdata_read 
        = ((IData)(vlSelfRef.tb_xorshift__DOT__dut__DOT__read_req) 
           & (0x1000U == (0x7000U & vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[1U])));
    vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
        = ((0x7ffffffffcULL & vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut) 
           | (IData)((IData)(((((IData)(vlSelfRef.tb_xorshift__DOT__dut__DOT__is_ctrl_write) 
                                | (IData)(vlSelfRef.tb_xorshift__DOT__dut__DOT__is_rdata_read)) 
                               << 1U) | (IData)(vlSelfRef.tb_xorshift__DOT__dut__DOT__rvalid_q)))));
}

VL_INLINE_OPT void Vtb_xorshift___024root___act_comb__TOP__2(Vtb_xorshift___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xorshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xorshift___024root___act_comb__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_xorshift__DOT__dut__DOT__trigger_prng_update 
        = ((IData)(vlSelfRef.tb_xorshift__DOT__dut__DOT__is_ctrl_write) 
           & (IData)((vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
                      >> 1U)));
    vlSelfRef.tb_xorshift__DOT__dut__DOT__read_granted_this_cycle 
        = ((IData)(vlSelfRef.tb_xorshift__DOT__dut__DOT__read_req) 
           & (IData)((vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
                      >> 1U)));
}

void Vtb_xorshift___024root___nba_sequent__TOP__0(Vtb_xorshift___024root* vlSelf);
void Vtb_xorshift___024root___nba_comb__TOP__0(Vtb_xorshift___024root* vlSelf);

void Vtb_xorshift___024root___eval_nba(Vtb_xorshift___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xorshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xorshift___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_xorshift___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((0xfULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_xorshift___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_xorshift___024root___nba_sequent__TOP__0(Vtb_xorshift___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xorshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xorshift___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__tb_xorshift__DOT__dut__DOT__rdata_q;
    __Vdly__tb_xorshift__DOT__dut__DOT__rdata_q = 0;
    // Body
    __Vdly__tb_xorshift__DOT__dut__DOT__rdata_q = vlSelfRef.tb_xorshift__DOT__dut__DOT__rdata_q;
    if (vlSelfRef.tb_xorshift__DOT__rst_ni) {
        if (vlSelfRef.tb_xorshift__DOT__dut__DOT__read_granted_this_cycle) {
            if (vlSelfRef.tb_xorshift__DOT__dut__DOT__is_rdata_read) {
                VL_WRITEF_NX("%t [PRNG_OBI_READ_LATCH] Read granted for RDATA_REG. Latching rdata_q=0x%x. rvalid_q becomes 1 NEXT cycle.\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,32,vlSelfRef.tb_xorshift__DOT__dut__DOT__prng_state_q);
                Verilated::runFlushCallbacks();
                __Vdly__tb_xorshift__DOT__dut__DOT__rdata_q 
                    = vlSelfRef.tb_xorshift__DOT__dut__DOT__prng_state_q;
            } else {
                VL_WRITEF_NX("%t [PRNG_OBI_READ_LATCH] Read granted for UNKNOWN REG (should not happen if gnt is correct). Latching rdata_q=0. rvalid_q becomes 1 NEXT cycle.\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9);
                Verilated::runFlushCallbacks();
                __Vdly__tb_xorshift__DOT__dut__DOT__rdata_q = 0U;
            }
        } else if ((1U & (~ (IData)(vlSelfRef.tb_xorshift__DOT__dut__DOT__rvalid_q)))) {
            __Vdly__tb_xorshift__DOT__dut__DOT__rdata_q = 0U;
        }
        if (VL_UNLIKELY(vlSelfRef.tb_xorshift__DOT__dut__DOT__trigger_prng_update)) {
            VL_WRITEF_NX("%t [PRNG_OBI_CTRL_WRITE] Write to CTRL_REG granted. trigger_prng_update asserted. Next PRNG state will be 0x%x.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,32,vlSelfRef.tb_xorshift__DOT__dut__DOT__prng_state_d);
            Verilated::runFlushCallbacks();
        }
        if (VL_UNLIKELY(vlSelfRef.tb_xorshift__DOT__dut__DOT__rvalid_q)) {
            VL_WRITEF_NX("%t [PRNG_OBI_RVALID_HIGH] rvalid_o is HIGH. rdata_o is 0x%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,32,vlSelfRef.tb_xorshift__DOT__dut__DOT__rdata_q);
            Verilated::runFlushCallbacks();
        }
        vlSelfRef.tb_xorshift__DOT__dut__DOT__rvalid_q 
            = vlSelfRef.tb_xorshift__DOT__dut__DOT__read_granted_this_cycle;
    } else {
        vlSelfRef.tb_xorshift__DOT__dut__DOT__rvalid_q = 0U;
        __Vdly__tb_xorshift__DOT__dut__DOT__rdata_q = 0U;
    }
    if (vlSelfRef.tb_xorshift__DOT__rst_ni) {
        if (vlSelfRef.tb_xorshift__DOT__dut__DOT__trigger_prng_update) {
            vlSelfRef.tb_xorshift__DOT__dut__DOT__prng_state_q 
                = vlSelfRef.tb_xorshift__DOT__dut__DOT__prng_state_d;
        }
    } else {
        vlSelfRef.tb_xorshift__DOT__dut__DOT__prng_state_q = 0x12345678U;
    }
    vlSelfRef.tb_xorshift__DOT__dut__DOT__rdata_q = __Vdly__tb_xorshift__DOT__dut__DOT__rdata_q;
    vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
        = ((0x7ffffffffcULL & vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut) 
           | (IData)((IData)(((((IData)(vlSelfRef.tb_xorshift__DOT__dut__DOT__is_ctrl_write) 
                                | (IData)(vlSelfRef.tb_xorshift__DOT__dut__DOT__is_rdata_read)) 
                               << 1U) | (IData)(vlSelfRef.tb_xorshift__DOT__dut__DOT__rvalid_q)))));
    vlSelfRef.tb_xorshift__DOT__dut__DOT__t1 = (vlSelfRef.tb_xorshift__DOT__dut__DOT__prng_state_q 
                                                ^ VL_SHIFTL_III(32,32,32, vlSelfRef.tb_xorshift__DOT__dut__DOT__prng_state_q, 0xdU));
    vlSelfRef.tb_xorshift__DOT__dut__DOT__t2 = (vlSelfRef.tb_xorshift__DOT__dut__DOT__t1 
                                                ^ VL_SHIFTR_III(32,32,32, vlSelfRef.tb_xorshift__DOT__dut__DOT__t1, 0x11U));
    vlSelfRef.tb_xorshift__DOT__dut__DOT__prng_state_d 
        = (vlSelfRef.tb_xorshift__DOT__dut__DOT__t2 
           ^ VL_SHIFTL_III(32,32,32, vlSelfRef.tb_xorshift__DOT__dut__DOT__t2, 5U));
}

VL_INLINE_OPT void Vtb_xorshift___024root___nba_comb__TOP__0(Vtb_xorshift___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xorshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xorshift___024root___nba_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
        = ((7ULL & vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut) 
           | (((QData)((IData)(vlSelfRef.tb_xorshift__DOT__dut__DOT__rdata_q)) 
               << 7U) | ((QData)((IData)(((0xeU & (
                                                   vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U] 
                                                   >> 1U)) 
                                          | (1U & (
                                                   vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U] 
                                                   & (~ (IData)(
                                                                (vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
                                                                 >> 1U)))))))) 
                         << 3U)));
    vlSelfRef.tb_xorshift__DOT__dut__DOT__trigger_prng_update 
        = ((IData)(vlSelfRef.tb_xorshift__DOT__dut__DOT__is_ctrl_write) 
           & (IData)((vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
                      >> 1U)));
    vlSelfRef.tb_xorshift__DOT__dut__DOT__read_granted_this_cycle 
        = ((IData)(vlSelfRef.tb_xorshift__DOT__dut__DOT__read_req) 
           & (IData)((vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
                      >> 1U)));
}

void Vtb_xorshift___024root___timing_commit(Vtb_xorshift___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xorshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xorshift___024root___timing_commit\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (2ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_he90bc7e9__0.commit(
                                                   "@(posedge tb_xorshift.clk_i)");
    }
}

void Vtb_xorshift___024root___timing_resume(Vtb_xorshift___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xorshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xorshift___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_he90bc7e9__0.resume(
                                                   "@(posedge tb_xorshift.clk_i)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_xorshift___024root___eval_triggers__act(Vtb_xorshift___024root* vlSelf);

bool Vtb_xorshift___024root___eval_phase__act(Vtb_xorshift___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xorshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xorshift___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_xorshift___024root___eval_triggers__act(vlSelf);
    Vtb_xorshift___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_xorshift___024root___timing_resume(vlSelf);
        Vtb_xorshift___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_xorshift___024root___eval_phase__nba(Vtb_xorshift___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xorshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xorshift___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_xorshift___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_xorshift___024root___dump_triggers__nba(Vtb_xorshift___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_xorshift___024root___dump_triggers__act(Vtb_xorshift___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_xorshift___024root___eval(Vtb_xorshift___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xorshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xorshift___024root___eval\n"); );
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
            Vtb_xorshift___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/user_domain/tb_xorshift.sv", 5, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_xorshift___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/user_domain/tb_xorshift.sv", 5, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_xorshift___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_xorshift___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_xorshift___024root___eval_debug_assertions(Vtb_xorshift___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xorshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xorshift___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
