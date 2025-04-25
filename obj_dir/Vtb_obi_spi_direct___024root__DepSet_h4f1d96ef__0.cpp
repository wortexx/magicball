// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_obi_spi_direct.h for the primary calling header

#include "Vtb_obi_spi_direct__pch.h"
#include "Vtb_obi_spi_direct__Syms.h"
#include "Vtb_obi_spi_direct___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_obi_spi_direct___024root___eval_initial__TOP__Vtiming__1(Vtb_obi_spi_direct___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_obi_spi_direct__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_obi_spi_direct___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtask_tb_obi_spi_direct__DOT__send_spi_byte__0__spi_data;
    __Vtask_tb_obi_spi_direct__DOT__send_spi_byte__0__spi_data = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__status_val;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__status_val = 0;
    CData/*0:0*/ __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__busy_bit;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__busy_bit = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__timeout_count;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__timeout_count = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__2__r_addr;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__2__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__2__r_data_val;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__2__r_data_val = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__2__timeout_count_gnt;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__2__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__2__timeout_count_rvalid;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__2__timeout_count_rvalid = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__3__r_addr;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__3__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__3__r_data_val;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__3__r_data_val = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__3__timeout_count_gnt;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__3__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__3__timeout_count_rvalid;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__3__timeout_count_rvalid = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__4__r_addr;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__4__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__4__r_data_val;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__4__r_data_val = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__4__timeout_count_gnt;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__4__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__4__timeout_count_rvalid;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__4__timeout_count_rvalid = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__write_obi__5__w_addr;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__5__w_addr = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__write_obi__5__w_data;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__5__w_data = 0;
    CData/*3:0*/ __Vtask_tb_obi_spi_direct__DOT__write_obi__5__w_be;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__5__w_be = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__write_obi__5__timeout_count;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__5__timeout_count = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__write_obi__6__w_addr;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__6__w_addr = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__write_obi__6__w_data;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__6__w_data = 0;
    CData/*3:0*/ __Vtask_tb_obi_spi_direct__DOT__write_obi__6__w_be;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__6__w_be = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__write_obi__6__timeout_count;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__6__timeout_count = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__status_val;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__status_val = 0;
    CData/*0:0*/ __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__busy_bit;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__busy_bit = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__timeout_count;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__timeout_count = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__8__r_addr;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__8__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__8__r_data_val;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__8__r_data_val = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__8__timeout_count_gnt;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__8__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__8__timeout_count_rvalid;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__8__timeout_count_rvalid = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__9__r_addr;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__9__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__9__r_data_val;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__9__r_data_val = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__9__timeout_count_gnt;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__9__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__9__timeout_count_rvalid;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__9__timeout_count_rvalid = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__10__r_addr;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__10__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__10__r_data_val;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__10__r_data_val = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__10__timeout_count_gnt;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__10__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__10__timeout_count_rvalid;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__10__timeout_count_rvalid = 0;
    CData/*7:0*/ __Vtask_tb_obi_spi_direct__DOT__send_spi_byte__11__spi_data;
    __Vtask_tb_obi_spi_direct__DOT__send_spi_byte__11__spi_data = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__status_val;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__status_val = 0;
    CData/*0:0*/ __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__busy_bit;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__busy_bit = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__timeout_count;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__timeout_count = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__13__r_addr;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__13__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__13__r_data_val;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__13__r_data_val = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__13__timeout_count_gnt;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__13__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__13__timeout_count_rvalid;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__13__timeout_count_rvalid = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__14__r_addr;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__14__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__14__r_data_val;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__14__r_data_val = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__14__timeout_count_gnt;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__14__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__14__timeout_count_rvalid;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__14__timeout_count_rvalid = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__15__r_addr;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__15__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__15__r_data_val;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__15__r_data_val = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__15__timeout_count_gnt;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__15__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__15__timeout_count_rvalid;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__15__timeout_count_rvalid = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__write_obi__16__w_addr;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__16__w_addr = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__write_obi__16__w_data;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__16__w_data = 0;
    CData/*3:0*/ __Vtask_tb_obi_spi_direct__DOT__write_obi__16__w_be;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__16__w_be = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__write_obi__16__timeout_count;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__16__timeout_count = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__write_obi__17__w_addr;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__17__w_addr = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__write_obi__17__w_data;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__17__w_data = 0;
    CData/*3:0*/ __Vtask_tb_obi_spi_direct__DOT__write_obi__17__w_be;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__17__w_be = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__write_obi__17__timeout_count;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__17__timeout_count = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__status_val;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__status_val = 0;
    CData/*0:0*/ __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__busy_bit;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__busy_bit = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__timeout_count;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__timeout_count = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__19__r_addr;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__19__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__19__r_data_val;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__19__r_data_val = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__19__timeout_count_gnt;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__19__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__19__timeout_count_rvalid;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__19__timeout_count_rvalid = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__20__r_addr;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__20__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__20__r_data_val;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__20__r_data_val = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__20__timeout_count_gnt;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__20__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__20__timeout_count_rvalid;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__20__timeout_count_rvalid = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__21__r_addr;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__21__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__21__r_data_val;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__21__r_data_val = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__21__timeout_count_gnt;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__21__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__21__timeout_count_rvalid;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__21__timeout_count_rvalid = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__22__r_addr;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__22__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__22__r_data_val;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__22__r_data_val = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__22__timeout_count_gnt;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__22__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__22__timeout_count_rvalid;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__22__timeout_count_rvalid = 0;
    VlWide<6>/*191:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x72656374U;
    __Vtemp_1[2U] = 0x695f6469U;
    __Vtemp_1[3U] = 0x695f7370U;
    __Vtemp_1[4U] = 0x625f6f62U;
    __Vtemp_1[5U] = 0x74U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(6, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_obi_spi_direct__DOT__rst_ni = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__we = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__addr = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__wdata = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__be = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : Asserting Reset\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9);
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "rtl/user_domain/tb_obi_spi_direct.sv", 
                                         187);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__rst_ni = 1U;
    VL_WRITEF_NX("%t : Deasserting Reset\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9);
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         190);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%t : Starting Test Sequence...\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    __Vtask_tb_obi_spi_direct__DOT__send_spi_byte__0__spi_data = 0xaaU;
    VL_WRITEF_NX("%t : Sending SPI byte: 0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(__Vtask_tb_obi_spi_direct__DOT__send_spi_byte__0__spi_data));
    Verilated::runFlushCallbacks();
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__timeout_count = 0U;
    VL_WRITEF_NX("%t : Waiting for SPI HW to finish...\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         138);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__2__r_addr = 8U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__2__timeout_count_gnt = 0U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__2__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__we = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__addr = __Vtask_tb_obi_spi_direct__DOT__read_obi__2__r_addr;
    vlSelfRef.tb_obi_spi_direct__DOT__wdata = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__be = 0U;
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_tb_obi_spi_direct__DOT__read_obi__2__timeout_count_gnt))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             108);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__2__timeout_count_gnt 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__2__timeout_count_gnt);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_tb_obi_spi_direct__DOT__read_obi__2__timeout_count_gnt))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:112: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : Timeout waiting for OBI grant during read from %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__2__r_addr);
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 112, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 112, "");
    }
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 0U;
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_tb_obi_spi_direct__DOT__read_obi__2__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             119);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__2__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__2__timeout_count_rvalid);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_tb_obi_spi_direct__DOT__read_obi__2__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:123: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : Timeout waiting for OBI rvalid during read from %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__2__r_addr);
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 123, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 123, "");
    }
    __Vtask_tb_obi_spi_direct__DOT__read_obi__2__r_data_val 
        = vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rdata_q;
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         127);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__status_val 
        = __Vtask_tb_obi_spi_direct__DOT__read_obi__2__r_data_val;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__busy_bit 
        = (1U & __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__status_val);
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__timeout_count 
        = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__timeout_count);
    if (__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__busy_bit) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             143);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (((IData)(__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__busy_bit) 
            & VL_GTS_III(32, 0x1388U, __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__timeout_count))) {
        __Vtask_tb_obi_spi_direct__DOT__read_obi__3__r_addr = 8U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__3__timeout_count_gnt = 0U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__3__timeout_count_rvalid = 0U;
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             100);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_obi_spi_direct__DOT__req = 1U;
        vlSelfRef.tb_obi_spi_direct__DOT__we = 0U;
        vlSelfRef.tb_obi_spi_direct__DOT__addr = __Vtask_tb_obi_spi_direct__DOT__read_obi__3__r_addr;
        vlSelfRef.tb_obi_spi_direct__DOT__wdata = 0U;
        vlSelfRef.tb_obi_spi_direct__DOT__be = 0U;
        while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt)) 
                & VL_GTS_III(32, 0x3e8U, __Vtask_tb_obi_spi_direct__DOT__read_obi__3__timeout_count_gnt))) {
            co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_obi_spi_direct.clk)", 
                                                                 "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                                 108);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_obi_spi_direct__DOT__read_obi__3__timeout_count_gnt 
                = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__3__timeout_count_gnt);
        }
        if (VL_UNLIKELY((0x3e8U == __Vtask_tb_obi_spi_direct__DOT__read_obi__3__timeout_count_gnt))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:112: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : Timeout waiting for OBI grant during read from %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__3__r_addr);
            Verilated::runFlushCallbacks();
            VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 112, "");
            VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 112, "");
        }
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             114);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_obi_spi_direct__DOT__req = 0U;
        vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 0U;
        while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q)) 
                & VL_GTS_III(32, 0x3e8U, __Vtask_tb_obi_spi_direct__DOT__read_obi__3__timeout_count_rvalid))) {
            co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_obi_spi_direct.clk)", 
                                                                 "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                                 119);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_obi_spi_direct__DOT__read_obi__3__timeout_count_rvalid 
                = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__3__timeout_count_rvalid);
        }
        if (VL_UNLIKELY((0x3e8U == __Vtask_tb_obi_spi_direct__DOT__read_obi__3__timeout_count_rvalid))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:123: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : Timeout waiting for OBI rvalid during read from %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__3__r_addr);
            Verilated::runFlushCallbacks();
            VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 123, "");
            VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 123, "");
        }
        __Vtask_tb_obi_spi_direct__DOT__read_obi__3__r_data_val 
            = vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rdata_q;
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             127);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__status_val 
            = __Vtask_tb_obi_spi_direct__DOT__read_obi__3__r_data_val;
        __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__busy_bit 
            = (1U & __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__status_val);
        __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__timeout_count 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__timeout_count);
        if (__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__busy_bit) {
            co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_obi_spi_direct.clk)", 
                                                                 "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                                 143);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
    }
    if (VL_UNLIKELY((0x1388U == __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:146: Assertion failed in %Ntb_obi_spi_direct.wait_spi_done: %t : Timeout waiting for SPI HW to become idle.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9);
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 146, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 146, "");
    }
    VL_WRITEF_NX("%t : SPI HW finished.\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9);
    Verilated::runFlushCallbacks();
    __Vtask_tb_obi_spi_direct__DOT__read_obi__4__r_addr = 8U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__4__timeout_count_gnt = 0U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__4__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__we = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__addr = __Vtask_tb_obi_spi_direct__DOT__read_obi__4__r_addr;
    vlSelfRef.tb_obi_spi_direct__DOT__wdata = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__be = 0U;
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_tb_obi_spi_direct__DOT__read_obi__4__timeout_count_gnt))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             108);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__4__timeout_count_gnt 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__4__timeout_count_gnt);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_tb_obi_spi_direct__DOT__read_obi__4__timeout_count_gnt))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:112: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : Timeout waiting for OBI grant during read from %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__4__r_addr);
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 112, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 112, "");
    }
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 0U;
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_tb_obi_spi_direct__DOT__read_obi__4__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             119);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__4__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__4__timeout_count_rvalid);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_tb_obi_spi_direct__DOT__read_obi__4__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:123: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : Timeout waiting for OBI rvalid during read from %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__4__r_addr);
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 123, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 123, "");
    }
    __Vtask_tb_obi_spi_direct__DOT__read_obi__4__r_data_val 
        = vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rdata_q;
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         127);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__status_after_done 
        = __Vtask_tb_obi_spi_direct__DOT__read_obi__4__r_data_val;
    VL_WRITEF_NX("%t : SPI STATUS raw = 0x%08x (done=%0b, busy=%0b)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.tb_obi_spi_direct__DOT__status_after_done,
                 1,(1U & (vlSelfRef.tb_obi_spi_direct__DOT__status_after_done 
                          >> 1U)),1,(1U & vlSelfRef.tb_obi_spi_direct__DOT__status_after_done));
    Verilated::runFlushCallbacks();
    __Vtask_tb_obi_spi_direct__DOT__write_obi__5__w_be = 1U;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__5__w_data 
        = __Vtask_tb_obi_spi_direct__DOT__send_spi_byte__0__spi_data;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__5__w_addr = 4U;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__5__timeout_count = 0U;
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         72);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__we = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__addr = __Vtask_tb_obi_spi_direct__DOT__write_obi__5__w_addr;
    vlSelfRef.tb_obi_spi_direct__DOT__wdata = __Vtask_tb_obi_spi_direct__DOT__write_obi__5__w_data;
    vlSelfRef.tb_obi_spi_direct__DOT__be = __Vtask_tb_obi_spi_direct__DOT__write_obi__5__w_be;
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_tb_obi_spi_direct__DOT__write_obi__5__timeout_count))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             80);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__write_obi__5__timeout_count 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__write_obi__5__timeout_count);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_tb_obi_spi_direct__DOT__write_obi__5__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:84: Assertion failed in %Ntb_obi_spi_direct.write_obi: %t : Timeout waiting for OBI grant during write to %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__write_obi__5__w_addr);
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 84, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 84, "");
    }
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         86);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 0U;
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         90);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__we = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__be = 0U;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__6__w_be = 1U;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__6__w_data = 1U;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__6__w_addr = 0U;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__6__timeout_count = 0U;
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         72);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__we = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__addr = __Vtask_tb_obi_spi_direct__DOT__write_obi__6__w_addr;
    vlSelfRef.tb_obi_spi_direct__DOT__wdata = __Vtask_tb_obi_spi_direct__DOT__write_obi__6__w_data;
    vlSelfRef.tb_obi_spi_direct__DOT__be = __Vtask_tb_obi_spi_direct__DOT__write_obi__6__w_be;
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_tb_obi_spi_direct__DOT__write_obi__6__timeout_count))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             80);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__write_obi__6__timeout_count 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__write_obi__6__timeout_count);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_tb_obi_spi_direct__DOT__write_obi__6__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:84: Assertion failed in %Ntb_obi_spi_direct.write_obi: %t : Timeout waiting for OBI grant during write to %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__write_obi__6__w_addr);
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 84, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 84, "");
    }
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         86);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 0U;
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         90);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__we = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__be = 0U;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__timeout_count = 0U;
    VL_WRITEF_NX("%t : Waiting for SPI HW to finish...\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         138);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__8__r_addr = 8U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__8__timeout_count_gnt = 0U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__8__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__we = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__addr = __Vtask_tb_obi_spi_direct__DOT__read_obi__8__r_addr;
    vlSelfRef.tb_obi_spi_direct__DOT__wdata = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__be = 0U;
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_tb_obi_spi_direct__DOT__read_obi__8__timeout_count_gnt))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             108);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__8__timeout_count_gnt 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__8__timeout_count_gnt);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_tb_obi_spi_direct__DOT__read_obi__8__timeout_count_gnt))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:112: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : Timeout waiting for OBI grant during read from %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__8__r_addr);
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 112, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 112, "");
    }
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 0U;
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_tb_obi_spi_direct__DOT__read_obi__8__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             119);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__8__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__8__timeout_count_rvalid);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_tb_obi_spi_direct__DOT__read_obi__8__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:123: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : Timeout waiting for OBI rvalid during read from %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__8__r_addr);
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 123, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 123, "");
    }
    __Vtask_tb_obi_spi_direct__DOT__read_obi__8__r_data_val 
        = vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rdata_q;
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         127);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__status_val 
        = __Vtask_tb_obi_spi_direct__DOT__read_obi__8__r_data_val;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__busy_bit 
        = (1U & __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__status_val);
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__timeout_count 
        = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__timeout_count);
    if (__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__busy_bit) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             143);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (((IData)(__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__busy_bit) 
            & VL_GTS_III(32, 0x1388U, __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__timeout_count))) {
        __Vtask_tb_obi_spi_direct__DOT__read_obi__9__r_addr = 8U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__9__timeout_count_gnt = 0U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__9__timeout_count_rvalid = 0U;
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             100);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_obi_spi_direct__DOT__req = 1U;
        vlSelfRef.tb_obi_spi_direct__DOT__we = 0U;
        vlSelfRef.tb_obi_spi_direct__DOT__addr = __Vtask_tb_obi_spi_direct__DOT__read_obi__9__r_addr;
        vlSelfRef.tb_obi_spi_direct__DOT__wdata = 0U;
        vlSelfRef.tb_obi_spi_direct__DOT__be = 0U;
        while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt)) 
                & VL_GTS_III(32, 0x3e8U, __Vtask_tb_obi_spi_direct__DOT__read_obi__9__timeout_count_gnt))) {
            co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_obi_spi_direct.clk)", 
                                                                 "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                                 108);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_obi_spi_direct__DOT__read_obi__9__timeout_count_gnt 
                = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__9__timeout_count_gnt);
        }
        if (VL_UNLIKELY((0x3e8U == __Vtask_tb_obi_spi_direct__DOT__read_obi__9__timeout_count_gnt))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:112: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : Timeout waiting for OBI grant during read from %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__9__r_addr);
            Verilated::runFlushCallbacks();
            VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 112, "");
            VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 112, "");
        }
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             114);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_obi_spi_direct__DOT__req = 0U;
        vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 0U;
        while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q)) 
                & VL_GTS_III(32, 0x3e8U, __Vtask_tb_obi_spi_direct__DOT__read_obi__9__timeout_count_rvalid))) {
            co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_obi_spi_direct.clk)", 
                                                                 "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                                 119);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_obi_spi_direct__DOT__read_obi__9__timeout_count_rvalid 
                = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__9__timeout_count_rvalid);
        }
        if (VL_UNLIKELY((0x3e8U == __Vtask_tb_obi_spi_direct__DOT__read_obi__9__timeout_count_rvalid))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:123: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : Timeout waiting for OBI rvalid during read from %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__9__r_addr);
            Verilated::runFlushCallbacks();
            VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 123, "");
            VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 123, "");
        }
        __Vtask_tb_obi_spi_direct__DOT__read_obi__9__r_data_val 
            = vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rdata_q;
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             127);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__status_val 
            = __Vtask_tb_obi_spi_direct__DOT__read_obi__9__r_data_val;
        __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__busy_bit 
            = (1U & __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__status_val);
        __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__timeout_count 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__timeout_count);
        if (__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__busy_bit) {
            co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_obi_spi_direct.clk)", 
                                                                 "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                                 143);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
    }
    if (VL_UNLIKELY((0x1388U == __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:146: Assertion failed in %Ntb_obi_spi_direct.wait_spi_done: %t : Timeout waiting for SPI HW to become idle.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9);
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 146, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 146, "");
    }
    VL_WRITEF_NX("%t : SPI HW finished.\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9);
    Verilated::runFlushCallbacks();
    __Vtask_tb_obi_spi_direct__DOT__read_obi__10__r_addr = 8U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__10__timeout_count_gnt = 0U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__10__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__we = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__addr = __Vtask_tb_obi_spi_direct__DOT__read_obi__10__r_addr;
    vlSelfRef.tb_obi_spi_direct__DOT__wdata = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__be = 0U;
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_tb_obi_spi_direct__DOT__read_obi__10__timeout_count_gnt))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             108);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__10__timeout_count_gnt 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__10__timeout_count_gnt);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_tb_obi_spi_direct__DOT__read_obi__10__timeout_count_gnt))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:112: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : Timeout waiting for OBI grant during read from %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__10__r_addr);
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 112, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 112, "");
    }
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 0U;
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_tb_obi_spi_direct__DOT__read_obi__10__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             119);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__10__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__10__timeout_count_rvalid);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_tb_obi_spi_direct__DOT__read_obi__10__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:123: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : Timeout waiting for OBI rvalid during read from %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__10__r_addr);
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 123, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 123, "");
    }
    __Vtask_tb_obi_spi_direct__DOT__read_obi__10__r_data_val 
        = vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rdata_q;
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         127);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__status_after_done 
        = __Vtask_tb_obi_spi_direct__DOT__read_obi__10__r_data_val;
    VL_WRITEF_NX("%t : SPI STATUS raw = 0x%08x (done=%0b, busy=%0b)\n%t : Finished sending SPI byte: 0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.tb_obi_spi_direct__DOT__status_after_done,
                 1,(1U & (vlSelfRef.tb_obi_spi_direct__DOT__status_after_done 
                          >> 1U)),1,(1U & vlSelfRef.tb_obi_spi_direct__DOT__status_after_done),
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(__Vtask_tb_obi_spi_direct__DOT__send_spi_byte__0__spi_data));
    Verilated::runFlushCallbacks();
    __Vtask_tb_obi_spi_direct__DOT__send_spi_byte__11__spi_data = 0x55U;
    VL_WRITEF_NX("%t : Sending SPI byte: 0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(__Vtask_tb_obi_spi_direct__DOT__send_spi_byte__11__spi_data));
    Verilated::runFlushCallbacks();
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__timeout_count = 0U;
    VL_WRITEF_NX("%t : Waiting for SPI HW to finish...\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         138);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__13__r_addr = 8U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__13__timeout_count_gnt = 0U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__13__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__we = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__addr = __Vtask_tb_obi_spi_direct__DOT__read_obi__13__r_addr;
    vlSelfRef.tb_obi_spi_direct__DOT__wdata = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__be = 0U;
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_tb_obi_spi_direct__DOT__read_obi__13__timeout_count_gnt))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             108);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__13__timeout_count_gnt 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__13__timeout_count_gnt);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_tb_obi_spi_direct__DOT__read_obi__13__timeout_count_gnt))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:112: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : Timeout waiting for OBI grant during read from %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__13__r_addr);
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 112, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 112, "");
    }
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 0U;
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_tb_obi_spi_direct__DOT__read_obi__13__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             119);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__13__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__13__timeout_count_rvalid);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_tb_obi_spi_direct__DOT__read_obi__13__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:123: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : Timeout waiting for OBI rvalid during read from %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__13__r_addr);
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 123, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 123, "");
    }
    __Vtask_tb_obi_spi_direct__DOT__read_obi__13__r_data_val 
        = vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rdata_q;
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         127);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__status_val 
        = __Vtask_tb_obi_spi_direct__DOT__read_obi__13__r_data_val;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__busy_bit 
        = (1U & __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__status_val);
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__timeout_count 
        = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__timeout_count);
    if (__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__busy_bit) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             143);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (((IData)(__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__busy_bit) 
            & VL_GTS_III(32, 0x1388U, __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__timeout_count))) {
        __Vtask_tb_obi_spi_direct__DOT__read_obi__14__r_addr = 8U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__14__timeout_count_gnt = 0U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__14__timeout_count_rvalid = 0U;
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             100);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_obi_spi_direct__DOT__req = 1U;
        vlSelfRef.tb_obi_spi_direct__DOT__we = 0U;
        vlSelfRef.tb_obi_spi_direct__DOT__addr = __Vtask_tb_obi_spi_direct__DOT__read_obi__14__r_addr;
        vlSelfRef.tb_obi_spi_direct__DOT__wdata = 0U;
        vlSelfRef.tb_obi_spi_direct__DOT__be = 0U;
        while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt)) 
                & VL_GTS_III(32, 0x3e8U, __Vtask_tb_obi_spi_direct__DOT__read_obi__14__timeout_count_gnt))) {
            co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_obi_spi_direct.clk)", 
                                                                 "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                                 108);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_obi_spi_direct__DOT__read_obi__14__timeout_count_gnt 
                = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__14__timeout_count_gnt);
        }
        if (VL_UNLIKELY((0x3e8U == __Vtask_tb_obi_spi_direct__DOT__read_obi__14__timeout_count_gnt))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:112: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : Timeout waiting for OBI grant during read from %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__14__r_addr);
            Verilated::runFlushCallbacks();
            VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 112, "");
            VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 112, "");
        }
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             114);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_obi_spi_direct__DOT__req = 0U;
        vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 0U;
        while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q)) 
                & VL_GTS_III(32, 0x3e8U, __Vtask_tb_obi_spi_direct__DOT__read_obi__14__timeout_count_rvalid))) {
            co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_obi_spi_direct.clk)", 
                                                                 "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                                 119);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_obi_spi_direct__DOT__read_obi__14__timeout_count_rvalid 
                = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__14__timeout_count_rvalid);
        }
        if (VL_UNLIKELY((0x3e8U == __Vtask_tb_obi_spi_direct__DOT__read_obi__14__timeout_count_rvalid))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:123: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : Timeout waiting for OBI rvalid during read from %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__14__r_addr);
            Verilated::runFlushCallbacks();
            VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 123, "");
            VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 123, "");
        }
        __Vtask_tb_obi_spi_direct__DOT__read_obi__14__r_data_val 
            = vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rdata_q;
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             127);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__status_val 
            = __Vtask_tb_obi_spi_direct__DOT__read_obi__14__r_data_val;
        __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__busy_bit 
            = (1U & __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__status_val);
        __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__timeout_count 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__timeout_count);
        if (__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__busy_bit) {
            co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_obi_spi_direct.clk)", 
                                                                 "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                                 143);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
    }
    if (VL_UNLIKELY((0x1388U == __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:146: Assertion failed in %Ntb_obi_spi_direct.wait_spi_done: %t : Timeout waiting for SPI HW to become idle.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9);
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 146, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 146, "");
    }
    VL_WRITEF_NX("%t : SPI HW finished.\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9);
    Verilated::runFlushCallbacks();
    __Vtask_tb_obi_spi_direct__DOT__read_obi__15__r_addr = 8U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__15__timeout_count_gnt = 0U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__15__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__we = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__addr = __Vtask_tb_obi_spi_direct__DOT__read_obi__15__r_addr;
    vlSelfRef.tb_obi_spi_direct__DOT__wdata = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__be = 0U;
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_tb_obi_spi_direct__DOT__read_obi__15__timeout_count_gnt))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             108);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__15__timeout_count_gnt 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__15__timeout_count_gnt);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_tb_obi_spi_direct__DOT__read_obi__15__timeout_count_gnt))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:112: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : Timeout waiting for OBI grant during read from %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__15__r_addr);
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 112, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 112, "");
    }
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 0U;
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_tb_obi_spi_direct__DOT__read_obi__15__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             119);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__15__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__15__timeout_count_rvalid);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_tb_obi_spi_direct__DOT__read_obi__15__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:123: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : Timeout waiting for OBI rvalid during read from %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__15__r_addr);
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 123, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 123, "");
    }
    __Vtask_tb_obi_spi_direct__DOT__read_obi__15__r_data_val 
        = vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rdata_q;
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         127);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__status_after_done 
        = __Vtask_tb_obi_spi_direct__DOT__read_obi__15__r_data_val;
    VL_WRITEF_NX("%t : SPI STATUS raw = 0x%08x (done=%0b, busy=%0b)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.tb_obi_spi_direct__DOT__status_after_done,
                 1,(1U & (vlSelfRef.tb_obi_spi_direct__DOT__status_after_done 
                          >> 1U)),1,(1U & vlSelfRef.tb_obi_spi_direct__DOT__status_after_done));
    Verilated::runFlushCallbacks();
    __Vtask_tb_obi_spi_direct__DOT__write_obi__16__w_be = 1U;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__16__w_data 
        = __Vtask_tb_obi_spi_direct__DOT__send_spi_byte__11__spi_data;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__16__w_addr = 4U;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__16__timeout_count = 0U;
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         72);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__we = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__addr = __Vtask_tb_obi_spi_direct__DOT__write_obi__16__w_addr;
    vlSelfRef.tb_obi_spi_direct__DOT__wdata = __Vtask_tb_obi_spi_direct__DOT__write_obi__16__w_data;
    vlSelfRef.tb_obi_spi_direct__DOT__be = __Vtask_tb_obi_spi_direct__DOT__write_obi__16__w_be;
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_tb_obi_spi_direct__DOT__write_obi__16__timeout_count))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             80);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__write_obi__16__timeout_count 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__write_obi__16__timeout_count);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_tb_obi_spi_direct__DOT__write_obi__16__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:84: Assertion failed in %Ntb_obi_spi_direct.write_obi: %t : Timeout waiting for OBI grant during write to %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__write_obi__16__w_addr);
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 84, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 84, "");
    }
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         86);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 0U;
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         90);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__we = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__be = 0U;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__17__w_be = 1U;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__17__w_data = 1U;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__17__w_addr = 0U;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__17__timeout_count = 0U;
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         72);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__we = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__addr = __Vtask_tb_obi_spi_direct__DOT__write_obi__17__w_addr;
    vlSelfRef.tb_obi_spi_direct__DOT__wdata = __Vtask_tb_obi_spi_direct__DOT__write_obi__17__w_data;
    vlSelfRef.tb_obi_spi_direct__DOT__be = __Vtask_tb_obi_spi_direct__DOT__write_obi__17__w_be;
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_tb_obi_spi_direct__DOT__write_obi__17__timeout_count))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             80);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__write_obi__17__timeout_count 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__write_obi__17__timeout_count);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_tb_obi_spi_direct__DOT__write_obi__17__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:84: Assertion failed in %Ntb_obi_spi_direct.write_obi: %t : Timeout waiting for OBI grant during write to %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__write_obi__17__w_addr);
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 84, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 84, "");
    }
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         86);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 0U;
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         90);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__we = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__be = 0U;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__timeout_count = 0U;
    VL_WRITEF_NX("%t : Waiting for SPI HW to finish...\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         138);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__19__r_addr = 8U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__19__timeout_count_gnt = 0U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__19__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__we = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__addr = __Vtask_tb_obi_spi_direct__DOT__read_obi__19__r_addr;
    vlSelfRef.tb_obi_spi_direct__DOT__wdata = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__be = 0U;
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_tb_obi_spi_direct__DOT__read_obi__19__timeout_count_gnt))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             108);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__19__timeout_count_gnt 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__19__timeout_count_gnt);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_tb_obi_spi_direct__DOT__read_obi__19__timeout_count_gnt))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:112: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : Timeout waiting for OBI grant during read from %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__19__r_addr);
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 112, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 112, "");
    }
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 0U;
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_tb_obi_spi_direct__DOT__read_obi__19__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             119);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__19__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__19__timeout_count_rvalid);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_tb_obi_spi_direct__DOT__read_obi__19__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:123: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : Timeout waiting for OBI rvalid during read from %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__19__r_addr);
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 123, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 123, "");
    }
    __Vtask_tb_obi_spi_direct__DOT__read_obi__19__r_data_val 
        = vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rdata_q;
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         127);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__status_val 
        = __Vtask_tb_obi_spi_direct__DOT__read_obi__19__r_data_val;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__busy_bit 
        = (1U & __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__status_val);
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__timeout_count 
        = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__timeout_count);
    if (__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__busy_bit) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             143);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (((IData)(__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__busy_bit) 
            & VL_GTS_III(32, 0x1388U, __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__timeout_count))) {
        __Vtask_tb_obi_spi_direct__DOT__read_obi__20__r_addr = 8U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__20__timeout_count_gnt = 0U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__20__timeout_count_rvalid = 0U;
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             100);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_obi_spi_direct__DOT__req = 1U;
        vlSelfRef.tb_obi_spi_direct__DOT__we = 0U;
        vlSelfRef.tb_obi_spi_direct__DOT__addr = __Vtask_tb_obi_spi_direct__DOT__read_obi__20__r_addr;
        vlSelfRef.tb_obi_spi_direct__DOT__wdata = 0U;
        vlSelfRef.tb_obi_spi_direct__DOT__be = 0U;
        while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt)) 
                & VL_GTS_III(32, 0x3e8U, __Vtask_tb_obi_spi_direct__DOT__read_obi__20__timeout_count_gnt))) {
            co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_obi_spi_direct.clk)", 
                                                                 "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                                 108);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_obi_spi_direct__DOT__read_obi__20__timeout_count_gnt 
                = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__20__timeout_count_gnt);
        }
        if (VL_UNLIKELY((0x3e8U == __Vtask_tb_obi_spi_direct__DOT__read_obi__20__timeout_count_gnt))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:112: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : Timeout waiting for OBI grant during read from %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__20__r_addr);
            Verilated::runFlushCallbacks();
            VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 112, "");
            VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 112, "");
        }
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             114);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_obi_spi_direct__DOT__req = 0U;
        vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 0U;
        while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q)) 
                & VL_GTS_III(32, 0x3e8U, __Vtask_tb_obi_spi_direct__DOT__read_obi__20__timeout_count_rvalid))) {
            co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_obi_spi_direct.clk)", 
                                                                 "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                                 119);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_obi_spi_direct__DOT__read_obi__20__timeout_count_rvalid 
                = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__20__timeout_count_rvalid);
        }
        if (VL_UNLIKELY((0x3e8U == __Vtask_tb_obi_spi_direct__DOT__read_obi__20__timeout_count_rvalid))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:123: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : Timeout waiting for OBI rvalid during read from %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__20__r_addr);
            Verilated::runFlushCallbacks();
            VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 123, "");
            VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 123, "");
        }
        __Vtask_tb_obi_spi_direct__DOT__read_obi__20__r_data_val 
            = vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rdata_q;
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             127);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__status_val 
            = __Vtask_tb_obi_spi_direct__DOT__read_obi__20__r_data_val;
        __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__busy_bit 
            = (1U & __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__status_val);
        __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__timeout_count 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__timeout_count);
        if (__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__busy_bit) {
            co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_obi_spi_direct.clk)", 
                                                                 "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                                 143);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
    }
    if (VL_UNLIKELY((0x1388U == __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:146: Assertion failed in %Ntb_obi_spi_direct.wait_spi_done: %t : Timeout waiting for SPI HW to become idle.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9);
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 146, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 146, "");
    }
    VL_WRITEF_NX("%t : SPI HW finished.\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9);
    Verilated::runFlushCallbacks();
    __Vtask_tb_obi_spi_direct__DOT__read_obi__21__r_addr = 8U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__21__timeout_count_gnt = 0U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__21__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__we = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__addr = __Vtask_tb_obi_spi_direct__DOT__read_obi__21__r_addr;
    vlSelfRef.tb_obi_spi_direct__DOT__wdata = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__be = 0U;
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_tb_obi_spi_direct__DOT__read_obi__21__timeout_count_gnt))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             108);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__21__timeout_count_gnt 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__21__timeout_count_gnt);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_tb_obi_spi_direct__DOT__read_obi__21__timeout_count_gnt))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:112: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : Timeout waiting for OBI grant during read from %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__21__r_addr);
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 112, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 112, "");
    }
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 0U;
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_tb_obi_spi_direct__DOT__read_obi__21__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             119);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__21__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__21__timeout_count_rvalid);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_tb_obi_spi_direct__DOT__read_obi__21__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:123: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : Timeout waiting for OBI rvalid during read from %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__21__r_addr);
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 123, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 123, "");
    }
    __Vtask_tb_obi_spi_direct__DOT__read_obi__21__r_data_val 
        = vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rdata_q;
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         127);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__status_after_done 
        = __Vtask_tb_obi_spi_direct__DOT__read_obi__21__r_data_val;
    VL_WRITEF_NX("%t : SPI STATUS raw = 0x%08x (done=%0b, busy=%0b)\n%t : Finished sending SPI byte: 0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.tb_obi_spi_direct__DOT__status_after_done,
                 1,(1U & (vlSelfRef.tb_obi_spi_direct__DOT__status_after_done 
                          >> 1U)),1,(1U & vlSelfRef.tb_obi_spi_direct__DOT__status_after_done),
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(__Vtask_tb_obi_spi_direct__DOT__send_spi_byte__11__spi_data));
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VdlySched.delay(0x7a120ULL, 
                                         nullptr, "rtl/user_domain/tb_obi_spi_direct.sv", 
                                         202);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%t : Test Sequence Complete.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    __Vtask_tb_obi_spi_direct__DOT__read_obi__22__r_addr = 8U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__22__timeout_count_gnt = 0U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__22__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__we = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__addr = __Vtask_tb_obi_spi_direct__DOT__read_obi__22__r_addr;
    vlSelfRef.tb_obi_spi_direct__DOT__wdata = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__be = 0U;
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_tb_obi_spi_direct__DOT__read_obi__22__timeout_count_gnt))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             108);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__22__timeout_count_gnt 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__22__timeout_count_gnt);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_tb_obi_spi_direct__DOT__read_obi__22__timeout_count_gnt))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:112: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : Timeout waiting for OBI grant during read from %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__22__r_addr);
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 112, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 112, "");
    }
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 0U;
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_tb_obi_spi_direct__DOT__read_obi__22__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             119);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__22__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__22__timeout_count_rvalid);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_tb_obi_spi_direct__DOT__read_obi__22__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:123: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : Timeout waiting for OBI rvalid during read from %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__22__r_addr);
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 123, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 123, "");
    }
    __Vtask_tb_obi_spi_direct__DOT__read_obi__22__r_data_val 
        = vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rdata_q;
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         127);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__final_status 
        = __Vtask_tb_obi_spi_direct__DOT__read_obi__22__r_data_val;
    VL_WRITEF_NX("%t : FINAL STATUS = 0x%08x (done=%0b, busy=%0b)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.tb_obi_spi_direct__DOT__final_status,
                 1,(1U & (vlSelfRef.tb_obi_spi_direct__DOT__final_status 
                          >> 1U)),1,(1U & vlSelfRef.tb_obi_spi_direct__DOT__final_status));
    Verilated::runFlushCallbacks();
    VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 208, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_obi_spi_direct___024root___dump_triggers__act(Vtb_obi_spi_direct___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_obi_spi_direct___024root___eval_triggers__act(Vtb_obi_spi_direct___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_obi_spi_direct__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_obi_spi_direct___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_obi_spi_direct__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_obi_spi_direct__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__rst_ni)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_obi_spi_direct__DOT__rst_ni__0)));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_obi_spi_direct__DOT__clk__0 
        = vlSelfRef.tb_obi_spi_direct__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_obi_spi_direct__DOT__rst_ni__0 
        = vlSelfRef.tb_obi_spi_direct__DOT__rst_ni;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_obi_spi_direct___024root___dump_triggers__act(vlSelf);
    }
#endif
}
