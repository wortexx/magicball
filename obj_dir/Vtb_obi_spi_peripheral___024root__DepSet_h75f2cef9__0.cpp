// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_obi_spi_peripheral.h for the primary calling header

#include "Vtb_obi_spi_peripheral__pch.h"
#include "Vtb_obi_spi_peripheral__Syms.h"
#include "Vtb_obi_spi_peripheral___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_obi_spi_peripheral___024root___eval_initial__TOP__Vtiming__1(Vtb_obi_spi_peripheral___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_obi_spi_peripheral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_obi_spi_peripheral___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtask_tb_obi_spi_peripheral__DOT__send_spi_byte__0__spi_data;
    __Vtask_tb_obi_spi_peripheral__DOT__send_spi_byte__0__spi_data = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__1__status_val;
    __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__1__status_val = 0;
    CData/*0:0*/ __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__1__busy_bit;
    __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__1__busy_bit = 0;
    CData/*0:0*/ __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__1__done_bit_tb;
    __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__1__done_bit_tb = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__1__timeout_count;
    __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__1__timeout_count = 0;
    SData/*11:0*/ __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__2__offset;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__2__offset = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__2__r_data;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__2__r_data = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__2__timeout_count_gnt;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__2__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__2__timeout_count_rvalid;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__2__timeout_count_rvalid = 0;
    SData/*11:0*/ __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__3__offset;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__3__offset = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__3__r_data;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__3__r_data = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__3__timeout_count_gnt;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__3__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__3__timeout_count_rvalid;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__3__timeout_count_rvalid = 0;
    SData/*11:0*/ __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__4__offset;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__4__offset = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__4__r_data;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__4__r_data = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__4__timeout_count_gnt;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__4__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__4__timeout_count_rvalid;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__4__timeout_count_rvalid = 0;
    SData/*11:0*/ __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__5__offset;
    __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__5__offset = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__5__data;
    __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__5__data = 0;
    CData/*3:0*/ __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__5__byte_en;
    __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__5__byte_en = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__5__timeout_count;
    __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__5__timeout_count = 0;
    SData/*11:0*/ __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__6__offset;
    __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__6__offset = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__6__data;
    __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__6__data = 0;
    CData/*3:0*/ __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__6__byte_en;
    __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__6__byte_en = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__6__timeout_count;
    __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__6__timeout_count = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__7__status_val;
    __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__7__status_val = 0;
    CData/*0:0*/ __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__7__busy_bit;
    __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__7__busy_bit = 0;
    CData/*0:0*/ __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__7__done_bit_tb;
    __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__7__done_bit_tb = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__7__timeout_count;
    __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__7__timeout_count = 0;
    SData/*11:0*/ __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__8__offset;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__8__offset = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__8__r_data;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__8__r_data = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__8__timeout_count_gnt;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__8__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__8__timeout_count_rvalid;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__8__timeout_count_rvalid = 0;
    SData/*11:0*/ __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__9__offset;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__9__offset = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__9__r_data;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__9__r_data = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__9__timeout_count_gnt;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__9__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__9__timeout_count_rvalid;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__9__timeout_count_rvalid = 0;
    SData/*11:0*/ __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__10__offset;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__10__offset = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__10__r_data;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__10__r_data = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__10__timeout_count_gnt;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__10__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__10__timeout_count_rvalid;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__10__timeout_count_rvalid = 0;
    CData/*7:0*/ __Vtask_tb_obi_spi_peripheral__DOT__send_spi_byte__11__spi_data;
    __Vtask_tb_obi_spi_peripheral__DOT__send_spi_byte__11__spi_data = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__12__status_val;
    __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__12__status_val = 0;
    CData/*0:0*/ __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__12__busy_bit;
    __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__12__busy_bit = 0;
    CData/*0:0*/ __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__12__done_bit_tb;
    __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__12__done_bit_tb = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__12__timeout_count;
    __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__12__timeout_count = 0;
    SData/*11:0*/ __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__13__offset;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__13__offset = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__13__r_data;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__13__r_data = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__13__timeout_count_gnt;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__13__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__13__timeout_count_rvalid;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__13__timeout_count_rvalid = 0;
    SData/*11:0*/ __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__14__offset;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__14__offset = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__14__r_data;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__14__r_data = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__14__timeout_count_gnt;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__14__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__14__timeout_count_rvalid;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__14__timeout_count_rvalid = 0;
    SData/*11:0*/ __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__15__offset;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__15__offset = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__15__r_data;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__15__r_data = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__15__timeout_count_gnt;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__15__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__15__timeout_count_rvalid;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__15__timeout_count_rvalid = 0;
    SData/*11:0*/ __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__16__offset;
    __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__16__offset = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__16__data;
    __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__16__data = 0;
    CData/*3:0*/ __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__16__byte_en;
    __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__16__byte_en = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__16__timeout_count;
    __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__16__timeout_count = 0;
    SData/*11:0*/ __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__17__offset;
    __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__17__offset = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__17__data;
    __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__17__data = 0;
    CData/*3:0*/ __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__17__byte_en;
    __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__17__byte_en = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__17__timeout_count;
    __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__17__timeout_count = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__18__status_val;
    __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__18__status_val = 0;
    CData/*0:0*/ __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__18__busy_bit;
    __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__18__busy_bit = 0;
    CData/*0:0*/ __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__18__done_bit_tb;
    __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__18__done_bit_tb = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__18__timeout_count;
    __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__18__timeout_count = 0;
    SData/*11:0*/ __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__19__offset;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__19__offset = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__19__r_data;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__19__r_data = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__19__timeout_count_gnt;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__19__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__19__timeout_count_rvalid;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__19__timeout_count_rvalid = 0;
    SData/*11:0*/ __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__20__offset;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__20__offset = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__20__r_data;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__20__r_data = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__20__timeout_count_gnt;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__20__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__20__timeout_count_rvalid;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__20__timeout_count_rvalid = 0;
    SData/*11:0*/ __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__21__offset;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__21__offset = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__21__r_data;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__21__r_data = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__21__timeout_count_gnt;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__21__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__21__timeout_count_rvalid;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__21__timeout_count_rvalid = 0;
    VlWide<7>/*223:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x6572616cU;
    __Vtemp_1[2U] = 0x72697068U;
    __Vtemp_1[3U] = 0x695f7065U;
    __Vtemp_1[4U] = 0x695f7370U;
    __Vtemp_1[5U] = 0x625f6f62U;
    __Vtemp_1[6U] = 0x74U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(7, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_obi_spi_peripheral__DOT__rst_ni = 0U;
    VL_WRITEF_NX("%t : TB: Asserting Reset\n",0,64,
                 VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                         166);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__rst_ni = 1U;
    VL_WRITEF_NX("%t : TB: Deasserting Reset\n",0,64,
                 VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                         "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                         169);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%t : TB: Starting Test Sequence...\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    __Vtask_tb_obi_spi_peripheral__DOT__send_spi_byte__0__spi_data = 0xaaU;
    VL_WRITEF_NX("%t : TB: Sending SPI byte: 0x%02x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(__Vtask_tb_obi_spi_peripheral__DOT__send_spi_byte__0__spi_data));
    Verilated::runFlushCallbacks();
    __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__1__timeout_count = 0U;
    VL_WRITEF_NX("%t : TB: Waiting for SPI Engine to finish...\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                         "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                         130);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__2__offset = 8U;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__2__timeout_count_gnt = 0U;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__2__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                         "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                         86);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__req_i = 1U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__we_i = 0U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i = __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__2__offset;
    vlSelfRef.tb_obi_spi_peripheral__DOT__be_i = 0xfU;
    vlSelfRef.tb_obi_spi_peripheral__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i);
    Verilated::runFlushCallbacks();
    while (((~ (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o)) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__2__timeout_count_gnt))) {
        co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                             "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__2__timeout_count_gnt 
            = ((IData)(1U) + __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__2__timeout_count_gnt);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__2__timeout_count_gnt))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_peripheral.sv:99: Assertion failed in %Ntb_obi_spi_peripheral.read_obi_direct: %t : TB: Timeout waiting for OBI grant during read from 0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                     1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 99, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 100, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x. GNT=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                 1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o));
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                         "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                         104);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__req_i = 0U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : TB: OBI Read Req Deasserted.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    while (((~ (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rvalid_q_internal)) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__2__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                             "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                             110);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__2__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__2__timeout_count_rvalid);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__2__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_peripheral.sv:114: Assertion failed in %Ntb_obi_spi_peripheral.read_obi_direct: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. RVALID=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                     1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rvalid_q_internal));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 114, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 115, "");
    }
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__2__r_data 
        = vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rdata_q_internal;
    VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x. RVALID=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                 32,__Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__2__r_data,
                 1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rvalid_q_internal));
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                         "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                         120);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__1__status_val 
        = __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__2__r_data;
    __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__1__busy_bit 
        = (1U & __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__1__status_val);
    __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__1__done_bit_tb 
        = (1U & (__Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__1__status_val 
                 >> 1U));
    VL_WRITEF_NX("%t : TB: Polling SPI Engine Status: 0x%08x (done=%b, busy=%b)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__1__status_val,
                 1,(IData)(__Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__1__done_bit_tb),
                 1,__Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__1__busy_bit);
    Verilated::runFlushCallbacks();
    __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__1__timeout_count 
        = ((IData)(1U) + __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__1__timeout_count);
    if (__Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__1__busy_bit) {
        co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                             "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                             138);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (((IData)(__Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__1__busy_bit) 
            & VL_GTS_III(32, 0x2710U, __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__1__timeout_count))) {
        __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__3__offset = 8U;
        __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__3__timeout_count_gnt = 0U;
        __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__3__timeout_count_rvalid = 0U;
        co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                             "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                             86);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_obi_spi_peripheral__DOT__req_i = 1U;
        vlSelfRef.tb_obi_spi_peripheral__DOT__we_i = 0U;
        vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i 
            = __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__3__offset;
        vlSelfRef.tb_obi_spi_peripheral__DOT__be_i = 0xfU;
        vlSelfRef.tb_obi_spi_peripheral__DOT__req_ongoing = 1U;
        VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i);
        Verilated::runFlushCallbacks();
        while (((~ (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o)) 
                & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__3__timeout_count_gnt))) {
            co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                                 "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                                 95);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__3__timeout_count_gnt 
                = ((IData)(1U) + __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__3__timeout_count_gnt);
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__3__timeout_count_gnt))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_peripheral.sv:99: Assertion failed in %Ntb_obi_spi_peripheral.read_obi_direct: %t : TB: Timeout waiting for OBI grant during read from 0x%x. GNT=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                         1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o));
            Verilated::runFlushCallbacks();
            VL_STOP_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 99, "");
            VL_FINISH_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 100, "");
        }
        VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                     1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o));
        Verilated::runFlushCallbacks();
        co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                             "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                             104);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_obi_spi_peripheral__DOT__req_i = 0U;
        vlSelfRef.tb_obi_spi_peripheral__DOT__req_ongoing = 0U;
        VL_WRITEF_NX("%t : TB: OBI Read Req Deasserted.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
        Verilated::runFlushCallbacks();
        while (((~ (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rvalid_q_internal)) 
                & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__3__timeout_count_rvalid))) {
            co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                                 "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                                 110);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__3__timeout_count_rvalid 
                = ((IData)(1U) + __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__3__timeout_count_rvalid);
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__3__timeout_count_rvalid))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_peripheral.sv:114: Assertion failed in %Ntb_obi_spi_peripheral.read_obi_direct: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. RVALID=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                         1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rvalid_q_internal));
            Verilated::runFlushCallbacks();
            VL_STOP_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 114, "");
            VL_FINISH_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 115, "");
        }
        __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__3__r_data 
            = vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rdata_q_internal;
        VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x. RVALID=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                     32,__Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__3__r_data,
                     1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rvalid_q_internal));
        Verilated::runFlushCallbacks();
        co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                             "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                             120);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__1__status_val 
            = __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__3__r_data;
        __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__1__busy_bit 
            = (1U & __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__1__status_val);
        __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__1__done_bit_tb 
            = (1U & (__Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__1__status_val 
                     >> 1U));
        VL_WRITEF_NX("%t : TB: Polling SPI Engine Status: 0x%08x (done=%b, busy=%b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__1__status_val,
                     1,(IData)(__Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__1__done_bit_tb),
                     1,__Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__1__busy_bit);
        Verilated::runFlushCallbacks();
        __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__1__timeout_count 
            = ((IData)(1U) + __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__1__timeout_count);
        if (__Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__1__busy_bit) {
            co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                                 "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                                 138);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x2710U, __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__1__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_peripheral.sv:142: Assertion failed in %Ntb_obi_spi_peripheral.wait_spi_done: %t : TB: Timeout waiting for SPI Engine to become idle. Last Status: 0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__1__status_val);
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 142, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 143, "");
    }
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__4__offset = 8U;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__4__timeout_count_gnt = 0U;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__4__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                         "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                         86);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__req_i = 1U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__we_i = 0U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i = __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__4__offset;
    vlSelfRef.tb_obi_spi_peripheral__DOT__be_i = 0xfU;
    vlSelfRef.tb_obi_spi_peripheral__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i);
    Verilated::runFlushCallbacks();
    while (((~ (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o)) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__4__timeout_count_gnt))) {
        co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                             "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__4__timeout_count_gnt 
            = ((IData)(1U) + __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__4__timeout_count_gnt);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__4__timeout_count_gnt))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_peripheral.sv:99: Assertion failed in %Ntb_obi_spi_peripheral.read_obi_direct: %t : TB: Timeout waiting for OBI grant during read from 0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                     1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 99, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 100, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x. GNT=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                 1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o));
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                         "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                         104);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__req_i = 0U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : TB: OBI Read Req Deasserted.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    while (((~ (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rvalid_q_internal)) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__4__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                             "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                             110);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__4__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__4__timeout_count_rvalid);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__4__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_peripheral.sv:114: Assertion failed in %Ntb_obi_spi_peripheral.read_obi_direct: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. RVALID=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                     1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rvalid_q_internal));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 114, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 115, "");
    }
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__4__r_data 
        = vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rdata_q_internal;
    VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x. RVALID=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                 32,__Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__4__r_data,
                 1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rvalid_q_internal));
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                         "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                         120);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__1__status_val 
        = __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__4__r_data;
    VL_WRITEF_NX("%t : TB: SPI Engine finished. Final Status: 0x%08x (done=%b, busy=%b)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__1__status_val,
                 1,(1U & (__Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__1__status_val 
                          >> 1U)),1,(1U & __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__1__status_val));
    Verilated::runFlushCallbacks();
    __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__5__byte_en = 1U;
    __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__5__data 
        = __Vtask_tb_obi_spi_peripheral__DOT__send_spi_byte__0__spi_data;
    __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__5__offset = 4U;
    __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__5__timeout_count = 0U;
    co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                         "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                         57);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__req_i = 1U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__we_i = 1U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i = __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__5__offset;
    vlSelfRef.tb_obi_spi_peripheral__DOT__wdata_i = __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__5__data;
    vlSelfRef.tb_obi_spi_peripheral__DOT__be_i = __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__5__byte_en;
    vlSelfRef.tb_obi_spi_peripheral__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Write Req : Addr=0x%x, Data=0x%x, BE=0x%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                 32,vlSelfRef.tb_obi_spi_peripheral__DOT__wdata_i,
                 4,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__be_i));
    Verilated::runFlushCallbacks();
    while (((~ (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o)) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__5__timeout_count))) {
        co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                             "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                             67);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__5__timeout_count 
            = ((IData)(1U) + __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__5__timeout_count);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__5__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_peripheral.sv:71: Assertion failed in %Ntb_obi_spi_peripheral.write_obi_direct: %t : TB: Timeout waiting for OBI grant during write to 0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                     1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 71, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 72, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Write Gnt Rcvd: Addr=0x%x. GNT=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                 1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o));
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                         "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                         76);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__req_i = 0U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : TB: OBI Write Req Deasserted.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                         "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__6__byte_en = 1U;
    __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__6__data = 1U;
    __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__6__offset = 0U;
    __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__6__timeout_count = 0U;
    co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                         "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                         57);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__req_i = 1U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__we_i = 1U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i = __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__6__offset;
    vlSelfRef.tb_obi_spi_peripheral__DOT__wdata_i = __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__6__data;
    vlSelfRef.tb_obi_spi_peripheral__DOT__be_i = __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__6__byte_en;
    vlSelfRef.tb_obi_spi_peripheral__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Write Req : Addr=0x%x, Data=0x%x, BE=0x%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                 32,vlSelfRef.tb_obi_spi_peripheral__DOT__wdata_i,
                 4,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__be_i));
    Verilated::runFlushCallbacks();
    while (((~ (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o)) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__6__timeout_count))) {
        co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                             "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                             67);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__6__timeout_count 
            = ((IData)(1U) + __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__6__timeout_count);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__6__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_peripheral.sv:71: Assertion failed in %Ntb_obi_spi_peripheral.write_obi_direct: %t : TB: Timeout waiting for OBI grant during write to 0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                     1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 71, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 72, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Write Gnt Rcvd: Addr=0x%x. GNT=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                 1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o));
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                         "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                         76);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__req_i = 0U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : TB: OBI Write Req Deasserted.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                         "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__7__timeout_count = 0U;
    VL_WRITEF_NX("%t : TB: Waiting for SPI Engine to finish...\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                         "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                         130);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__8__offset = 8U;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__8__timeout_count_gnt = 0U;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__8__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                         "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                         86);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__req_i = 1U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__we_i = 0U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i = __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__8__offset;
    vlSelfRef.tb_obi_spi_peripheral__DOT__be_i = 0xfU;
    vlSelfRef.tb_obi_spi_peripheral__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i);
    Verilated::runFlushCallbacks();
    while (((~ (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o)) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__8__timeout_count_gnt))) {
        co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                             "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__8__timeout_count_gnt 
            = ((IData)(1U) + __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__8__timeout_count_gnt);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__8__timeout_count_gnt))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_peripheral.sv:99: Assertion failed in %Ntb_obi_spi_peripheral.read_obi_direct: %t : TB: Timeout waiting for OBI grant during read from 0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                     1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 99, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 100, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x. GNT=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                 1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o));
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                         "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                         104);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__req_i = 0U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : TB: OBI Read Req Deasserted.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    while (((~ (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rvalid_q_internal)) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__8__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                             "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                             110);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__8__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__8__timeout_count_rvalid);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__8__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_peripheral.sv:114: Assertion failed in %Ntb_obi_spi_peripheral.read_obi_direct: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. RVALID=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                     1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rvalid_q_internal));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 114, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 115, "");
    }
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__8__r_data 
        = vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rdata_q_internal;
    VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x. RVALID=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                 32,__Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__8__r_data,
                 1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rvalid_q_internal));
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                         "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                         120);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__7__status_val 
        = __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__8__r_data;
    __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__7__busy_bit 
        = (1U & __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__7__status_val);
    __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__7__done_bit_tb 
        = (1U & (__Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__7__status_val 
                 >> 1U));
    VL_WRITEF_NX("%t : TB: Polling SPI Engine Status: 0x%08x (done=%b, busy=%b)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__7__status_val,
                 1,(IData)(__Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__7__done_bit_tb),
                 1,__Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__7__busy_bit);
    Verilated::runFlushCallbacks();
    __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__7__timeout_count 
        = ((IData)(1U) + __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__7__timeout_count);
    if (__Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__7__busy_bit) {
        co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                             "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                             138);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (((IData)(__Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__7__busy_bit) 
            & VL_GTS_III(32, 0x2710U, __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__7__timeout_count))) {
        __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__9__offset = 8U;
        __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__9__timeout_count_gnt = 0U;
        __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__9__timeout_count_rvalid = 0U;
        co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                             "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                             86);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_obi_spi_peripheral__DOT__req_i = 1U;
        vlSelfRef.tb_obi_spi_peripheral__DOT__we_i = 0U;
        vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i 
            = __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__9__offset;
        vlSelfRef.tb_obi_spi_peripheral__DOT__be_i = 0xfU;
        vlSelfRef.tb_obi_spi_peripheral__DOT__req_ongoing = 1U;
        VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i);
        Verilated::runFlushCallbacks();
        while (((~ (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o)) 
                & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__9__timeout_count_gnt))) {
            co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                                 "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                                 95);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__9__timeout_count_gnt 
                = ((IData)(1U) + __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__9__timeout_count_gnt);
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__9__timeout_count_gnt))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_peripheral.sv:99: Assertion failed in %Ntb_obi_spi_peripheral.read_obi_direct: %t : TB: Timeout waiting for OBI grant during read from 0x%x. GNT=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                         1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o));
            Verilated::runFlushCallbacks();
            VL_STOP_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 99, "");
            VL_FINISH_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 100, "");
        }
        VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                     1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o));
        Verilated::runFlushCallbacks();
        co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                             "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                             104);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_obi_spi_peripheral__DOT__req_i = 0U;
        vlSelfRef.tb_obi_spi_peripheral__DOT__req_ongoing = 0U;
        VL_WRITEF_NX("%t : TB: OBI Read Req Deasserted.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
        Verilated::runFlushCallbacks();
        while (((~ (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rvalid_q_internal)) 
                & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__9__timeout_count_rvalid))) {
            co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                                 "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                                 110);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__9__timeout_count_rvalid 
                = ((IData)(1U) + __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__9__timeout_count_rvalid);
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__9__timeout_count_rvalid))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_peripheral.sv:114: Assertion failed in %Ntb_obi_spi_peripheral.read_obi_direct: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. RVALID=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                         1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rvalid_q_internal));
            Verilated::runFlushCallbacks();
            VL_STOP_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 114, "");
            VL_FINISH_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 115, "");
        }
        __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__9__r_data 
            = vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rdata_q_internal;
        VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x. RVALID=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                     32,__Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__9__r_data,
                     1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rvalid_q_internal));
        Verilated::runFlushCallbacks();
        co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                             "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                             120);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__7__status_val 
            = __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__9__r_data;
        __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__7__busy_bit 
            = (1U & __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__7__status_val);
        __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__7__done_bit_tb 
            = (1U & (__Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__7__status_val 
                     >> 1U));
        VL_WRITEF_NX("%t : TB: Polling SPI Engine Status: 0x%08x (done=%b, busy=%b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__7__status_val,
                     1,(IData)(__Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__7__done_bit_tb),
                     1,__Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__7__busy_bit);
        Verilated::runFlushCallbacks();
        __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__7__timeout_count 
            = ((IData)(1U) + __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__7__timeout_count);
        if (__Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__7__busy_bit) {
            co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                                 "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                                 138);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x2710U, __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__7__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_peripheral.sv:142: Assertion failed in %Ntb_obi_spi_peripheral.wait_spi_done: %t : TB: Timeout waiting for SPI Engine to become idle. Last Status: 0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__7__status_val);
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 142, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 143, "");
    }
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__10__offset = 8U;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__10__timeout_count_gnt = 0U;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__10__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                         "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                         86);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__req_i = 1U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__we_i = 0U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i = __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__10__offset;
    vlSelfRef.tb_obi_spi_peripheral__DOT__be_i = 0xfU;
    vlSelfRef.tb_obi_spi_peripheral__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i);
    Verilated::runFlushCallbacks();
    while (((~ (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o)) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__10__timeout_count_gnt))) {
        co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                             "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__10__timeout_count_gnt 
            = ((IData)(1U) + __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__10__timeout_count_gnt);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__10__timeout_count_gnt))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_peripheral.sv:99: Assertion failed in %Ntb_obi_spi_peripheral.read_obi_direct: %t : TB: Timeout waiting for OBI grant during read from 0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                     1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 99, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 100, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x. GNT=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                 1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o));
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                         "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                         104);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__req_i = 0U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : TB: OBI Read Req Deasserted.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    while (((~ (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rvalid_q_internal)) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__10__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                             "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                             110);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__10__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__10__timeout_count_rvalid);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__10__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_peripheral.sv:114: Assertion failed in %Ntb_obi_spi_peripheral.read_obi_direct: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. RVALID=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                     1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rvalid_q_internal));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 114, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 115, "");
    }
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__10__r_data 
        = vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rdata_q_internal;
    VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x. RVALID=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                 32,__Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__10__r_data,
                 1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rvalid_q_internal));
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                         "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                         120);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__7__status_val 
        = __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__10__r_data;
    VL_WRITEF_NX("%t : TB: SPI Engine finished. Final Status: 0x%08x (done=%b, busy=%b)\n%t : TB: Finished sending SPI byte: 0x%02x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__7__status_val,
                 1,(1U & (__Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__7__status_val 
                          >> 1U)),1,(1U & __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__7__status_val),
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(__Vtask_tb_obi_spi_peripheral__DOT__send_spi_byte__0__spi_data));
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VdlySched.delay(0x3d090ULL, 
                                         nullptr, "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                         176);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_obi_spi_peripheral__DOT__send_spi_byte__11__spi_data = 0x55U;
    VL_WRITEF_NX("%t : TB: Sending SPI byte: 0x%02x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(__Vtask_tb_obi_spi_peripheral__DOT__send_spi_byte__11__spi_data));
    Verilated::runFlushCallbacks();
    __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__12__timeout_count = 0U;
    VL_WRITEF_NX("%t : TB: Waiting for SPI Engine to finish...\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                         "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                         130);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__13__offset = 8U;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__13__timeout_count_gnt = 0U;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__13__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                         "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                         86);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__req_i = 1U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__we_i = 0U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i = __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__13__offset;
    vlSelfRef.tb_obi_spi_peripheral__DOT__be_i = 0xfU;
    vlSelfRef.tb_obi_spi_peripheral__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i);
    Verilated::runFlushCallbacks();
    while (((~ (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o)) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__13__timeout_count_gnt))) {
        co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                             "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__13__timeout_count_gnt 
            = ((IData)(1U) + __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__13__timeout_count_gnt);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__13__timeout_count_gnt))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_peripheral.sv:99: Assertion failed in %Ntb_obi_spi_peripheral.read_obi_direct: %t : TB: Timeout waiting for OBI grant during read from 0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                     1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 99, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 100, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x. GNT=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                 1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o));
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                         "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                         104);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__req_i = 0U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : TB: OBI Read Req Deasserted.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    while (((~ (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rvalid_q_internal)) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__13__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                             "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                             110);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__13__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__13__timeout_count_rvalid);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__13__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_peripheral.sv:114: Assertion failed in %Ntb_obi_spi_peripheral.read_obi_direct: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. RVALID=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                     1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rvalid_q_internal));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 114, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 115, "");
    }
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__13__r_data 
        = vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rdata_q_internal;
    VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x. RVALID=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                 32,__Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__13__r_data,
                 1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rvalid_q_internal));
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                         "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                         120);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__12__status_val 
        = __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__13__r_data;
    __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__12__busy_bit 
        = (1U & __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__12__status_val);
    __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__12__done_bit_tb 
        = (1U & (__Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__12__status_val 
                 >> 1U));
    VL_WRITEF_NX("%t : TB: Polling SPI Engine Status: 0x%08x (done=%b, busy=%b)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__12__status_val,
                 1,(IData)(__Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__12__done_bit_tb),
                 1,__Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__12__busy_bit);
    Verilated::runFlushCallbacks();
    __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__12__timeout_count 
        = ((IData)(1U) + __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__12__timeout_count);
    if (__Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__12__busy_bit) {
        co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                             "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                             138);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (((IData)(__Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__12__busy_bit) 
            & VL_GTS_III(32, 0x2710U, __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__12__timeout_count))) {
        __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__14__offset = 8U;
        __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__14__timeout_count_gnt = 0U;
        __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__14__timeout_count_rvalid = 0U;
        co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                             "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                             86);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_obi_spi_peripheral__DOT__req_i = 1U;
        vlSelfRef.tb_obi_spi_peripheral__DOT__we_i = 0U;
        vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i 
            = __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__14__offset;
        vlSelfRef.tb_obi_spi_peripheral__DOT__be_i = 0xfU;
        vlSelfRef.tb_obi_spi_peripheral__DOT__req_ongoing = 1U;
        VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i);
        Verilated::runFlushCallbacks();
        while (((~ (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o)) 
                & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__14__timeout_count_gnt))) {
            co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                                 "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                                 95);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__14__timeout_count_gnt 
                = ((IData)(1U) + __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__14__timeout_count_gnt);
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__14__timeout_count_gnt))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_peripheral.sv:99: Assertion failed in %Ntb_obi_spi_peripheral.read_obi_direct: %t : TB: Timeout waiting for OBI grant during read from 0x%x. GNT=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                         1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o));
            Verilated::runFlushCallbacks();
            VL_STOP_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 99, "");
            VL_FINISH_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 100, "");
        }
        VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                     1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o));
        Verilated::runFlushCallbacks();
        co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                             "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                             104);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_obi_spi_peripheral__DOT__req_i = 0U;
        vlSelfRef.tb_obi_spi_peripheral__DOT__req_ongoing = 0U;
        VL_WRITEF_NX("%t : TB: OBI Read Req Deasserted.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
        Verilated::runFlushCallbacks();
        while (((~ (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rvalid_q_internal)) 
                & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__14__timeout_count_rvalid))) {
            co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                                 "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                                 110);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__14__timeout_count_rvalid 
                = ((IData)(1U) + __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__14__timeout_count_rvalid);
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__14__timeout_count_rvalid))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_peripheral.sv:114: Assertion failed in %Ntb_obi_spi_peripheral.read_obi_direct: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. RVALID=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                         1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rvalid_q_internal));
            Verilated::runFlushCallbacks();
            VL_STOP_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 114, "");
            VL_FINISH_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 115, "");
        }
        __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__14__r_data 
            = vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rdata_q_internal;
        VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x. RVALID=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                     32,__Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__14__r_data,
                     1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rvalid_q_internal));
        Verilated::runFlushCallbacks();
        co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                             "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                             120);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__12__status_val 
            = __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__14__r_data;
        __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__12__busy_bit 
            = (1U & __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__12__status_val);
        __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__12__done_bit_tb 
            = (1U & (__Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__12__status_val 
                     >> 1U));
        VL_WRITEF_NX("%t : TB: Polling SPI Engine Status: 0x%08x (done=%b, busy=%b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__12__status_val,
                     1,(IData)(__Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__12__done_bit_tb),
                     1,__Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__12__busy_bit);
        Verilated::runFlushCallbacks();
        __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__12__timeout_count 
            = ((IData)(1U) + __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__12__timeout_count);
        if (__Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__12__busy_bit) {
            co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                                 "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                                 138);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x2710U, __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__12__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_peripheral.sv:142: Assertion failed in %Ntb_obi_spi_peripheral.wait_spi_done: %t : TB: Timeout waiting for SPI Engine to become idle. Last Status: 0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__12__status_val);
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 142, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 143, "");
    }
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__15__offset = 8U;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__15__timeout_count_gnt = 0U;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__15__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                         "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                         86);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__req_i = 1U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__we_i = 0U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i = __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__15__offset;
    vlSelfRef.tb_obi_spi_peripheral__DOT__be_i = 0xfU;
    vlSelfRef.tb_obi_spi_peripheral__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i);
    Verilated::runFlushCallbacks();
    while (((~ (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o)) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__15__timeout_count_gnt))) {
        co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                             "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__15__timeout_count_gnt 
            = ((IData)(1U) + __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__15__timeout_count_gnt);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__15__timeout_count_gnt))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_peripheral.sv:99: Assertion failed in %Ntb_obi_spi_peripheral.read_obi_direct: %t : TB: Timeout waiting for OBI grant during read from 0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                     1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 99, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 100, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x. GNT=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                 1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o));
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                         "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                         104);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__req_i = 0U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : TB: OBI Read Req Deasserted.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    while (((~ (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rvalid_q_internal)) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__15__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                             "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                             110);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__15__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__15__timeout_count_rvalid);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__15__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_peripheral.sv:114: Assertion failed in %Ntb_obi_spi_peripheral.read_obi_direct: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. RVALID=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                     1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rvalid_q_internal));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 114, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 115, "");
    }
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__15__r_data 
        = vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rdata_q_internal;
    VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x. RVALID=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                 32,__Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__15__r_data,
                 1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rvalid_q_internal));
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                         "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                         120);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__12__status_val 
        = __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__15__r_data;
    VL_WRITEF_NX("%t : TB: SPI Engine finished. Final Status: 0x%08x (done=%b, busy=%b)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__12__status_val,
                 1,(1U & (__Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__12__status_val 
                          >> 1U)),1,(1U & __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__12__status_val));
    Verilated::runFlushCallbacks();
    __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__16__byte_en = 1U;
    __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__16__data 
        = __Vtask_tb_obi_spi_peripheral__DOT__send_spi_byte__11__spi_data;
    __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__16__offset = 4U;
    __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__16__timeout_count = 0U;
    co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                         "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                         57);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__req_i = 1U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__we_i = 1U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i = __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__16__offset;
    vlSelfRef.tb_obi_spi_peripheral__DOT__wdata_i = __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__16__data;
    vlSelfRef.tb_obi_spi_peripheral__DOT__be_i = __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__16__byte_en;
    vlSelfRef.tb_obi_spi_peripheral__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Write Req : Addr=0x%x, Data=0x%x, BE=0x%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                 32,vlSelfRef.tb_obi_spi_peripheral__DOT__wdata_i,
                 4,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__be_i));
    Verilated::runFlushCallbacks();
    while (((~ (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o)) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__16__timeout_count))) {
        co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                             "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                             67);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__16__timeout_count 
            = ((IData)(1U) + __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__16__timeout_count);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__16__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_peripheral.sv:71: Assertion failed in %Ntb_obi_spi_peripheral.write_obi_direct: %t : TB: Timeout waiting for OBI grant during write to 0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                     1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 71, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 72, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Write Gnt Rcvd: Addr=0x%x. GNT=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                 1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o));
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                         "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                         76);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__req_i = 0U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : TB: OBI Write Req Deasserted.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                         "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__17__byte_en = 1U;
    __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__17__data = 1U;
    __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__17__offset = 0U;
    __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__17__timeout_count = 0U;
    co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                         "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                         57);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__req_i = 1U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__we_i = 1U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i = __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__17__offset;
    vlSelfRef.tb_obi_spi_peripheral__DOT__wdata_i = __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__17__data;
    vlSelfRef.tb_obi_spi_peripheral__DOT__be_i = __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__17__byte_en;
    vlSelfRef.tb_obi_spi_peripheral__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Write Req : Addr=0x%x, Data=0x%x, BE=0x%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                 32,vlSelfRef.tb_obi_spi_peripheral__DOT__wdata_i,
                 4,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__be_i));
    Verilated::runFlushCallbacks();
    while (((~ (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o)) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__17__timeout_count))) {
        co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                             "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                             67);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__17__timeout_count 
            = ((IData)(1U) + __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__17__timeout_count);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__write_obi_direct__17__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_peripheral.sv:71: Assertion failed in %Ntb_obi_spi_peripheral.write_obi_direct: %t : TB: Timeout waiting for OBI grant during write to 0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                     1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 71, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 72, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Write Gnt Rcvd: Addr=0x%x. GNT=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                 1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o));
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                         "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                         76);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__req_i = 0U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : TB: OBI Write Req Deasserted.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                         "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__18__timeout_count = 0U;
    VL_WRITEF_NX("%t : TB: Waiting for SPI Engine to finish...\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                         "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                         130);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__19__offset = 8U;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__19__timeout_count_gnt = 0U;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__19__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                         "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                         86);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__req_i = 1U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__we_i = 0U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i = __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__19__offset;
    vlSelfRef.tb_obi_spi_peripheral__DOT__be_i = 0xfU;
    vlSelfRef.tb_obi_spi_peripheral__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i);
    Verilated::runFlushCallbacks();
    while (((~ (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o)) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__19__timeout_count_gnt))) {
        co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                             "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__19__timeout_count_gnt 
            = ((IData)(1U) + __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__19__timeout_count_gnt);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__19__timeout_count_gnt))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_peripheral.sv:99: Assertion failed in %Ntb_obi_spi_peripheral.read_obi_direct: %t : TB: Timeout waiting for OBI grant during read from 0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                     1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 99, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 100, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x. GNT=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                 1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o));
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                         "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                         104);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__req_i = 0U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : TB: OBI Read Req Deasserted.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    while (((~ (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rvalid_q_internal)) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__19__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                             "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                             110);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__19__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__19__timeout_count_rvalid);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__19__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_peripheral.sv:114: Assertion failed in %Ntb_obi_spi_peripheral.read_obi_direct: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. RVALID=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                     1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rvalid_q_internal));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 114, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 115, "");
    }
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__19__r_data 
        = vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rdata_q_internal;
    VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x. RVALID=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                 32,__Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__19__r_data,
                 1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rvalid_q_internal));
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                         "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                         120);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__18__status_val 
        = __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__19__r_data;
    __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__18__busy_bit 
        = (1U & __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__18__status_val);
    __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__18__done_bit_tb 
        = (1U & (__Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__18__status_val 
                 >> 1U));
    VL_WRITEF_NX("%t : TB: Polling SPI Engine Status: 0x%08x (done=%b, busy=%b)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__18__status_val,
                 1,(IData)(__Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__18__done_bit_tb),
                 1,__Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__18__busy_bit);
    Verilated::runFlushCallbacks();
    __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__18__timeout_count 
        = ((IData)(1U) + __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__18__timeout_count);
    if (__Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__18__busy_bit) {
        co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                             "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                             138);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (((IData)(__Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__18__busy_bit) 
            & VL_GTS_III(32, 0x2710U, __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__18__timeout_count))) {
        __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__20__offset = 8U;
        __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__20__timeout_count_gnt = 0U;
        __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__20__timeout_count_rvalid = 0U;
        co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                             "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                             86);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_obi_spi_peripheral__DOT__req_i = 1U;
        vlSelfRef.tb_obi_spi_peripheral__DOT__we_i = 0U;
        vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i 
            = __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__20__offset;
        vlSelfRef.tb_obi_spi_peripheral__DOT__be_i = 0xfU;
        vlSelfRef.tb_obi_spi_peripheral__DOT__req_ongoing = 1U;
        VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i);
        Verilated::runFlushCallbacks();
        while (((~ (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o)) 
                & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__20__timeout_count_gnt))) {
            co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                                 "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                                 95);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__20__timeout_count_gnt 
                = ((IData)(1U) + __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__20__timeout_count_gnt);
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__20__timeout_count_gnt))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_peripheral.sv:99: Assertion failed in %Ntb_obi_spi_peripheral.read_obi_direct: %t : TB: Timeout waiting for OBI grant during read from 0x%x. GNT=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                         1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o));
            Verilated::runFlushCallbacks();
            VL_STOP_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 99, "");
            VL_FINISH_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 100, "");
        }
        VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                     1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o));
        Verilated::runFlushCallbacks();
        co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                             "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                             104);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_obi_spi_peripheral__DOT__req_i = 0U;
        vlSelfRef.tb_obi_spi_peripheral__DOT__req_ongoing = 0U;
        VL_WRITEF_NX("%t : TB: OBI Read Req Deasserted.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
        Verilated::runFlushCallbacks();
        while (((~ (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rvalid_q_internal)) 
                & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__20__timeout_count_rvalid))) {
            co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                                 "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                                 110);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__20__timeout_count_rvalid 
                = ((IData)(1U) + __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__20__timeout_count_rvalid);
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__20__timeout_count_rvalid))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_peripheral.sv:114: Assertion failed in %Ntb_obi_spi_peripheral.read_obi_direct: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. RVALID=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                         1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rvalid_q_internal));
            Verilated::runFlushCallbacks();
            VL_STOP_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 114, "");
            VL_FINISH_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 115, "");
        }
        __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__20__r_data 
            = vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rdata_q_internal;
        VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x. RVALID=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                     32,__Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__20__r_data,
                     1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rvalid_q_internal));
        Verilated::runFlushCallbacks();
        co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                             "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                             120);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__18__status_val 
            = __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__20__r_data;
        __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__18__busy_bit 
            = (1U & __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__18__status_val);
        __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__18__done_bit_tb 
            = (1U & (__Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__18__status_val 
                     >> 1U));
        VL_WRITEF_NX("%t : TB: Polling SPI Engine Status: 0x%08x (done=%b, busy=%b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__18__status_val,
                     1,(IData)(__Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__18__done_bit_tb),
                     1,__Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__18__busy_bit);
        Verilated::runFlushCallbacks();
        __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__18__timeout_count 
            = ((IData)(1U) + __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__18__timeout_count);
        if (__Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__18__busy_bit) {
            co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                                 "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                                 138);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x2710U, __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__18__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_peripheral.sv:142: Assertion failed in %Ntb_obi_spi_peripheral.wait_spi_done: %t : TB: Timeout waiting for SPI Engine to become idle. Last Status: 0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__18__status_val);
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 142, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 143, "");
    }
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__21__offset = 8U;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__21__timeout_count_gnt = 0U;
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__21__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                         "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                         86);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__req_i = 1U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__we_i = 0U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i = __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__21__offset;
    vlSelfRef.tb_obi_spi_peripheral__DOT__be_i = 0xfU;
    vlSelfRef.tb_obi_spi_peripheral__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i);
    Verilated::runFlushCallbacks();
    while (((~ (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o)) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__21__timeout_count_gnt))) {
        co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                             "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__21__timeout_count_gnt 
            = ((IData)(1U) + __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__21__timeout_count_gnt);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__21__timeout_count_gnt))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_peripheral.sv:99: Assertion failed in %Ntb_obi_spi_peripheral.read_obi_direct: %t : TB: Timeout waiting for OBI grant during read from 0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                     1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 99, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 100, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x. GNT=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                 1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o));
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                         "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                         104);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__req_i = 0U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : TB: OBI Read Req Deasserted.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    while (((~ (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rvalid_q_internal)) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__21__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                             "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                             110);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__21__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__21__timeout_count_rvalid);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__21__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_peripheral.sv:114: Assertion failed in %Ntb_obi_spi_peripheral.read_obi_direct: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. RVALID=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                     1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rvalid_q_internal));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 114, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 115, "");
    }
    __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__21__r_data 
        = vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rdata_q_internal;
    VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x. RVALID=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i,
                 32,__Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__21__r_data,
                 1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rvalid_q_internal));
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_h2b702792__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_peripheral.clk_i)", 
                                                         "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                                         120);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__18__status_val 
        = __Vtask_tb_obi_spi_peripheral__DOT__read_obi_direct__21__r_data;
    VL_WRITEF_NX("%t : TB: SPI Engine finished. Final Status: 0x%08x (done=%b, busy=%b)\n%t : TB: Finished sending SPI byte: 0x%02x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__18__status_val,
                 1,(1U & (__Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__18__status_val 
                          >> 1U)),1,(1U & __Vtask_tb_obi_spi_peripheral__DOT__wait_spi_done__18__status_val),
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(__Vtask_tb_obi_spi_peripheral__DOT__send_spi_byte__11__spi_data));
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VdlySched.delay(0x7a120ULL, 
                                         nullptr, "rtl/user_domain/tb_obi_spi_peripheral.sv", 
                                         181);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%t : TB: Test Sequence Complete.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    VL_FINISH_MT("rtl/user_domain/tb_obi_spi_peripheral.sv", 183, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_obi_spi_peripheral___024root___dump_triggers__act(Vtb_obi_spi_peripheral___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_obi_spi_peripheral___024root___eval_triggers__act(Vtb_obi_spi_peripheral___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_obi_spi_peripheral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_obi_spi_peripheral___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__clk_i) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_obi_spi_peripheral__DOT__clk_i__0))));
    vlSelfRef.__VactTriggered.set(1U, ((~ (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__rst_ni)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_obi_spi_peripheral__DOT__rst_ni__0)));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_obi_spi_peripheral__DOT__clk_i__0 
        = vlSelfRef.tb_obi_spi_peripheral__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_obi_spi_peripheral__DOT__rst_ni__0 
        = vlSelfRef.tb_obi_spi_peripheral__DOT__rst_ni;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_obi_spi_peripheral___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_obi_spi_peripheral___024root___act_comb__TOP__0(Vtb_obi_spi_peripheral___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_obi_spi_peripheral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_obi_spi_peripheral___024root___act_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    std::string __Vtemp_1;
    // Body
    vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT____VdfgRegularize_h62409202_0_3 
        = ((~ (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__we_i)) 
           & (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__req_i));
    vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o = (
                                                   ((IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT____VdfgRegularize_h62409202_0_3) 
                                                    & (8U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i))) 
                                                   | ((IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__req_i) 
                                                      & ((IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__we_i) 
                                                         & ((0U 
                                                             == (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__state_q)) 
                                                            & (((4U 
                                                                 == 
                                                                 (0xfffU 
                                                                  & vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i)) 
                                                                | (0U 
                                                                   == 
                                                                   (0xfffU 
                                                                    & vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i))) 
                                                               & (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__be_i))))));
    vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__read_to_status_reg_granted_this_cycle 
        = ((IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT____VdfgRegularize_h62409202_0_3) 
           & ((IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o) 
              & (8U == (0xfffU & vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i))));
    if (VL_UNLIKELY(vlSelfRef.tb_obi_spi_peripheral__DOT__req_i)) {
        __Vtemp_1 = Vtb_obi_spi_peripheral___024unit::__Venumtab_enum_name3
            [vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__state_q];
        VL_WRITEF_NX("%t [DUT_OBI_DEBUG] req_i=%b, we_i=%b, addr_i[11:0]=%x, gnt_o=%b, state_q=%@\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__req_i),
                     1,vlSelfRef.tb_obi_spi_peripheral__DOT__we_i,
                     12,(0xfffU & vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i),
                     1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o),
                     -1,&(__Vtemp_1));
        Verilated::runFlushCallbacks();
    }
}

VL_INLINE_OPT void Vtb_obi_spi_peripheral___024root___nba_sequent__TOP__0(Vtb_obi_spi_peripheral___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_obi_spi_peripheral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_obi_spi_peripheral___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__tb_obi_spi_peripheral__DOT__dut__DOT__data_latched_on_grant;
    __Vdly__tb_obi_spi_peripheral__DOT__dut__DOT__data_latched_on_grant = 0;
    CData/*0:0*/ __Vdly__tb_obi_spi_peripheral__DOT__dut__DOT__read_granted_in_prev_cycle;
    __Vdly__tb_obi_spi_peripheral__DOT__dut__DOT__read_granted_in_prev_cycle = 0;
    CData/*0:0*/ __Vdly__tb_obi_spi_peripheral__DOT__dut__DOT__rvalid_q_internal;
    __Vdly__tb_obi_spi_peripheral__DOT__dut__DOT__rvalid_q_internal = 0;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    __Vdly__tb_obi_spi_peripheral__DOT__dut__DOT__data_latched_on_grant 
        = vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__data_latched_on_grant;
    __Vdly__tb_obi_spi_peripheral__DOT__dut__DOT__read_granted_in_prev_cycle 
        = vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__read_granted_in_prev_cycle;
    __Vdly__tb_obi_spi_peripheral__DOT__dut__DOT__rvalid_q_internal 
        = vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rvalid_q_internal;
    if (vlSelfRef.tb_obi_spi_peripheral__DOT__rst_ni) {
        if (VL_UNLIKELY(((IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__state_q) 
                         != (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__state_d)))) {
            __Vtemp_1 = Vtb_obi_spi_peripheral___024unit::__Venumtab_enum_name3
                [vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__state_q];
            __Vtemp_2 = Vtb_obi_spi_peripheral___024unit::__Venumtab_enum_name3
                [vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__state_d];
            VL_WRITEF_NX("%t [DUT_FSM_DEBUG] State Transition: %@ -> %@\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,-1,&(__Vtemp_1),-1,&(__Vtemp_2));
            Verilated::runFlushCallbacks();
        }
        vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__bit_cnt_q 
            = vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__bit_cnt_d;
        vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__spi_clk_cnt_q 
            = vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__spi_clk_cnt_d;
        vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__start_flag_q 
            = vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__start_flag_d;
        vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__tx_data_q 
            = vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__tx_data_d;
        vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__done_q 
            = ((2U == (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__state_q)) 
               & (3U == (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__state_d)));
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__req_i) 
                          & (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__we_i)) 
                         & (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o)))) {
            VL_WRITEF_NX("%t [DUT_OBI_WRITE] Write to addr_offset %x granted. Data LSB: 0x%02x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,12,(0xfffU & vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i),
                         8,(0xffU & vlSelfRef.tb_obi_spi_peripheral__DOT__wdata_i));
            Verilated::runFlushCallbacks();
            if ((4U == (0xfffU & vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i))) {
                if ((1U & (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__be_i))) {
                    vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__tx_data_q 
                        = (0xffU & vlSelfRef.tb_obi_spi_peripheral__DOT__wdata_i);
                }
            } else if ((0U == (0xfffU & vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i))) {
                if ((1U & ((IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__be_i) 
                           & vlSelfRef.tb_obi_spi_peripheral__DOT__wdata_i))) {
                    vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__start_flag_q = 1U;
                }
            }
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__req_i) 
                          & (~ (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__we_i))) 
                         & (8U == (0xfffU & vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i))))) {
            VL_WRITEF_NX("%t [DUT_READ_GRANT_CHECK] read_to_status_reg_granted_this_cycle (comb) = %b (req_i=%b, !we_i=%b, gnt_o=%b, addr_match=%b)\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__read_to_status_reg_granted_this_cycle),
                         1,vlSelfRef.tb_obi_spi_peripheral__DOT__req_i,
                         1,(1U & (~ (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__we_i))),
                         1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o),
                         1,(8U == (0xfffU & vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i)));
            Verilated::runFlushCallbacks();
        }
        vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__state_q 
            = vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__state_d;
        if (VL_UNLIKELY(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__read_to_status_reg_granted_this_cycle)) {
            VL_WRITEF_NX("%t [DUT_READ_SETUP] Read granted to STATUS_REG. Latching data 0x%x for next cycle's rvalid. Status: {done=%b, busy=%b}\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,32,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__status_bits),
                         1,(1U & ((IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__status_bits) 
                                  >> 1U)),1,(1U & (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__status_bits)));
            Verilated::runFlushCallbacks();
            __Vdly__tb_obi_spi_peripheral__DOT__dut__DOT__data_latched_on_grant 
                = vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__status_bits;
            __Vdly__tb_obi_spi_peripheral__DOT__dut__DOT__read_granted_in_prev_cycle = 1U;
        } else {
            __Vdly__tb_obi_spi_peripheral__DOT__dut__DOT__read_granted_in_prev_cycle = 0U;
        }
        if (VL_UNLIKELY(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__read_granted_in_prev_cycle)) {
            __Vdly__tb_obi_spi_peripheral__DOT__dut__DOT__rvalid_q_internal = 1U;
            vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rdata_q_internal 
                = vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__data_latched_on_grant;
            VL_WRITEF_NX("%t [DUT_READ_PATH] Asserting rvalid (was granted last cycle). rdata = 0x%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,32,vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__data_latched_on_grant);
            Verilated::runFlushCallbacks();
        } else {
            if ((1U & (~ (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rvalid_q_internal)))) {
                vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rdata_q_internal = 0U;
            }
            __Vdly__tb_obi_spi_peripheral__DOT__dut__DOT__rvalid_q_internal = 0U;
        }
    } else {
        vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__state_q = 0U;
        vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__tx_data_q = 0U;
        vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__start_flag_q = 0U;
        vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__bit_cnt_q = 0U;
        vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__spi_clk_cnt_q = 0U;
        vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__done_q = 0U;
        __Vdly__tb_obi_spi_peripheral__DOT__dut__DOT__rvalid_q_internal = 0U;
        vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rdata_q_internal = 0U;
        __Vdly__tb_obi_spi_peripheral__DOT__dut__DOT__read_granted_in_prev_cycle = 0U;
        __Vdly__tb_obi_spi_peripheral__DOT__dut__DOT__data_latched_on_grant = 0U;
    }
    vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__data_latched_on_grant 
        = __Vdly__tb_obi_spi_peripheral__DOT__dut__DOT__data_latched_on_grant;
    vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__read_granted_in_prev_cycle 
        = __Vdly__tb_obi_spi_peripheral__DOT__dut__DOT__read_granted_in_prev_cycle;
    vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rvalid_q_internal 
        = __Vdly__tb_obi_spi_peripheral__DOT__dut__DOT__rvalid_q_internal;
    vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__tx_data_d 
        = vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__tx_data_q;
    vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__spi_clk_cnt_d 
        = vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__spi_clk_cnt_q;
    vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__start_flag_d 
        = vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__start_flag_q;
    vlSelfRef.tb_obi_spi_peripheral__DOT__sck_o = 0U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__status_bits 
        = (((IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__done_q) 
            << 1U) | ((0U != (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__state_q)) 
                      & (3U != (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__state_q))));
    vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__bit_cnt_d 
        = vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__bit_cnt_q;
    vlSelfRef.tb_obi_spi_peripheral__DOT__mosi_o = 
        (1U & ((IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__tx_data_q) 
               >> (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__bit_cnt_q)));
    if ((1U & (~ ((IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__state_q) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__state_q)))) {
            if (vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__start_flag_q) {
                vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__start_flag_d = 0U;
            }
        }
        if ((1U & (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__state_q))) {
            vlSelfRef.tb_obi_spi_peripheral__DOT__mosi_o 
                = (1U & ((IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__tx_data_q) 
                         >> 7U));
        }
    }
    vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__state_d 
        = vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__state_q;
    if ((2U & (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__state_q))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__state_q)))) {
            vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__spi_clk_cnt_d 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__spi_clk_cnt_q)));
            if ((3U == (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__spi_clk_cnt_q))) {
                vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__spi_clk_cnt_d = 0U;
                if ((0U != (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__bit_cnt_q))) {
                    vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__bit_cnt_d 
                        = (7U & ((IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__bit_cnt_q) 
                                 - (IData)(1U)));
                }
            }
            vlSelfRef.tb_obi_spi_peripheral__DOT__sck_o 
                = (2U <= (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__spi_clk_cnt_q));
        }
        if ((1U & (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__state_q))) {
            vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__state_d = 0U;
        } else if ((3U == (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__spi_clk_cnt_q))) {
            if ((0U == (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__bit_cnt_q))) {
                vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__state_d = 3U;
            }
        }
    } else if ((1U & (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__state_q))) {
        vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__spi_clk_cnt_d = 0U;
        vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__bit_cnt_d = 7U;
        vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__state_d = 2U;
    } else if (vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__start_flag_q) {
        vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__state_d = 1U;
    }
}

