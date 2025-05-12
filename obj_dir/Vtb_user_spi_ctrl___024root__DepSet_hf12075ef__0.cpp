// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_user_spi_ctrl.h for the primary calling header

#include "Vtb_user_spi_ctrl__pch.h"
#include "Vtb_user_spi_ctrl__Syms.h"
#include "Vtb_user_spi_ctrl___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_user_spi_ctrl___024root___eval_initial__TOP__Vtiming__1(Vtb_user_spi_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_spi_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_spi_ctrl___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*11:0*/ __Vtask_tb_user_spi_ctrl__DOT__write_obi__0__offset;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi__0__offset = 0;
    IData/*31:0*/ __Vtask_tb_user_spi_ctrl__DOT__write_obi__0__data;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi__0__data = 0;
    CData/*3:0*/ __Vtask_tb_user_spi_ctrl__DOT__write_obi__0__byte_en;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi__0__byte_en = 0;
    IData/*31:0*/ __Vtask_tb_user_spi_ctrl__DOT__write_obi__0__timeout_count;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi__0__timeout_count = 0;
    SData/*11:0*/ __Vtask_tb_user_spi_ctrl__DOT__read_obi__1__offset;
    __Vtask_tb_user_spi_ctrl__DOT__read_obi__1__offset = 0;
    IData/*31:0*/ __Vtask_tb_user_spi_ctrl__DOT__read_obi__1__r_data;
    __Vtask_tb_user_spi_ctrl__DOT__read_obi__1__r_data = 0;
    CData/*0:0*/ __Vtask_tb_user_spi_ctrl__DOT__read_obi__1__r_err;
    __Vtask_tb_user_spi_ctrl__DOT__read_obi__1__r_err = 0;
    IData/*31:0*/ __Vtask_tb_user_spi_ctrl__DOT__read_obi__1__timeout_count_gnt;
    __Vtask_tb_user_spi_ctrl__DOT__read_obi__1__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_user_spi_ctrl__DOT__read_obi__1__timeout_count_rvalid;
    __Vtask_tb_user_spi_ctrl__DOT__read_obi__1__timeout_count_rvalid = 0;
    SData/*11:0*/ __Vtask_tb_user_spi_ctrl__DOT__write_obi__2__offset;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi__2__offset = 0;
    IData/*31:0*/ __Vtask_tb_user_spi_ctrl__DOT__write_obi__2__data;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi__2__data = 0;
    CData/*3:0*/ __Vtask_tb_user_spi_ctrl__DOT__write_obi__2__byte_en;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi__2__byte_en = 0;
    IData/*31:0*/ __Vtask_tb_user_spi_ctrl__DOT__write_obi__2__timeout_count;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi__2__timeout_count = 0;
    SData/*11:0*/ __Vtask_tb_user_spi_ctrl__DOT__read_obi__3__offset;
    __Vtask_tb_user_spi_ctrl__DOT__read_obi__3__offset = 0;
    IData/*31:0*/ __Vtask_tb_user_spi_ctrl__DOT__read_obi__3__r_data;
    __Vtask_tb_user_spi_ctrl__DOT__read_obi__3__r_data = 0;
    CData/*0:0*/ __Vtask_tb_user_spi_ctrl__DOT__read_obi__3__r_err;
    __Vtask_tb_user_spi_ctrl__DOT__read_obi__3__r_err = 0;
    IData/*31:0*/ __Vtask_tb_user_spi_ctrl__DOT__read_obi__3__timeout_count_gnt;
    __Vtask_tb_user_spi_ctrl__DOT__read_obi__3__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_user_spi_ctrl__DOT__read_obi__3__timeout_count_rvalid;
    __Vtask_tb_user_spi_ctrl__DOT__read_obi__3__timeout_count_rvalid = 0;
    SData/*11:0*/ __Vtask_tb_user_spi_ctrl__DOT__write_obi__4__offset;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi__4__offset = 0;
    IData/*31:0*/ __Vtask_tb_user_spi_ctrl__DOT__write_obi__4__data;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi__4__data = 0;
    CData/*3:0*/ __Vtask_tb_user_spi_ctrl__DOT__write_obi__4__byte_en;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi__4__byte_en = 0;
    IData/*31:0*/ __Vtask_tb_user_spi_ctrl__DOT__write_obi__4__timeout_count;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi__4__timeout_count = 0;
    SData/*11:0*/ __Vtask_tb_user_spi_ctrl__DOT__read_obi__5__offset;
    __Vtask_tb_user_spi_ctrl__DOT__read_obi__5__offset = 0;
    IData/*31:0*/ __Vtask_tb_user_spi_ctrl__DOT__read_obi__5__r_data;
    __Vtask_tb_user_spi_ctrl__DOT__read_obi__5__r_data = 0;
    CData/*0:0*/ __Vtask_tb_user_spi_ctrl__DOT__read_obi__5__r_err;
    __Vtask_tb_user_spi_ctrl__DOT__read_obi__5__r_err = 0;
    IData/*31:0*/ __Vtask_tb_user_spi_ctrl__DOT__read_obi__5__timeout_count_gnt;
    __Vtask_tb_user_spi_ctrl__DOT__read_obi__5__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_user_spi_ctrl__DOT__read_obi__5__timeout_count_rvalid;
    __Vtask_tb_user_spi_ctrl__DOT__read_obi__5__timeout_count_rvalid = 0;
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x6374726cU;
    __Vtemp_1[2U] = 0x7370695fU;
    __Vtemp_1[3U] = 0x7365725fU;
    __Vtemp_1[4U] = 0x74625f75U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(5, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_user_spi_ctrl__DOT__rst_ni = 0U;
    VL_WRITEF_NX("%t : TB: Asserting Reset\n",0,64,
                 VL_TIME_UNITED_Q(1000),-9);
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                         135);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_spi_ctrl__DOT__rst_ni = 1U;
    VL_WRITEF_NX("%t : TB: Deasserting Reset\n",0,64,
                 VL_TIME_UNITED_Q(1000),-9);
    co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                         138);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%t : TB: Starting user_spi_ctrl Test Sequence...\n--- Test 1: Assert CS1, DC=Command ---\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    __Vtask_tb_user_spi_ctrl__DOT__write_obi__0__byte_en = 1U;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi__0__data = 2U;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi__0__offset = 0U;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi__0__timeout_count = 0U;
    co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                         57);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[0U] 
        = (1U | vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[0U]);
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[0U] 
        = ((0x1fU & vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[0U]) 
           | ((IData)((((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi__0__byte_en)) 
                        << 0x20U) | (QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi__0__data)))) 
              << 5U));
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U] 
        = (((IData)((((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi__0__byte_en)) 
                      << 0x20U) | (QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi__0__data)))) 
            >> 0x1bU) | (((IData)((1ULL | ((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi__0__offset)) 
                                           << 1U))) 
                          << 9U) | ((IData)(((((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi__0__byte_en)) 
                                               << 0x20U) 
                                              | (QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi__0__data))) 
                                             >> 0x20U)) 
                                    << 5U)));
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[2U] 
        = (0x3ffU & (((0x1fU & ((IData)((1ULL | ((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi__0__offset)) 
                                                 << 1U))) 
                                >> 0x17U)) | ((IData)(
                                                      ((((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi__0__byte_en)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi__0__data))) 
                                                       >> 0x20U)) 
                                              >> 0x1bU)) 
                     | ((0x1e0U & ((IData)((1ULL | 
                                            ((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi__0__offset)) 
                                             << 1U))) 
                                   >> 0x17U)) | ((IData)(
                                                         ((1ULL 
                                                           | ((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi__0__offset)) 
                                                              << 1U)) 
                                                          >> 0x20U)) 
                                                 << 9U))));
    vlSelfRef.tb_user_spi_ctrl__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Write Req : Addr=0x%x, Data=0x%x, BE=0x%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,((
                                                   vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[2U] 
                                                   << 0x16U) 
                                                  | (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U] 
                                                     >> 0xaU)),
                 32,__Vtask_tb_user_spi_ctrl__DOT__write_obi__0__data,
                 4,(IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi__0__byte_en));
    while (((~ (IData)((vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp_o_from_dut 
                        >> 1U))) & VL_GTS_III(32, 0x7d0U, __Vtask_tb_user_spi_ctrl__DOT__write_obi__0__timeout_count))) {
        co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                             67);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_user_spi_ctrl__DOT__write_obi__0__timeout_count 
            = ((IData)(1U) + __Vtask_tb_user_spi_ctrl__DOT__write_obi__0__timeout_count);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_user_spi_ctrl__DOT__write_obi__0__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_spi_ctrl.sv:71: Assertion failed in %Ntb_user_spi_ctrl.write_obi: %t : TB: Timeout waiting for OBI grant during write to 0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     ((vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[2U] 
                       << 0x16U) | (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U] 
                                    >> 0xaU)),1,(1U 
                                                 & (IData)(
                                                           (vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp_o_from_dut 
                                                            >> 1U))));
        VL_STOP_MT("rtl/user_domain/tb_user_spi_ctrl.sv", 71, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_spi_ctrl.sv", 72, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Write Gnt Rcvd: Addr=0x%x. GNT=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,((
                                                   vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[2U] 
                                                   << 0x16U) 
                                                  | (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U] 
                                                     >> 0xaU)),
                 1,(1U & (IData)((vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp_o_from_dut 
                                  >> 1U))));
    co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                         76);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[0U] 
        = (0xfffffffeU & vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[0U]);
    vlSelfRef.tb_user_spi_ctrl__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : TB: OBI Write Req Deasserted.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[0U] = 0U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U] = 0U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[2U] = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                         145);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((1U & (((IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__cs1_n_q) 
                            | (~ (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__cs2_n_q))) 
                           | (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__dc_q))))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_spi_ctrl.sv:147: Assertion failed in %Ntb_user_spi_ctrl.unnamedblk1: %t : TB ERROR: Test 1 outputs mismatch. CS1_N=%b (exp 0), CS2_N=%b (exp 1), DC=%b (exp 0)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__cs1_n_q),
                     1,vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__cs2_n_q,
                     1,(IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__dc_q));
        VL_STOP_MT("rtl/user_domain/tb_user_spi_ctrl.sv", 147, "");
    }
    __Vtask_tb_user_spi_ctrl__DOT__read_obi__1__offset = 0U;
    __Vtask_tb_user_spi_ctrl__DOT__read_obi__1__timeout_count_gnt = 0U;
    __Vtask_tb_user_spi_ctrl__DOT__read_obi__1__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[0U] 
        = (1U | vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[0U]);
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U] 
        = ((0x1fU & vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U]) 
           | ((IData)((0xfULL | ((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__read_obi__1__offset)) 
                                 << 5U))) << 5U));
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[2U] 
        = (0x3ffU & (((IData)((0xfULL | ((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__read_obi__1__offset)) 
                                         << 5U))) >> 0x1bU) 
                     | ((IData)(((0xfULL | ((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__read_obi__1__offset)) 
                                            << 5U)) 
                                 >> 0x20U)) << 5U)));
    vlSelfRef.tb_user_spi_ctrl__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,((
                                                   vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[2U] 
                                                   << 0x16U) 
                                                  | (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U] 
                                                     >> 0xaU)));
    while (((~ (IData)((vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp_o_from_dut 
                        >> 1U))) & VL_GTS_III(32, 0x7d0U, __Vtask_tb_user_spi_ctrl__DOT__read_obi__1__timeout_count_gnt))) {
        co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                             96);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_user_spi_ctrl__DOT__read_obi__1__timeout_count_gnt 
            = ((IData)(1U) + __Vtask_tb_user_spi_ctrl__DOT__read_obi__1__timeout_count_gnt);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_user_spi_ctrl__DOT__read_obi__1__timeout_count_gnt))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_spi_ctrl.sv:100: Assertion failed in %Ntb_user_spi_ctrl.read_obi: %t : TB: Timeout waiting for OBI grant during read from 0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     ((vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[2U] 
                       << 0x16U) | (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U] 
                                    >> 0xaU)),1,(1U 
                                                 & (IData)(
                                                           (vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp_o_from_dut 
                                                            >> 1U))));
        VL_STOP_MT("rtl/user_domain/tb_user_spi_ctrl.sv", 100, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_spi_ctrl.sv", 101, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x. GNT=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,((
                                                   vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[2U] 
                                                   << 0x16U) 
                                                  | (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U] 
                                                     >> 0xaU)),
                 1,(1U & (IData)((vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp_o_from_dut 
                                  >> 1U))));
    co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                         105);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[0U] 
        = (0xfffffffeU & vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[0U]);
    vlSelfRef.tb_user_spi_ctrl__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : TB: OBI Read Req Deasserted.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    while (((~ (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp_o_from_dut)) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_user_spi_ctrl__DOT__read_obi__1__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                             111);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_user_spi_ctrl__DOT__read_obi__1__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_tb_user_spi_ctrl__DOT__read_obi__1__timeout_count_rvalid);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_user_spi_ctrl__DOT__read_obi__1__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_spi_ctrl.sv:115: Assertion failed in %Ntb_user_spi_ctrl.read_obi: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. RVALID=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     ((vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[2U] 
                       << 0x16U) | (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U] 
                                    >> 0xaU)),1,(1U 
                                                 & (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp_o_from_dut)));
        VL_STOP_MT("rtl/user_domain/tb_user_spi_ctrl.sv", 115, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_spi_ctrl.sv", 116, "");
    }
    __Vtask_tb_user_spi_ctrl__DOT__read_obi__1__r_data 
        = (IData)((vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp_o_from_dut 
                   >> 7U));
    __Vtask_tb_user_spi_ctrl__DOT__read_obi__1__r_err 
        = (1U & (IData)((vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp_o_from_dut 
                         >> 3U)));
    VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x Err=%b RVALID=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,((
                                                   vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[2U] 
                                                   << 0x16U) 
                                                  | (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U] 
                                                     >> 0xaU)),
                 32,__Vtask_tb_user_spi_ctrl__DOT__read_obi__1__r_data,
                 1,(IData)(__Vtask_tb_user_spi_ctrl__DOT__read_obi__1__r_err),
                 1,(1U & (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp_o_from_dut)));
    co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                         121);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[0U] = 0U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U] = 0U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[2U] = 0U;
    vlSelfRef.tb_user_spi_ctrl__DOT__unnamedblk1__DOT__read_back_data 
        = __Vtask_tb_user_spi_ctrl__DOT__read_obi__1__r_data;
    vlSelfRef.tb_user_spi_ctrl__DOT__unnamedblk1__DOT__read_error 
        = __Vtask_tb_user_spi_ctrl__DOT__read_obi__1__r_err;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_user_spi_ctrl__DOT__unnamedblk1__DOT__read_error) 
                     | (2U != (7U & vlSelfRef.tb_user_spi_ctrl__DOT__unnamedblk1__DOT__read_back_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_spi_ctrl.sv:152: Assertion failed in %Ntb_user_spi_ctrl.unnamedblk1: %t : TB ERROR: Test 1 readback mismatch. Data=0x%x (exp 0x...010), Err=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.tb_user_spi_ctrl__DOT__unnamedblk1__DOT__read_back_data,
                     1,(IData)(vlSelfRef.tb_user_spi_ctrl__DOT__unnamedblk1__DOT__read_error));
        VL_STOP_MT("rtl/user_domain/tb_user_spi_ctrl.sv", 152, "");
    }
    VL_WRITEF_NX("--- Test 2: Assert CS2, DC=Data ---\n",0);
    __Vtask_tb_user_spi_ctrl__DOT__write_obi__2__byte_en = 1U;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi__2__data = 5U;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi__2__offset = 0U;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi__2__timeout_count = 0U;
    co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                         57);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[0U] 
        = (1U | vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[0U]);
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[0U] 
        = ((0x1fU & vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[0U]) 
           | ((IData)((((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi__2__byte_en)) 
                        << 0x20U) | (QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi__2__data)))) 
              << 5U));
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U] 
        = (((IData)((((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi__2__byte_en)) 
                      << 0x20U) | (QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi__2__data)))) 
            >> 0x1bU) | (((IData)((1ULL | ((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi__2__offset)) 
                                           << 1U))) 
                          << 9U) | ((IData)(((((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi__2__byte_en)) 
                                               << 0x20U) 
                                              | (QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi__2__data))) 
                                             >> 0x20U)) 
                                    << 5U)));
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[2U] 
        = (0x3ffU & (((0x1fU & ((IData)((1ULL | ((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi__2__offset)) 
                                                 << 1U))) 
                                >> 0x17U)) | ((IData)(
                                                      ((((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi__2__byte_en)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi__2__data))) 
                                                       >> 0x20U)) 
                                              >> 0x1bU)) 
                     | ((0x1e0U & ((IData)((1ULL | 
                                            ((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi__2__offset)) 
                                             << 1U))) 
                                   >> 0x17U)) | ((IData)(
                                                         ((1ULL 
                                                           | ((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi__2__offset)) 
                                                              << 1U)) 
                                                          >> 0x20U)) 
                                                 << 9U))));
    vlSelfRef.tb_user_spi_ctrl__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Write Req : Addr=0x%x, Data=0x%x, BE=0x%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,((
                                                   vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[2U] 
                                                   << 0x16U) 
                                                  | (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U] 
                                                     >> 0xaU)),
                 32,__Vtask_tb_user_spi_ctrl__DOT__write_obi__2__data,
                 4,(IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi__2__byte_en));
    while (((~ (IData)((vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp_o_from_dut 
                        >> 1U))) & VL_GTS_III(32, 0x7d0U, __Vtask_tb_user_spi_ctrl__DOT__write_obi__2__timeout_count))) {
        co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                             67);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_user_spi_ctrl__DOT__write_obi__2__timeout_count 
            = ((IData)(1U) + __Vtask_tb_user_spi_ctrl__DOT__write_obi__2__timeout_count);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_user_spi_ctrl__DOT__write_obi__2__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_spi_ctrl.sv:71: Assertion failed in %Ntb_user_spi_ctrl.write_obi: %t : TB: Timeout waiting for OBI grant during write to 0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     ((vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[2U] 
                       << 0x16U) | (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U] 
                                    >> 0xaU)),1,(1U 
                                                 & (IData)(
                                                           (vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp_o_from_dut 
                                                            >> 1U))));
        VL_STOP_MT("rtl/user_domain/tb_user_spi_ctrl.sv", 71, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_spi_ctrl.sv", 72, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Write Gnt Rcvd: Addr=0x%x. GNT=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,((
                                                   vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[2U] 
                                                   << 0x16U) 
                                                  | (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U] 
                                                     >> 0xaU)),
                 1,(1U & (IData)((vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp_o_from_dut 
                                  >> 1U))));
    co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                         76);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[0U] 
        = (0xfffffffeU & vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[0U]);
    vlSelfRef.tb_user_spi_ctrl__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : TB: OBI Write Req Deasserted.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[0U] = 0U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U] = 0U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[2U] = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                         158);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__cs1_n_q)) 
                            | (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__cs2_n_q)) 
                           | (~ (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__dc_q)))))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_spi_ctrl.sv:160: Assertion failed in %Ntb_user_spi_ctrl.unnamedblk1: %t : TB ERROR: Test 2 outputs mismatch. CS1_N=%b (exp 1), CS2_N=%b (exp 0), DC=%b (exp 1)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__cs1_n_q),
                     1,vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__cs2_n_q,
                     1,(IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__dc_q));
        VL_STOP_MT("rtl/user_domain/tb_user_spi_ctrl.sv", 160, "");
    }
    __Vtask_tb_user_spi_ctrl__DOT__read_obi__3__offset = 0U;
    __Vtask_tb_user_spi_ctrl__DOT__read_obi__3__timeout_count_gnt = 0U;
    __Vtask_tb_user_spi_ctrl__DOT__read_obi__3__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[0U] 
        = (1U | vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[0U]);
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U] 
        = ((0x1fU & vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U]) 
           | ((IData)((0xfULL | ((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__read_obi__3__offset)) 
                                 << 5U))) << 5U));
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[2U] 
        = (0x3ffU & (((IData)((0xfULL | ((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__read_obi__3__offset)) 
                                         << 5U))) >> 0x1bU) 
                     | ((IData)(((0xfULL | ((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__read_obi__3__offset)) 
                                            << 5U)) 
                                 >> 0x20U)) << 5U)));
    vlSelfRef.tb_user_spi_ctrl__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,((
                                                   vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[2U] 
                                                   << 0x16U) 
                                                  | (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U] 
                                                     >> 0xaU)));
    while (((~ (IData)((vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp_o_from_dut 
                        >> 1U))) & VL_GTS_III(32, 0x7d0U, __Vtask_tb_user_spi_ctrl__DOT__read_obi__3__timeout_count_gnt))) {
        co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                             96);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_user_spi_ctrl__DOT__read_obi__3__timeout_count_gnt 
            = ((IData)(1U) + __Vtask_tb_user_spi_ctrl__DOT__read_obi__3__timeout_count_gnt);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_user_spi_ctrl__DOT__read_obi__3__timeout_count_gnt))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_spi_ctrl.sv:100: Assertion failed in %Ntb_user_spi_ctrl.read_obi: %t : TB: Timeout waiting for OBI grant during read from 0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     ((vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[2U] 
                       << 0x16U) | (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U] 
                                    >> 0xaU)),1,(1U 
                                                 & (IData)(
                                                           (vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp_o_from_dut 
                                                            >> 1U))));
        VL_STOP_MT("rtl/user_domain/tb_user_spi_ctrl.sv", 100, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_spi_ctrl.sv", 101, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x. GNT=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,((
                                                   vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[2U] 
                                                   << 0x16U) 
                                                  | (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U] 
                                                     >> 0xaU)),
                 1,(1U & (IData)((vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp_o_from_dut 
                                  >> 1U))));
    co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                         105);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[0U] 
        = (0xfffffffeU & vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[0U]);
    vlSelfRef.tb_user_spi_ctrl__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : TB: OBI Read Req Deasserted.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    while (((~ (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp_o_from_dut)) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_user_spi_ctrl__DOT__read_obi__3__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                             111);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_user_spi_ctrl__DOT__read_obi__3__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_tb_user_spi_ctrl__DOT__read_obi__3__timeout_count_rvalid);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_user_spi_ctrl__DOT__read_obi__3__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_spi_ctrl.sv:115: Assertion failed in %Ntb_user_spi_ctrl.read_obi: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. RVALID=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     ((vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[2U] 
                       << 0x16U) | (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U] 
                                    >> 0xaU)),1,(1U 
                                                 & (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp_o_from_dut)));
        VL_STOP_MT("rtl/user_domain/tb_user_spi_ctrl.sv", 115, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_spi_ctrl.sv", 116, "");
    }
    __Vtask_tb_user_spi_ctrl__DOT__read_obi__3__r_data 
        = (IData)((vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp_o_from_dut 
                   >> 7U));
    __Vtask_tb_user_spi_ctrl__DOT__read_obi__3__r_err 
        = (1U & (IData)((vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp_o_from_dut 
                         >> 3U)));
    VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x Err=%b RVALID=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,((
                                                   vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[2U] 
                                                   << 0x16U) 
                                                  | (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U] 
                                                     >> 0xaU)),
                 32,__Vtask_tb_user_spi_ctrl__DOT__read_obi__3__r_data,
                 1,(IData)(__Vtask_tb_user_spi_ctrl__DOT__read_obi__3__r_err),
                 1,(1U & (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp_o_from_dut)));
    co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                         121);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[0U] = 0U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U] = 0U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[2U] = 0U;
    vlSelfRef.tb_user_spi_ctrl__DOT__unnamedblk1__DOT__read_back_data 
        = __Vtask_tb_user_spi_ctrl__DOT__read_obi__3__r_data;
    vlSelfRef.tb_user_spi_ctrl__DOT__unnamedblk1__DOT__read_error 
        = __Vtask_tb_user_spi_ctrl__DOT__read_obi__3__r_err;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_user_spi_ctrl__DOT__unnamedblk1__DOT__read_error) 
                     | (5U != (7U & vlSelfRef.tb_user_spi_ctrl__DOT__unnamedblk1__DOT__read_back_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_spi_ctrl.sv:165: Assertion failed in %Ntb_user_spi_ctrl.unnamedblk1: %t : TB ERROR: Test 2 readback mismatch. Data=0x%x (exp 0x...101), Err=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.tb_user_spi_ctrl__DOT__unnamedblk1__DOT__read_back_data,
                     1,(IData)(vlSelfRef.tb_user_spi_ctrl__DOT__unnamedblk1__DOT__read_error));
        VL_STOP_MT("rtl/user_domain/tb_user_spi_ctrl.sv", 165, "");
    }
    VL_WRITEF_NX("--- Test 3: Deassert CS1 & CS2 ---\n",0);
    __Vtask_tb_user_spi_ctrl__DOT__write_obi__4__byte_en = 1U;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi__4__data = 3U;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi__4__offset = 0U;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi__4__timeout_count = 0U;
    co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                         57);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[0U] 
        = (1U | vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[0U]);
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[0U] 
        = ((0x1fU & vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[0U]) 
           | ((IData)((((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi__4__byte_en)) 
                        << 0x20U) | (QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi__4__data)))) 
              << 5U));
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U] 
        = (((IData)((((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi__4__byte_en)) 
                      << 0x20U) | (QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi__4__data)))) 
            >> 0x1bU) | (((IData)((1ULL | ((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi__4__offset)) 
                                           << 1U))) 
                          << 9U) | ((IData)(((((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi__4__byte_en)) 
                                               << 0x20U) 
                                              | (QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi__4__data))) 
                                             >> 0x20U)) 
                                    << 5U)));
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[2U] 
        = (0x3ffU & (((0x1fU & ((IData)((1ULL | ((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi__4__offset)) 
                                                 << 1U))) 
                                >> 0x17U)) | ((IData)(
                                                      ((((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi__4__byte_en)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi__4__data))) 
                                                       >> 0x20U)) 
                                              >> 0x1bU)) 
                     | ((0x1e0U & ((IData)((1ULL | 
                                            ((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi__4__offset)) 
                                             << 1U))) 
                                   >> 0x17U)) | ((IData)(
                                                         ((1ULL 
                                                           | ((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi__4__offset)) 
                                                              << 1U)) 
                                                          >> 0x20U)) 
                                                 << 9U))));
    vlSelfRef.tb_user_spi_ctrl__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Write Req : Addr=0x%x, Data=0x%x, BE=0x%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,((
                                                   vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[2U] 
                                                   << 0x16U) 
                                                  | (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U] 
                                                     >> 0xaU)),
                 32,__Vtask_tb_user_spi_ctrl__DOT__write_obi__4__data,
                 4,(IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi__4__byte_en));
    while (((~ (IData)((vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp_o_from_dut 
                        >> 1U))) & VL_GTS_III(32, 0x7d0U, __Vtask_tb_user_spi_ctrl__DOT__write_obi__4__timeout_count))) {
        co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                             67);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_user_spi_ctrl__DOT__write_obi__4__timeout_count 
            = ((IData)(1U) + __Vtask_tb_user_spi_ctrl__DOT__write_obi__4__timeout_count);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_user_spi_ctrl__DOT__write_obi__4__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_spi_ctrl.sv:71: Assertion failed in %Ntb_user_spi_ctrl.write_obi: %t : TB: Timeout waiting for OBI grant during write to 0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     ((vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[2U] 
                       << 0x16U) | (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U] 
                                    >> 0xaU)),1,(1U 
                                                 & (IData)(
                                                           (vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp_o_from_dut 
                                                            >> 1U))));
        VL_STOP_MT("rtl/user_domain/tb_user_spi_ctrl.sv", 71, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_spi_ctrl.sv", 72, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Write Gnt Rcvd: Addr=0x%x. GNT=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,((
                                                   vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[2U] 
                                                   << 0x16U) 
                                                  | (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U] 
                                                     >> 0xaU)),
                 1,(1U & (IData)((vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp_o_from_dut 
                                  >> 1U))));
    co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                         76);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[0U] 
        = (0xfffffffeU & vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[0U]);
    vlSelfRef.tb_user_spi_ctrl__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : TB: OBI Write Req Deasserted.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[0U] = 0U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U] = 0U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[2U] = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                         171);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__cs1_n_q)) 
                           | (~ (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__cs2_n_q)))))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_spi_ctrl.sv:173: Assertion failed in %Ntb_user_spi_ctrl.unnamedblk1: %t : TB ERROR: Test 3 outputs mismatch. CS1_N=%b (exp 1), CS2_N=%b (exp 1)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__cs1_n_q),
                     1,vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__cs2_n_q);
        VL_STOP_MT("rtl/user_domain/tb_user_spi_ctrl.sv", 173, "");
    }
    __Vtask_tb_user_spi_ctrl__DOT__read_obi__5__offset = 0U;
    __Vtask_tb_user_spi_ctrl__DOT__read_obi__5__timeout_count_gnt = 0U;
    __Vtask_tb_user_spi_ctrl__DOT__read_obi__5__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[0U] 
        = (1U | vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[0U]);
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U] 
        = ((0x1fU & vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U]) 
           | ((IData)((0xfULL | ((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__read_obi__5__offset)) 
                                 << 5U))) << 5U));
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[2U] 
        = (0x3ffU & (((IData)((0xfULL | ((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__read_obi__5__offset)) 
                                         << 5U))) >> 0x1bU) 
                     | ((IData)(((0xfULL | ((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__read_obi__5__offset)) 
                                            << 5U)) 
                                 >> 0x20U)) << 5U)));
    vlSelfRef.tb_user_spi_ctrl__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,((
                                                   vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[2U] 
                                                   << 0x16U) 
                                                  | (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U] 
                                                     >> 0xaU)));
    while (((~ (IData)((vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp_o_from_dut 
                        >> 1U))) & VL_GTS_III(32, 0x7d0U, __Vtask_tb_user_spi_ctrl__DOT__read_obi__5__timeout_count_gnt))) {
        co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                             96);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_user_spi_ctrl__DOT__read_obi__5__timeout_count_gnt 
            = ((IData)(1U) + __Vtask_tb_user_spi_ctrl__DOT__read_obi__5__timeout_count_gnt);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_user_spi_ctrl__DOT__read_obi__5__timeout_count_gnt))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_spi_ctrl.sv:100: Assertion failed in %Ntb_user_spi_ctrl.read_obi: %t : TB: Timeout waiting for OBI grant during read from 0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     ((vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[2U] 
                       << 0x16U) | (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U] 
                                    >> 0xaU)),1,(1U 
                                                 & (IData)(
                                                           (vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp_o_from_dut 
                                                            >> 1U))));
        VL_STOP_MT("rtl/user_domain/tb_user_spi_ctrl.sv", 100, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_spi_ctrl.sv", 101, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x. GNT=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,((
                                                   vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[2U] 
                                                   << 0x16U) 
                                                  | (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U] 
                                                     >> 0xaU)),
                 1,(1U & (IData)((vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp_o_from_dut 
                                  >> 1U))));
    co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                         105);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[0U] 
        = (0xfffffffeU & vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[0U]);
    vlSelfRef.tb_user_spi_ctrl__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : TB: OBI Read Req Deasserted.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    while (((~ (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp_o_from_dut)) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_user_spi_ctrl__DOT__read_obi__5__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                             111);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_user_spi_ctrl__DOT__read_obi__5__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_tb_user_spi_ctrl__DOT__read_obi__5__timeout_count_rvalid);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_user_spi_ctrl__DOT__read_obi__5__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_spi_ctrl.sv:115: Assertion failed in %Ntb_user_spi_ctrl.read_obi: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. RVALID=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     ((vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[2U] 
                       << 0x16U) | (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U] 
                                    >> 0xaU)),1,(1U 
                                                 & (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp_o_from_dut)));
        VL_STOP_MT("rtl/user_domain/tb_user_spi_ctrl.sv", 115, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_spi_ctrl.sv", 116, "");
    }
    __Vtask_tb_user_spi_ctrl__DOT__read_obi__5__r_data 
        = (IData)((vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp_o_from_dut 
                   >> 7U));
    __Vtask_tb_user_spi_ctrl__DOT__read_obi__5__r_err 
        = (1U & (IData)((vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp_o_from_dut 
                         >> 3U)));
    VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x Err=%b RVALID=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,((
                                                   vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[2U] 
                                                   << 0x16U) 
                                                  | (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U] 
                                                     >> 0xaU)),
                 32,__Vtask_tb_user_spi_ctrl__DOT__read_obi__5__r_data,
                 1,(IData)(__Vtask_tb_user_spi_ctrl__DOT__read_obi__5__r_err),
                 1,(1U & (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp_o_from_dut)));
    co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                         121);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[0U] = 0U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[1U] = 0U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req_i_to_dut[2U] = 0U;
    vlSelfRef.tb_user_spi_ctrl__DOT__unnamedblk1__DOT__read_back_data 
        = __Vtask_tb_user_spi_ctrl__DOT__read_obi__5__r_data;
    vlSelfRef.tb_user_spi_ctrl__DOT__unnamedblk1__DOT__read_error 
        = __Vtask_tb_user_spi_ctrl__DOT__read_obi__5__r_err;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_user_spi_ctrl__DOT__unnamedblk1__DOT__read_error) 
                     | (3U != (3U & vlSelfRef.tb_user_spi_ctrl__DOT__unnamedblk1__DOT__read_back_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_spi_ctrl.sv:178: Assertion failed in %Ntb_user_spi_ctrl.unnamedblk1: %t : TB ERROR: Test 3 readback mismatch. Data=0x%x (exp 0x...011), Err=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.tb_user_spi_ctrl__DOT__unnamedblk1__DOT__read_back_data,
                     1,(IData)(vlSelfRef.tb_user_spi_ctrl__DOT__unnamedblk1__DOT__read_error));
        VL_STOP_MT("rtl/user_domain/tb_user_spi_ctrl.sv", 178, "");
    }
    co_await vlSelfRef.__VdlySched.delay(0x7a120ULL, 
                                         nullptr, "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                         181);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%t : TB: user_spi_ctrl Test Sequence Complete.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    VL_FINISH_MT("rtl/user_domain/tb_user_spi_ctrl.sv", 183, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_user_spi_ctrl___024root___dump_triggers__act(Vtb_user_spi_ctrl___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_user_spi_ctrl___024root___eval_triggers__act(Vtb_user_spi_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_spi_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_spi_ctrl___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_user_spi_ctrl__DOT__clk_i) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_user_spi_ctrl__DOT__clk_i__0))));
    vlSelfRef.__VactTriggered.set(1U, ((~ (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__rst_ni)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_user_spi_ctrl__DOT__rst_ni__0)));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_spi_ctrl__DOT__clk_i__0 
        = vlSelfRef.tb_user_spi_ctrl__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_spi_ctrl__DOT__rst_ni__0 
        = vlSelfRef.tb_user_spi_ctrl__DOT__rst_ni;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_user_spi_ctrl___024root___dump_triggers__act(vlSelf);
    }
#endif
}
