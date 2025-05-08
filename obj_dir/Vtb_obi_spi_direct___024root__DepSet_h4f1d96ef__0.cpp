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
    CData/*0:0*/ __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__done_bit_tb;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__done_bit_tb = 0;
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
    CData/*0:0*/ __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__done_bit_tb;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__done_bit_tb = 0;
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
    CData/*0:0*/ __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__done_bit_tb;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__done_bit_tb = 0;
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
    CData/*0:0*/ __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__done_bit_tb;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__done_bit_tb = 0;
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
    VlWide<7>/*223:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x65627567U;
    __Vtemp_1[2U] = 0x63745f64U;
    __Vtemp_1[3U] = 0x64697265U;
    __Vtemp_1[4U] = 0x7370695fU;
    __Vtemp_1[5U] = 0x6f62695fU;
    __Vtemp_1[6U] = 0x74625fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(7, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_obi_spi_direct__DOT__rst_ni = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__we = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__addr = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__wdata = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__be = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : TB: Asserting Reset\n",0,64,
                 VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "rtl/user_domain/tb_obi_spi_direct.sv", 
                                         197);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__rst_ni = 1U;
    VL_WRITEF_NX("%t : TB: Deasserting Reset\n",0,64,
                 VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         200);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%t : TB: Starting Test Sequence...\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    __Vtask_tb_obi_spi_direct__DOT__send_spi_byte__0__spi_data = 0xaaU;
    VL_WRITEF_NX("%t : TB: Sending SPI byte: 0x%02x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(__Vtask_tb_obi_spi_direct__DOT__send_spi_byte__0__spi_data));
    Verilated::runFlushCallbacks();
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__timeout_count = 0U;
    VL_WRITEF_NX("%t : TB: Waiting for SPI Engine to finish...\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         150);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__2__r_addr = 8U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__2__timeout_count_gnt = 0U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__2__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         103);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__we = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__addr = __Vtask_tb_obi_spi_direct__DOT__read_obi__2__r_addr;
    vlSelfRef.tb_obi_spi_direct__DOT__wdata = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__be = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__2__r_addr);
    Verilated::runFlushCallbacks();
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt)) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__read_obi__2__timeout_count_gnt))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             113);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__2__timeout_count_gnt 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__2__timeout_count_gnt);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__read_obi__2__timeout_count_gnt))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:117: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : TB: Timeout waiting for OBI grant during read from 0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__2__r_addr,
                     1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 117, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 118, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x. GNT=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__2__r_addr,
                 1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt));
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : TB: OBI Read Req Deasserted.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q)) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__read_obi__2__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             128);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__2__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__2__timeout_count_rvalid);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__read_obi__2__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:133: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. RVALID=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__2__r_addr,
                     1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 133, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 134, "");
    }
    __Vtask_tb_obi_spi_direct__DOT__read_obi__2__r_data_val 
        = vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rdata_q;
    VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x. RVALID=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__2__r_addr,
                 32,__Vtask_tb_obi_spi_direct__DOT__read_obi__2__r_data_val,
                 1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q));
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         138);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__status_val 
        = __Vtask_tb_obi_spi_direct__DOT__read_obi__2__r_data_val;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__busy_bit 
        = (1U & __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__status_val);
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__done_bit_tb 
        = (1U & (__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__status_val 
                 >> 1U));
    VL_WRITEF_NX("%t : TB: Polling SPI Engine Status: 0x%08x (done=%b, busy=%b)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__status_val,
                 1,(IData)(__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__done_bit_tb),
                 1,__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__busy_bit);
    Verilated::runFlushCallbacks();
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__timeout_count 
        = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__timeout_count);
    if (__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__busy_bit) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             158);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (((IData)(__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__busy_bit) 
            & VL_GTS_III(32, 0x2710U, __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__timeout_count))) {
        __Vtask_tb_obi_spi_direct__DOT__read_obi__3__r_addr = 8U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__3__timeout_count_gnt = 0U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__3__timeout_count_rvalid = 0U;
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             103);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_obi_spi_direct__DOT__req = 1U;
        vlSelfRef.tb_obi_spi_direct__DOT__we = 0U;
        vlSelfRef.tb_obi_spi_direct__DOT__addr = __Vtask_tb_obi_spi_direct__DOT__read_obi__3__r_addr;
        vlSelfRef.tb_obi_spi_direct__DOT__wdata = 0U;
        vlSelfRef.tb_obi_spi_direct__DOT__be = 0U;
        vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 1U;
        VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__3__r_addr);
        Verilated::runFlushCallbacks();
        while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt)) 
                & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__read_obi__3__timeout_count_gnt))) {
            co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_obi_spi_direct.clk)", 
                                                                 "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                                 113);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_obi_spi_direct__DOT__read_obi__3__timeout_count_gnt 
                = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__3__timeout_count_gnt);
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__read_obi__3__timeout_count_gnt))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:117: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : TB: Timeout waiting for OBI grant during read from 0x%x. GNT=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__3__r_addr,
                         1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt));
            Verilated::runFlushCallbacks();
            VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 117, "");
            VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 118, "");
        }
        VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__3__r_addr,
                     1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt));
        Verilated::runFlushCallbacks();
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             122);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_obi_spi_direct__DOT__req = 0U;
        vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 0U;
        VL_WRITEF_NX("%t : TB: OBI Read Req Deasserted.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
        Verilated::runFlushCallbacks();
        while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q)) 
                & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__read_obi__3__timeout_count_rvalid))) {
            co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_obi_spi_direct.clk)", 
                                                                 "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                                 128);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_obi_spi_direct__DOT__read_obi__3__timeout_count_rvalid 
                = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__3__timeout_count_rvalid);
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__read_obi__3__timeout_count_rvalid))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:133: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. RVALID=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__3__r_addr,
                         1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q));
            Verilated::runFlushCallbacks();
            VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 133, "");
            VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 134, "");
        }
        __Vtask_tb_obi_spi_direct__DOT__read_obi__3__r_data_val 
            = vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rdata_q;
        VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x. RVALID=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__3__r_addr,
                     32,__Vtask_tb_obi_spi_direct__DOT__read_obi__3__r_data_val,
                     1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q));
        Verilated::runFlushCallbacks();
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             138);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__status_val 
            = __Vtask_tb_obi_spi_direct__DOT__read_obi__3__r_data_val;
        __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__busy_bit 
            = (1U & __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__status_val);
        __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__done_bit_tb 
            = (1U & (__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__status_val 
                     >> 1U));
        VL_WRITEF_NX("%t : TB: Polling SPI Engine Status: 0x%08x (done=%b, busy=%b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__status_val,
                     1,(IData)(__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__done_bit_tb),
                     1,__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__busy_bit);
        Verilated::runFlushCallbacks();
        __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__timeout_count 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__timeout_count);
        if (__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__busy_bit) {
            co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_obi_spi_direct.clk)", 
                                                                 "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                                 158);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x2710U, __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:162: Assertion failed in %Ntb_obi_spi_direct.wait_spi_done: %t : TB: Timeout waiting for SPI Engine to become idle. Last Status: 0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__status_val);
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 162, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 164, "");
    }
    __Vtask_tb_obi_spi_direct__DOT__read_obi__4__r_addr = 8U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__4__timeout_count_gnt = 0U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__4__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         103);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__we = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__addr = __Vtask_tb_obi_spi_direct__DOT__read_obi__4__r_addr;
    vlSelfRef.tb_obi_spi_direct__DOT__wdata = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__be = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__4__r_addr);
    Verilated::runFlushCallbacks();
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt)) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__read_obi__4__timeout_count_gnt))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             113);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__4__timeout_count_gnt 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__4__timeout_count_gnt);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__read_obi__4__timeout_count_gnt))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:117: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : TB: Timeout waiting for OBI grant during read from 0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__4__r_addr,
                     1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 117, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 118, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x. GNT=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__4__r_addr,
                 1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt));
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : TB: OBI Read Req Deasserted.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q)) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__read_obi__4__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             128);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__4__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__4__timeout_count_rvalid);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__read_obi__4__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:133: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. RVALID=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__4__r_addr,
                     1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 133, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 134, "");
    }
    __Vtask_tb_obi_spi_direct__DOT__read_obi__4__r_data_val 
        = vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rdata_q;
    VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x. RVALID=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__4__r_addr,
                 32,__Vtask_tb_obi_spi_direct__DOT__read_obi__4__r_data_val,
                 1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q));
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         138);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__status_val 
        = __Vtask_tb_obi_spi_direct__DOT__read_obi__4__r_data_val;
    VL_WRITEF_NX("%t : TB: SPI Engine finished. Final Status: 0x%08x (done=%b, busy=%b)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__status_val,
                 1,(1U & (__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__status_val 
                          >> 1U)),1,(1U & __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__status_val));
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
                                                         71);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__we = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__addr = __Vtask_tb_obi_spi_direct__DOT__write_obi__5__w_addr;
    vlSelfRef.tb_obi_spi_direct__DOT__wdata = __Vtask_tb_obi_spi_direct__DOT__write_obi__5__w_data;
    vlSelfRef.tb_obi_spi_direct__DOT__be = __Vtask_tb_obi_spi_direct__DOT__write_obi__5__w_be;
    vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Write Req : Addr=0x%x Data=0x%x BE=0x%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__write_obi__5__w_addr,
                 32,__Vtask_tb_obi_spi_direct__DOT__write_obi__5__w_data,
                 4,(IData)(__Vtask_tb_obi_spi_direct__DOT__write_obi__5__w_be));
    Verilated::runFlushCallbacks();
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt)) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__write_obi__5__timeout_count))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             81);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__write_obi__5__timeout_count 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__write_obi__5__timeout_count);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__write_obi__5__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:85: Assertion failed in %Ntb_obi_spi_direct.write_obi: %t : TB: Timeout waiting for OBI grant during write to 0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__write_obi__5__w_addr,
                     1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 85, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 86, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Write Gnt Rcvd: Addr=0x%x. GNT=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__write_obi__5__w_addr,
                 1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt));
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         90);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : TB: OBI Write Req Deasserted.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         95);
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
                                                         71);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__we = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__addr = __Vtask_tb_obi_spi_direct__DOT__write_obi__6__w_addr;
    vlSelfRef.tb_obi_spi_direct__DOT__wdata = __Vtask_tb_obi_spi_direct__DOT__write_obi__6__w_data;
    vlSelfRef.tb_obi_spi_direct__DOT__be = __Vtask_tb_obi_spi_direct__DOT__write_obi__6__w_be;
    vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Write Req : Addr=0x%x Data=0x%x BE=0x%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__write_obi__6__w_addr,
                 32,__Vtask_tb_obi_spi_direct__DOT__write_obi__6__w_data,
                 4,(IData)(__Vtask_tb_obi_spi_direct__DOT__write_obi__6__w_be));
    Verilated::runFlushCallbacks();
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt)) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__write_obi__6__timeout_count))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             81);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__write_obi__6__timeout_count 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__write_obi__6__timeout_count);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__write_obi__6__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:85: Assertion failed in %Ntb_obi_spi_direct.write_obi: %t : TB: Timeout waiting for OBI grant during write to 0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__write_obi__6__w_addr,
                     1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 85, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 86, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Write Gnt Rcvd: Addr=0x%x. GNT=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__write_obi__6__w_addr,
                 1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt));
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         90);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : TB: OBI Write Req Deasserted.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__we = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__be = 0U;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__timeout_count = 0U;
    VL_WRITEF_NX("%t : TB: Waiting for SPI Engine to finish...\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         150);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__8__r_addr = 8U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__8__timeout_count_gnt = 0U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__8__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         103);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__we = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__addr = __Vtask_tb_obi_spi_direct__DOT__read_obi__8__r_addr;
    vlSelfRef.tb_obi_spi_direct__DOT__wdata = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__be = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__8__r_addr);
    Verilated::runFlushCallbacks();
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt)) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__read_obi__8__timeout_count_gnt))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             113);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__8__timeout_count_gnt 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__8__timeout_count_gnt);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__read_obi__8__timeout_count_gnt))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:117: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : TB: Timeout waiting for OBI grant during read from 0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__8__r_addr,
                     1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 117, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 118, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x. GNT=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__8__r_addr,
                 1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt));
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : TB: OBI Read Req Deasserted.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q)) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__read_obi__8__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             128);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__8__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__8__timeout_count_rvalid);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__read_obi__8__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:133: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. RVALID=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__8__r_addr,
                     1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 133, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 134, "");
    }
    __Vtask_tb_obi_spi_direct__DOT__read_obi__8__r_data_val 
        = vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rdata_q;
    VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x. RVALID=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__8__r_addr,
                 32,__Vtask_tb_obi_spi_direct__DOT__read_obi__8__r_data_val,
                 1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q));
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         138);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__status_val 
        = __Vtask_tb_obi_spi_direct__DOT__read_obi__8__r_data_val;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__busy_bit 
        = (1U & __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__status_val);
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__done_bit_tb 
        = (1U & (__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__status_val 
                 >> 1U));
    VL_WRITEF_NX("%t : TB: Polling SPI Engine Status: 0x%08x (done=%b, busy=%b)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__status_val,
                 1,(IData)(__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__done_bit_tb),
                 1,__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__busy_bit);
    Verilated::runFlushCallbacks();
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__timeout_count 
        = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__timeout_count);
    if (__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__busy_bit) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             158);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (((IData)(__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__busy_bit) 
            & VL_GTS_III(32, 0x2710U, __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__timeout_count))) {
        __Vtask_tb_obi_spi_direct__DOT__read_obi__9__r_addr = 8U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__9__timeout_count_gnt = 0U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__9__timeout_count_rvalid = 0U;
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             103);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_obi_spi_direct__DOT__req = 1U;
        vlSelfRef.tb_obi_spi_direct__DOT__we = 0U;
        vlSelfRef.tb_obi_spi_direct__DOT__addr = __Vtask_tb_obi_spi_direct__DOT__read_obi__9__r_addr;
        vlSelfRef.tb_obi_spi_direct__DOT__wdata = 0U;
        vlSelfRef.tb_obi_spi_direct__DOT__be = 0U;
        vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 1U;
        VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__9__r_addr);
        Verilated::runFlushCallbacks();
        while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt)) 
                & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__read_obi__9__timeout_count_gnt))) {
            co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_obi_spi_direct.clk)", 
                                                                 "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                                 113);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_obi_spi_direct__DOT__read_obi__9__timeout_count_gnt 
                = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__9__timeout_count_gnt);
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__read_obi__9__timeout_count_gnt))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:117: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : TB: Timeout waiting for OBI grant during read from 0x%x. GNT=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__9__r_addr,
                         1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt));
            Verilated::runFlushCallbacks();
            VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 117, "");
            VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 118, "");
        }
        VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__9__r_addr,
                     1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt));
        Verilated::runFlushCallbacks();
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             122);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_obi_spi_direct__DOT__req = 0U;
        vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 0U;
        VL_WRITEF_NX("%t : TB: OBI Read Req Deasserted.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
        Verilated::runFlushCallbacks();
        while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q)) 
                & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__read_obi__9__timeout_count_rvalid))) {
            co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_obi_spi_direct.clk)", 
                                                                 "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                                 128);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_obi_spi_direct__DOT__read_obi__9__timeout_count_rvalid 
                = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__9__timeout_count_rvalid);
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__read_obi__9__timeout_count_rvalid))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:133: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. RVALID=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__9__r_addr,
                         1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q));
            Verilated::runFlushCallbacks();
            VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 133, "");
            VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 134, "");
        }
        __Vtask_tb_obi_spi_direct__DOT__read_obi__9__r_data_val 
            = vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rdata_q;
        VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x. RVALID=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__9__r_addr,
                     32,__Vtask_tb_obi_spi_direct__DOT__read_obi__9__r_data_val,
                     1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q));
        Verilated::runFlushCallbacks();
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             138);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__status_val 
            = __Vtask_tb_obi_spi_direct__DOT__read_obi__9__r_data_val;
        __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__busy_bit 
            = (1U & __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__status_val);
        __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__done_bit_tb 
            = (1U & (__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__status_val 
                     >> 1U));
        VL_WRITEF_NX("%t : TB: Polling SPI Engine Status: 0x%08x (done=%b, busy=%b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__status_val,
                     1,(IData)(__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__done_bit_tb),
                     1,__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__busy_bit);
        Verilated::runFlushCallbacks();
        __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__timeout_count 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__timeout_count);
        if (__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__busy_bit) {
            co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_obi_spi_direct.clk)", 
                                                                 "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                                 158);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x2710U, __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:162: Assertion failed in %Ntb_obi_spi_direct.wait_spi_done: %t : TB: Timeout waiting for SPI Engine to become idle. Last Status: 0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__status_val);
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 162, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 164, "");
    }
    __Vtask_tb_obi_spi_direct__DOT__read_obi__10__r_addr = 8U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__10__timeout_count_gnt = 0U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__10__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         103);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__we = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__addr = __Vtask_tb_obi_spi_direct__DOT__read_obi__10__r_addr;
    vlSelfRef.tb_obi_spi_direct__DOT__wdata = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__be = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__10__r_addr);
    Verilated::runFlushCallbacks();
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt)) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__read_obi__10__timeout_count_gnt))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             113);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__10__timeout_count_gnt 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__10__timeout_count_gnt);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__read_obi__10__timeout_count_gnt))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:117: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : TB: Timeout waiting for OBI grant during read from 0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__10__r_addr,
                     1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 117, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 118, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x. GNT=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__10__r_addr,
                 1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt));
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : TB: OBI Read Req Deasserted.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q)) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__read_obi__10__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             128);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__10__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__10__timeout_count_rvalid);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__read_obi__10__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:133: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. RVALID=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__10__r_addr,
                     1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 133, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 134, "");
    }
    __Vtask_tb_obi_spi_direct__DOT__read_obi__10__r_data_val 
        = vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rdata_q;
    VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x. RVALID=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__10__r_addr,
                 32,__Vtask_tb_obi_spi_direct__DOT__read_obi__10__r_data_val,
                 1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q));
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         138);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__status_val 
        = __Vtask_tb_obi_spi_direct__DOT__read_obi__10__r_data_val;
    VL_WRITEF_NX("%t : TB: SPI Engine finished. Final Status: 0x%08x (done=%b, busy=%b)\n%t : TB: Finished sending SPI byte: 0x%02x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__status_val,
                 1,(1U & (__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__status_val 
                          >> 1U)),1,(1U & __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__7__status_val),
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(__Vtask_tb_obi_spi_direct__DOT__send_spi_byte__0__spi_data));
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VdlySched.delay(0x3d090ULL, 
                                         nullptr, "rtl/user_domain/tb_obi_spi_direct.sv", 
                                         205);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_obi_spi_direct__DOT__send_spi_byte__11__spi_data = 0x55U;
    VL_WRITEF_NX("%t : TB: Sending SPI byte: 0x%02x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(__Vtask_tb_obi_spi_direct__DOT__send_spi_byte__11__spi_data));
    Verilated::runFlushCallbacks();
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__timeout_count = 0U;
    VL_WRITEF_NX("%t : TB: Waiting for SPI Engine to finish...\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         150);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__13__r_addr = 8U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__13__timeout_count_gnt = 0U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__13__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         103);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__we = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__addr = __Vtask_tb_obi_spi_direct__DOT__read_obi__13__r_addr;
    vlSelfRef.tb_obi_spi_direct__DOT__wdata = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__be = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__13__r_addr);
    Verilated::runFlushCallbacks();
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt)) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__read_obi__13__timeout_count_gnt))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             113);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__13__timeout_count_gnt 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__13__timeout_count_gnt);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__read_obi__13__timeout_count_gnt))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:117: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : TB: Timeout waiting for OBI grant during read from 0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__13__r_addr,
                     1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 117, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 118, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x. GNT=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__13__r_addr,
                 1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt));
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : TB: OBI Read Req Deasserted.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q)) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__read_obi__13__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             128);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__13__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__13__timeout_count_rvalid);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__read_obi__13__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:133: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. RVALID=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__13__r_addr,
                     1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 133, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 134, "");
    }
    __Vtask_tb_obi_spi_direct__DOT__read_obi__13__r_data_val 
        = vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rdata_q;
    VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x. RVALID=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__13__r_addr,
                 32,__Vtask_tb_obi_spi_direct__DOT__read_obi__13__r_data_val,
                 1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q));
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         138);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__status_val 
        = __Vtask_tb_obi_spi_direct__DOT__read_obi__13__r_data_val;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__busy_bit 
        = (1U & __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__status_val);
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__done_bit_tb 
        = (1U & (__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__status_val 
                 >> 1U));
    VL_WRITEF_NX("%t : TB: Polling SPI Engine Status: 0x%08x (done=%b, busy=%b)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__status_val,
                 1,(IData)(__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__done_bit_tb),
                 1,__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__busy_bit);
    Verilated::runFlushCallbacks();
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__timeout_count 
        = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__timeout_count);
    if (__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__busy_bit) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             158);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (((IData)(__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__busy_bit) 
            & VL_GTS_III(32, 0x2710U, __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__timeout_count))) {
        __Vtask_tb_obi_spi_direct__DOT__read_obi__14__r_addr = 8U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__14__timeout_count_gnt = 0U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__14__timeout_count_rvalid = 0U;
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             103);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_obi_spi_direct__DOT__req = 1U;
        vlSelfRef.tb_obi_spi_direct__DOT__we = 0U;
        vlSelfRef.tb_obi_spi_direct__DOT__addr = __Vtask_tb_obi_spi_direct__DOT__read_obi__14__r_addr;
        vlSelfRef.tb_obi_spi_direct__DOT__wdata = 0U;
        vlSelfRef.tb_obi_spi_direct__DOT__be = 0U;
        vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 1U;
        VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__14__r_addr);
        Verilated::runFlushCallbacks();
        while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt)) 
                & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__read_obi__14__timeout_count_gnt))) {
            co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_obi_spi_direct.clk)", 
                                                                 "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                                 113);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_obi_spi_direct__DOT__read_obi__14__timeout_count_gnt 
                = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__14__timeout_count_gnt);
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__read_obi__14__timeout_count_gnt))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:117: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : TB: Timeout waiting for OBI grant during read from 0x%x. GNT=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__14__r_addr,
                         1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt));
            Verilated::runFlushCallbacks();
            VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 117, "");
            VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 118, "");
        }
        VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__14__r_addr,
                     1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt));
        Verilated::runFlushCallbacks();
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             122);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_obi_spi_direct__DOT__req = 0U;
        vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 0U;
        VL_WRITEF_NX("%t : TB: OBI Read Req Deasserted.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
        Verilated::runFlushCallbacks();
        while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q)) 
                & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__read_obi__14__timeout_count_rvalid))) {
            co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_obi_spi_direct.clk)", 
                                                                 "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                                 128);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_obi_spi_direct__DOT__read_obi__14__timeout_count_rvalid 
                = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__14__timeout_count_rvalid);
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__read_obi__14__timeout_count_rvalid))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:133: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. RVALID=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__14__r_addr,
                         1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q));
            Verilated::runFlushCallbacks();
            VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 133, "");
            VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 134, "");
        }
        __Vtask_tb_obi_spi_direct__DOT__read_obi__14__r_data_val 
            = vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rdata_q;
        VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x. RVALID=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__14__r_addr,
                     32,__Vtask_tb_obi_spi_direct__DOT__read_obi__14__r_data_val,
                     1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q));
        Verilated::runFlushCallbacks();
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             138);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__status_val 
            = __Vtask_tb_obi_spi_direct__DOT__read_obi__14__r_data_val;
        __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__busy_bit 
            = (1U & __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__status_val);
        __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__done_bit_tb 
            = (1U & (__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__status_val 
                     >> 1U));
        VL_WRITEF_NX("%t : TB: Polling SPI Engine Status: 0x%08x (done=%b, busy=%b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__status_val,
                     1,(IData)(__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__done_bit_tb),
                     1,__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__busy_bit);
        Verilated::runFlushCallbacks();
        __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__timeout_count 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__timeout_count);
        if (__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__busy_bit) {
            co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_obi_spi_direct.clk)", 
                                                                 "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                                 158);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x2710U, __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:162: Assertion failed in %Ntb_obi_spi_direct.wait_spi_done: %t : TB: Timeout waiting for SPI Engine to become idle. Last Status: 0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__status_val);
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 162, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 164, "");
    }
    __Vtask_tb_obi_spi_direct__DOT__read_obi__15__r_addr = 8U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__15__timeout_count_gnt = 0U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__15__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         103);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__we = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__addr = __Vtask_tb_obi_spi_direct__DOT__read_obi__15__r_addr;
    vlSelfRef.tb_obi_spi_direct__DOT__wdata = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__be = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__15__r_addr);
    Verilated::runFlushCallbacks();
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt)) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__read_obi__15__timeout_count_gnt))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             113);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__15__timeout_count_gnt 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__15__timeout_count_gnt);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__read_obi__15__timeout_count_gnt))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:117: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : TB: Timeout waiting for OBI grant during read from 0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__15__r_addr,
                     1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 117, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 118, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x. GNT=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__15__r_addr,
                 1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt));
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : TB: OBI Read Req Deasserted.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q)) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__read_obi__15__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             128);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__15__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__15__timeout_count_rvalid);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__read_obi__15__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:133: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. RVALID=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__15__r_addr,
                     1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 133, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 134, "");
    }
    __Vtask_tb_obi_spi_direct__DOT__read_obi__15__r_data_val 
        = vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rdata_q;
    VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x. RVALID=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__15__r_addr,
                 32,__Vtask_tb_obi_spi_direct__DOT__read_obi__15__r_data_val,
                 1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q));
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         138);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__status_val 
        = __Vtask_tb_obi_spi_direct__DOT__read_obi__15__r_data_val;
    VL_WRITEF_NX("%t : TB: SPI Engine finished. Final Status: 0x%08x (done=%b, busy=%b)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__status_val,
                 1,(1U & (__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__status_val 
                          >> 1U)),1,(1U & __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__12__status_val));
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
                                                         71);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__we = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__addr = __Vtask_tb_obi_spi_direct__DOT__write_obi__16__w_addr;
    vlSelfRef.tb_obi_spi_direct__DOT__wdata = __Vtask_tb_obi_spi_direct__DOT__write_obi__16__w_data;
    vlSelfRef.tb_obi_spi_direct__DOT__be = __Vtask_tb_obi_spi_direct__DOT__write_obi__16__w_be;
    vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Write Req : Addr=0x%x Data=0x%x BE=0x%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__write_obi__16__w_addr,
                 32,__Vtask_tb_obi_spi_direct__DOT__write_obi__16__w_data,
                 4,(IData)(__Vtask_tb_obi_spi_direct__DOT__write_obi__16__w_be));
    Verilated::runFlushCallbacks();
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt)) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__write_obi__16__timeout_count))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             81);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__write_obi__16__timeout_count 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__write_obi__16__timeout_count);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__write_obi__16__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:85: Assertion failed in %Ntb_obi_spi_direct.write_obi: %t : TB: Timeout waiting for OBI grant during write to 0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__write_obi__16__w_addr,
                     1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 85, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 86, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Write Gnt Rcvd: Addr=0x%x. GNT=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__write_obi__16__w_addr,
                 1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt));
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         90);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : TB: OBI Write Req Deasserted.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         95);
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
                                                         71);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__we = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__addr = __Vtask_tb_obi_spi_direct__DOT__write_obi__17__w_addr;
    vlSelfRef.tb_obi_spi_direct__DOT__wdata = __Vtask_tb_obi_spi_direct__DOT__write_obi__17__w_data;
    vlSelfRef.tb_obi_spi_direct__DOT__be = __Vtask_tb_obi_spi_direct__DOT__write_obi__17__w_be;
    vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Write Req : Addr=0x%x Data=0x%x BE=0x%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__write_obi__17__w_addr,
                 32,__Vtask_tb_obi_spi_direct__DOT__write_obi__17__w_data,
                 4,(IData)(__Vtask_tb_obi_spi_direct__DOT__write_obi__17__w_be));
    Verilated::runFlushCallbacks();
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt)) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__write_obi__17__timeout_count))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             81);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__write_obi__17__timeout_count 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__write_obi__17__timeout_count);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__write_obi__17__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:85: Assertion failed in %Ntb_obi_spi_direct.write_obi: %t : TB: Timeout waiting for OBI grant during write to 0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__write_obi__17__w_addr,
                     1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 85, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 86, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Write Gnt Rcvd: Addr=0x%x. GNT=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__write_obi__17__w_addr,
                 1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt));
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         90);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : TB: OBI Write Req Deasserted.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__we = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__be = 0U;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__timeout_count = 0U;
    VL_WRITEF_NX("%t : TB: Waiting for SPI Engine to finish...\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         150);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__19__r_addr = 8U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__19__timeout_count_gnt = 0U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__19__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         103);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__we = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__addr = __Vtask_tb_obi_spi_direct__DOT__read_obi__19__r_addr;
    vlSelfRef.tb_obi_spi_direct__DOT__wdata = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__be = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__19__r_addr);
    Verilated::runFlushCallbacks();
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt)) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__read_obi__19__timeout_count_gnt))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             113);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__19__timeout_count_gnt 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__19__timeout_count_gnt);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__read_obi__19__timeout_count_gnt))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:117: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : TB: Timeout waiting for OBI grant during read from 0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__19__r_addr,
                     1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 117, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 118, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x. GNT=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__19__r_addr,
                 1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt));
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : TB: OBI Read Req Deasserted.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q)) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__read_obi__19__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             128);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__19__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__19__timeout_count_rvalid);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__read_obi__19__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:133: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. RVALID=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__19__r_addr,
                     1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 133, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 134, "");
    }
    __Vtask_tb_obi_spi_direct__DOT__read_obi__19__r_data_val 
        = vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rdata_q;
    VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x. RVALID=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__19__r_addr,
                 32,__Vtask_tb_obi_spi_direct__DOT__read_obi__19__r_data_val,
                 1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q));
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         138);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__status_val 
        = __Vtask_tb_obi_spi_direct__DOT__read_obi__19__r_data_val;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__busy_bit 
        = (1U & __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__status_val);
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__done_bit_tb 
        = (1U & (__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__status_val 
                 >> 1U));
    VL_WRITEF_NX("%t : TB: Polling SPI Engine Status: 0x%08x (done=%b, busy=%b)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__status_val,
                 1,(IData)(__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__done_bit_tb),
                 1,__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__busy_bit);
    Verilated::runFlushCallbacks();
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__timeout_count 
        = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__timeout_count);
    if (__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__busy_bit) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             158);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (((IData)(__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__busy_bit) 
            & VL_GTS_III(32, 0x2710U, __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__timeout_count))) {
        __Vtask_tb_obi_spi_direct__DOT__read_obi__20__r_addr = 8U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__20__timeout_count_gnt = 0U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__20__timeout_count_rvalid = 0U;
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             103);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_obi_spi_direct__DOT__req = 1U;
        vlSelfRef.tb_obi_spi_direct__DOT__we = 0U;
        vlSelfRef.tb_obi_spi_direct__DOT__addr = __Vtask_tb_obi_spi_direct__DOT__read_obi__20__r_addr;
        vlSelfRef.tb_obi_spi_direct__DOT__wdata = 0U;
        vlSelfRef.tb_obi_spi_direct__DOT__be = 0U;
        vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 1U;
        VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__20__r_addr);
        Verilated::runFlushCallbacks();
        while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt)) 
                & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__read_obi__20__timeout_count_gnt))) {
            co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_obi_spi_direct.clk)", 
                                                                 "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                                 113);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_obi_spi_direct__DOT__read_obi__20__timeout_count_gnt 
                = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__20__timeout_count_gnt);
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__read_obi__20__timeout_count_gnt))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:117: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : TB: Timeout waiting for OBI grant during read from 0x%x. GNT=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__20__r_addr,
                         1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt));
            Verilated::runFlushCallbacks();
            VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 117, "");
            VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 118, "");
        }
        VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__20__r_addr,
                     1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt));
        Verilated::runFlushCallbacks();
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             122);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_obi_spi_direct__DOT__req = 0U;
        vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 0U;
        VL_WRITEF_NX("%t : TB: OBI Read Req Deasserted.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
        Verilated::runFlushCallbacks();
        while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q)) 
                & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__read_obi__20__timeout_count_rvalid))) {
            co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_obi_spi_direct.clk)", 
                                                                 "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                                 128);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_obi_spi_direct__DOT__read_obi__20__timeout_count_rvalid 
                = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__20__timeout_count_rvalid);
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__read_obi__20__timeout_count_rvalid))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:133: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. RVALID=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__20__r_addr,
                         1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q));
            Verilated::runFlushCallbacks();
            VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 133, "");
            VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 134, "");
        }
        __Vtask_tb_obi_spi_direct__DOT__read_obi__20__r_data_val 
            = vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rdata_q;
        VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x. RVALID=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__20__r_addr,
                     32,__Vtask_tb_obi_spi_direct__DOT__read_obi__20__r_data_val,
                     1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q));
        Verilated::runFlushCallbacks();
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             138);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__status_val 
            = __Vtask_tb_obi_spi_direct__DOT__read_obi__20__r_data_val;
        __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__busy_bit 
            = (1U & __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__status_val);
        __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__done_bit_tb 
            = (1U & (__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__status_val 
                     >> 1U));
        VL_WRITEF_NX("%t : TB: Polling SPI Engine Status: 0x%08x (done=%b, busy=%b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__status_val,
                     1,(IData)(__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__done_bit_tb),
                     1,__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__busy_bit);
        Verilated::runFlushCallbacks();
        __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__timeout_count 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__timeout_count);
        if (__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__busy_bit) {
            co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_obi_spi_direct.clk)", 
                                                                 "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                                 158);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x2710U, __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:162: Assertion failed in %Ntb_obi_spi_direct.wait_spi_done: %t : TB: Timeout waiting for SPI Engine to become idle. Last Status: 0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__status_val);
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 162, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 164, "");
    }
    __Vtask_tb_obi_spi_direct__DOT__read_obi__21__r_addr = 8U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__21__timeout_count_gnt = 0U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__21__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         103);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__we = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__addr = __Vtask_tb_obi_spi_direct__DOT__read_obi__21__r_addr;
    vlSelfRef.tb_obi_spi_direct__DOT__wdata = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__be = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__21__r_addr);
    Verilated::runFlushCallbacks();
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt)) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__read_obi__21__timeout_count_gnt))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             113);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__21__timeout_count_gnt 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__21__timeout_count_gnt);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__read_obi__21__timeout_count_gnt))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:117: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : TB: Timeout waiting for OBI grant during read from 0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__21__r_addr,
                     1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 117, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 118, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x. GNT=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__21__r_addr,
                 1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt));
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : TB: OBI Read Req Deasserted.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q)) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__read_obi__21__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                             128);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__21__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__21__timeout_count_rvalid);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_obi_spi_direct__DOT__read_obi__21__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:133: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. RVALID=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__21__r_addr,
                     1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_obi_spi_direct.sv", 133, "");
        VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 134, "");
    }
    __Vtask_tb_obi_spi_direct__DOT__read_obi__21__r_data_val 
        = vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rdata_q;
    VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x. RVALID=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__21__r_addr,
                 32,__Vtask_tb_obi_spi_direct__DOT__read_obi__21__r_data_val,
                 1,(IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q));
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "rtl/user_domain/tb_obi_spi_direct.sv", 
                                                         138);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__status_val 
        = __Vtask_tb_obi_spi_direct__DOT__read_obi__21__r_data_val;
    VL_WRITEF_NX("%t : TB: SPI Engine finished. Final Status: 0x%08x (done=%b, busy=%b)\n%t : TB: Finished sending SPI byte: 0x%02x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__status_val,
                 1,(1U & (__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__status_val 
                          >> 1U)),1,(1U & __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__18__status_val),
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(__Vtask_tb_obi_spi_direct__DOT__send_spi_byte__11__spi_data));
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VdlySched.delay(0x7a120ULL, 
                                         nullptr, "rtl/user_domain/tb_obi_spi_direct.sv", 
                                         208);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%t : TB: Test Sequence Complete.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    VL_FINISH_MT("rtl/user_domain/tb_obi_spi_direct.sv", 210, "");
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