VL_INLINE_OPT void Vtb_obi_spi_peripheral___024root___nba_comb__TOP__1(Vtb_obi_spi_peripheral___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_obi_spi_peripheral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_obi_spi_peripheral___024root___nba_comb__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    std::string __Vtemp_1;
    // Body
    vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o = (
                                                   ((IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT____VdfgRegularize_h62409202_0_3) 
                                                    & (8U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i))) 
                                                   | ((IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__req_i) 
                                                      & ((IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__we_i) 
                                                         & ((0U 
                                                             == (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__state_q)) 
                                                            & (((4U 
                                                                 == 
                                                                 (0xfffU 
                                                                  & vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i)) 
                                                                | (0U 
                                                                   == 
                                                                   (0xfffU 
                                                                    & vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i))) 
                                                               & (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__be_i))))));
    vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__read_to_status_reg_granted_this_cycle 
        = ((IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT____VdfgRegularize_h62409202_0_3) 
           & ((IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o) 
              & (8U == (0xfffU & vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i))));
    if (VL_UNLIKELY(vlSelfRef.tb_obi_spi_peripheral__DOT__req_i)) {
        __Vtemp_1 = Vtb_obi_spi_peripheral___024unit::__Venumtab_enum_name3
            [vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__state_q];
        VL_WRITEF_NX("%t [DUT_OBI_DEBUG] req_i=%b, we_i=%b, addr_i[11:0]=%x, gnt_o=%b, state_q=%@\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__req_i),
                     1,vlSelfRef.tb_obi_spi_peripheral__DOT__we_i,
                     12,(0xfffU & vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i),
                     1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o),
                     -1,&(__Vtemp_1));
        Verilated::runFlushCallbacks();
    }
}
