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
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__write_obi__4__w_addr;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__4__w_addr = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__write_obi__4__w_data;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__4__w_data = 0;
    CData/*3:0*/ __Vtask_tb_obi_spi_direct__DOT__write_obi__4__w_be;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__4__w_be = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__write_obi__4__timeout_count;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__4__timeout_count = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__write_obi__5__w_addr;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__5__w_addr = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__write_obi__5__w_data;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__5__w_data = 0;
    CData/*3:0*/ __Vtask_tb_obi_spi_direct__DOT__write_obi__5__w_be;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__5__w_be = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__write_obi__5__timeout_count;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__5__timeout_count = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__6__status_val;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__6__status_val = 0;
    CData/*0:0*/ __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__6__busy_bit;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__6__busy_bit = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__6__timeout_count;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__6__timeout_count = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__7__r_addr;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__7__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__7__r_data_val;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__7__r_data_val = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__7__timeout_count_gnt;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__7__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__7__timeout_count_rvalid;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__7__timeout_count_rvalid = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__8__r_addr;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__8__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__8__r_data_val;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__8__r_data_val = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__8__timeout_count_gnt;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__8__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__8__timeout_count_rvalid;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__8__timeout_count_rvalid = 0;
    CData/*7:0*/ __Vtask_tb_obi_spi_direct__DOT__send_spi_byte__9__spi_data;
    __Vtask_tb_obi_spi_direct__DOT__send_spi_byte__9__spi_data = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__10__status_val;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__10__status_val = 0;
    CData/*0:0*/ __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__10__busy_bit;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__10__busy_bit = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__10__timeout_count;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__10__timeout_count = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__11__r_addr;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__11__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__11__r_data_val;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__11__r_data_val = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__11__timeout_count_gnt;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__11__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__11__timeout_count_rvalid;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__11__timeout_count_rvalid = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__12__r_addr;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__12__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__12__r_data_val;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__12__r_data_val = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__12__timeout_count_gnt;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__12__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__12__timeout_count_rvalid;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__12__timeout_count_rvalid = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__write_obi__13__w_addr;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__13__w_addr = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__write_obi__13__w_data;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__13__w_data = 0;
    CData/*3:0*/ __Vtask_tb_obi_spi_direct__DOT__write_obi__13__w_be;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__13__w_be = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__write_obi__13__timeout_count;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__13__timeout_count = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__write_obi__14__w_addr;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__14__w_addr = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__write_obi__14__w_data;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__14__w_data = 0;
    CData/*3:0*/ __Vtask_tb_obi_spi_direct__DOT__write_obi__14__w_be;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__14__w_be = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__write_obi__14__timeout_count;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__14__timeout_count = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__15__status_val;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__15__status_val = 0;
    CData/*0:0*/ __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__15__busy_bit;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__15__busy_bit = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__15__timeout_count;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__15__timeout_count = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__16__r_addr;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__16__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__16__r_data_val;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__16__r_data_val = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__16__timeout_count_gnt;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__16__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__16__timeout_count_rvalid;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__16__timeout_count_rvalid = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__17__r_addr;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__17__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__17__r_data_val;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__17__r_data_val = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__17__timeout_count_gnt;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__17__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_obi_spi_direct__DOT__read_obi__17__timeout_count_rvalid;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__17__timeout_count_rvalid = 0;
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
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb_obi_spi_direct.sv", 
                                         200);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__rst_ni = 1U;
    VL_WRITEF_NX("%t : Deasserting Reset\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9);
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "tb_obi_spi_direct.sv", 
                                                         203);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%t : Starting Test Sequence...\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    __Vtask_tb_obi_spi_direct__DOT__send_spi_byte__0__spi_data = 0xaaU;
    VL_WRITEF_NX("%t : Sending SPI byte: 0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(__Vtask_tb_obi_spi_direct__DOT__send_spi_byte__0__spi_data));
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__timeout_count = 0U;
    VL_WRITEF_NX("%t : Waiting for SPI HW to finish...\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "tb_obi_spi_direct.sv", 
                                                         155);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__2__r_addr = 8U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__2__timeout_count_gnt = 0U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__2__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "tb_obi_spi_direct.sv", 
                                                         115);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__we = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__addr = __Vtask_tb_obi_spi_direct__DOT__read_obi__2__r_addr;
    vlSelfRef.tb_obi_spi_direct__DOT__wdata = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__be = 0U;
    VL_WRITEF_NX("%t : OBI Read Req  : Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__2__r_addr);
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_tb_obi_spi_direct__DOT__read_obi__2__timeout_count_gnt))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "tb_obi_spi_direct.sv", 
                                                             123);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__2__timeout_count_gnt 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__2__timeout_count_gnt);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_tb_obi_spi_direct__DOT__read_obi__2__timeout_count_gnt))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:127: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : Timeout waiting for OBI grant during read from %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__2__r_addr);
        VL_STOP_MT("tb_obi_spi_direct.sv", 127, "");
        VL_FINISH_MT("tb_obi_spi_direct.sv", 127, "");
    }
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "tb_obi_spi_direct.sv", 
                                                         129);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__2__r_addr);
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_tb_obi_spi_direct__DOT__read_obi__2__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "tb_obi_spi_direct.sv", 
                                                             134);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__2__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__2__timeout_count_rvalid);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_tb_obi_spi_direct__DOT__read_obi__2__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:138: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : Timeout waiting for OBI rvalid during read from %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__2__r_addr);
        VL_STOP_MT("tb_obi_spi_direct.sv", 138, "");
        VL_FINISH_MT("tb_obi_spi_direct.sv", 138, "");
    }
    __Vtask_tb_obi_spi_direct__DOT__read_obi__2__r_data_val 
        = vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rdata_q;
    VL_WRITEF_NX("%t : OBI Read Data Rcvd: Addr=0x%x Data=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__2__r_addr,
                 32,__Vtask_tb_obi_spi_direct__DOT__read_obi__2__r_data_val);
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "tb_obi_spi_direct.sv", 
                                                         142);
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
                                                             "tb_obi_spi_direct.sv", 
                                                             160);
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
                                                             "tb_obi_spi_direct.sv", 
                                                             115);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_obi_spi_direct__DOT__req = 1U;
        vlSelfRef.tb_obi_spi_direct__DOT__we = 0U;
        vlSelfRef.tb_obi_spi_direct__DOT__addr = __Vtask_tb_obi_spi_direct__DOT__read_obi__3__r_addr;
        vlSelfRef.tb_obi_spi_direct__DOT__wdata = 0U;
        vlSelfRef.tb_obi_spi_direct__DOT__be = 0U;
        VL_WRITEF_NX("%t : OBI Read Req  : Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__3__r_addr);
        while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt)) 
                & VL_GTS_III(32, 0x3e8U, __Vtask_tb_obi_spi_direct__DOT__read_obi__3__timeout_count_gnt))) {
            co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_obi_spi_direct.clk)", 
                                                                 "tb_obi_spi_direct.sv", 
                                                                 123);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_obi_spi_direct__DOT__read_obi__3__timeout_count_gnt 
                = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__3__timeout_count_gnt);
        }
        if (VL_UNLIKELY((0x3e8U == __Vtask_tb_obi_spi_direct__DOT__read_obi__3__timeout_count_gnt))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:127: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : Timeout waiting for OBI grant during read from %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__3__r_addr);
            VL_STOP_MT("tb_obi_spi_direct.sv", 127, "");
            VL_FINISH_MT("tb_obi_spi_direct.sv", 127, "");
        }
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "tb_obi_spi_direct.sv", 
                                                             129);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_obi_spi_direct__DOT__req = 0U;
        vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 0U;
        VL_WRITEF_NX("%t : OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__3__r_addr);
        while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q)) 
                & VL_GTS_III(32, 0x3e8U, __Vtask_tb_obi_spi_direct__DOT__read_obi__3__timeout_count_rvalid))) {
            co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_obi_spi_direct.clk)", 
                                                                 "tb_obi_spi_direct.sv", 
                                                                 134);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_obi_spi_direct__DOT__read_obi__3__timeout_count_rvalid 
                = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__3__timeout_count_rvalid);
        }
        if (VL_UNLIKELY((0x3e8U == __Vtask_tb_obi_spi_direct__DOT__read_obi__3__timeout_count_rvalid))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:138: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : Timeout waiting for OBI rvalid during read from %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__3__r_addr);
            VL_STOP_MT("tb_obi_spi_direct.sv", 138, "");
            VL_FINISH_MT("tb_obi_spi_direct.sv", 138, "");
        }
        __Vtask_tb_obi_spi_direct__DOT__read_obi__3__r_data_val 
            = vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rdata_q;
        VL_WRITEF_NX("%t : OBI Read Data Rcvd: Addr=0x%x Data=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__3__r_addr,
                     32,__Vtask_tb_obi_spi_direct__DOT__read_obi__3__r_data_val);
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "tb_obi_spi_direct.sv", 
                                                             142);
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
                                                                 "tb_obi_spi_direct.sv", 
                                                                 160);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
    }
    if (VL_UNLIKELY((0x1388U == __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__1__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:163: Assertion failed in %Ntb_obi_spi_direct.wait_spi_done: %t : Timeout waiting for SPI HW to become idle.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9);
        VL_STOP_MT("tb_obi_spi_direct.sv", 163, "");
        VL_FINISH_MT("tb_obi_spi_direct.sv", 163, "");
    }
    VL_WRITEF_NX("%t : SPI HW finished.\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9);
    __Vtask_tb_obi_spi_direct__DOT__write_obi__4__w_be = 1U;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__4__w_data 
        = __Vtask_tb_obi_spi_direct__DOT__send_spi_byte__0__spi_data;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__4__w_addr = 4U;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__4__timeout_count = 0U;
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "tb_obi_spi_direct.sv", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__we = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__addr = __Vtask_tb_obi_spi_direct__DOT__write_obi__4__w_addr;
    vlSelfRef.tb_obi_spi_direct__DOT__wdata = __Vtask_tb_obi_spi_direct__DOT__write_obi__4__w_data;
    vlSelfRef.tb_obi_spi_direct__DOT__be = __Vtask_tb_obi_spi_direct__DOT__write_obi__4__w_be;
    VL_WRITEF_NX("%t : OBI Write Req : Addr=0x%x Data=0x%x BE=0x%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__write_obi__4__w_addr,
                 32,__Vtask_tb_obi_spi_direct__DOT__write_obi__4__w_data,
                 4,(IData)(__Vtask_tb_obi_spi_direct__DOT__write_obi__4__w_be));
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_tb_obi_spi_direct__DOT__write_obi__4__timeout_count))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "tb_obi_spi_direct.sv", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__write_obi__4__timeout_count 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__write_obi__4__timeout_count);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_tb_obi_spi_direct__DOT__write_obi__4__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:99: Assertion failed in %Ntb_obi_spi_direct.write_obi: %t : Timeout waiting for OBI grant during write to %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__write_obi__4__w_addr);
        VL_STOP_MT("tb_obi_spi_direct.sv", 99, "");
        VL_FINISH_MT("tb_obi_spi_direct.sv", 99, "");
    }
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "tb_obi_spi_direct.sv", 
                                                         101);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : OBI Write Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__write_obi__4__w_addr);
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "tb_obi_spi_direct.sv", 
                                                         105);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__we = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__be = 0U;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__5__w_be = 1U;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__5__w_data = 1U;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__5__w_addr = 0U;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__5__timeout_count = 0U;
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "tb_obi_spi_direct.sv", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__we = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__addr = __Vtask_tb_obi_spi_direct__DOT__write_obi__5__w_addr;
    vlSelfRef.tb_obi_spi_direct__DOT__wdata = __Vtask_tb_obi_spi_direct__DOT__write_obi__5__w_data;
    vlSelfRef.tb_obi_spi_direct__DOT__be = __Vtask_tb_obi_spi_direct__DOT__write_obi__5__w_be;
    VL_WRITEF_NX("%t : OBI Write Req : Addr=0x%x Data=0x%x BE=0x%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__write_obi__5__w_addr,
                 32,__Vtask_tb_obi_spi_direct__DOT__write_obi__5__w_data,
                 4,(IData)(__Vtask_tb_obi_spi_direct__DOT__write_obi__5__w_be));
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_tb_obi_spi_direct__DOT__write_obi__5__timeout_count))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "tb_obi_spi_direct.sv", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__write_obi__5__timeout_count 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__write_obi__5__timeout_count);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_tb_obi_spi_direct__DOT__write_obi__5__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:99: Assertion failed in %Ntb_obi_spi_direct.write_obi: %t : Timeout waiting for OBI grant during write to %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__write_obi__5__w_addr);
        VL_STOP_MT("tb_obi_spi_direct.sv", 99, "");
        VL_FINISH_MT("tb_obi_spi_direct.sv", 99, "");
    }
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "tb_obi_spi_direct.sv", 
                                                         101);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : OBI Write Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__write_obi__5__w_addr);
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "tb_obi_spi_direct.sv", 
                                                         105);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__we = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__be = 0U;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__6__timeout_count = 0U;
    VL_WRITEF_NX("%t : Waiting for SPI HW to finish...\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "tb_obi_spi_direct.sv", 
                                                         155);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__7__r_addr = 8U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__7__timeout_count_gnt = 0U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__7__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "tb_obi_spi_direct.sv", 
                                                         115);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__we = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__addr = __Vtask_tb_obi_spi_direct__DOT__read_obi__7__r_addr;
    vlSelfRef.tb_obi_spi_direct__DOT__wdata = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__be = 0U;
    VL_WRITEF_NX("%t : OBI Read Req  : Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__7__r_addr);
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_tb_obi_spi_direct__DOT__read_obi__7__timeout_count_gnt))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "tb_obi_spi_direct.sv", 
                                                             123);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__7__timeout_count_gnt 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__7__timeout_count_gnt);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_tb_obi_spi_direct__DOT__read_obi__7__timeout_count_gnt))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:127: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : Timeout waiting for OBI grant during read from %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__7__r_addr);
        VL_STOP_MT("tb_obi_spi_direct.sv", 127, "");
        VL_FINISH_MT("tb_obi_spi_direct.sv", 127, "");
    }
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "tb_obi_spi_direct.sv", 
                                                         129);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__7__r_addr);
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_tb_obi_spi_direct__DOT__read_obi__7__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "tb_obi_spi_direct.sv", 
                                                             134);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__7__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__7__timeout_count_rvalid);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_tb_obi_spi_direct__DOT__read_obi__7__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:138: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : Timeout waiting for OBI rvalid during read from %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__7__r_addr);
        VL_STOP_MT("tb_obi_spi_direct.sv", 138, "");
        VL_FINISH_MT("tb_obi_spi_direct.sv", 138, "");
    }
    __Vtask_tb_obi_spi_direct__DOT__read_obi__7__r_data_val 
        = vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rdata_q;
    VL_WRITEF_NX("%t : OBI Read Data Rcvd: Addr=0x%x Data=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__7__r_addr,
                 32,__Vtask_tb_obi_spi_direct__DOT__read_obi__7__r_data_val);
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "tb_obi_spi_direct.sv", 
                                                         142);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__6__status_val 
        = __Vtask_tb_obi_spi_direct__DOT__read_obi__7__r_data_val;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__6__busy_bit 
        = (1U & __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__6__status_val);
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__6__timeout_count 
        = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__6__timeout_count);
    if (__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__6__busy_bit) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "tb_obi_spi_direct.sv", 
                                                             160);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (((IData)(__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__6__busy_bit) 
            & VL_GTS_III(32, 0x1388U, __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__6__timeout_count))) {
        __Vtask_tb_obi_spi_direct__DOT__read_obi__8__r_addr = 8U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__8__timeout_count_gnt = 0U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__8__timeout_count_rvalid = 0U;
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "tb_obi_spi_direct.sv", 
                                                             115);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_obi_spi_direct__DOT__req = 1U;
        vlSelfRef.tb_obi_spi_direct__DOT__we = 0U;
        vlSelfRef.tb_obi_spi_direct__DOT__addr = __Vtask_tb_obi_spi_direct__DOT__read_obi__8__r_addr;
        vlSelfRef.tb_obi_spi_direct__DOT__wdata = 0U;
        vlSelfRef.tb_obi_spi_direct__DOT__be = 0U;
        VL_WRITEF_NX("%t : OBI Read Req  : Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__8__r_addr);
        while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt)) 
                & VL_GTS_III(32, 0x3e8U, __Vtask_tb_obi_spi_direct__DOT__read_obi__8__timeout_count_gnt))) {
            co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_obi_spi_direct.clk)", 
                                                                 "tb_obi_spi_direct.sv", 
                                                                 123);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_obi_spi_direct__DOT__read_obi__8__timeout_count_gnt 
                = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__8__timeout_count_gnt);
        }
        if (VL_UNLIKELY((0x3e8U == __Vtask_tb_obi_spi_direct__DOT__read_obi__8__timeout_count_gnt))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:127: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : Timeout waiting for OBI grant during read from %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__8__r_addr);
            VL_STOP_MT("tb_obi_spi_direct.sv", 127, "");
            VL_FINISH_MT("tb_obi_spi_direct.sv", 127, "");
        }
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "tb_obi_spi_direct.sv", 
                                                             129);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_obi_spi_direct__DOT__req = 0U;
        vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 0U;
        VL_WRITEF_NX("%t : OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__8__r_addr);
        while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q)) 
                & VL_GTS_III(32, 0x3e8U, __Vtask_tb_obi_spi_direct__DOT__read_obi__8__timeout_count_rvalid))) {
            co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_obi_spi_direct.clk)", 
                                                                 "tb_obi_spi_direct.sv", 
                                                                 134);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_obi_spi_direct__DOT__read_obi__8__timeout_count_rvalid 
                = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__8__timeout_count_rvalid);
        }
        if (VL_UNLIKELY((0x3e8U == __Vtask_tb_obi_spi_direct__DOT__read_obi__8__timeout_count_rvalid))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:138: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : Timeout waiting for OBI rvalid during read from %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__8__r_addr);
            VL_STOP_MT("tb_obi_spi_direct.sv", 138, "");
            VL_FINISH_MT("tb_obi_spi_direct.sv", 138, "");
        }
        __Vtask_tb_obi_spi_direct__DOT__read_obi__8__r_data_val 
            = vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rdata_q;
        VL_WRITEF_NX("%t : OBI Read Data Rcvd: Addr=0x%x Data=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__8__r_addr,
                     32,__Vtask_tb_obi_spi_direct__DOT__read_obi__8__r_data_val);
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "tb_obi_spi_direct.sv", 
                                                             142);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__6__status_val 
            = __Vtask_tb_obi_spi_direct__DOT__read_obi__8__r_data_val;
        __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__6__busy_bit 
            = (1U & __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__6__status_val);
        __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__6__timeout_count 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__6__timeout_count);
        if (__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__6__busy_bit) {
            co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_obi_spi_direct.clk)", 
                                                                 "tb_obi_spi_direct.sv", 
                                                                 160);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
    }
    if (VL_UNLIKELY((0x1388U == __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__6__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:163: Assertion failed in %Ntb_obi_spi_direct.wait_spi_done: %t : Timeout waiting for SPI HW to become idle.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9);
        VL_STOP_MT("tb_obi_spi_direct.sv", 163, "");
        VL_FINISH_MT("tb_obi_spi_direct.sv", 163, "");
    }
    VL_WRITEF_NX("%t : SPI HW finished.\n%t : Finished sending SPI byte: 0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,64,VL_TIME_UNITED_Q(1000),
                 -9,8,(IData)(__Vtask_tb_obi_spi_direct__DOT__send_spi_byte__0__spi_data));
    __Vtask_tb_obi_spi_direct__DOT__send_spi_byte__9__spi_data = 0x55U;
    VL_WRITEF_NX("%t : Sending SPI byte: 0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(__Vtask_tb_obi_spi_direct__DOT__send_spi_byte__9__spi_data));
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__10__timeout_count = 0U;
    VL_WRITEF_NX("%t : Waiting for SPI HW to finish...\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "tb_obi_spi_direct.sv", 
                                                         155);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__11__r_addr = 8U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__11__timeout_count_gnt = 0U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__11__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "tb_obi_spi_direct.sv", 
                                                         115);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__we = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__addr = __Vtask_tb_obi_spi_direct__DOT__read_obi__11__r_addr;
    vlSelfRef.tb_obi_spi_direct__DOT__wdata = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__be = 0U;
    VL_WRITEF_NX("%t : OBI Read Req  : Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__11__r_addr);
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_tb_obi_spi_direct__DOT__read_obi__11__timeout_count_gnt))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "tb_obi_spi_direct.sv", 
                                                             123);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__11__timeout_count_gnt 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__11__timeout_count_gnt);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_tb_obi_spi_direct__DOT__read_obi__11__timeout_count_gnt))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:127: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : Timeout waiting for OBI grant during read from %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__11__r_addr);
        VL_STOP_MT("tb_obi_spi_direct.sv", 127, "");
        VL_FINISH_MT("tb_obi_spi_direct.sv", 127, "");
    }
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "tb_obi_spi_direct.sv", 
                                                         129);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__11__r_addr);
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_tb_obi_spi_direct__DOT__read_obi__11__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "tb_obi_spi_direct.sv", 
                                                             134);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__11__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__11__timeout_count_rvalid);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_tb_obi_spi_direct__DOT__read_obi__11__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:138: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : Timeout waiting for OBI rvalid during read from %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__11__r_addr);
        VL_STOP_MT("tb_obi_spi_direct.sv", 138, "");
        VL_FINISH_MT("tb_obi_spi_direct.sv", 138, "");
    }
    __Vtask_tb_obi_spi_direct__DOT__read_obi__11__r_data_val 
        = vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rdata_q;
    VL_WRITEF_NX("%t : OBI Read Data Rcvd: Addr=0x%x Data=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__11__r_addr,
                 32,__Vtask_tb_obi_spi_direct__DOT__read_obi__11__r_data_val);
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "tb_obi_spi_direct.sv", 
                                                         142);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__10__status_val 
        = __Vtask_tb_obi_spi_direct__DOT__read_obi__11__r_data_val;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__10__busy_bit 
        = (1U & __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__10__status_val);
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__10__timeout_count 
        = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__10__timeout_count);
    if (__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__10__busy_bit) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "tb_obi_spi_direct.sv", 
                                                             160);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (((IData)(__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__10__busy_bit) 
            & VL_GTS_III(32, 0x1388U, __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__10__timeout_count))) {
        __Vtask_tb_obi_spi_direct__DOT__read_obi__12__r_addr = 8U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__12__timeout_count_gnt = 0U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__12__timeout_count_rvalid = 0U;
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "tb_obi_spi_direct.sv", 
                                                             115);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_obi_spi_direct__DOT__req = 1U;
        vlSelfRef.tb_obi_spi_direct__DOT__we = 0U;
        vlSelfRef.tb_obi_spi_direct__DOT__addr = __Vtask_tb_obi_spi_direct__DOT__read_obi__12__r_addr;
        vlSelfRef.tb_obi_spi_direct__DOT__wdata = 0U;
        vlSelfRef.tb_obi_spi_direct__DOT__be = 0U;
        VL_WRITEF_NX("%t : OBI Read Req  : Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__12__r_addr);
        while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt)) 
                & VL_GTS_III(32, 0x3e8U, __Vtask_tb_obi_spi_direct__DOT__read_obi__12__timeout_count_gnt))) {
            co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_obi_spi_direct.clk)", 
                                                                 "tb_obi_spi_direct.sv", 
                                                                 123);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_obi_spi_direct__DOT__read_obi__12__timeout_count_gnt 
                = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__12__timeout_count_gnt);
        }
        if (VL_UNLIKELY((0x3e8U == __Vtask_tb_obi_spi_direct__DOT__read_obi__12__timeout_count_gnt))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:127: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : Timeout waiting for OBI grant during read from %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__12__r_addr);
            VL_STOP_MT("tb_obi_spi_direct.sv", 127, "");
            VL_FINISH_MT("tb_obi_spi_direct.sv", 127, "");
        }
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "tb_obi_spi_direct.sv", 
                                                             129);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_obi_spi_direct__DOT__req = 0U;
        vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 0U;
        VL_WRITEF_NX("%t : OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__12__r_addr);
        while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q)) 
                & VL_GTS_III(32, 0x3e8U, __Vtask_tb_obi_spi_direct__DOT__read_obi__12__timeout_count_rvalid))) {
            co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_obi_spi_direct.clk)", 
                                                                 "tb_obi_spi_direct.sv", 
                                                                 134);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_obi_spi_direct__DOT__read_obi__12__timeout_count_rvalid 
                = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__12__timeout_count_rvalid);
        }
        if (VL_UNLIKELY((0x3e8U == __Vtask_tb_obi_spi_direct__DOT__read_obi__12__timeout_count_rvalid))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:138: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : Timeout waiting for OBI rvalid during read from %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__12__r_addr);
            VL_STOP_MT("tb_obi_spi_direct.sv", 138, "");
            VL_FINISH_MT("tb_obi_spi_direct.sv", 138, "");
        }
        __Vtask_tb_obi_spi_direct__DOT__read_obi__12__r_data_val 
            = vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rdata_q;
        VL_WRITEF_NX("%t : OBI Read Data Rcvd: Addr=0x%x Data=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__12__r_addr,
                     32,__Vtask_tb_obi_spi_direct__DOT__read_obi__12__r_data_val);
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "tb_obi_spi_direct.sv", 
                                                             142);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__10__status_val 
            = __Vtask_tb_obi_spi_direct__DOT__read_obi__12__r_data_val;
        __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__10__busy_bit 
            = (1U & __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__10__status_val);
        __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__10__timeout_count 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__10__timeout_count);
        if (__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__10__busy_bit) {
            co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_obi_spi_direct.clk)", 
                                                                 "tb_obi_spi_direct.sv", 
                                                                 160);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
    }
    if (VL_UNLIKELY((0x1388U == __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__10__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:163: Assertion failed in %Ntb_obi_spi_direct.wait_spi_done: %t : Timeout waiting for SPI HW to become idle.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9);
        VL_STOP_MT("tb_obi_spi_direct.sv", 163, "");
        VL_FINISH_MT("tb_obi_spi_direct.sv", 163, "");
    }
    VL_WRITEF_NX("%t : SPI HW finished.\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9);
    __Vtask_tb_obi_spi_direct__DOT__write_obi__13__w_be = 1U;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__13__w_data 
        = __Vtask_tb_obi_spi_direct__DOT__send_spi_byte__9__spi_data;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__13__w_addr = 4U;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__13__timeout_count = 0U;
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "tb_obi_spi_direct.sv", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__we = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__addr = __Vtask_tb_obi_spi_direct__DOT__write_obi__13__w_addr;
    vlSelfRef.tb_obi_spi_direct__DOT__wdata = __Vtask_tb_obi_spi_direct__DOT__write_obi__13__w_data;
    vlSelfRef.tb_obi_spi_direct__DOT__be = __Vtask_tb_obi_spi_direct__DOT__write_obi__13__w_be;
    VL_WRITEF_NX("%t : OBI Write Req : Addr=0x%x Data=0x%x BE=0x%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__write_obi__13__w_addr,
                 32,__Vtask_tb_obi_spi_direct__DOT__write_obi__13__w_data,
                 4,(IData)(__Vtask_tb_obi_spi_direct__DOT__write_obi__13__w_be));
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_tb_obi_spi_direct__DOT__write_obi__13__timeout_count))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "tb_obi_spi_direct.sv", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__write_obi__13__timeout_count 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__write_obi__13__timeout_count);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_tb_obi_spi_direct__DOT__write_obi__13__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:99: Assertion failed in %Ntb_obi_spi_direct.write_obi: %t : Timeout waiting for OBI grant during write to %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__write_obi__13__w_addr);
        VL_STOP_MT("tb_obi_spi_direct.sv", 99, "");
        VL_FINISH_MT("tb_obi_spi_direct.sv", 99, "");
    }
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "tb_obi_spi_direct.sv", 
                                                         101);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : OBI Write Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__write_obi__13__w_addr);
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "tb_obi_spi_direct.sv", 
                                                         105);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__we = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__be = 0U;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__14__w_be = 1U;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__14__w_data = 1U;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__14__w_addr = 0U;
    __Vtask_tb_obi_spi_direct__DOT__write_obi__14__timeout_count = 0U;
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "tb_obi_spi_direct.sv", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__we = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__addr = __Vtask_tb_obi_spi_direct__DOT__write_obi__14__w_addr;
    vlSelfRef.tb_obi_spi_direct__DOT__wdata = __Vtask_tb_obi_spi_direct__DOT__write_obi__14__w_data;
    vlSelfRef.tb_obi_spi_direct__DOT__be = __Vtask_tb_obi_spi_direct__DOT__write_obi__14__w_be;
    VL_WRITEF_NX("%t : OBI Write Req : Addr=0x%x Data=0x%x BE=0x%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__write_obi__14__w_addr,
                 32,__Vtask_tb_obi_spi_direct__DOT__write_obi__14__w_data,
                 4,(IData)(__Vtask_tb_obi_spi_direct__DOT__write_obi__14__w_be));
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_tb_obi_spi_direct__DOT__write_obi__14__timeout_count))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "tb_obi_spi_direct.sv", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__write_obi__14__timeout_count 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__write_obi__14__timeout_count);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_tb_obi_spi_direct__DOT__write_obi__14__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:99: Assertion failed in %Ntb_obi_spi_direct.write_obi: %t : Timeout waiting for OBI grant during write to %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__write_obi__14__w_addr);
        VL_STOP_MT("tb_obi_spi_direct.sv", 99, "");
        VL_FINISH_MT("tb_obi_spi_direct.sv", 99, "");
    }
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "tb_obi_spi_direct.sv", 
                                                         101);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : OBI Write Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__write_obi__14__w_addr);
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "tb_obi_spi_direct.sv", 
                                                         105);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__we = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__be = 0U;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__15__timeout_count = 0U;
    VL_WRITEF_NX("%t : Waiting for SPI HW to finish...\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "tb_obi_spi_direct.sv", 
                                                         155);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__16__r_addr = 8U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__16__timeout_count_gnt = 0U;
    __Vtask_tb_obi_spi_direct__DOT__read_obi__16__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "tb_obi_spi_direct.sv", 
                                                         115);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__we = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__addr = __Vtask_tb_obi_spi_direct__DOT__read_obi__16__r_addr;
    vlSelfRef.tb_obi_spi_direct__DOT__wdata = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__be = 0U;
    VL_WRITEF_NX("%t : OBI Read Req  : Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__16__r_addr);
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_tb_obi_spi_direct__DOT__read_obi__16__timeout_count_gnt))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "tb_obi_spi_direct.sv", 
                                                             123);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__16__timeout_count_gnt 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__16__timeout_count_gnt);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_tb_obi_spi_direct__DOT__read_obi__16__timeout_count_gnt))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:127: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : Timeout waiting for OBI grant during read from %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__16__r_addr);
        VL_STOP_MT("tb_obi_spi_direct.sv", 127, "");
        VL_FINISH_MT("tb_obi_spi_direct.sv", 127, "");
    }
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "tb_obi_spi_direct.sv", 
                                                         129);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_obi_spi_direct__DOT__req = 0U;
    vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__16__r_addr);
    while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_tb_obi_spi_direct__DOT__read_obi__16__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "tb_obi_spi_direct.sv", 
                                                             134);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__16__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__16__timeout_count_rvalid);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_tb_obi_spi_direct__DOT__read_obi__16__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:138: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : Timeout waiting for OBI rvalid during read from %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__16__r_addr);
        VL_STOP_MT("tb_obi_spi_direct.sv", 138, "");
        VL_FINISH_MT("tb_obi_spi_direct.sv", 138, "");
    }
    __Vtask_tb_obi_spi_direct__DOT__read_obi__16__r_data_val 
        = vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rdata_q;
    VL_WRITEF_NX("%t : OBI Read Data Rcvd: Addr=0x%x Data=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__16__r_addr,
                 32,__Vtask_tb_obi_spi_direct__DOT__read_obi__16__r_data_val);
    co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_obi_spi_direct.clk)", 
                                                         "tb_obi_spi_direct.sv", 
                                                         142);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__15__status_val 
        = __Vtask_tb_obi_spi_direct__DOT__read_obi__16__r_data_val;
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__15__busy_bit 
        = (1U & __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__15__status_val);
    __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__15__timeout_count 
        = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__15__timeout_count);
    if (__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__15__busy_bit) {
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "tb_obi_spi_direct.sv", 
                                                             160);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (((IData)(__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__15__busy_bit) 
            & VL_GTS_III(32, 0x1388U, __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__15__timeout_count))) {
        __Vtask_tb_obi_spi_direct__DOT__read_obi__17__r_addr = 8U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__17__timeout_count_gnt = 0U;
        __Vtask_tb_obi_spi_direct__DOT__read_obi__17__timeout_count_rvalid = 0U;
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "tb_obi_spi_direct.sv", 
                                                             115);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_obi_spi_direct__DOT__req = 1U;
        vlSelfRef.tb_obi_spi_direct__DOT__we = 0U;
        vlSelfRef.tb_obi_spi_direct__DOT__addr = __Vtask_tb_obi_spi_direct__DOT__read_obi__17__r_addr;
        vlSelfRef.tb_obi_spi_direct__DOT__wdata = 0U;
        vlSelfRef.tb_obi_spi_direct__DOT__be = 0U;
        VL_WRITEF_NX("%t : OBI Read Req  : Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__17__r_addr);
        while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__gnt)) 
                & VL_GTS_III(32, 0x3e8U, __Vtask_tb_obi_spi_direct__DOT__read_obi__17__timeout_count_gnt))) {
            co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_obi_spi_direct.clk)", 
                                                                 "tb_obi_spi_direct.sv", 
                                                                 123);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_obi_spi_direct__DOT__read_obi__17__timeout_count_gnt 
                = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__17__timeout_count_gnt);
        }
        if (VL_UNLIKELY((0x3e8U == __Vtask_tb_obi_spi_direct__DOT__read_obi__17__timeout_count_gnt))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:127: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : Timeout waiting for OBI grant during read from %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__17__r_addr);
            VL_STOP_MT("tb_obi_spi_direct.sv", 127, "");
            VL_FINISH_MT("tb_obi_spi_direct.sv", 127, "");
        }
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "tb_obi_spi_direct.sv", 
                                                             129);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_obi_spi_direct__DOT__req = 0U;
        vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing = 0U;
        VL_WRITEF_NX("%t : OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__17__r_addr);
        while (((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q)) 
                & VL_GTS_III(32, 0x3e8U, __Vtask_tb_obi_spi_direct__DOT__read_obi__17__timeout_count_rvalid))) {
            co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_obi_spi_direct.clk)", 
                                                                 "tb_obi_spi_direct.sv", 
                                                                 134);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_obi_spi_direct__DOT__read_obi__17__timeout_count_rvalid 
                = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__read_obi__17__timeout_count_rvalid);
        }
        if (VL_UNLIKELY((0x3e8U == __Vtask_tb_obi_spi_direct__DOT__read_obi__17__timeout_count_rvalid))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:138: Assertion failed in %Ntb_obi_spi_direct.read_obi: %t : Timeout waiting for OBI rvalid during read from %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_obi_spi_direct__DOT__read_obi__17__r_addr);
            VL_STOP_MT("tb_obi_spi_direct.sv", 138, "");
            VL_FINISH_MT("tb_obi_spi_direct.sv", 138, "");
        }
        __Vtask_tb_obi_spi_direct__DOT__read_obi__17__r_data_val 
            = vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rdata_q;
        VL_WRITEF_NX("%t : OBI Read Data Rcvd: Addr=0x%x Data=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_obi_spi_direct__DOT__read_obi__17__r_addr,
                     32,__Vtask_tb_obi_spi_direct__DOT__read_obi__17__r_data_val);
        co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_obi_spi_direct.clk)", 
                                                             "tb_obi_spi_direct.sv", 
                                                             142);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__15__status_val 
            = __Vtask_tb_obi_spi_direct__DOT__read_obi__17__r_data_val;
        __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__15__busy_bit 
            = (1U & __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__15__status_val);
        __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__15__timeout_count 
            = ((IData)(1U) + __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__15__timeout_count);
        if (__Vtask_tb_obi_spi_direct__DOT__wait_spi_done__15__busy_bit) {
            co_await vlSelfRef.__VtrigSched_hadee6d82__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_obi_spi_direct.clk)", 
                                                                 "tb_obi_spi_direct.sv", 
                                                                 160);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
    }
    if (VL_UNLIKELY((0x1388U == __Vtask_tb_obi_spi_direct__DOT__wait_spi_done__15__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_obi_spi_direct.sv:163: Assertion failed in %Ntb_obi_spi_direct.wait_spi_done: %t : Timeout waiting for SPI HW to become idle.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9);
        VL_STOP_MT("tb_obi_spi_direct.sv", 163, "");
        VL_FINISH_MT("tb_obi_spi_direct.sv", 163, "");
    }
    VL_WRITEF_NX("%t : SPI HW finished.\n%t : Finished sending SPI byte: 0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,64,VL_TIME_UNITED_Q(1000),
                 -9,8,(IData)(__Vtask_tb_obi_spi_direct__DOT__send_spi_byte__9__spi_data));
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "tb_obi_spi_direct.sv", 
                                         215);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%t : Test Sequence Complete.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    VL_FINISH_MT("tb_obi_spi_direct.sv", 219, "");
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
