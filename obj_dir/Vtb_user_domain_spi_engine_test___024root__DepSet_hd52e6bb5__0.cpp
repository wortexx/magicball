// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_user_domain_spi_engine_test.h for the primary calling header

#include "Vtb_user_domain_spi_engine_test__pch.h"
#include "Vtb_user_domain_spi_engine_test__Syms.h"
#include "Vtb_user_domain_spi_engine_test___024root.h"

extern const VlWide<9>/*287:0*/ Vtb_user_domain_spi_engine_test__ConstPool__CONST_ha940fc71_0;

VL_INLINE_OPT VlCoroutine Vtb_user_domain_spi_engine_test___024root___eval_initial__TOP__Vtiming__1(Vtb_user_domain_spi_engine_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_spi_engine_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_spi_engine_test___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__send_spi_byte_to_engine__0__spi_data;
    __Vtask_tb_user_domain_spi_engine_test__DOT__send_spi_byte_to_engine__0__spi_data = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__1__status_val;
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__1__status_val = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__1__busy_bit;
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__1__busy_bit = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__1__done_bit_tb;
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__1__done_bit_tb = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__1__read_err;
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__1__read_err = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__1__timeout_count;
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__1__timeout_count = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__r_addr;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__r_data_val;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__r_data_val = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__r_err;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__r_err = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__timeout_count_gnt;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__timeout_count_rvalid;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__req_txn;
    VL_ZERO_W(74, __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__req_txn);
    QData/*36:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__rsp_r_chan_temp;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__rsp_r_chan_temp = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__grant_received;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__grant_received = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__r_addr;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__r_data_val;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__r_data_val = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__r_err;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__r_err = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__timeout_count_gnt;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__timeout_count_rvalid;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__req_txn;
    VL_ZERO_W(74, __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__req_txn);
    QData/*36:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__rsp_r_chan_temp;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__rsp_r_chan_temp = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__grant_received;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__grant_received = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__r_addr;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__r_data_val;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__r_data_val = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__r_err;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__r_err = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__timeout_count_gnt;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__timeout_count_rvalid;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__req_txn;
    VL_ZERO_W(74, __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__req_txn);
    QData/*36:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__rsp_r_chan_temp;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__rsp_r_chan_temp = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__grant_received;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__grant_received = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__5__w_addr;
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__5__w_addr = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__5__w_data;
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__5__w_data = 0;
    CData/*3:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__5__w_be;
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__5__w_be = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__5__timeout_count;
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__5__timeout_count = 0;
    VlWide<3>/*73:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__5__req_txn;
    VL_ZERO_W(74, __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__5__req_txn);
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__6__w_addr;
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__6__w_addr = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__6__w_data;
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__6__w_data = 0;
    CData/*3:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__6__w_be;
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__6__w_be = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__6__timeout_count;
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__6__timeout_count = 0;
    VlWide<3>/*73:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__6__req_txn;
    VL_ZERO_W(74, __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__6__req_txn);
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__7__status_val;
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__7__status_val = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__7__busy_bit;
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__7__busy_bit = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__7__done_bit_tb;
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__7__done_bit_tb = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__7__read_err;
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__7__read_err = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__7__timeout_count;
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__7__timeout_count = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__r_addr;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__r_data_val;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__r_data_val = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__r_err;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__r_err = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__timeout_count_gnt;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__timeout_count_rvalid;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__req_txn;
    VL_ZERO_W(74, __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__req_txn);
    QData/*36:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__rsp_r_chan_temp;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__rsp_r_chan_temp = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__grant_received;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__grant_received = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__r_addr;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__r_data_val;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__r_data_val = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__r_err;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__r_err = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__timeout_count_gnt;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__timeout_count_rvalid;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__req_txn;
    VL_ZERO_W(74, __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__req_txn);
    QData/*36:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__rsp_r_chan_temp;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__rsp_r_chan_temp = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__grant_received;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__grant_received = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__r_addr;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__r_data_val;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__r_data_val = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__r_err;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__r_err = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__timeout_count_gnt;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__timeout_count_rvalid;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__req_txn;
    VL_ZERO_W(74, __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__req_txn);
    QData/*36:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__rsp_r_chan_temp;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__rsp_r_chan_temp = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__grant_received;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__grant_received = 0;
    CData/*7:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__send_spi_byte_to_engine__11__spi_data;
    __Vtask_tb_user_domain_spi_engine_test__DOT__send_spi_byte_to_engine__11__spi_data = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__12__status_val;
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__12__status_val = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__12__busy_bit;
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__12__busy_bit = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__12__done_bit_tb;
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__12__done_bit_tb = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__12__read_err;
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__12__read_err = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__12__timeout_count;
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__12__timeout_count = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__r_addr;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__r_data_val;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__r_data_val = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__r_err;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__r_err = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__timeout_count_gnt;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__timeout_count_rvalid;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__req_txn;
    VL_ZERO_W(74, __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__req_txn);
    QData/*36:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__rsp_r_chan_temp;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__rsp_r_chan_temp = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__grant_received;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__grant_received = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__r_addr;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__r_data_val;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__r_data_val = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__r_err;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__r_err = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__timeout_count_gnt;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__timeout_count_rvalid;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__req_txn;
    VL_ZERO_W(74, __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__req_txn);
    QData/*36:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__rsp_r_chan_temp;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__rsp_r_chan_temp = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__grant_received;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__grant_received = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__r_addr;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__r_data_val;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__r_data_val = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__r_err;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__r_err = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__timeout_count_gnt;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__timeout_count_rvalid;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__req_txn;
    VL_ZERO_W(74, __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__req_txn);
    QData/*36:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__rsp_r_chan_temp;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__rsp_r_chan_temp = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__grant_received;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__grant_received = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__16__w_addr;
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__16__w_addr = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__16__w_data;
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__16__w_data = 0;
    CData/*3:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__16__w_be;
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__16__w_be = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__16__timeout_count;
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__16__timeout_count = 0;
    VlWide<3>/*73:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__16__req_txn;
    VL_ZERO_W(74, __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__16__req_txn);
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__17__w_addr;
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__17__w_addr = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__17__w_data;
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__17__w_data = 0;
    CData/*3:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__17__w_be;
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__17__w_be = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__17__timeout_count;
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__17__timeout_count = 0;
    VlWide<3>/*73:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__17__req_txn;
    VL_ZERO_W(74, __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__17__req_txn);
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__18__status_val;
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__18__status_val = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__18__busy_bit;
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__18__busy_bit = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__18__done_bit_tb;
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__18__done_bit_tb = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__18__read_err;
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__18__read_err = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__18__timeout_count;
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__18__timeout_count = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__r_addr;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__r_data_val;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__r_data_val = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__r_err;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__r_err = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__timeout_count_gnt;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__timeout_count_rvalid;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__req_txn;
    VL_ZERO_W(74, __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__req_txn);
    QData/*36:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__rsp_r_chan_temp;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__rsp_r_chan_temp = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__grant_received;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__grant_received = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__r_addr;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__r_data_val;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__r_data_val = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__r_err;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__r_err = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__timeout_count_gnt;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__timeout_count_rvalid;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__req_txn;
    VL_ZERO_W(74, __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__req_txn);
    QData/*36:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__rsp_r_chan_temp;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__rsp_r_chan_temp = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__grant_received;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__grant_received = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__r_addr;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__r_data_val;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__r_data_val = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__r_err;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__r_err = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__timeout_count_gnt;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__timeout_count_rvalid;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__req_txn;
    VL_ZERO_W(74, __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__req_txn);
    QData/*36:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__rsp_r_chan_temp;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__rsp_r_chan_temp = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__grant_received;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__grant_received = 0;
    // Body
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(9, Vtb_user_domain_spi_engine_test__ConstPool__CONST_ha940fc71_0));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__rst_ni = 0U;
    VL_WRITEF_NX("%t : TB: Asserting Reset\n",0,64,
                 VL_TIME_UNITED_Q(1000),-9);
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                         112);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__rst_ni = 1U;
    VL_WRITEF_NX("%t : TB: Deasserting Reset\n",0,64,
                 VL_TIME_UNITED_Q(1000),-9);
    co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                         113);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%t : TB: Starting Simple SPI Engine Test via user_domain...\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    __Vtask_tb_user_domain_spi_engine_test__DOT__send_spi_byte_to_engine__0__spi_data = 0xaaU;
    VL_WRITEF_NX("%t : TB: Sending SPI byte 0x%02x to engine...\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__send_spi_byte_to_engine__0__spi_data));
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__1__timeout_count = 0U;
    VL_WRITEF_NX("%t : TB: Waiting for SPI Engine to finish...\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                         85);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__r_addr = 0x20001008U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__timeout_count_gnt = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                         68);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__req_txn[0U] = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__req_txn[1U] = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__req_txn[2U] = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__req_txn[0U] 
        = (1U | __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__req_txn[0U]);
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__req_txn[1U] 
        = ((0x1ffU & __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__req_txn[1U]) 
           | ((IData)(((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__r_addr)) 
                       << 1U)) << 9U));
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__req_txn[2U] 
        = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__r_addr)) 
                               << 1U)) >> 0x17U) | 
                     ((IData)((((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__r_addr)) 
                                << 1U) >> 0x20U)) << 9U)));
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__req_txn[0U];
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[1U] 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__req_txn[1U];
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[2U] 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__req_txn[2U];
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__r_addr);
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__grant_received = 0U;
    {
        while (VL_GTS_III(32, 0xbb8U, __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__timeout_count_gnt)) {
            if (((0x4dU >= ((IData)(1U) + (0x7fU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))) 
                 && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                           (((IData)(1U) + (0x7fU & 
                                            ((IData)(0x27U) 
                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                            >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))))) {
                __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__grant_received = 1U;
                goto __Vlabel1;
            }
            co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                                 "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                                 72);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__timeout_count_gnt 
                = ((IData)(1U) + __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__timeout_count_gnt);
        }
        __Vlabel1: ;
    }
    if (VL_UNLIKELY((1U & (~ (IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__grant_received))))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_spi_engine_test.sv:73: Assertion failed in %Ntb_user_domain_spi_engine_test.read_obi: %t : TB: Timeout OBI grant read 0x%x. Rsp: %12#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__r_addr,
                     39,((((0x4dU >= ((IData)(2U) + 
                                      (0x7fU & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))
                            ? (0x1fffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x26U) 
                                                                     + 
                                                                     (0x7fU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(0x21U) 
                                                                         + 
                                                                         (0x7fU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (((IData)(2U) 
                                                                          + 
                                                                          (0x7fU 
                                                                           & ((IData)(0x27U) 
                                                                              * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                         >> 5U)])) 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))
                            : 0ULL) << 2U) | (QData)((IData)(
                                                             ((((0x4dU 
                                                                 >= 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))) 
                                                                && (1U 
                                                                    & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(1U) 
                                                                         + 
                                                                         (0x7fU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)] 
                                                                       >> 
                                                                       (0x1fU 
                                                                        & ((IData)(1U) 
                                                                           + 
                                                                           (0x7fU 
                                                                            & ((IData)(0x27U) 
                                                                               * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                               << 1U) 
                                                              | ((0x4dU 
                                                                  >= 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                 && (1U 
                                                                     & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (3U 
                                                                         & (((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                                                            >> 5U))] 
                                                                        >> 
                                                                        (0x1fU 
                                                                         & ((IData)(0x27U) 
                                                                            * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))));
        VL_STOP_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 73, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 73, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__r_addr);
    co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                         75);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__req_ongoing = 0U;
    while (((~ ((0x4dU >= (0x7fU & ((IData)(0x27U) 
                                    * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                          (3U & (((IData)(0x27U) * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                 >> 5U))] >> (0x1fU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))) 
            & VL_GTS_III(32, 0xbb8U, __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                             76);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__timeout_count_rvalid);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0xbb8U, __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_spi_engine_test.sv:77: Assertion failed in %Ntb_user_domain_spi_engine_test.read_obi: %t : TB: Timeout OBI rvalid read 0x%x. Rsp: %12#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__r_addr,
                     39,((((0x4dU >= ((IData)(2U) + 
                                      (0x7fU & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))
                            ? (0x1fffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x26U) 
                                                                     + 
                                                                     (0x7fU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(0x21U) 
                                                                         + 
                                                                         (0x7fU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (((IData)(2U) 
                                                                          + 
                                                                          (0x7fU 
                                                                           & ((IData)(0x27U) 
                                                                              * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                         >> 5U)])) 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))
                            : 0ULL) << 2U) | (QData)((IData)(
                                                             ((((0x4dU 
                                                                 >= 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))) 
                                                                && (1U 
                                                                    & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(1U) 
                                                                         + 
                                                                         (0x7fU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)] 
                                                                       >> 
                                                                       (0x1fU 
                                                                        & ((IData)(1U) 
                                                                           + 
                                                                           (0x7fU 
                                                                            & ((IData)(0x27U) 
                                                                               * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                               << 1U) 
                                                              | ((0x4dU 
                                                                  >= 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                 && (1U 
                                                                     & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (3U 
                                                                         & (((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                                                            >> 5U))] 
                                                                        >> 
                                                                        (0x1fU 
                                                                         & ((IData)(0x27U) 
                                                                            * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))));
        VL_STOP_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 77, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 77, "");
    }
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__rsp_r_chan_temp 
        = ((0x4dU >= ((IData)(2U) + (0x7fU & ((IData)(0x27U) 
                                              * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))
            ? (0x1fffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                   (((IData)(0x26U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                    >> 5U)])) 
                                   << ((0U == (0x1fU 
                                               & ((IData)(2U) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                        ? 0x20U : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(2U) 
                                                       + 
                                                       (0x7fU 
                                                        & ((IData)(0x27U) 
                                                           * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                  | (((0U == (0x1fU 
                                              & ((IData)(2U) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                       ? 0ULL : ((QData)((IData)(
                                                                 vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                 (((IData)(0x21U) 
                                                                   + 
                                                                   (0x7fU 
                                                                    & ((IData)(0x27U) 
                                                                       * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                     | ((QData)((IData)(
                                                        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                        (((IData)(2U) 
                                                          + 
                                                          (0x7fU 
                                                           & ((IData)(0x27U) 
                                                              * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                         >> 5U)])) 
                                        >> (0x1fU & 
                                            ((IData)(2U) 
                                             + (0x7fU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))
            : 0ULL);
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__r_data_val 
        = (IData)((__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__rsp_r_chan_temp 
                   >> 5U));
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__r_err 
        = (1U & (IData)((__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__rsp_r_chan_temp 
                         >> 1U)));
    VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x Err=%b RVALID=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__r_addr,
                 32,__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__r_data_val,
                 1,(IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__r_err),
                 1,((0x4dU >= (0x7fU & ((IData)(0x27U) 
                                        * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                    && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                              (3U & (((IData)(0x27U) 
                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                     >> 5U))] >> (0x1fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))));
    co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[2U] = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__1__status_val 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__r_data_val;
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__1__read_err 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__2__r_err;
    if (VL_UNLIKELY(__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__1__read_err)) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_spi_engine_test.sv:88: Assertion failed in %Ntb_user_domain_spi_engine_test.wait_spi_engine_idle: %t : TB: OBI Error reading SPI Engine Status!\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9);
        VL_STOP_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 88, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 88, "");
    }
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__1__busy_bit 
        = (1U & __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__1__status_val);
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__1__done_bit_tb 
        = (1U & (__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__1__status_val 
                 >> 1U));
    VL_WRITEF_NX("%t : TB: Polling SPI Engine Status (Addr 0x20001008): 0x%08x (done=%b, busy=%b)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__1__status_val,
                 1,(IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__1__done_bit_tb),
                 1,__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__1__busy_bit);
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__1__timeout_count 
        = ((IData)(1U) + __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__1__timeout_count);
    if (__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__1__busy_bit) {
        co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                             91);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__1__busy_bit) 
            & VL_GTS_III(32, 0x3a98U, __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__1__timeout_count))) {
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__r_addr = 0x20001008U;
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__timeout_count_gnt = 0U;
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__timeout_count_rvalid = 0U;
        co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                             68);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__req_txn[0U] = 0U;
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__req_txn[1U] = 0U;
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__req_txn[2U] = 0U;
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__req_txn[0U] 
            = (1U | __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__req_txn[0U]);
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__req_txn[1U] 
            = ((0x1ffU & __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__req_txn[1U]) 
               | ((IData)(((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__r_addr)) 
                           << 1U)) << 9U));
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__req_txn[2U] 
            = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__r_addr)) 
                                   << 1U)) >> 0x17U) 
                         | ((IData)((((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__r_addr)) 
                                      << 1U) >> 0x20U)) 
                            << 9U)));
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] 
            = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__req_txn[0U];
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[1U] 
            = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__req_txn[1U];
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[2U] 
            = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__req_txn[2U];
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__req_ongoing = 1U;
        VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__r_addr);
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__grant_received = 0U;
        {
            while (VL_GTS_III(32, 0xbb8U, __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__timeout_count_gnt)) {
                if (((0x4dU >= ((IData)(1U) + (0x7fU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))) 
                     && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                               (((IData)(1U) + (0x7fU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                >> 5U)] >> (0x1fU & 
                                            ((IData)(1U) 
                                             + (0x7fU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))))) {
                    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__grant_received = 1U;
                    goto __Vlabel2;
                }
                co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                                     "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                                     72);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__timeout_count_gnt 
                    = ((IData)(1U) + __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__timeout_count_gnt);
            }
            __Vlabel2: ;
        }
        if (VL_UNLIKELY((1U & (~ (IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__grant_received))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_spi_engine_test.sv:73: Assertion failed in %Ntb_user_domain_spi_engine_test.read_obi: %t : TB: Timeout OBI grant read 0x%x. Rsp: %12#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__r_addr,
                         39,((((0x4dU >= ((IData)(2U) 
                                          + (0x7fU 
                                             & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))
                                ? (0x1fffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                       (((IData)(0x26U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                      | (((0U == (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                           (((IData)(0x21U) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                         | ((QData)((IData)(
                                                            vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                            (((IData)(2U) 
                                                              + 
                                                              (0x7fU 
                                                               & ((IData)(0x27U) 
                                                                  * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                             >> 5U)])) 
                                            >> (0x1fU 
                                                & ((IData)(2U) 
                                                   + 
                                                   (0x7fU 
                                                    & ((IData)(0x27U) 
                                                       * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))
                                : 0ULL) << 2U) | (QData)((IData)(
                                                                 ((((0x4dU 
                                                                     >= 
                                                                     ((IData)(1U) 
                                                                      + 
                                                                      (0x7fU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))) 
                                                                    && (1U 
                                                                        & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                           (((IData)(1U) 
                                                                             + 
                                                                             (0x7fU 
                                                                              & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                            >> 5U)] 
                                                                           >> 
                                                                           (0x1fU 
                                                                            & ((IData)(1U) 
                                                                               + 
                                                                               (0x7fU 
                                                                                & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                                   << 1U) 
                                                                  | ((0x4dU 
                                                                      >= 
                                                                      (0x7fU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                     && (1U 
                                                                         & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                            (3U 
                                                                             & (((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                                                                >> 5U))] 
                                                                            >> 
                                                                            (0x1fU 
                                                                             & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))));
            VL_STOP_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 73, "");
            VL_FINISH_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 73, "");
        }
        VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__r_addr);
        co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                             75);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] 
            = (0xfffffffeU & vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U]);
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__req_ongoing = 0U;
        while (((~ ((0x4dU >= (0x7fU & ((IData)(0x27U) 
                                        * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                    && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                              (3U & (((IData)(0x27U) 
                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                     >> 5U))] >> (0x1fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))) 
                & VL_GTS_III(32, 0xbb8U, __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__timeout_count_rvalid))) {
            co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                                 "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                                 76);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__timeout_count_rvalid 
                = ((IData)(1U) + __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__timeout_count_rvalid);
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0xbb8U, __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__timeout_count_rvalid))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_spi_engine_test.sv:77: Assertion failed in %Ntb_user_domain_spi_engine_test.read_obi: %t : TB: Timeout OBI rvalid read 0x%x. Rsp: %12#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__r_addr,
                         39,((((0x4dU >= ((IData)(2U) 
                                          + (0x7fU 
                                             & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))
                                ? (0x1fffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                       (((IData)(0x26U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                      | (((0U == (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                           (((IData)(0x21U) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                         | ((QData)((IData)(
                                                            vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                            (((IData)(2U) 
                                                              + 
                                                              (0x7fU 
                                                               & ((IData)(0x27U) 
                                                                  * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                             >> 5U)])) 
                                            >> (0x1fU 
                                                & ((IData)(2U) 
                                                   + 
                                                   (0x7fU 
                                                    & ((IData)(0x27U) 
                                                       * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))
                                : 0ULL) << 2U) | (QData)((IData)(
                                                                 ((((0x4dU 
                                                                     >= 
                                                                     ((IData)(1U) 
                                                                      + 
                                                                      (0x7fU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))) 
                                                                    && (1U 
                                                                        & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                           (((IData)(1U) 
                                                                             + 
                                                                             (0x7fU 
                                                                              & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                            >> 5U)] 
                                                                           >> 
                                                                           (0x1fU 
                                                                            & ((IData)(1U) 
                                                                               + 
                                                                               (0x7fU 
                                                                                & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                                   << 1U) 
                                                                  | ((0x4dU 
                                                                      >= 
                                                                      (0x7fU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                     && (1U 
                                                                         & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                            (3U 
                                                                             & (((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                                                                >> 5U))] 
                                                                            >> 
                                                                            (0x1fU 
                                                                             & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))));
            VL_STOP_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 77, "");
            VL_FINISH_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 77, "");
        }
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__rsp_r_chan_temp 
            = ((0x4dU >= ((IData)(2U) + (0x7fU & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))
                ? (0x1fffffffffULL & (((QData)((IData)(
                                                       vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                       (((IData)(0x26U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                      | (((0U == (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                           (((IData)(0x21U) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                         | ((QData)((IData)(
                                                            vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                            (((IData)(2U) 
                                                              + 
                                                              (0x7fU 
                                                               & ((IData)(0x27U) 
                                                                  * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                             >> 5U)])) 
                                            >> (0x1fU 
                                                & ((IData)(2U) 
                                                   + 
                                                   (0x7fU 
                                                    & ((IData)(0x27U) 
                                                       * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))
                : 0ULL);
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__r_data_val 
            = (IData)((__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__rsp_r_chan_temp 
                       >> 5U));
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__r_err 
            = (1U & (IData)((__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__rsp_r_chan_temp 
                             >> 1U)));
        VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x Err=%b RVALID=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__r_addr,
                     32,__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__r_data_val,
                     1,(IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__r_err),
                     1,((0x4dU >= (0x7fU & ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                        && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                  (3U & (((IData)(0x27U) 
                                          * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                         >> 5U))] >> 
                                  (0x1fU & ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))));
        co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                             80);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] = 0U;
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[1U] = 0U;
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[2U] = 0U;
        __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__1__status_val 
            = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__r_data_val;
        __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__1__read_err 
            = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__3__r_err;
        if (VL_UNLIKELY(__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__1__read_err)) {
            VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_spi_engine_test.sv:88: Assertion failed in %Ntb_user_domain_spi_engine_test.wait_spi_engine_idle: %t : TB: OBI Error reading SPI Engine Status!\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9);
            VL_STOP_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 88, "");
            VL_FINISH_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 88, "");
        }
        __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__1__busy_bit 
            = (1U & __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__1__status_val);
        __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__1__done_bit_tb 
            = (1U & (__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__1__status_val 
                     >> 1U));
        VL_WRITEF_NX("%t : TB: Polling SPI Engine Status (Addr 0x20001008): 0x%08x (done=%b, busy=%b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__1__status_val,
                     1,(IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__1__done_bit_tb),
                     1,__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__1__busy_bit);
        __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__1__timeout_count 
            = ((IData)(1U) + __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__1__timeout_count);
        if (__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__1__busy_bit) {
            co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                                 "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                                 91);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x3a98U, __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__1__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_spi_engine_test.sv:93: Assertion failed in %Ntb_user_domain_spi_engine_test.wait_spi_engine_idle: %t : TB: Timeout SPI Engine idle. Status: 0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__1__status_val);
        VL_STOP_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 93, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 93, "");
    }
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__r_addr = 0x20001008U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__timeout_count_gnt = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                         68);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__req_txn[0U] = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__req_txn[1U] = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__req_txn[2U] = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__req_txn[0U] 
        = (1U | __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__req_txn[0U]);
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__req_txn[1U] 
        = ((0x1ffU & __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__req_txn[1U]) 
           | ((IData)(((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__r_addr)) 
                       << 1U)) << 9U));
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__req_txn[2U] 
        = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__r_addr)) 
                               << 1U)) >> 0x17U) | 
                     ((IData)((((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__r_addr)) 
                                << 1U) >> 0x20U)) << 9U)));
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__req_txn[0U];
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[1U] 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__req_txn[1U];
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[2U] 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__req_txn[2U];
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__r_addr);
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__grant_received = 0U;
    {
        while (VL_GTS_III(32, 0xbb8U, __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__timeout_count_gnt)) {
            if (((0x4dU >= ((IData)(1U) + (0x7fU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))) 
                 && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                           (((IData)(1U) + (0x7fU & 
                                            ((IData)(0x27U) 
                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                            >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))))) {
                __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__grant_received = 1U;
                goto __Vlabel3;
            }
            co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                                 "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                                 72);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__timeout_count_gnt 
                = ((IData)(1U) + __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__timeout_count_gnt);
        }
        __Vlabel3: ;
    }
    if (VL_UNLIKELY((1U & (~ (IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__grant_received))))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_spi_engine_test.sv:73: Assertion failed in %Ntb_user_domain_spi_engine_test.read_obi: %t : TB: Timeout OBI grant read 0x%x. Rsp: %12#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__r_addr,
                     39,((((0x4dU >= ((IData)(2U) + 
                                      (0x7fU & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))
                            ? (0x1fffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x26U) 
                                                                     + 
                                                                     (0x7fU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(0x21U) 
                                                                         + 
                                                                         (0x7fU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (((IData)(2U) 
                                                                          + 
                                                                          (0x7fU 
                                                                           & ((IData)(0x27U) 
                                                                              * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                         >> 5U)])) 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))
                            : 0ULL) << 2U) | (QData)((IData)(
                                                             ((((0x4dU 
                                                                 >= 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))) 
                                                                && (1U 
                                                                    & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(1U) 
                                                                         + 
                                                                         (0x7fU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)] 
                                                                       >> 
                                                                       (0x1fU 
                                                                        & ((IData)(1U) 
                                                                           + 
                                                                           (0x7fU 
                                                                            & ((IData)(0x27U) 
                                                                               * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                               << 1U) 
                                                              | ((0x4dU 
                                                                  >= 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                 && (1U 
                                                                     & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (3U 
                                                                         & (((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                                                            >> 5U))] 
                                                                        >> 
                                                                        (0x1fU 
                                                                         & ((IData)(0x27U) 
                                                                            * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))));
        VL_STOP_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 73, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 73, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__r_addr);
    co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                         75);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__req_ongoing = 0U;
    while (((~ ((0x4dU >= (0x7fU & ((IData)(0x27U) 
                                    * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                          (3U & (((IData)(0x27U) * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                 >> 5U))] >> (0x1fU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))) 
            & VL_GTS_III(32, 0xbb8U, __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                             76);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__timeout_count_rvalid);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0xbb8U, __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_spi_engine_test.sv:77: Assertion failed in %Ntb_user_domain_spi_engine_test.read_obi: %t : TB: Timeout OBI rvalid read 0x%x. Rsp: %12#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__r_addr,
                     39,((((0x4dU >= ((IData)(2U) + 
                                      (0x7fU & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))
                            ? (0x1fffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x26U) 
                                                                     + 
                                                                     (0x7fU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(0x21U) 
                                                                         + 
                                                                         (0x7fU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (((IData)(2U) 
                                                                          + 
                                                                          (0x7fU 
                                                                           & ((IData)(0x27U) 
                                                                              * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                         >> 5U)])) 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))
                            : 0ULL) << 2U) | (QData)((IData)(
                                                             ((((0x4dU 
                                                                 >= 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))) 
                                                                && (1U 
                                                                    & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(1U) 
                                                                         + 
                                                                         (0x7fU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)] 
                                                                       >> 
                                                                       (0x1fU 
                                                                        & ((IData)(1U) 
                                                                           + 
                                                                           (0x7fU 
                                                                            & ((IData)(0x27U) 
                                                                               * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                               << 1U) 
                                                              | ((0x4dU 
                                                                  >= 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                 && (1U 
                                                                     & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (3U 
                                                                         & (((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                                                            >> 5U))] 
                                                                        >> 
                                                                        (0x1fU 
                                                                         & ((IData)(0x27U) 
                                                                            * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))));
        VL_STOP_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 77, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 77, "");
    }
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__rsp_r_chan_temp 
        = ((0x4dU >= ((IData)(2U) + (0x7fU & ((IData)(0x27U) 
                                              * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))
            ? (0x1fffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                   (((IData)(0x26U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                    >> 5U)])) 
                                   << ((0U == (0x1fU 
                                               & ((IData)(2U) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                        ? 0x20U : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(2U) 
                                                       + 
                                                       (0x7fU 
                                                        & ((IData)(0x27U) 
                                                           * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                  | (((0U == (0x1fU 
                                              & ((IData)(2U) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                       ? 0ULL : ((QData)((IData)(
                                                                 vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                 (((IData)(0x21U) 
                                                                   + 
                                                                   (0x7fU 
                                                                    & ((IData)(0x27U) 
                                                                       * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                     | ((QData)((IData)(
                                                        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                        (((IData)(2U) 
                                                          + 
                                                          (0x7fU 
                                                           & ((IData)(0x27U) 
                                                              * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                         >> 5U)])) 
                                        >> (0x1fU & 
                                            ((IData)(2U) 
                                             + (0x7fU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))
            : 0ULL);
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__r_data_val 
        = (IData)((__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__rsp_r_chan_temp 
                   >> 5U));
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__r_err 
        = (1U & (IData)((__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__rsp_r_chan_temp 
                         >> 1U)));
    VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x Err=%b RVALID=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__r_addr,
                 32,__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__r_data_val,
                 1,(IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__r_err),
                 1,((0x4dU >= (0x7fU & ((IData)(0x27U) 
                                        * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                    && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                              (3U & (((IData)(0x27U) 
                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                     >> 5U))] >> (0x1fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))));
    co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[2U] = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__1__status_val 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__r_data_val;
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__1__read_err 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__4__r_err;
    VL_WRITEF_NX("%t : TB: SPI Engine finished. Final Status: 0x%08x (done=%b, busy=%b)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__1__status_val,
                 1,(1U & (__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__1__status_val 
                          >> 1U)),1,(1U & __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__1__status_val));
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__5__w_be = 1U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__5__w_data 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__send_spi_byte_to_engine__0__spi_data;
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__5__w_addr = 0x20001004U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__5__timeout_count = 0U;
    co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                         55);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__5__req_txn[0U] = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__5__req_txn[1U] = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__5__req_txn[2U] = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__5__req_txn[0U] 
        = (1U | __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__5__req_txn[0U]);
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__5__req_txn[0U] 
        = ((0x1fU & __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__5__req_txn[0U]) 
           | ((IData)((((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__5__w_be)) 
                        << 0x20U) | (QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__5__w_data)))) 
              << 5U));
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__5__req_txn[1U] 
        = (((IData)((((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__5__w_be)) 
                      << 0x20U) | (QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__5__w_data)))) 
            >> 0x1bU) | (((IData)((1ULL | ((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__5__w_addr)) 
                                           << 1U))) 
                          << 9U) | ((IData)(((((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__5__w_be)) 
                                               << 0x20U) 
                                              | (QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__5__w_data))) 
                                             >> 0x20U)) 
                                    << 5U)));
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__5__req_txn[2U] 
        = (0x3ffU & (((0x1fU & ((IData)((1ULL | ((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__5__w_addr)) 
                                                 << 1U))) 
                                >> 0x17U)) | ((IData)(
                                                      ((((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__5__w_be)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__5__w_data))) 
                                                       >> 0x20U)) 
                                              >> 0x1bU)) 
                     | ((0x1e0U & ((IData)((1ULL | 
                                            ((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__5__w_addr)) 
                                             << 1U))) 
                                   >> 0x17U)) | ((IData)(
                                                         ((1ULL 
                                                           | ((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__5__w_addr)) 
                                                              << 1U)) 
                                                          >> 0x20U)) 
                                                 << 9U))));
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__5__req_txn[0U];
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[1U] 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__5__req_txn[1U];
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[2U] 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__5__req_txn[2U];
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Write Req : Addr=0x%x, Data=0x%x, BE=0x%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__5__w_addr,
                 32,__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__5__w_data,
                 4,(IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__5__w_be));
    while (((~ ((0x4dU >= ((IData)(1U) + (0x7fU & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))) 
                && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                          (((IData)(1U) + (0x7fU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                           >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                + (0x7fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))))) 
            & VL_GTS_III(32, 0xbb8U, __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__5__timeout_count))) {
        co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                             59);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__5__timeout_count 
            = ((IData)(1U) + __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__5__timeout_count);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0xbb8U, __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__5__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_spi_engine_test.sv:60: Assertion failed in %Ntb_user_domain_spi_engine_test.write_obi: %t : TB: Timeout OBI grant write 0x%x. Rsp: %12#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__5__w_addr,
                     39,((((0x4dU >= ((IData)(2U) + 
                                      (0x7fU & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))
                            ? (0x1fffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x26U) 
                                                                     + 
                                                                     (0x7fU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(0x21U) 
                                                                         + 
                                                                         (0x7fU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (((IData)(2U) 
                                                                          + 
                                                                          (0x7fU 
                                                                           & ((IData)(0x27U) 
                                                                              * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                         >> 5U)])) 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))
                            : 0ULL) << 2U) | (QData)((IData)(
                                                             ((((0x4dU 
                                                                 >= 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))) 
                                                                && (1U 
                                                                    & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(1U) 
                                                                         + 
                                                                         (0x7fU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)] 
                                                                       >> 
                                                                       (0x1fU 
                                                                        & ((IData)(1U) 
                                                                           + 
                                                                           (0x7fU 
                                                                            & ((IData)(0x27U) 
                                                                               * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                               << 1U) 
                                                              | ((0x4dU 
                                                                  >= 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                 && (1U 
                                                                     & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (3U 
                                                                         & (((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                                                            >> 5U))] 
                                                                        >> 
                                                                        (0x1fU 
                                                                         & ((IData)(0x27U) 
                                                                            * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))));
        VL_STOP_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 60, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 60, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Write Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__5__w_addr);
    co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                         62);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__req_ongoing = 0U;
    co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                         63);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[2U] = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__6__w_be = 1U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__6__w_data = 1U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__6__w_addr = 0x20001000U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__6__timeout_count = 0U;
    co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                         55);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__6__req_txn[0U] = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__6__req_txn[1U] = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__6__req_txn[2U] = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__6__req_txn[0U] 
        = (1U | __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__6__req_txn[0U]);
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__6__req_txn[0U] 
        = ((0x1fU & __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__6__req_txn[0U]) 
           | ((IData)((((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__6__w_be)) 
                        << 0x20U) | (QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__6__w_data)))) 
              << 5U));
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__6__req_txn[1U] 
        = (((IData)((((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__6__w_be)) 
                      << 0x20U) | (QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__6__w_data)))) 
            >> 0x1bU) | (((IData)((1ULL | ((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__6__w_addr)) 
                                           << 1U))) 
                          << 9U) | ((IData)(((((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__6__w_be)) 
                                               << 0x20U) 
                                              | (QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__6__w_data))) 
                                             >> 0x20U)) 
                                    << 5U)));
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__6__req_txn[2U] 
        = (0x3ffU & (((0x1fU & ((IData)((1ULL | ((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__6__w_addr)) 
                                                 << 1U))) 
                                >> 0x17U)) | ((IData)(
                                                      ((((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__6__w_be)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__6__w_data))) 
                                                       >> 0x20U)) 
                                              >> 0x1bU)) 
                     | ((0x1e0U & ((IData)((1ULL | 
                                            ((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__6__w_addr)) 
                                             << 1U))) 
                                   >> 0x17U)) | ((IData)(
                                                         ((1ULL 
                                                           | ((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__6__w_addr)) 
                                                              << 1U)) 
                                                          >> 0x20U)) 
                                                 << 9U))));
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__6__req_txn[0U];
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[1U] 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__6__req_txn[1U];
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[2U] 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__6__req_txn[2U];
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Write Req : Addr=0x%x, Data=0x%x, BE=0x%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__6__w_addr,
                 32,__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__6__w_data,
                 4,(IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__6__w_be));
    while (((~ ((0x4dU >= ((IData)(1U) + (0x7fU & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))) 
                && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                          (((IData)(1U) + (0x7fU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                           >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                + (0x7fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))))) 
            & VL_GTS_III(32, 0xbb8U, __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__6__timeout_count))) {
        co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                             59);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__6__timeout_count 
            = ((IData)(1U) + __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__6__timeout_count);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0xbb8U, __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__6__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_spi_engine_test.sv:60: Assertion failed in %Ntb_user_domain_spi_engine_test.write_obi: %t : TB: Timeout OBI grant write 0x%x. Rsp: %12#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__6__w_addr,
                     39,((((0x4dU >= ((IData)(2U) + 
                                      (0x7fU & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))
                            ? (0x1fffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x26U) 
                                                                     + 
                                                                     (0x7fU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(0x21U) 
                                                                         + 
                                                                         (0x7fU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (((IData)(2U) 
                                                                          + 
                                                                          (0x7fU 
                                                                           & ((IData)(0x27U) 
                                                                              * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                         >> 5U)])) 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))
                            : 0ULL) << 2U) | (QData)((IData)(
                                                             ((((0x4dU 
                                                                 >= 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))) 
                                                                && (1U 
                                                                    & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(1U) 
                                                                         + 
                                                                         (0x7fU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)] 
                                                                       >> 
                                                                       (0x1fU 
                                                                        & ((IData)(1U) 
                                                                           + 
                                                                           (0x7fU 
                                                                            & ((IData)(0x27U) 
                                                                               * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                               << 1U) 
                                                              | ((0x4dU 
                                                                  >= 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                 && (1U 
                                                                     & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (3U 
                                                                         & (((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                                                            >> 5U))] 
                                                                        >> 
                                                                        (0x1fU 
                                                                         & ((IData)(0x27U) 
                                                                            * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))));
        VL_STOP_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 60, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 60, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Write Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__6__w_addr);
    co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                         62);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__req_ongoing = 0U;
    co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                         63);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[2U] = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__7__timeout_count = 0U;
    VL_WRITEF_NX("%t : TB: Waiting for SPI Engine to finish...\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                         85);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__r_addr = 0x20001008U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__timeout_count_gnt = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                         68);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__req_txn[0U] = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__req_txn[1U] = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__req_txn[2U] = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__req_txn[0U] 
        = (1U | __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__req_txn[0U]);
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__req_txn[1U] 
        = ((0x1ffU & __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__req_txn[1U]) 
           | ((IData)(((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__r_addr)) 
                       << 1U)) << 9U));
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__req_txn[2U] 
        = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__r_addr)) 
                               << 1U)) >> 0x17U) | 
                     ((IData)((((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__r_addr)) 
                                << 1U) >> 0x20U)) << 9U)));
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__req_txn[0U];
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[1U] 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__req_txn[1U];
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[2U] 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__req_txn[2U];
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__r_addr);
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__grant_received = 0U;
    {
        while (VL_GTS_III(32, 0xbb8U, __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__timeout_count_gnt)) {
            if (((0x4dU >= ((IData)(1U) + (0x7fU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))) 
                 && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                           (((IData)(1U) + (0x7fU & 
                                            ((IData)(0x27U) 
                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                            >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))))) {
                __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__grant_received = 1U;
                goto __Vlabel4;
            }
            co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                                 "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                                 72);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__timeout_count_gnt 
                = ((IData)(1U) + __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__timeout_count_gnt);
        }
        __Vlabel4: ;
    }
    if (VL_UNLIKELY((1U & (~ (IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__grant_received))))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_spi_engine_test.sv:73: Assertion failed in %Ntb_user_domain_spi_engine_test.read_obi: %t : TB: Timeout OBI grant read 0x%x. Rsp: %12#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__r_addr,
                     39,((((0x4dU >= ((IData)(2U) + 
                                      (0x7fU & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))
                            ? (0x1fffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x26U) 
                                                                     + 
                                                                     (0x7fU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(0x21U) 
                                                                         + 
                                                                         (0x7fU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (((IData)(2U) 
                                                                          + 
                                                                          (0x7fU 
                                                                           & ((IData)(0x27U) 
                                                                              * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                         >> 5U)])) 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))
                            : 0ULL) << 2U) | (QData)((IData)(
                                                             ((((0x4dU 
                                                                 >= 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))) 
                                                                && (1U 
                                                                    & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(1U) 
                                                                         + 
                                                                         (0x7fU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)] 
                                                                       >> 
                                                                       (0x1fU 
                                                                        & ((IData)(1U) 
                                                                           + 
                                                                           (0x7fU 
                                                                            & ((IData)(0x27U) 
                                                                               * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                               << 1U) 
                                                              | ((0x4dU 
                                                                  >= 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                 && (1U 
                                                                     & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (3U 
                                                                         & (((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                                                            >> 5U))] 
                                                                        >> 
                                                                        (0x1fU 
                                                                         & ((IData)(0x27U) 
                                                                            * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))));
        VL_STOP_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 73, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 73, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__r_addr);
    co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                         75);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__req_ongoing = 0U;
    while (((~ ((0x4dU >= (0x7fU & ((IData)(0x27U) 
                                    * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                          (3U & (((IData)(0x27U) * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                 >> 5U))] >> (0x1fU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))) 
            & VL_GTS_III(32, 0xbb8U, __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                             76);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__timeout_count_rvalid);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0xbb8U, __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_spi_engine_test.sv:77: Assertion failed in %Ntb_user_domain_spi_engine_test.read_obi: %t : TB: Timeout OBI rvalid read 0x%x. Rsp: %12#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__r_addr,
                     39,((((0x4dU >= ((IData)(2U) + 
                                      (0x7fU & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))
                            ? (0x1fffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x26U) 
                                                                     + 
                                                                     (0x7fU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(0x21U) 
                                                                         + 
                                                                         (0x7fU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (((IData)(2U) 
                                                                          + 
                                                                          (0x7fU 
                                                                           & ((IData)(0x27U) 
                                                                              * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                         >> 5U)])) 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))
                            : 0ULL) << 2U) | (QData)((IData)(
                                                             ((((0x4dU 
                                                                 >= 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))) 
                                                                && (1U 
                                                                    & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(1U) 
                                                                         + 
                                                                         (0x7fU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)] 
                                                                       >> 
                                                                       (0x1fU 
                                                                        & ((IData)(1U) 
                                                                           + 
                                                                           (0x7fU 
                                                                            & ((IData)(0x27U) 
                                                                               * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                               << 1U) 
                                                              | ((0x4dU 
                                                                  >= 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                 && (1U 
                                                                     & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (3U 
                                                                         & (((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                                                            >> 5U))] 
                                                                        >> 
                                                                        (0x1fU 
                                                                         & ((IData)(0x27U) 
                                                                            * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))));
        VL_STOP_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 77, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 77, "");
    }
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__rsp_r_chan_temp 
        = ((0x4dU >= ((IData)(2U) + (0x7fU & ((IData)(0x27U) 
                                              * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))
            ? (0x1fffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                   (((IData)(0x26U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                    >> 5U)])) 
                                   << ((0U == (0x1fU 
                                               & ((IData)(2U) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                        ? 0x20U : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(2U) 
                                                       + 
                                                       (0x7fU 
                                                        & ((IData)(0x27U) 
                                                           * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                  | (((0U == (0x1fU 
                                              & ((IData)(2U) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                       ? 0ULL : ((QData)((IData)(
                                                                 vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                 (((IData)(0x21U) 
                                                                   + 
                                                                   (0x7fU 
                                                                    & ((IData)(0x27U) 
                                                                       * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                     | ((QData)((IData)(
                                                        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                        (((IData)(2U) 
                                                          + 
                                                          (0x7fU 
                                                           & ((IData)(0x27U) 
                                                              * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                         >> 5U)])) 
                                        >> (0x1fU & 
                                            ((IData)(2U) 
                                             + (0x7fU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))
            : 0ULL);
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__r_data_val 
        = (IData)((__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__rsp_r_chan_temp 
                   >> 5U));
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__r_err 
        = (1U & (IData)((__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__rsp_r_chan_temp 
                         >> 1U)));
    VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x Err=%b RVALID=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__r_addr,
                 32,__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__r_data_val,
                 1,(IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__r_err),
                 1,((0x4dU >= (0x7fU & ((IData)(0x27U) 
                                        * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                    && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                              (3U & (((IData)(0x27U) 
                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                     >> 5U))] >> (0x1fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))));
    co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[2U] = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__7__status_val 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__r_data_val;
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__7__read_err 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__8__r_err;
    if (VL_UNLIKELY(__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__7__read_err)) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_spi_engine_test.sv:88: Assertion failed in %Ntb_user_domain_spi_engine_test.wait_spi_engine_idle: %t : TB: OBI Error reading SPI Engine Status!\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9);
        VL_STOP_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 88, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 88, "");
    }
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__7__busy_bit 
        = (1U & __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__7__status_val);
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__7__done_bit_tb 
        = (1U & (__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__7__status_val 
                 >> 1U));
    VL_WRITEF_NX("%t : TB: Polling SPI Engine Status (Addr 0x20001008): 0x%08x (done=%b, busy=%b)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__7__status_val,
                 1,(IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__7__done_bit_tb),
                 1,__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__7__busy_bit);
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__7__timeout_count 
        = ((IData)(1U) + __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__7__timeout_count);
    if (__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__7__busy_bit) {
        co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                             91);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__7__busy_bit) 
            & VL_GTS_III(32, 0x3a98U, __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__7__timeout_count))) {
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__r_addr = 0x20001008U;
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__timeout_count_gnt = 0U;
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__timeout_count_rvalid = 0U;
        co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                             68);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__req_txn[0U] = 0U;
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__req_txn[1U] = 0U;
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__req_txn[2U] = 0U;
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__req_txn[0U] 
            = (1U | __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__req_txn[0U]);
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__req_txn[1U] 
            = ((0x1ffU & __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__req_txn[1U]) 
               | ((IData)(((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__r_addr)) 
                           << 1U)) << 9U));
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__req_txn[2U] 
            = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__r_addr)) 
                                   << 1U)) >> 0x17U) 
                         | ((IData)((((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__r_addr)) 
                                      << 1U) >> 0x20U)) 
                            << 9U)));
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] 
            = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__req_txn[0U];
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[1U] 
            = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__req_txn[1U];
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[2U] 
            = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__req_txn[2U];
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__req_ongoing = 1U;
        VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__r_addr);
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__grant_received = 0U;
        {
            while (VL_GTS_III(32, 0xbb8U, __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__timeout_count_gnt)) {
                if (((0x4dU >= ((IData)(1U) + (0x7fU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))) 
                     && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                               (((IData)(1U) + (0x7fU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                >> 5U)] >> (0x1fU & 
                                            ((IData)(1U) 
                                             + (0x7fU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))))) {
                    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__grant_received = 1U;
                    goto __Vlabel5;
                }
                co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                                     "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                                     72);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__timeout_count_gnt 
                    = ((IData)(1U) + __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__timeout_count_gnt);
            }
            __Vlabel5: ;
        }
        if (VL_UNLIKELY((1U & (~ (IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__grant_received))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_spi_engine_test.sv:73: Assertion failed in %Ntb_user_domain_spi_engine_test.read_obi: %t : TB: Timeout OBI grant read 0x%x. Rsp: %12#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__r_addr,
                         39,((((0x4dU >= ((IData)(2U) 
                                          + (0x7fU 
                                             & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))
                                ? (0x1fffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                       (((IData)(0x26U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                      | (((0U == (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                           (((IData)(0x21U) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                         | ((QData)((IData)(
                                                            vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                            (((IData)(2U) 
                                                              + 
                                                              (0x7fU 
                                                               & ((IData)(0x27U) 
                                                                  * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                             >> 5U)])) 
                                            >> (0x1fU 
                                                & ((IData)(2U) 
                                                   + 
                                                   (0x7fU 
                                                    & ((IData)(0x27U) 
                                                       * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))
                                : 0ULL) << 2U) | (QData)((IData)(
                                                                 ((((0x4dU 
                                                                     >= 
                                                                     ((IData)(1U) 
                                                                      + 
                                                                      (0x7fU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))) 
                                                                    && (1U 
                                                                        & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                           (((IData)(1U) 
                                                                             + 
                                                                             (0x7fU 
                                                                              & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                            >> 5U)] 
                                                                           >> 
                                                                           (0x1fU 
                                                                            & ((IData)(1U) 
                                                                               + 
                                                                               (0x7fU 
                                                                                & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                                   << 1U) 
                                                                  | ((0x4dU 
                                                                      >= 
                                                                      (0x7fU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                     && (1U 
                                                                         & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                            (3U 
                                                                             & (((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                                                                >> 5U))] 
                                                                            >> 
                                                                            (0x1fU 
                                                                             & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))));
            VL_STOP_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 73, "");
            VL_FINISH_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 73, "");
        }
        VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__r_addr);
        co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                             75);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] 
            = (0xfffffffeU & vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U]);
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__req_ongoing = 0U;
        while (((~ ((0x4dU >= (0x7fU & ((IData)(0x27U) 
                                        * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                    && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                              (3U & (((IData)(0x27U) 
                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                     >> 5U))] >> (0x1fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))) 
                & VL_GTS_III(32, 0xbb8U, __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__timeout_count_rvalid))) {
            co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                                 "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                                 76);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__timeout_count_rvalid 
                = ((IData)(1U) + __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__timeout_count_rvalid);
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0xbb8U, __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__timeout_count_rvalid))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_spi_engine_test.sv:77: Assertion failed in %Ntb_user_domain_spi_engine_test.read_obi: %t : TB: Timeout OBI rvalid read 0x%x. Rsp: %12#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__r_addr,
                         39,((((0x4dU >= ((IData)(2U) 
                                          + (0x7fU 
                                             & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))
                                ? (0x1fffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                       (((IData)(0x26U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                      | (((0U == (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                           (((IData)(0x21U) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                         | ((QData)((IData)(
                                                            vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                            (((IData)(2U) 
                                                              + 
                                                              (0x7fU 
                                                               & ((IData)(0x27U) 
                                                                  * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                             >> 5U)])) 
                                            >> (0x1fU 
                                                & ((IData)(2U) 
                                                   + 
                                                   (0x7fU 
                                                    & ((IData)(0x27U) 
                                                       * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))
                                : 0ULL) << 2U) | (QData)((IData)(
                                                                 ((((0x4dU 
                                                                     >= 
                                                                     ((IData)(1U) 
                                                                      + 
                                                                      (0x7fU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))) 
                                                                    && (1U 
                                                                        & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                           (((IData)(1U) 
                                                                             + 
                                                                             (0x7fU 
                                                                              & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                            >> 5U)] 
                                                                           >> 
                                                                           (0x1fU 
                                                                            & ((IData)(1U) 
                                                                               + 
                                                                               (0x7fU 
                                                                                & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                                   << 1U) 
                                                                  | ((0x4dU 
                                                                      >= 
                                                                      (0x7fU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                     && (1U 
                                                                         & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                            (3U 
                                                                             & (((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                                                                >> 5U))] 
                                                                            >> 
                                                                            (0x1fU 
                                                                             & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))));
            VL_STOP_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 77, "");
            VL_FINISH_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 77, "");
        }
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__rsp_r_chan_temp 
            = ((0x4dU >= ((IData)(2U) + (0x7fU & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))
                ? (0x1fffffffffULL & (((QData)((IData)(
                                                       vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                       (((IData)(0x26U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                      | (((0U == (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                           (((IData)(0x21U) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                         | ((QData)((IData)(
                                                            vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                            (((IData)(2U) 
                                                              + 
                                                              (0x7fU 
                                                               & ((IData)(0x27U) 
                                                                  * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                             >> 5U)])) 
                                            >> (0x1fU 
                                                & ((IData)(2U) 
                                                   + 
                                                   (0x7fU 
                                                    & ((IData)(0x27U) 
                                                       * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))
                : 0ULL);
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__r_data_val 
            = (IData)((__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__rsp_r_chan_temp 
                       >> 5U));
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__r_err 
            = (1U & (IData)((__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__rsp_r_chan_temp 
                             >> 1U)));
        VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x Err=%b RVALID=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__r_addr,
                     32,__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__r_data_val,
                     1,(IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__r_err),
                     1,((0x4dU >= (0x7fU & ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                        && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                  (3U & (((IData)(0x27U) 
                                          * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                         >> 5U))] >> 
                                  (0x1fU & ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))));
        co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                             80);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] = 0U;
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[1U] = 0U;
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[2U] = 0U;
        __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__7__status_val 
            = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__r_data_val;
        __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__7__read_err 
            = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__9__r_err;
        if (VL_UNLIKELY(__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__7__read_err)) {
            VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_spi_engine_test.sv:88: Assertion failed in %Ntb_user_domain_spi_engine_test.wait_spi_engine_idle: %t : TB: OBI Error reading SPI Engine Status!\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9);
            VL_STOP_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 88, "");
            VL_FINISH_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 88, "");
        }
        __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__7__busy_bit 
            = (1U & __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__7__status_val);
        __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__7__done_bit_tb 
            = (1U & (__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__7__status_val 
                     >> 1U));
        VL_WRITEF_NX("%t : TB: Polling SPI Engine Status (Addr 0x20001008): 0x%08x (done=%b, busy=%b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__7__status_val,
                     1,(IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__7__done_bit_tb),
                     1,__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__7__busy_bit);
        __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__7__timeout_count 
            = ((IData)(1U) + __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__7__timeout_count);
        if (__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__7__busy_bit) {
            co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                                 "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                                 91);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x3a98U, __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__7__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_spi_engine_test.sv:93: Assertion failed in %Ntb_user_domain_spi_engine_test.wait_spi_engine_idle: %t : TB: Timeout SPI Engine idle. Status: 0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__7__status_val);
        VL_STOP_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 93, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 93, "");
    }
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__r_addr = 0x20001008U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__timeout_count_gnt = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                         68);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__req_txn[0U] = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__req_txn[1U] = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__req_txn[2U] = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__req_txn[0U] 
        = (1U | __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__req_txn[0U]);
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__req_txn[1U] 
        = ((0x1ffU & __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__req_txn[1U]) 
           | ((IData)(((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__r_addr)) 
                       << 1U)) << 9U));
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__req_txn[2U] 
        = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__r_addr)) 
                               << 1U)) >> 0x17U) | 
                     ((IData)((((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__r_addr)) 
                                << 1U) >> 0x20U)) << 9U)));
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__req_txn[0U];
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[1U] 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__req_txn[1U];
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[2U] 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__req_txn[2U];
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__r_addr);
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__grant_received = 0U;
    {
        while (VL_GTS_III(32, 0xbb8U, __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__timeout_count_gnt)) {
            if (((0x4dU >= ((IData)(1U) + (0x7fU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))) 
                 && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                           (((IData)(1U) + (0x7fU & 
                                            ((IData)(0x27U) 
                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                            >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))))) {
                __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__grant_received = 1U;
                goto __Vlabel6;
            }
            co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                                 "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                                 72);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__timeout_count_gnt 
                = ((IData)(1U) + __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__timeout_count_gnt);
        }
        __Vlabel6: ;
    }
    if (VL_UNLIKELY((1U & (~ (IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__grant_received))))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_spi_engine_test.sv:73: Assertion failed in %Ntb_user_domain_spi_engine_test.read_obi: %t : TB: Timeout OBI grant read 0x%x. Rsp: %12#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__r_addr,
                     39,((((0x4dU >= ((IData)(2U) + 
                                      (0x7fU & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))
                            ? (0x1fffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x26U) 
                                                                     + 
                                                                     (0x7fU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(0x21U) 
                                                                         + 
                                                                         (0x7fU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (((IData)(2U) 
                                                                          + 
                                                                          (0x7fU 
                                                                           & ((IData)(0x27U) 
                                                                              * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                         >> 5U)])) 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))
                            : 0ULL) << 2U) | (QData)((IData)(
                                                             ((((0x4dU 
                                                                 >= 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))) 
                                                                && (1U 
                                                                    & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(1U) 
                                                                         + 
                                                                         (0x7fU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)] 
                                                                       >> 
                                                                       (0x1fU 
                                                                        & ((IData)(1U) 
                                                                           + 
                                                                           (0x7fU 
                                                                            & ((IData)(0x27U) 
                                                                               * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                               << 1U) 
                                                              | ((0x4dU 
                                                                  >= 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                 && (1U 
                                                                     & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (3U 
                                                                         & (((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                                                            >> 5U))] 
                                                                        >> 
                                                                        (0x1fU 
                                                                         & ((IData)(0x27U) 
                                                                            * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))));
        VL_STOP_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 73, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 73, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__r_addr);
    co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                         75);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__req_ongoing = 0U;
    while (((~ ((0x4dU >= (0x7fU & ((IData)(0x27U) 
                                    * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                          (3U & (((IData)(0x27U) * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                 >> 5U))] >> (0x1fU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))) 
            & VL_GTS_III(32, 0xbb8U, __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                             76);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__timeout_count_rvalid);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0xbb8U, __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_spi_engine_test.sv:77: Assertion failed in %Ntb_user_domain_spi_engine_test.read_obi: %t : TB: Timeout OBI rvalid read 0x%x. Rsp: %12#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__r_addr,
                     39,((((0x4dU >= ((IData)(2U) + 
                                      (0x7fU & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))
                            ? (0x1fffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x26U) 
                                                                     + 
                                                                     (0x7fU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(0x21U) 
                                                                         + 
                                                                         (0x7fU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (((IData)(2U) 
                                                                          + 
                                                                          (0x7fU 
                                                                           & ((IData)(0x27U) 
                                                                              * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                         >> 5U)])) 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))
                            : 0ULL) << 2U) | (QData)((IData)(
                                                             ((((0x4dU 
                                                                 >= 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))) 
                                                                && (1U 
                                                                    & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(1U) 
                                                                         + 
                                                                         (0x7fU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)] 
                                                                       >> 
                                                                       (0x1fU 
                                                                        & ((IData)(1U) 
                                                                           + 
                                                                           (0x7fU 
                                                                            & ((IData)(0x27U) 
                                                                               * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                               << 1U) 
                                                              | ((0x4dU 
                                                                  >= 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                 && (1U 
                                                                     & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (3U 
                                                                         & (((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                                                            >> 5U))] 
                                                                        >> 
                                                                        (0x1fU 
                                                                         & ((IData)(0x27U) 
                                                                            * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))));
        VL_STOP_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 77, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 77, "");
    }
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__rsp_r_chan_temp 
        = ((0x4dU >= ((IData)(2U) + (0x7fU & ((IData)(0x27U) 
                                              * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))
            ? (0x1fffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                   (((IData)(0x26U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                    >> 5U)])) 
                                   << ((0U == (0x1fU 
                                               & ((IData)(2U) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                        ? 0x20U : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(2U) 
                                                       + 
                                                       (0x7fU 
                                                        & ((IData)(0x27U) 
                                                           * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                  | (((0U == (0x1fU 
                                              & ((IData)(2U) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                       ? 0ULL : ((QData)((IData)(
                                                                 vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                 (((IData)(0x21U) 
                                                                   + 
                                                                   (0x7fU 
                                                                    & ((IData)(0x27U) 
                                                                       * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                     | ((QData)((IData)(
                                                        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                        (((IData)(2U) 
                                                          + 
                                                          (0x7fU 
                                                           & ((IData)(0x27U) 
                                                              * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                         >> 5U)])) 
                                        >> (0x1fU & 
                                            ((IData)(2U) 
                                             + (0x7fU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))
            : 0ULL);
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__r_data_val 
        = (IData)((__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__rsp_r_chan_temp 
                   >> 5U));
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__r_err 
        = (1U & (IData)((__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__rsp_r_chan_temp 
                         >> 1U)));
    VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x Err=%b RVALID=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__r_addr,
                 32,__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__r_data_val,
                 1,(IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__r_err),
                 1,((0x4dU >= (0x7fU & ((IData)(0x27U) 
                                        * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                    && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                              (3U & (((IData)(0x27U) 
                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                     >> 5U))] >> (0x1fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))));
    co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[2U] = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__7__status_val 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__r_data_val;
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__7__read_err 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__10__r_err;
    VL_WRITEF_NX("%t : TB: SPI Engine finished. Final Status: 0x%08x (done=%b, busy=%b)\n%t : TB: Finished sending SPI byte 0x%02x to engine.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__7__status_val,
                 1,(1U & (__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__7__status_val 
                          >> 1U)),1,(1U & __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__7__status_val),
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__send_spi_byte_to_engine__0__spi_data));
    co_await vlSelfRef.__VdlySched.delay(0x3d090ULL, 
                                         nullptr, "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                         117);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__send_spi_byte_to_engine__11__spi_data = 0x55U;
    VL_WRITEF_NX("%t : TB: Sending SPI byte 0x%02x to engine...\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__send_spi_byte_to_engine__11__spi_data));
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__12__timeout_count = 0U;
    VL_WRITEF_NX("%t : TB: Waiting for SPI Engine to finish...\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                         85);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__r_addr = 0x20001008U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__timeout_count_gnt = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                         68);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__req_txn[0U] = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__req_txn[1U] = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__req_txn[2U] = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__req_txn[0U] 
        = (1U | __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__req_txn[0U]);
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__req_txn[1U] 
        = ((0x1ffU & __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__req_txn[1U]) 
           | ((IData)(((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__r_addr)) 
                       << 1U)) << 9U));
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__req_txn[2U] 
        = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__r_addr)) 
                               << 1U)) >> 0x17U) | 
                     ((IData)((((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__r_addr)) 
                                << 1U) >> 0x20U)) << 9U)));
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__req_txn[0U];
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[1U] 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__req_txn[1U];
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[2U] 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__req_txn[2U];
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__r_addr);
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__grant_received = 0U;
    {
        while (VL_GTS_III(32, 0xbb8U, __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__timeout_count_gnt)) {
            if (((0x4dU >= ((IData)(1U) + (0x7fU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))) 
                 && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                           (((IData)(1U) + (0x7fU & 
                                            ((IData)(0x27U) 
                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                            >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))))) {
                __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__grant_received = 1U;
                goto __Vlabel7;
            }
            co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                                 "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                                 72);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__timeout_count_gnt 
                = ((IData)(1U) + __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__timeout_count_gnt);
        }
        __Vlabel7: ;
    }
    if (VL_UNLIKELY((1U & (~ (IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__grant_received))))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_spi_engine_test.sv:73: Assertion failed in %Ntb_user_domain_spi_engine_test.read_obi: %t : TB: Timeout OBI grant read 0x%x. Rsp: %12#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__r_addr,
                     39,((((0x4dU >= ((IData)(2U) + 
                                      (0x7fU & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))
                            ? (0x1fffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x26U) 
                                                                     + 
                                                                     (0x7fU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(0x21U) 
                                                                         + 
                                                                         (0x7fU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (((IData)(2U) 
                                                                          + 
                                                                          (0x7fU 
                                                                           & ((IData)(0x27U) 
                                                                              * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                         >> 5U)])) 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))
                            : 0ULL) << 2U) | (QData)((IData)(
                                                             ((((0x4dU 
                                                                 >= 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))) 
                                                                && (1U 
                                                                    & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(1U) 
                                                                         + 
                                                                         (0x7fU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)] 
                                                                       >> 
                                                                       (0x1fU 
                                                                        & ((IData)(1U) 
                                                                           + 
                                                                           (0x7fU 
                                                                            & ((IData)(0x27U) 
                                                                               * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                               << 1U) 
                                                              | ((0x4dU 
                                                                  >= 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                 && (1U 
                                                                     & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (3U 
                                                                         & (((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                                                            >> 5U))] 
                                                                        >> 
                                                                        (0x1fU 
                                                                         & ((IData)(0x27U) 
                                                                            * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))));
        VL_STOP_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 73, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 73, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__r_addr);
    co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                         75);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__req_ongoing = 0U;
    while (((~ ((0x4dU >= (0x7fU & ((IData)(0x27U) 
                                    * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                          (3U & (((IData)(0x27U) * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                 >> 5U))] >> (0x1fU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))) 
            & VL_GTS_III(32, 0xbb8U, __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                             76);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__timeout_count_rvalid);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0xbb8U, __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_spi_engine_test.sv:77: Assertion failed in %Ntb_user_domain_spi_engine_test.read_obi: %t : TB: Timeout OBI rvalid read 0x%x. Rsp: %12#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__r_addr,
                     39,((((0x4dU >= ((IData)(2U) + 
                                      (0x7fU & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))
                            ? (0x1fffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x26U) 
                                                                     + 
                                                                     (0x7fU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(0x21U) 
                                                                         + 
                                                                         (0x7fU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (((IData)(2U) 
                                                                          + 
                                                                          (0x7fU 
                                                                           & ((IData)(0x27U) 
                                                                              * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                         >> 5U)])) 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))
                            : 0ULL) << 2U) | (QData)((IData)(
                                                             ((((0x4dU 
                                                                 >= 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))) 
                                                                && (1U 
                                                                    & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(1U) 
                                                                         + 
                                                                         (0x7fU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)] 
                                                                       >> 
                                                                       (0x1fU 
                                                                        & ((IData)(1U) 
                                                                           + 
                                                                           (0x7fU 
                                                                            & ((IData)(0x27U) 
                                                                               * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                               << 1U) 
                                                              | ((0x4dU 
                                                                  >= 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                 && (1U 
                                                                     & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (3U 
                                                                         & (((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                                                            >> 5U))] 
                                                                        >> 
                                                                        (0x1fU 
                                                                         & ((IData)(0x27U) 
                                                                            * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))));
        VL_STOP_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 77, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 77, "");
    }
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__rsp_r_chan_temp 
        = ((0x4dU >= ((IData)(2U) + (0x7fU & ((IData)(0x27U) 
                                              * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))
            ? (0x1fffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                   (((IData)(0x26U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                    >> 5U)])) 
                                   << ((0U == (0x1fU 
                                               & ((IData)(2U) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                        ? 0x20U : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(2U) 
                                                       + 
                                                       (0x7fU 
                                                        & ((IData)(0x27U) 
                                                           * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                  | (((0U == (0x1fU 
                                              & ((IData)(2U) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                       ? 0ULL : ((QData)((IData)(
                                                                 vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                 (((IData)(0x21U) 
                                                                   + 
                                                                   (0x7fU 
                                                                    & ((IData)(0x27U) 
                                                                       * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                     | ((QData)((IData)(
                                                        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                        (((IData)(2U) 
                                                          + 
                                                          (0x7fU 
                                                           & ((IData)(0x27U) 
                                                              * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                         >> 5U)])) 
                                        >> (0x1fU & 
                                            ((IData)(2U) 
                                             + (0x7fU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))
            : 0ULL);
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__r_data_val 
        = (IData)((__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__rsp_r_chan_temp 
                   >> 5U));
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__r_err 
        = (1U & (IData)((__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__rsp_r_chan_temp 
                         >> 1U)));
    VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x Err=%b RVALID=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__r_addr,
                 32,__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__r_data_val,
                 1,(IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__r_err),
                 1,((0x4dU >= (0x7fU & ((IData)(0x27U) 
                                        * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                    && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                              (3U & (((IData)(0x27U) 
                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                     >> 5U))] >> (0x1fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))));
    co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[2U] = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__12__status_val 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__r_data_val;
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__12__read_err 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__13__r_err;
    if (VL_UNLIKELY(__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__12__read_err)) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_spi_engine_test.sv:88: Assertion failed in %Ntb_user_domain_spi_engine_test.wait_spi_engine_idle: %t : TB: OBI Error reading SPI Engine Status!\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9);
        VL_STOP_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 88, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 88, "");
    }
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__12__busy_bit 
        = (1U & __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__12__status_val);
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__12__done_bit_tb 
        = (1U & (__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__12__status_val 
                 >> 1U));
    VL_WRITEF_NX("%t : TB: Polling SPI Engine Status (Addr 0x20001008): 0x%08x (done=%b, busy=%b)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__12__status_val,
                 1,(IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__12__done_bit_tb),
                 1,__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__12__busy_bit);
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__12__timeout_count 
        = ((IData)(1U) + __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__12__timeout_count);
    if (__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__12__busy_bit) {
        co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                             91);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__12__busy_bit) 
            & VL_GTS_III(32, 0x3a98U, __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__12__timeout_count))) {
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__r_addr = 0x20001008U;
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__timeout_count_gnt = 0U;
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__timeout_count_rvalid = 0U;
        co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                             68);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__req_txn[0U] = 0U;
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__req_txn[1U] = 0U;
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__req_txn[2U] = 0U;
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__req_txn[0U] 
            = (1U | __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__req_txn[0U]);
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__req_txn[1U] 
            = ((0x1ffU & __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__req_txn[1U]) 
               | ((IData)(((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__r_addr)) 
                           << 1U)) << 9U));
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__req_txn[2U] 
            = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__r_addr)) 
                                   << 1U)) >> 0x17U) 
                         | ((IData)((((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__r_addr)) 
                                      << 1U) >> 0x20U)) 
                            << 9U)));
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] 
            = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__req_txn[0U];
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[1U] 
            = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__req_txn[1U];
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[2U] 
            = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__req_txn[2U];
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__req_ongoing = 1U;
        VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__r_addr);
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__grant_received = 0U;
        {
            while (VL_GTS_III(32, 0xbb8U, __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__timeout_count_gnt)) {
                if (((0x4dU >= ((IData)(1U) + (0x7fU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))) 
                     && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                               (((IData)(1U) + (0x7fU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                >> 5U)] >> (0x1fU & 
                                            ((IData)(1U) 
                                             + (0x7fU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))))) {
                    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__grant_received = 1U;
                    goto __Vlabel8;
                }
                co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                                     "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                                     72);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__timeout_count_gnt 
                    = ((IData)(1U) + __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__timeout_count_gnt);
            }
            __Vlabel8: ;
        }
        if (VL_UNLIKELY((1U & (~ (IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__grant_received))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_spi_engine_test.sv:73: Assertion failed in %Ntb_user_domain_spi_engine_test.read_obi: %t : TB: Timeout OBI grant read 0x%x. Rsp: %12#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__r_addr,
                         39,((((0x4dU >= ((IData)(2U) 
                                          + (0x7fU 
                                             & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))
                                ? (0x1fffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                       (((IData)(0x26U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                      | (((0U == (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                           (((IData)(0x21U) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                         | ((QData)((IData)(
                                                            vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                            (((IData)(2U) 
                                                              + 
                                                              (0x7fU 
                                                               & ((IData)(0x27U) 
                                                                  * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                             >> 5U)])) 
                                            >> (0x1fU 
                                                & ((IData)(2U) 
                                                   + 
                                                   (0x7fU 
                                                    & ((IData)(0x27U) 
                                                       * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))
                                : 0ULL) << 2U) | (QData)((IData)(
                                                                 ((((0x4dU 
                                                                     >= 
                                                                     ((IData)(1U) 
                                                                      + 
                                                                      (0x7fU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))) 
                                                                    && (1U 
                                                                        & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                           (((IData)(1U) 
                                                                             + 
                                                                             (0x7fU 
                                                                              & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                            >> 5U)] 
                                                                           >> 
                                                                           (0x1fU 
                                                                            & ((IData)(1U) 
                                                                               + 
                                                                               (0x7fU 
                                                                                & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                                   << 1U) 
                                                                  | ((0x4dU 
                                                                      >= 
                                                                      (0x7fU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                     && (1U 
                                                                         & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                            (3U 
                                                                             & (((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                                                                >> 5U))] 
                                                                            >> 
                                                                            (0x1fU 
                                                                             & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))));
            VL_STOP_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 73, "");
            VL_FINISH_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 73, "");
        }
        VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__r_addr);
        co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                             75);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] 
            = (0xfffffffeU & vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U]);
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__req_ongoing = 0U;
        while (((~ ((0x4dU >= (0x7fU & ((IData)(0x27U) 
                                        * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                    && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                              (3U & (((IData)(0x27U) 
                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                     >> 5U))] >> (0x1fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))) 
                & VL_GTS_III(32, 0xbb8U, __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__timeout_count_rvalid))) {
            co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                                 "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                                 76);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__timeout_count_rvalid 
                = ((IData)(1U) + __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__timeout_count_rvalid);
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0xbb8U, __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__timeout_count_rvalid))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_spi_engine_test.sv:77: Assertion failed in %Ntb_user_domain_spi_engine_test.read_obi: %t : TB: Timeout OBI rvalid read 0x%x. Rsp: %12#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__r_addr,
                         39,((((0x4dU >= ((IData)(2U) 
                                          + (0x7fU 
                                             & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))
                                ? (0x1fffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                       (((IData)(0x26U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                      | (((0U == (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                           (((IData)(0x21U) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                         | ((QData)((IData)(
                                                            vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                            (((IData)(2U) 
                                                              + 
                                                              (0x7fU 
                                                               & ((IData)(0x27U) 
                                                                  * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                             >> 5U)])) 
                                            >> (0x1fU 
                                                & ((IData)(2U) 
                                                   + 
                                                   (0x7fU 
                                                    & ((IData)(0x27U) 
                                                       * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))
                                : 0ULL) << 2U) | (QData)((IData)(
                                                                 ((((0x4dU 
                                                                     >= 
                                                                     ((IData)(1U) 
                                                                      + 
                                                                      (0x7fU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))) 
                                                                    && (1U 
                                                                        & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                           (((IData)(1U) 
                                                                             + 
                                                                             (0x7fU 
                                                                              & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                            >> 5U)] 
                                                                           >> 
                                                                           (0x1fU 
                                                                            & ((IData)(1U) 
                                                                               + 
                                                                               (0x7fU 
                                                                                & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                                   << 1U) 
                                                                  | ((0x4dU 
                                                                      >= 
                                                                      (0x7fU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                     && (1U 
                                                                         & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                            (3U 
                                                                             & (((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                                                                >> 5U))] 
                                                                            >> 
                                                                            (0x1fU 
                                                                             & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))));
            VL_STOP_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 77, "");
            VL_FINISH_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 77, "");
        }
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__rsp_r_chan_temp 
            = ((0x4dU >= ((IData)(2U) + (0x7fU & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))
                ? (0x1fffffffffULL & (((QData)((IData)(
                                                       vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                       (((IData)(0x26U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                      | (((0U == (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                           (((IData)(0x21U) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                         | ((QData)((IData)(
                                                            vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                            (((IData)(2U) 
                                                              + 
                                                              (0x7fU 
                                                               & ((IData)(0x27U) 
                                                                  * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                             >> 5U)])) 
                                            >> (0x1fU 
                                                & ((IData)(2U) 
                                                   + 
                                                   (0x7fU 
                                                    & ((IData)(0x27U) 
                                                       * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))
                : 0ULL);
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__r_data_val 
            = (IData)((__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__rsp_r_chan_temp 
                       >> 5U));
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__r_err 
            = (1U & (IData)((__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__rsp_r_chan_temp 
                             >> 1U)));
        VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x Err=%b RVALID=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__r_addr,
                     32,__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__r_data_val,
                     1,(IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__r_err),
                     1,((0x4dU >= (0x7fU & ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                        && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                  (3U & (((IData)(0x27U) 
                                          * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                         >> 5U))] >> 
                                  (0x1fU & ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))));
        co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                             80);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] = 0U;
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[1U] = 0U;
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[2U] = 0U;
        __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__12__status_val 
            = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__r_data_val;
        __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__12__read_err 
            = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__14__r_err;
        if (VL_UNLIKELY(__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__12__read_err)) {
            VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_spi_engine_test.sv:88: Assertion failed in %Ntb_user_domain_spi_engine_test.wait_spi_engine_idle: %t : TB: OBI Error reading SPI Engine Status!\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9);
            VL_STOP_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 88, "");
            VL_FINISH_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 88, "");
        }
        __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__12__busy_bit 
            = (1U & __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__12__status_val);
        __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__12__done_bit_tb 
            = (1U & (__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__12__status_val 
                     >> 1U));
        VL_WRITEF_NX("%t : TB: Polling SPI Engine Status (Addr 0x20001008): 0x%08x (done=%b, busy=%b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__12__status_val,
                     1,(IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__12__done_bit_tb),
                     1,__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__12__busy_bit);
        __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__12__timeout_count 
            = ((IData)(1U) + __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__12__timeout_count);
        if (__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__12__busy_bit) {
            co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                                 "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                                 91);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x3a98U, __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__12__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_spi_engine_test.sv:93: Assertion failed in %Ntb_user_domain_spi_engine_test.wait_spi_engine_idle: %t : TB: Timeout SPI Engine idle. Status: 0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__12__status_val);
        VL_STOP_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 93, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 93, "");
    }
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__r_addr = 0x20001008U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__timeout_count_gnt = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                         68);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__req_txn[0U] = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__req_txn[1U] = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__req_txn[2U] = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__req_txn[0U] 
        = (1U | __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__req_txn[0U]);
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__req_txn[1U] 
        = ((0x1ffU & __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__req_txn[1U]) 
           | ((IData)(((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__r_addr)) 
                       << 1U)) << 9U));
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__req_txn[2U] 
        = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__r_addr)) 
                               << 1U)) >> 0x17U) | 
                     ((IData)((((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__r_addr)) 
                                << 1U) >> 0x20U)) << 9U)));
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__req_txn[0U];
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[1U] 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__req_txn[1U];
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[2U] 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__req_txn[2U];
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__r_addr);
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__grant_received = 0U;
    {
        while (VL_GTS_III(32, 0xbb8U, __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__timeout_count_gnt)) {
            if (((0x4dU >= ((IData)(1U) + (0x7fU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))) 
                 && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                           (((IData)(1U) + (0x7fU & 
                                            ((IData)(0x27U) 
                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                            >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))))) {
                __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__grant_received = 1U;
                goto __Vlabel9;
            }
            co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                                 "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                                 72);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__timeout_count_gnt 
                = ((IData)(1U) + __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__timeout_count_gnt);
        }
        __Vlabel9: ;
    }
    if (VL_UNLIKELY((1U & (~ (IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__grant_received))))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_spi_engine_test.sv:73: Assertion failed in %Ntb_user_domain_spi_engine_test.read_obi: %t : TB: Timeout OBI grant read 0x%x. Rsp: %12#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__r_addr,
                     39,((((0x4dU >= ((IData)(2U) + 
                                      (0x7fU & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))
                            ? (0x1fffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x26U) 
                                                                     + 
                                                                     (0x7fU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(0x21U) 
                                                                         + 
                                                                         (0x7fU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (((IData)(2U) 
                                                                          + 
                                                                          (0x7fU 
                                                                           & ((IData)(0x27U) 
                                                                              * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                         >> 5U)])) 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))
                            : 0ULL) << 2U) | (QData)((IData)(
                                                             ((((0x4dU 
                                                                 >= 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))) 
                                                                && (1U 
                                                                    & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(1U) 
                                                                         + 
                                                                         (0x7fU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)] 
                                                                       >> 
                                                                       (0x1fU 
                                                                        & ((IData)(1U) 
                                                                           + 
                                                                           (0x7fU 
                                                                            & ((IData)(0x27U) 
                                                                               * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                               << 1U) 
                                                              | ((0x4dU 
                                                                  >= 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                 && (1U 
                                                                     & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (3U 
                                                                         & (((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                                                            >> 5U))] 
                                                                        >> 
                                                                        (0x1fU 
                                                                         & ((IData)(0x27U) 
                                                                            * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))));
        VL_STOP_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 73, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 73, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__r_addr);
    co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                         75);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__req_ongoing = 0U;
    while (((~ ((0x4dU >= (0x7fU & ((IData)(0x27U) 
                                    * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                          (3U & (((IData)(0x27U) * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                 >> 5U))] >> (0x1fU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))) 
            & VL_GTS_III(32, 0xbb8U, __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                             76);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__timeout_count_rvalid);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0xbb8U, __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_spi_engine_test.sv:77: Assertion failed in %Ntb_user_domain_spi_engine_test.read_obi: %t : TB: Timeout OBI rvalid read 0x%x. Rsp: %12#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__r_addr,
                     39,((((0x4dU >= ((IData)(2U) + 
                                      (0x7fU & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))
                            ? (0x1fffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x26U) 
                                                                     + 
                                                                     (0x7fU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(0x21U) 
                                                                         + 
                                                                         (0x7fU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (((IData)(2U) 
                                                                          + 
                                                                          (0x7fU 
                                                                           & ((IData)(0x27U) 
                                                                              * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                         >> 5U)])) 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))
                            : 0ULL) << 2U) | (QData)((IData)(
                                                             ((((0x4dU 
                                                                 >= 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))) 
                                                                && (1U 
                                                                    & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(1U) 
                                                                         + 
                                                                         (0x7fU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)] 
                                                                       >> 
                                                                       (0x1fU 
                                                                        & ((IData)(1U) 
                                                                           + 
                                                                           (0x7fU 
                                                                            & ((IData)(0x27U) 
                                                                               * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                               << 1U) 
                                                              | ((0x4dU 
                                                                  >= 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                 && (1U 
                                                                     & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (3U 
                                                                         & (((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                                                            >> 5U))] 
                                                                        >> 
                                                                        (0x1fU 
                                                                         & ((IData)(0x27U) 
                                                                            * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))));
        VL_STOP_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 77, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 77, "");
    }
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__rsp_r_chan_temp 
        = ((0x4dU >= ((IData)(2U) + (0x7fU & ((IData)(0x27U) 
                                              * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))
            ? (0x1fffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                   (((IData)(0x26U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                    >> 5U)])) 
                                   << ((0U == (0x1fU 
                                               & ((IData)(2U) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                        ? 0x20U : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(2U) 
                                                       + 
                                                       (0x7fU 
                                                        & ((IData)(0x27U) 
                                                           * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                  | (((0U == (0x1fU 
                                              & ((IData)(2U) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                       ? 0ULL : ((QData)((IData)(
                                                                 vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                 (((IData)(0x21U) 
                                                                   + 
                                                                   (0x7fU 
                                                                    & ((IData)(0x27U) 
                                                                       * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                     | ((QData)((IData)(
                                                        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                        (((IData)(2U) 
                                                          + 
                                                          (0x7fU 
                                                           & ((IData)(0x27U) 
                                                              * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                         >> 5U)])) 
                                        >> (0x1fU & 
                                            ((IData)(2U) 
                                             + (0x7fU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))
            : 0ULL);
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__r_data_val 
        = (IData)((__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__rsp_r_chan_temp 
                   >> 5U));
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__r_err 
        = (1U & (IData)((__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__rsp_r_chan_temp 
                         >> 1U)));
    VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x Err=%b RVALID=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__r_addr,
                 32,__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__r_data_val,
                 1,(IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__r_err),
                 1,((0x4dU >= (0x7fU & ((IData)(0x27U) 
                                        * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                    && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                              (3U & (((IData)(0x27U) 
                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                     >> 5U))] >> (0x1fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))));
    co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[2U] = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__12__status_val 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__r_data_val;
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__12__read_err 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__15__r_err;
    VL_WRITEF_NX("%t : TB: SPI Engine finished. Final Status: 0x%08x (done=%b, busy=%b)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__12__status_val,
                 1,(1U & (__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__12__status_val 
                          >> 1U)),1,(1U & __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__12__status_val));
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__16__w_be = 1U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__16__w_data 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__send_spi_byte_to_engine__11__spi_data;
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__16__w_addr = 0x20001004U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__16__timeout_count = 0U;
    co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                         55);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__16__req_txn[0U] = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__16__req_txn[1U] = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__16__req_txn[2U] = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__16__req_txn[0U] 
        = (1U | __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__16__req_txn[0U]);
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__16__req_txn[0U] 
        = ((0x1fU & __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__16__req_txn[0U]) 
           | ((IData)((((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__16__w_be)) 
                        << 0x20U) | (QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__16__w_data)))) 
              << 5U));
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__16__req_txn[1U] 
        = (((IData)((((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__16__w_be)) 
                      << 0x20U) | (QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__16__w_data)))) 
            >> 0x1bU) | (((IData)((1ULL | ((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__16__w_addr)) 
                                           << 1U))) 
                          << 9U) | ((IData)(((((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__16__w_be)) 
                                               << 0x20U) 
                                              | (QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__16__w_data))) 
                                             >> 0x20U)) 
                                    << 5U)));
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__16__req_txn[2U] 
        = (0x3ffU & (((0x1fU & ((IData)((1ULL | ((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__16__w_addr)) 
                                                 << 1U))) 
                                >> 0x17U)) | ((IData)(
                                                      ((((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__16__w_be)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__16__w_data))) 
                                                       >> 0x20U)) 
                                              >> 0x1bU)) 
                     | ((0x1e0U & ((IData)((1ULL | 
                                            ((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__16__w_addr)) 
                                             << 1U))) 
                                   >> 0x17U)) | ((IData)(
                                                         ((1ULL 
                                                           | ((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__16__w_addr)) 
                                                              << 1U)) 
                                                          >> 0x20U)) 
                                                 << 9U))));
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__16__req_txn[0U];
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[1U] 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__16__req_txn[1U];
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[2U] 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__16__req_txn[2U];
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Write Req : Addr=0x%x, Data=0x%x, BE=0x%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__16__w_addr,
                 32,__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__16__w_data,
                 4,(IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__16__w_be));
    while (((~ ((0x4dU >= ((IData)(1U) + (0x7fU & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))) 
                && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                          (((IData)(1U) + (0x7fU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                           >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                + (0x7fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))))) 
            & VL_GTS_III(32, 0xbb8U, __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__16__timeout_count))) {
        co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                             59);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__16__timeout_count 
            = ((IData)(1U) + __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__16__timeout_count);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0xbb8U, __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__16__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_spi_engine_test.sv:60: Assertion failed in %Ntb_user_domain_spi_engine_test.write_obi: %t : TB: Timeout OBI grant write 0x%x. Rsp: %12#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__16__w_addr,
                     39,((((0x4dU >= ((IData)(2U) + 
                                      (0x7fU & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))
                            ? (0x1fffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x26U) 
                                                                     + 
                                                                     (0x7fU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(0x21U) 
                                                                         + 
                                                                         (0x7fU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (((IData)(2U) 
                                                                          + 
                                                                          (0x7fU 
                                                                           & ((IData)(0x27U) 
                                                                              * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                         >> 5U)])) 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))
                            : 0ULL) << 2U) | (QData)((IData)(
                                                             ((((0x4dU 
                                                                 >= 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))) 
                                                                && (1U 
                                                                    & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(1U) 
                                                                         + 
                                                                         (0x7fU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)] 
                                                                       >> 
                                                                       (0x1fU 
                                                                        & ((IData)(1U) 
                                                                           + 
                                                                           (0x7fU 
                                                                            & ((IData)(0x27U) 
                                                                               * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                               << 1U) 
                                                              | ((0x4dU 
                                                                  >= 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                 && (1U 
                                                                     & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (3U 
                                                                         & (((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                                                            >> 5U))] 
                                                                        >> 
                                                                        (0x1fU 
                                                                         & ((IData)(0x27U) 
                                                                            * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))));
        VL_STOP_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 60, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 60, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Write Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__16__w_addr);
    co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                         62);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__req_ongoing = 0U;
    co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                         63);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[2U] = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__17__w_be = 1U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__17__w_data = 1U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__17__w_addr = 0x20001000U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__17__timeout_count = 0U;
    co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                         55);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__17__req_txn[0U] = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__17__req_txn[1U] = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__17__req_txn[2U] = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__17__req_txn[0U] 
        = (1U | __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__17__req_txn[0U]);
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__17__req_txn[0U] 
        = ((0x1fU & __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__17__req_txn[0U]) 
           | ((IData)((((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__17__w_be)) 
                        << 0x20U) | (QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__17__w_data)))) 
              << 5U));
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__17__req_txn[1U] 
        = (((IData)((((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__17__w_be)) 
                      << 0x20U) | (QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__17__w_data)))) 
            >> 0x1bU) | (((IData)((1ULL | ((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__17__w_addr)) 
                                           << 1U))) 
                          << 9U) | ((IData)(((((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__17__w_be)) 
                                               << 0x20U) 
                                              | (QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__17__w_data))) 
                                             >> 0x20U)) 
                                    << 5U)));
    __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__17__req_txn[2U] 
        = (0x3ffU & (((0x1fU & ((IData)((1ULL | ((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__17__w_addr)) 
                                                 << 1U))) 
                                >> 0x17U)) | ((IData)(
                                                      ((((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__17__w_be)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__17__w_data))) 
                                                       >> 0x20U)) 
                                              >> 0x1bU)) 
                     | ((0x1e0U & ((IData)((1ULL | 
                                            ((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__17__w_addr)) 
                                             << 1U))) 
                                   >> 0x17U)) | ((IData)(
                                                         ((1ULL 
                                                           | ((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__17__w_addr)) 
                                                              << 1U)) 
                                                          >> 0x20U)) 
                                                 << 9U))));
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__17__req_txn[0U];
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[1U] 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__17__req_txn[1U];
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[2U] 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__17__req_txn[2U];
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Write Req : Addr=0x%x, Data=0x%x, BE=0x%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__17__w_addr,
                 32,__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__17__w_data,
                 4,(IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__17__w_be));
    while (((~ ((0x4dU >= ((IData)(1U) + (0x7fU & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))) 
                && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                          (((IData)(1U) + (0x7fU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                           >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                + (0x7fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))))) 
            & VL_GTS_III(32, 0xbb8U, __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__17__timeout_count))) {
        co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                             59);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__17__timeout_count 
            = ((IData)(1U) + __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__17__timeout_count);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0xbb8U, __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__17__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_spi_engine_test.sv:60: Assertion failed in %Ntb_user_domain_spi_engine_test.write_obi: %t : TB: Timeout OBI grant write 0x%x. Rsp: %12#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__17__w_addr,
                     39,((((0x4dU >= ((IData)(2U) + 
                                      (0x7fU & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))
                            ? (0x1fffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x26U) 
                                                                     + 
                                                                     (0x7fU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(0x21U) 
                                                                         + 
                                                                         (0x7fU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (((IData)(2U) 
                                                                          + 
                                                                          (0x7fU 
                                                                           & ((IData)(0x27U) 
                                                                              * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                         >> 5U)])) 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))
                            : 0ULL) << 2U) | (QData)((IData)(
                                                             ((((0x4dU 
                                                                 >= 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))) 
                                                                && (1U 
                                                                    & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(1U) 
                                                                         + 
                                                                         (0x7fU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)] 
                                                                       >> 
                                                                       (0x1fU 
                                                                        & ((IData)(1U) 
                                                                           + 
                                                                           (0x7fU 
                                                                            & ((IData)(0x27U) 
                                                                               * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                               << 1U) 
                                                              | ((0x4dU 
                                                                  >= 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                 && (1U 
                                                                     & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (3U 
                                                                         & (((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                                                            >> 5U))] 
                                                                        >> 
                                                                        (0x1fU 
                                                                         & ((IData)(0x27U) 
                                                                            * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))));
        VL_STOP_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 60, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 60, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Write Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_spi_engine_test__DOT__write_obi__17__w_addr);
    co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                         62);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__req_ongoing = 0U;
    co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                         63);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[2U] = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__18__timeout_count = 0U;
    VL_WRITEF_NX("%t : TB: Waiting for SPI Engine to finish...\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                         85);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__r_addr = 0x20001008U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__timeout_count_gnt = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                         68);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__req_txn[0U] = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__req_txn[1U] = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__req_txn[2U] = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__req_txn[0U] 
        = (1U | __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__req_txn[0U]);
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__req_txn[1U] 
        = ((0x1ffU & __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__req_txn[1U]) 
           | ((IData)(((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__r_addr)) 
                       << 1U)) << 9U));
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__req_txn[2U] 
        = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__r_addr)) 
                               << 1U)) >> 0x17U) | 
                     ((IData)((((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__r_addr)) 
                                << 1U) >> 0x20U)) << 9U)));
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__req_txn[0U];
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[1U] 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__req_txn[1U];
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[2U] 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__req_txn[2U];
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__r_addr);
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__grant_received = 0U;
    {
        while (VL_GTS_III(32, 0xbb8U, __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__timeout_count_gnt)) {
            if (((0x4dU >= ((IData)(1U) + (0x7fU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))) 
                 && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                           (((IData)(1U) + (0x7fU & 
                                            ((IData)(0x27U) 
                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                            >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))))) {
                __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__grant_received = 1U;
                goto __Vlabel10;
            }
            co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                                 "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                                 72);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__timeout_count_gnt 
                = ((IData)(1U) + __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__timeout_count_gnt);
        }
        __Vlabel10: ;
    }
    if (VL_UNLIKELY((1U & (~ (IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__grant_received))))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_spi_engine_test.sv:73: Assertion failed in %Ntb_user_domain_spi_engine_test.read_obi: %t : TB: Timeout OBI grant read 0x%x. Rsp: %12#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__r_addr,
                     39,((((0x4dU >= ((IData)(2U) + 
                                      (0x7fU & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))
                            ? (0x1fffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x26U) 
                                                                     + 
                                                                     (0x7fU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(0x21U) 
                                                                         + 
                                                                         (0x7fU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (((IData)(2U) 
                                                                          + 
                                                                          (0x7fU 
                                                                           & ((IData)(0x27U) 
                                                                              * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                         >> 5U)])) 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))
                            : 0ULL) << 2U) | (QData)((IData)(
                                                             ((((0x4dU 
                                                                 >= 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))) 
                                                                && (1U 
                                                                    & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(1U) 
                                                                         + 
                                                                         (0x7fU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)] 
                                                                       >> 
                                                                       (0x1fU 
                                                                        & ((IData)(1U) 
                                                                           + 
                                                                           (0x7fU 
                                                                            & ((IData)(0x27U) 
                                                                               * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                               << 1U) 
                                                              | ((0x4dU 
                                                                  >= 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                 && (1U 
                                                                     & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (3U 
                                                                         & (((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                                                            >> 5U))] 
                                                                        >> 
                                                                        (0x1fU 
                                                                         & ((IData)(0x27U) 
                                                                            * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))));
        VL_STOP_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 73, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 73, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__r_addr);
    co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                         75);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__req_ongoing = 0U;
    while (((~ ((0x4dU >= (0x7fU & ((IData)(0x27U) 
                                    * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                          (3U & (((IData)(0x27U) * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                 >> 5U))] >> (0x1fU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))) 
            & VL_GTS_III(32, 0xbb8U, __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                             76);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__timeout_count_rvalid);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0xbb8U, __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_spi_engine_test.sv:77: Assertion failed in %Ntb_user_domain_spi_engine_test.read_obi: %t : TB: Timeout OBI rvalid read 0x%x. Rsp: %12#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__r_addr,
                     39,((((0x4dU >= ((IData)(2U) + 
                                      (0x7fU & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))
                            ? (0x1fffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x26U) 
                                                                     + 
                                                                     (0x7fU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(0x21U) 
                                                                         + 
                                                                         (0x7fU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (((IData)(2U) 
                                                                          + 
                                                                          (0x7fU 
                                                                           & ((IData)(0x27U) 
                                                                              * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                         >> 5U)])) 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))
                            : 0ULL) << 2U) | (QData)((IData)(
                                                             ((((0x4dU 
                                                                 >= 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))) 
                                                                && (1U 
                                                                    & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(1U) 
                                                                         + 
                                                                         (0x7fU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)] 
                                                                       >> 
                                                                       (0x1fU 
                                                                        & ((IData)(1U) 
                                                                           + 
                                                                           (0x7fU 
                                                                            & ((IData)(0x27U) 
                                                                               * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                               << 1U) 
                                                              | ((0x4dU 
                                                                  >= 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                 && (1U 
                                                                     & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (3U 
                                                                         & (((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                                                            >> 5U))] 
                                                                        >> 
                                                                        (0x1fU 
                                                                         & ((IData)(0x27U) 
                                                                            * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))));
        VL_STOP_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 77, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 77, "");
    }
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__rsp_r_chan_temp 
        = ((0x4dU >= ((IData)(2U) + (0x7fU & ((IData)(0x27U) 
                                              * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))
            ? (0x1fffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                   (((IData)(0x26U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                    >> 5U)])) 
                                   << ((0U == (0x1fU 
                                               & ((IData)(2U) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                        ? 0x20U : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(2U) 
                                                       + 
                                                       (0x7fU 
                                                        & ((IData)(0x27U) 
                                                           * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                  | (((0U == (0x1fU 
                                              & ((IData)(2U) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                       ? 0ULL : ((QData)((IData)(
                                                                 vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                 (((IData)(0x21U) 
                                                                   + 
                                                                   (0x7fU 
                                                                    & ((IData)(0x27U) 
                                                                       * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                     | ((QData)((IData)(
                                                        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                        (((IData)(2U) 
                                                          + 
                                                          (0x7fU 
                                                           & ((IData)(0x27U) 
                                                              * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                         >> 5U)])) 
                                        >> (0x1fU & 
                                            ((IData)(2U) 
                                             + (0x7fU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))
            : 0ULL);
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__r_data_val 
        = (IData)((__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__rsp_r_chan_temp 
                   >> 5U));
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__r_err 
        = (1U & (IData)((__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__rsp_r_chan_temp 
                         >> 1U)));
    VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x Err=%b RVALID=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__r_addr,
                 32,__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__r_data_val,
                 1,(IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__r_err),
                 1,((0x4dU >= (0x7fU & ((IData)(0x27U) 
                                        * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                    && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                              (3U & (((IData)(0x27U) 
                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                     >> 5U))] >> (0x1fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))));
    co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[2U] = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__18__status_val 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__r_data_val;
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__18__read_err 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__19__r_err;
    if (VL_UNLIKELY(__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__18__read_err)) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_spi_engine_test.sv:88: Assertion failed in %Ntb_user_domain_spi_engine_test.wait_spi_engine_idle: %t : TB: OBI Error reading SPI Engine Status!\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9);
        VL_STOP_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 88, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 88, "");
    }
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__18__busy_bit 
        = (1U & __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__18__status_val);
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__18__done_bit_tb 
        = (1U & (__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__18__status_val 
                 >> 1U));
    VL_WRITEF_NX("%t : TB: Polling SPI Engine Status (Addr 0x20001008): 0x%08x (done=%b, busy=%b)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__18__status_val,
                 1,(IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__18__done_bit_tb),
                 1,__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__18__busy_bit);
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__18__timeout_count 
        = ((IData)(1U) + __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__18__timeout_count);
    if (__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__18__busy_bit) {
        co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                             91);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__18__busy_bit) 
            & VL_GTS_III(32, 0x3a98U, __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__18__timeout_count))) {
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__r_addr = 0x20001008U;
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__timeout_count_gnt = 0U;
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__timeout_count_rvalid = 0U;
        co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                             68);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__req_txn[0U] = 0U;
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__req_txn[1U] = 0U;
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__req_txn[2U] = 0U;
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__req_txn[0U] 
            = (1U | __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__req_txn[0U]);
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__req_txn[1U] 
            = ((0x1ffU & __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__req_txn[1U]) 
               | ((IData)(((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__r_addr)) 
                           << 1U)) << 9U));
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__req_txn[2U] 
            = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__r_addr)) 
                                   << 1U)) >> 0x17U) 
                         | ((IData)((((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__r_addr)) 
                                      << 1U) >> 0x20U)) 
                            << 9U)));
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] 
            = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__req_txn[0U];
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[1U] 
            = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__req_txn[1U];
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[2U] 
            = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__req_txn[2U];
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__req_ongoing = 1U;
        VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__r_addr);
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__grant_received = 0U;
        {
            while (VL_GTS_III(32, 0xbb8U, __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__timeout_count_gnt)) {
                if (((0x4dU >= ((IData)(1U) + (0x7fU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))) 
                     && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                               (((IData)(1U) + (0x7fU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                >> 5U)] >> (0x1fU & 
                                            ((IData)(1U) 
                                             + (0x7fU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))))) {
                    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__grant_received = 1U;
                    goto __Vlabel11;
                }
                co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                                     "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                                     72);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__timeout_count_gnt 
                    = ((IData)(1U) + __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__timeout_count_gnt);
            }
            __Vlabel11: ;
        }
        if (VL_UNLIKELY((1U & (~ (IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__grant_received))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_spi_engine_test.sv:73: Assertion failed in %Ntb_user_domain_spi_engine_test.read_obi: %t : TB: Timeout OBI grant read 0x%x. Rsp: %12#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__r_addr,
                         39,((((0x4dU >= ((IData)(2U) 
                                          + (0x7fU 
                                             & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))
                                ? (0x1fffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                       (((IData)(0x26U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                      | (((0U == (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                           (((IData)(0x21U) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                         | ((QData)((IData)(
                                                            vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                            (((IData)(2U) 
                                                              + 
                                                              (0x7fU 
                                                               & ((IData)(0x27U) 
                                                                  * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                             >> 5U)])) 
                                            >> (0x1fU 
                                                & ((IData)(2U) 
                                                   + 
                                                   (0x7fU 
                                                    & ((IData)(0x27U) 
                                                       * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))
                                : 0ULL) << 2U) | (QData)((IData)(
                                                                 ((((0x4dU 
                                                                     >= 
                                                                     ((IData)(1U) 
                                                                      + 
                                                                      (0x7fU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))) 
                                                                    && (1U 
                                                                        & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                           (((IData)(1U) 
                                                                             + 
                                                                             (0x7fU 
                                                                              & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                            >> 5U)] 
                                                                           >> 
                                                                           (0x1fU 
                                                                            & ((IData)(1U) 
                                                                               + 
                                                                               (0x7fU 
                                                                                & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                                   << 1U) 
                                                                  | ((0x4dU 
                                                                      >= 
                                                                      (0x7fU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                     && (1U 
                                                                         & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                            (3U 
                                                                             & (((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                                                                >> 5U))] 
                                                                            >> 
                                                                            (0x1fU 
                                                                             & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))));
            VL_STOP_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 73, "");
            VL_FINISH_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 73, "");
        }
        VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__r_addr);
        co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                             75);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] 
            = (0xfffffffeU & vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U]);
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__req_ongoing = 0U;
        while (((~ ((0x4dU >= (0x7fU & ((IData)(0x27U) 
                                        * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                    && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                              (3U & (((IData)(0x27U) 
                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                     >> 5U))] >> (0x1fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))) 
                & VL_GTS_III(32, 0xbb8U, __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__timeout_count_rvalid))) {
            co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                                 "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                                 76);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__timeout_count_rvalid 
                = ((IData)(1U) + __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__timeout_count_rvalid);
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0xbb8U, __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__timeout_count_rvalid))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_spi_engine_test.sv:77: Assertion failed in %Ntb_user_domain_spi_engine_test.read_obi: %t : TB: Timeout OBI rvalid read 0x%x. Rsp: %12#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__r_addr,
                         39,((((0x4dU >= ((IData)(2U) 
                                          + (0x7fU 
                                             & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))
                                ? (0x1fffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                       (((IData)(0x26U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                      | (((0U == (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                           (((IData)(0x21U) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                         | ((QData)((IData)(
                                                            vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                            (((IData)(2U) 
                                                              + 
                                                              (0x7fU 
                                                               & ((IData)(0x27U) 
                                                                  * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                             >> 5U)])) 
                                            >> (0x1fU 
                                                & ((IData)(2U) 
                                                   + 
                                                   (0x7fU 
                                                    & ((IData)(0x27U) 
                                                       * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))
                                : 0ULL) << 2U) | (QData)((IData)(
                                                                 ((((0x4dU 
                                                                     >= 
                                                                     ((IData)(1U) 
                                                                      + 
                                                                      (0x7fU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))) 
                                                                    && (1U 
                                                                        & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                           (((IData)(1U) 
                                                                             + 
                                                                             (0x7fU 
                                                                              & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                            >> 5U)] 
                                                                           >> 
                                                                           (0x1fU 
                                                                            & ((IData)(1U) 
                                                                               + 
                                                                               (0x7fU 
                                                                                & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                                   << 1U) 
                                                                  | ((0x4dU 
                                                                      >= 
                                                                      (0x7fU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                     && (1U 
                                                                         & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                            (3U 
                                                                             & (((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                                                                >> 5U))] 
                                                                            >> 
                                                                            (0x1fU 
                                                                             & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))));
            VL_STOP_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 77, "");
            VL_FINISH_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 77, "");
        }
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__rsp_r_chan_temp 
            = ((0x4dU >= ((IData)(2U) + (0x7fU & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))
                ? (0x1fffffffffULL & (((QData)((IData)(
                                                       vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                       (((IData)(0x26U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                      | (((0U == (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                           (((IData)(0x21U) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                         | ((QData)((IData)(
                                                            vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                            (((IData)(2U) 
                                                              + 
                                                              (0x7fU 
                                                               & ((IData)(0x27U) 
                                                                  * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                             >> 5U)])) 
                                            >> (0x1fU 
                                                & ((IData)(2U) 
                                                   + 
                                                   (0x7fU 
                                                    & ((IData)(0x27U) 
                                                       * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))
                : 0ULL);
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__r_data_val 
            = (IData)((__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__rsp_r_chan_temp 
                       >> 5U));
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__r_err 
            = (1U & (IData)((__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__rsp_r_chan_temp 
                             >> 1U)));
        VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x Err=%b RVALID=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__r_addr,
                     32,__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__r_data_val,
                     1,(IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__r_err),
                     1,((0x4dU >= (0x7fU & ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                        && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                  (3U & (((IData)(0x27U) 
                                          * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                         >> 5U))] >> 
                                  (0x1fU & ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))));
        co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                             80);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] = 0U;
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[1U] = 0U;
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[2U] = 0U;
        __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__18__status_val 
            = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__r_data_val;
        __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__18__read_err 
            = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__20__r_err;
        if (VL_UNLIKELY(__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__18__read_err)) {
            VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_spi_engine_test.sv:88: Assertion failed in %Ntb_user_domain_spi_engine_test.wait_spi_engine_idle: %t : TB: OBI Error reading SPI Engine Status!\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9);
            VL_STOP_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 88, "");
            VL_FINISH_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 88, "");
        }
        __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__18__busy_bit 
            = (1U & __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__18__status_val);
        __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__18__done_bit_tb 
            = (1U & (__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__18__status_val 
                     >> 1U));
        VL_WRITEF_NX("%t : TB: Polling SPI Engine Status (Addr 0x20001008): 0x%08x (done=%b, busy=%b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__18__status_val,
                     1,(IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__18__done_bit_tb),
                     1,__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__18__busy_bit);
        __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__18__timeout_count 
            = ((IData)(1U) + __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__18__timeout_count);
        if (__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__18__busy_bit) {
            co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                                 "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                                 91);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x3a98U, __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__18__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_spi_engine_test.sv:93: Assertion failed in %Ntb_user_domain_spi_engine_test.wait_spi_engine_idle: %t : TB: Timeout SPI Engine idle. Status: 0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__18__status_val);
        VL_STOP_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 93, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 93, "");
    }
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__r_addr = 0x20001008U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__timeout_count_gnt = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                         68);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__req_txn[0U] = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__req_txn[1U] = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__req_txn[2U] = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__req_txn[0U] 
        = (1U | __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__req_txn[0U]);
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__req_txn[1U] 
        = ((0x1ffU & __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__req_txn[1U]) 
           | ((IData)(((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__r_addr)) 
                       << 1U)) << 9U));
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__req_txn[2U] 
        = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__r_addr)) 
                               << 1U)) >> 0x17U) | 
                     ((IData)((((QData)((IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__r_addr)) 
                                << 1U) >> 0x20U)) << 9U)));
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__req_txn[0U];
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[1U] 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__req_txn[1U];
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[2U] 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__req_txn[2U];
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__r_addr);
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__grant_received = 0U;
    {
        while (VL_GTS_III(32, 0xbb8U, __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__timeout_count_gnt)) {
            if (((0x4dU >= ((IData)(1U) + (0x7fU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))) 
                 && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                           (((IData)(1U) + (0x7fU & 
                                            ((IData)(0x27U) 
                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                            >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))))) {
                __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__grant_received = 1U;
                goto __Vlabel12;
            }
            co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                                 "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                                 72);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__timeout_count_gnt 
                = ((IData)(1U) + __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__timeout_count_gnt);
        }
        __Vlabel12: ;
    }
    if (VL_UNLIKELY((1U & (~ (IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__grant_received))))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_spi_engine_test.sv:73: Assertion failed in %Ntb_user_domain_spi_engine_test.read_obi: %t : TB: Timeout OBI grant read 0x%x. Rsp: %12#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__r_addr,
                     39,((((0x4dU >= ((IData)(2U) + 
                                      (0x7fU & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))
                            ? (0x1fffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x26U) 
                                                                     + 
                                                                     (0x7fU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(0x21U) 
                                                                         + 
                                                                         (0x7fU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (((IData)(2U) 
                                                                          + 
                                                                          (0x7fU 
                                                                           & ((IData)(0x27U) 
                                                                              * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                         >> 5U)])) 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))
                            : 0ULL) << 2U) | (QData)((IData)(
                                                             ((((0x4dU 
                                                                 >= 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))) 
                                                                && (1U 
                                                                    & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(1U) 
                                                                         + 
                                                                         (0x7fU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)] 
                                                                       >> 
                                                                       (0x1fU 
                                                                        & ((IData)(1U) 
                                                                           + 
                                                                           (0x7fU 
                                                                            & ((IData)(0x27U) 
                                                                               * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                               << 1U) 
                                                              | ((0x4dU 
                                                                  >= 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                 && (1U 
                                                                     & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (3U 
                                                                         & (((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                                                            >> 5U))] 
                                                                        >> 
                                                                        (0x1fU 
                                                                         & ((IData)(0x27U) 
                                                                            * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))));
        VL_STOP_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 73, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 73, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__r_addr);
    co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                         75);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__req_ongoing = 0U;
    while (((~ ((0x4dU >= (0x7fU & ((IData)(0x27U) 
                                    * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                          (3U & (((IData)(0x27U) * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                 >> 5U))] >> (0x1fU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))) 
            & VL_GTS_III(32, 0xbb8U, __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                             76);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__timeout_count_rvalid);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0xbb8U, __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_spi_engine_test.sv:77: Assertion failed in %Ntb_user_domain_spi_engine_test.read_obi: %t : TB: Timeout OBI rvalid read 0x%x. Rsp: %12#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__r_addr,
                     39,((((0x4dU >= ((IData)(2U) + 
                                      (0x7fU & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))
                            ? (0x1fffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x26U) 
                                                                     + 
                                                                     (0x7fU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(0x21U) 
                                                                         + 
                                                                         (0x7fU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (((IData)(2U) 
                                                                          + 
                                                                          (0x7fU 
                                                                           & ((IData)(0x27U) 
                                                                              * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                         >> 5U)])) 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))
                            : 0ULL) << 2U) | (QData)((IData)(
                                                             ((((0x4dU 
                                                                 >= 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))) 
                                                                && (1U 
                                                                    & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(1U) 
                                                                         + 
                                                                         (0x7fU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)] 
                                                                       >> 
                                                                       (0x1fU 
                                                                        & ((IData)(1U) 
                                                                           + 
                                                                           (0x7fU 
                                                                            & ((IData)(0x27U) 
                                                                               * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                                               << 1U) 
                                                              | ((0x4dU 
                                                                  >= 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                 && (1U 
                                                                     & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (3U 
                                                                         & (((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                                                            >> 5U))] 
                                                                        >> 
                                                                        (0x1fU 
                                                                         & ((IData)(0x27U) 
                                                                            * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))));
        VL_STOP_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 77, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 77, "");
    }
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__rsp_r_chan_temp 
        = ((0x4dU >= ((IData)(2U) + (0x7fU & ((IData)(0x27U) 
                                              * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))
            ? (0x1fffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                   (((IData)(0x26U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                    >> 5U)])) 
                                   << ((0U == (0x1fU 
                                               & ((IData)(2U) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                        ? 0x20U : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(2U) 
                                                       + 
                                                       (0x7fU 
                                                        & ((IData)(0x27U) 
                                                           * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                  | (((0U == (0x1fU 
                                              & ((IData)(2U) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                       ? 0ULL : ((QData)((IData)(
                                                                 vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                 (((IData)(0x21U) 
                                                                   + 
                                                                   (0x7fU 
                                                                    & ((IData)(0x27U) 
                                                                       * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                     | ((QData)((IData)(
                                                        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                        (((IData)(2U) 
                                                          + 
                                                          (0x7fU 
                                                           & ((IData)(0x27U) 
                                                              * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                         >> 5U)])) 
                                        >> (0x1fU & 
                                            ((IData)(2U) 
                                             + (0x7fU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))
            : 0ULL);
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__r_data_val 
        = (IData)((__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__rsp_r_chan_temp 
                   >> 5U));
    __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__r_err 
        = (1U & (IData)((__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__rsp_r_chan_temp 
                         >> 1U)));
    VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x Err=%b RVALID=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__r_addr,
                 32,__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__r_data_val,
                 1,(IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__r_err),
                 1,((0x4dU >= (0x7fU & ((IData)(0x27U) 
                                        * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                    && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                              (3U & (((IData)(0x27U) 
                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                     >> 5U))] >> (0x1fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))));
    co_await vlSelfRef.__VtrigSched_h2977615d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_spi_engine_test.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[2U] = 0U;
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__18__status_val 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__r_data_val;
    __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__18__read_err 
        = __Vtask_tb_user_domain_spi_engine_test__DOT__read_obi__21__r_err;
    VL_WRITEF_NX("%t : TB: SPI Engine finished. Final Status: 0x%08x (done=%b, busy=%b)\n%t : TB: Finished sending SPI byte 0x%02x to engine.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__18__status_val,
                 1,(1U & (__Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__18__status_val 
                          >> 1U)),1,(1U & __Vtask_tb_user_domain_spi_engine_test__DOT__wait_spi_engine_idle__18__status_val),
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(__Vtask_tb_user_domain_spi_engine_test__DOT__send_spi_byte_to_engine__11__spi_data));
    co_await vlSelfRef.__VdlySched.delay(0x7a120ULL, 
                                         nullptr, "rtl/user_domain/tb_user_domain_spi_engine_test.sv", 
                                         120);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%t : TB: Test Sequence Complete.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    VL_FINISH_MT("rtl/user_domain/tb_user_domain_spi_engine_test.sv", 122, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_user_domain_spi_engine_test___024root___dump_triggers__act(Vtb_user_domain_spi_engine_test___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_user_domain_spi_engine_test___024root___eval_triggers__act(Vtb_user_domain_spi_engine_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_spi_engine_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_spi_engine_test___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_rsp 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_rsp__1));
    vlSelfRef.__VactTriggered.set(1U, (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_rsp 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_rsp__1));
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w__1)));
    vlSelfRef.__VactTriggered.set(3U, ((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r__1)));
    vlSelfRef.__VactTriggered.set(4U, ((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o__1)));
    vlSelfRef.__VactTriggered.set(5U, ((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__clk_i) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_spi_engine_test__DOT__clk_i__0))));
    vlSelfRef.__VactTriggered.set(6U, ((~ (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__rst_ni)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_spi_engine_test__DOT__rst_ni__0)));
    vlSelfRef.__VactTriggered.set(7U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_rsp__1 
        = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_rsp;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_rsp__1 
        = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_rsp;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w__1 
        = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r__1 
        = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o__1 
        = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_spi_engine_test__DOT__clk_i__0 
        = vlSelfRef.tb_user_domain_spi_engine_test__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_spi_engine_test__DOT__rst_ni__0 
        = vlSelfRef.tb_user_domain_spi_engine_test__DOT__rst_ni;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(0U, 1U);
        vlSelfRef.__VactTriggered.set(1U, 1U);
        vlSelfRef.__VactTriggered.set(2U, 1U);
        vlSelfRef.__VactTriggered.set(3U, 1U);
        vlSelfRef.__VactTriggered.set(4U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_user_domain_spi_engine_test___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_user_domain_spi_engine_test___024root___nba_sequent__TOP__1(Vtb_user_domain_spi_engine_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_spi_engine_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_spi_engine_test___024root___nba_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    if (VL_UNLIKELY((1U & vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U]))) {
        VL_WRITEF_NX("%t [UD_IN] Req for Addr=0x%x (WE=%b) -> Decoded Idx=%1#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     ((vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[2U] 
                       << 0x16U) | (vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[1U] 
                                    >> 0xaU)),1,(1U 
                                                 & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[1U] 
                                                    >> 9U)),
                     1,(IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx) 
                     & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                        >> 0xaU)))) {
        VL_WRITEF_NX("%t [UD_TO_SPI_ENG] Req to SPI Eng (idx           1): Addr=0x%x, WE=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     ((vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[4U] 
                       << 0xcU) | (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                   >> 0x14U)),1,(1U 
                                                 & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                    >> 0x13U)));
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx) 
                      == (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserSpiCtrl)) 
                     & ((0x93U >= (0xffU & ((IData)(0x4aU) 
                                            * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserSpiCtrl)))) 
                        && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[
                                  (7U & (((IData)(0x4aU) 
                                          * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserSpiCtrl)) 
                                         >> 5U))] >> 
                                  (0x1fU & ((IData)(0x4aU) 
                                            * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserSpiCtrl))))))))) {
        VL_WRITEF_NX("%t [UD_TO_SPI_CTRL] Req to SPI Ctrl (idx %1#): Addr=0x%x, WE=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserSpiCtrl),
                     32,((0x93U >= ((IData)(0x2aU) 
                                    + (0xffU & ((IData)(0x4aU) 
                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserSpiCtrl)))))
                          ? (((0U == (0x1fU & ((IData)(0x2aU) 
                                               + (0xffU 
                                                  & ((IData)(0x4aU) 
                                                     * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserSpiCtrl))))))
                               ? 0U : (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[
                                       (((IData)(0x49U) 
                                         + (0xffU & 
                                            ((IData)(0x4aU) 
                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserSpiCtrl)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x2aU) 
                                            + (0xffU 
                                               & ((IData)(0x4aU) 
                                                  * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserSpiCtrl)))))))) 
                             | (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[
                                (((IData)(0x2aU) + 
                                  (0xffU & ((IData)(0x4aU) 
                                            * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserSpiCtrl)))) 
                                 >> 5U)] >> (0x1fU 
                                             & ((IData)(0x2aU) 
                                                + (0xffU 
                                                   & ((IData)(0x4aU) 
                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserSpiCtrl)))))))
                          : 0U),1,((0x93U >= ((IData)(0x29U) 
                                              + (0xffU 
                                                 & ((IData)(0x4aU) 
                                                    * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserSpiCtrl))))) 
                                   && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[
                                             (((IData)(0x29U) 
                                               + (0xffU 
                                                  & ((IData)(0x4aU) 
                                                     * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserSpiCtrl)))) 
                                              >> 5U)] 
                                             >> (0x1fU 
                                                 & ((IData)(0x29U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(0x4aU) 
                                                        * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserSpiCtrl)))))))));
    }
    if (VL_UNLIKELY((1U & (IData)((vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_obi_rsp 
                                   >> 1U))))) {
        VL_WRITEF_NX("%t [UD_FROM_SPI_ENG] GNT from SPI Eng (idx           1) to Demux\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    if (VL_UNLIKELY((1U & (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_obi_rsp)))) {
        VL_WRITEF_NX("%t [UD_FROM_SPI_ENG] RVALID from SPI Eng (idx           1) to Demux. RDATA=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     (IData)((vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_obi_rsp 
                              >> 7U)));
    }
    if (VL_UNLIKELY((1U & (IData)((vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_rsp 
                                   >> 1U))))) {
        VL_WRITEF_NX("%t [UD_FROM_SPI_CTRL] GNT from SPI Ctrl (idx %1#) to Demux\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserSpiCtrl));
    }
    if (VL_UNLIKELY((1U & (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_rsp)))) {
        VL_WRITEF_NX("%t [UD_FROM_SPI_CTRL] RVALID from SPI Ctrl (idx %1#) to Demux. RDATA=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserSpiCtrl),
                     32,(IData)((vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_rsp 
                                 >> 7U)));
    }
    if (VL_UNLIKELY((((0x4dU >= ((IData)(1U) + (0x7fU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))) 
                      && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                (((IData)(1U) + (0x7fU 
                                                 & ((IData)(0x27U) 
                                                    * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                 >> 5U)] >> (0x1fU 
                                             & ((IData)(1U) 
                                                + (0x7fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                     & (~ (vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[1U] 
                           >> 9U))))) {
        VL_WRITEF_NX("%t [UD_OUT] GNT_OUT=%b for Read to Idx=%1# (Addr=0x%x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     ((0x4dU >= ((IData)(1U) + (0x7fU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))) 
                      && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                (((IData)(1U) + (0x7fU 
                                                 & ((IData)(0x27U) 
                                                    * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                 >> 5U)] >> (0x1fU 
                                             & ((IData)(1U) 
                                                + (0x7fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))),
                     1,(IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx),
                     32,((vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[2U] 
                          << 0x16U) | (vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[1U] 
                                       >> 0xaU)));
    }
    if (VL_UNLIKELY(((0x4dU >= (0x7fU & ((IData)(0x27U) 
                                         * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                     && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                               (3U & (((IData)(0x27U) 
                                       * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                      >> 5U))] >> (0x1fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) {
        VL_WRITEF_NX("%t [UD_OUT] RVALID_OUT=%b, RDATA_OUT=0x%x for Read to Idx=%1# (Addr=0x%x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     ((0x4dU >= (0x7fU & ((IData)(0x27U) 
                                          * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                      && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                (3U & (((IData)(0x27U) 
                                        * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                       >> 5U))] >> 
                                (0x1fU & ((IData)(0x27U) 
                                          * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))),
                     32,(IData)((((0x4dU >= ((IData)(2U) 
                                             + (0x7fU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))
                                   ? (0x1fffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                          (((IData)(0x26U) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                           >> 5U)])) 
                                          << ((0U == 
                                               (0x1fU 
                                                & ((IData)(2U) 
                                                   + 
                                                   (0x7fU 
                                                    & ((IData)(0x27U) 
                                                       * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                               ? 0x20U
                                               : ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                         | (((0U == 
                                              (0x1fU 
                                               & ((IData)(2U) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))
                                              ? 0ULL
                                              : ((QData)((IData)(
                                                                 vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                 (((IData)(0x21U) 
                                                                   + 
                                                                   (0x7fU 
                                                                    & ((IData)(0x27U) 
                                                                       * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                               (((IData)(2U) 
                                                                 + 
                                                                 (0x7fU 
                                                                  & ((IData)(0x27U) 
                                                                     * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                                                >> 5U)])) 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))))))))
                                   : 0ULL) >> 5U)),
                     1,vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx,
                     32,((vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[2U] 
                          << 0x16U) | (vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[1U] 
                                       >> 0xaU)));
    }
    if (VL_UNLIKELY((0x400U & vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U]))) {
        __Vtemp_1 = Vtb_user_domain_spi_engine_test___024unit::__Venumtab_enum_name363
            [vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__state_q];
        VL_WRITEF_NX("%t [DUT_OBI_DEBUG] req_i=%b, we_i=%b, addr_i[11:0]=%x, state_q=%@\n                      gnt_for_read=%b, gnt_for_write=%b, gnt_o=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                            >> 0xaU)),1,(1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                               >> 0x13U)),
                     12,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                         >> 0x14U),-1,&(__Vtemp_1),
                     1,(IData)((0x800000U == (0xfff80000U 
                                              & vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U]))),
                     1,((vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                         >> 0x13U) & ((0U == (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)) 
                                      & ((4U == (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                 >> 0x14U)) 
                                         | (0U == (
                                                   vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                   >> 0x14U))))),
                     1,(IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o));
        if (VL_UNLIKELY((1U & (~ (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                  >> 0x13U))))) {
            VL_WRITEF_NX("                      read_req_accepted_this_cycle=%b, rvalid_q(prev)=%b\n",0,
                         1,vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__read_req_accepted_this_cycle,
                         1,(IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__rvalid_q));
        }
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__cs_no))))) {
        __Vtemp_2 = Vtb_user_domain_spi_engine_test___024unit::__Venumtab_enum_name363
            [vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__state_q];
        VL_WRITEF_NX("%t [DUT_SPI_DEBUG] CS_N LOW: SCK=%b, MOSI=%b, BitCnt=%1#, SPIClkCnt=%1#, FSMState=%@\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__spi_sck_o),
                     1,vlSelfRef.tb_user_domain_spi_engine_test__DOT__spi_mosi_o,
                     3,(IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q),
                     2,vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q,
                     -1,&(__Vtemp_2));
    }
}

VL_INLINE_OPT void Vtb_user_domain_spi_engine_test___024root___nba_sequent__TOP__2(Vtb_user_domain_spi_engine_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_spi_engine_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_spi_engine_test___024root___nba_sequent__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    if (vlSelfRef.tb_user_domain_spi_engine_test__DOT__rst_ni) {
        if (VL_UNLIKELY(((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__state_q) 
                         != (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__state_d)))) {
            __Vtemp_1 = Vtb_user_domain_spi_engine_test___024unit::__Venumtab_enum_name363
                [vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__state_q];
            __Vtemp_2 = Vtb_user_domain_spi_engine_test___024unit::__Venumtab_enum_name363
                [vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__state_d];
            VL_WRITEF_NX("%t [DUT_FSM_DEBUG] State Transition: %@ -> %@\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,-1,&(__Vtemp_1),-1,&(__Vtemp_2));
        }
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__done_q 
            = ((2U == (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)) 
               & (3U == (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__state_d)));
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q 
            = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_d;
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q 
            = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_d;
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_q 
            = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_d;
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_q 
            = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_d;
        if (VL_UNLIKELY((((vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                           >> 0xaU) & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                       >> 0x13U)) & (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o)))) {
            VL_WRITEF_NX("%t [DUT_OBI_WRITE] Write to addr_offset %x granted. Data LSB: 0x%02x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,12,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                >> 0x14U),8,(0xffU 
                                             & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                                                >> 0xfU)));
            if ((4U == (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                        >> 0x14U))) {
                if ((0x8000U & vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U])) {
                    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_q 
                        = (0xffU & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                                    >> 0xfU));
                }
            } else if ((0U == (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                               >> 0x14U))) {
                vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_q = 1U;
            }
        } else if (((0U == (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)) 
                    & (1U == (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__state_d)))) {
            vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_q = 0U;
        }
        if (VL_UNLIKELY(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__read_req_accepted_this_cycle)) {
            VL_WRITEF_NX("%t [DUT_OBI_READ] Read granted for addr_offset %x. Latching rdata_q with status_bits={done:%b, busy:%b}. rvalid_q will be high next cycle.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,12,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                >> 0x14U),1,(1U & ((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__status_bits) 
                                                   >> 1U)),
                         1,(1U & (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__status_bits)));
            vlSelfRef.__Vdly__tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__rdata_q 
                = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__status_bits;
        } else if ((1U & (~ (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__rvalid_q)))) {
            vlSelfRef.__Vdly__tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__rdata_q = 0U;
        }
        if (VL_UNLIKELY(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__rvalid_q)) {
            VL_WRITEF_NX("%t [DUT_OBI_READ] rvalid_o is HIGH. rdata_o is 0x%x (status_bits={done:%b, busy:%b})\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,32,vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__rdata_q,
                         1,(1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__rdata_q 
                                  >> 1U)),1,(1U & vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__rdata_q));
        }
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__state_q 
            = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__state_d;
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__rvalid_q 
            = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__read_req_accepted_this_cycle;
    } else {
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__state_q = 0U;
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_q = 0U;
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_q = 0U;
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q = 0U;
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q = 0U;
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__rvalid_q = 0U;
        vlSelfRef.__Vdly__tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__rdata_q = 0U;
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__done_q = 0U;
    }
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__rdata_q 
        = vlSelfRef.__Vdly__tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__rdata_q;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_d 
        = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_q;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__spi_sck_o = 0U;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_d 
        = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_d 
        = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_q;
    if ((1U & (~ ((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__state_q) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)))) {
            if (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_q) {
                vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_d = 0U;
            }
        }
    }
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__status_bits 
        = (((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__done_q) 
            << 1U) | ((0U != (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)) 
                      & (3U != (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__state_q))));
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_d 
        = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__state_d 
        = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__state_q;
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__spi_mosi_o 
        = (1U & ((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_q) 
                 >> (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q)));
    if ((2U & (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__state_q))) {
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__cs_no 
            = (1U & (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__state_q));
        if ((1U & (~ (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)))) {
            vlSelfRef.tb_user_domain_spi_engine_test__DOT__spi_sck_o 
                = (2U <= (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q));
            vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_d 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q)));
            if ((3U == (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q))) {
                vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_d = 0U;
                if ((0U != (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q))) {
                    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_d 
                        = (7U & ((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q) 
                                 - (IData)(1U)));
                }
                vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__unnamedblk1__DOT__next_bit_idx_calc 
                    = (7U & ((0U == (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q))
                              ? (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q)
                              : ((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q) 
                                 - (IData)(1U))));
                vlSelfRef.tb_user_domain_spi_engine_test__DOT__spi_mosi_o 
                    = (1U & ((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_q) 
                             >> (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__unnamedblk1__DOT__next_bit_idx_calc)));
            }
        }
        if ((1U & (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__state_q))) {
            vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__state_d = 0U;
        } else if ((3U == (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q))) {
            if ((0U == (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q))) {
                vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__state_d = 3U;
            }
        }
    } else {
        vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__cs_no 
            = (1U & (~ (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)));
        if ((1U & (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__state_q))) {
            vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_d = 0U;
            vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_d = 7U;
            vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__state_d = 2U;
            vlSelfRef.tb_user_domain_spi_engine_test__DOT__spi_mosi_o 
                = (1U & ((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_q) 
                         >> 7U));
        } else if (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_q) {
            vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__state_d = 1U;
        }
    }
    vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_obi_rsp 
        = ((0x7fULL & vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_obi_rsp) 
           | ((QData)((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__rdata_q)) 
              << 7U));
}
