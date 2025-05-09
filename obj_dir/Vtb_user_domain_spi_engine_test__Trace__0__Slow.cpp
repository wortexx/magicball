// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_user_domain_spi_engine_test__Syms.h"


VL_ATTR_COLD void Vtb_user_domain_spi_engine_test___024root__trace_init_sub__TOP__cb_filter_pkg__0(Vtb_user_domain_spi_engine_test___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_user_domain_spi_engine_test___024root__trace_init_sub__TOP__cve2_pkg__0(Vtb_user_domain_spi_engine_test___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_user_domain_spi_engine_test___024root__trace_init_sub__TOP__obi_pkg__0(Vtb_user_domain_spi_engine_test___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_user_domain_spi_engine_test___024root__trace_init_sub__TOP__dm__0(Vtb_user_domain_spi_engine_test___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_user_domain_spi_engine_test___024root__trace_init_sub__TOP__croc_pkg__0(Vtb_user_domain_spi_engine_test___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_user_domain_spi_engine_test___024root__trace_init_sub__TOP__user_pkg__0(Vtb_user_domain_spi_engine_test___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_user_domain_spi_engine_test___024root__trace_init_sub__TOP__soc_ctrl_reg_pkg__0(Vtb_user_domain_spi_engine_test___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_user_domain_spi_engine_test___024root__trace_init_sub__TOP__0(Vtb_user_domain_spi_engine_test___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_spi_engine_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_spi_engine_test___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("cb_filter_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_user_domain_spi_engine_test___024root__trace_init_sub__TOP__cb_filter_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("cve2_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_user_domain_spi_engine_test___024root__trace_init_sub__TOP__cve2_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("obi_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_user_domain_spi_engine_test___024root__trace_init_sub__TOP__obi_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("dm", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_user_domain_spi_engine_test___024root__trace_init_sub__TOP__dm__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("croc_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_user_domain_spi_engine_test___024root__trace_init_sub__TOP__croc_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("user_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_user_domain_spi_engine_test___024root__trace_init_sub__TOP__user_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("soc_ctrl_reg_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_user_domain_spi_engine_test___024root__trace_init_sub__TOP__soc_ctrl_reg_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("tb_user_domain_spi_engine_test", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declDouble(c+174,0,"CLK_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+176,0,"RESET_DURATION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBus(c+178,0,"OBI_TIMEOUT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+179,0,"SPI_DONE_TIMEOUT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+180,0,"GpioCount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+181,0,"SPI_CTRL_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+182,0,"SPI_TX_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+183,0,"SPI_STATUS_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+147,0,"clk_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"rst_ni",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"ref_clk_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"testmode_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("user_sbr_obi_req", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("a", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+11,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+12,0,"we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"be",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+14,0,"wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"aid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+16,0,"a_optional",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+17,0,"req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("user_sbr_obi_rsp", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("r", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+148,0,"rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"rid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+150,0,"err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"r_optional",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+152,0,"gnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("user_mgr_obi_req", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("a", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+184,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+185,0,"we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+186,0,"be",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+184,0,"wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+187,0,"aid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+185,0,"a_optional",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+185,0,"req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("user_mgr_obi_rsp", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("r", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+3,0,"rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"rid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+5,0,"err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"r_optional",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+7,0,"gnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBus(c+9,0,"gpio_in_sync_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+186,0,"interrupts_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+128,0,"spi_sck_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"spi_mosi_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"req_ongoing",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+188,0,"GpioCount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+147,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"ref_clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"testmode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("user_sbr_obi_req_i", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("a", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+11,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+12,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"be",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+14,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"aid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+16,0,"a_optional",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+17,0,"req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("user_sbr_obi_rsp_o", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("r", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+148,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"rid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+150,0,"err",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"r_optional",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+152,0,"gnt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("user_mgr_obi_req_o", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("a", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+184,0,"addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+185,0,"we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+186,0,"be",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+184,0,"wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+187,0,"aid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+185,0,"a_optional",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+185,0,"req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("user_mgr_obi_rsp_i", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("r", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+3,0,"rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"rid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+5,0,"err",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"r_optional",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+7,0,"gnt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBus(c+9,0,"gpio_in_sync_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+186,0,"interrupts_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+128,0,"spi_sck_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"spi_mosi_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"spi_cs1_no",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"spi_cs2_no",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"spi_dc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("all_user_sbr_obi_req", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("a", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+31,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+32,0,"we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"be",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+34,0,"wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"aid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+36,0,"a_optional",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+37,0,"req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("a", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+38,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+39,0,"we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"be",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+41,0,"wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"aid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+43,0,"a_optional",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+44,0,"req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("all_user_sbr_obi_rsp", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("r", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+19,0,"rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"rid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+21,0,"err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"r_optional",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+23,0,"gnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("r", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+25,0,"rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"rid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+27,0,"err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"r_optional",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+29,0,"gnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("user_error_obi_req", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("a", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+31,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+32,0,"we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"be",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+34,0,"wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"aid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+36,0,"a_optional",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+37,0,"req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("user_error_obi_rsp", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("r", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+98,0,"rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"rid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+100,0,"err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"r_optional",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+102,0,"gnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("user_spi_obi_req", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("a", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+38,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+39,0,"we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"be",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+41,0,"wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"aid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+43,0,"a_optional",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+44,0,"req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("user_spi_obi_rsp", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("r", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+154,0,"rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"rid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+156,0,"err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"r_optional",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+158,0,"gnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("user_spi_ctrl_obi_req", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("a", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+45,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+46,0,"we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"be",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+48,0,"wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"aid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+50,0,"a_optional",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+51,0,"req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("user_spi_ctrl_obi_rsp", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("r", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+160,0,"rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+161,0,"rid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+162,0,"err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"r_optional",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+164,0,"gnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("user_font_rom_obi_req", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("a", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+52,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+53,0,"we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"be",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+55,0,"wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"aid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+57,0,"a_optional",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+58,0,"req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("user_font_rom_obi_rsp", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("r", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+59,0,"rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"rid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+61,0,"err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"r_optional",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+63,0,"gnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+189,0,"UserSpiCtrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"UserFontRom",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+166,0,"user_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("i_addr_decode_periphs", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+191,0,"NoIndices",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+192,0,"NoRules",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+193,0,"Napot",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+192,0,"IdxWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+11,0,"addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("addr_map_i", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+194,0,"idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+181,0,"start_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"end_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+166,0,"idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+167,0,"dec_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"dec_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"en_default_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+185,0,"default_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("i_addr_decode_dync", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+191,0,"NoIndices",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+192,0,"NoRules",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+193,0,"Napot",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+192,0,"IdxWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+11,0,"addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("addr_map_i", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+194,0,"idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+181,0,"start_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"end_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+166,0,"idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+167,0,"dec_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"dec_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"en_default_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+185,0,"default_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+185,0,"config_ongoing_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+169,0,"matched_rules",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+192,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_obi_demux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("ObiCfg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+193,0,"UseRReady",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+193,0,"CombGnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+197,0,"AddrWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+197,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+198,0,"IdWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+193,0,"Integrity",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+199,0,"BeFull",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->pushPrefix("OptionalCfg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+193,0,"UseAtop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+193,0,"UseMemtype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+193,0,"UseProt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+193,0,"UseDbg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+200,0,"AUserWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+200,0,"WUserWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+200,0,"RUserWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+200,0,"MidWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+200,0,"AChkWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+200,0,"RChkWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+191,0,"NumMgrPorts",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+201,0,"NumMaxTrans",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+147,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+166,0,"sbr_port_select_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("sbr_port_req_i", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("a", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+11,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+12,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"be",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+14,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"aid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+16,0,"a_optional",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+17,0,"req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("sbr_port_rsp_o", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("r", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+148,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"rid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+150,0,"err",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"r_optional",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+152,0,"gnt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mgr_ports_req_o", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("a", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+31,0,"addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+32,0,"we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"be",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+34,0,"wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"aid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+36,0,"a_optional",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+37,0,"req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("a", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+38,0,"addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+39,0,"we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"be",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+41,0,"wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"aid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+43,0,"a_optional",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+44,0,"req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mgr_ports_rsp_i", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("r", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+19,0,"rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"rid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+21,0,"err",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"r_optional",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+23,0,"gnt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("r", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+25,0,"rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"rid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+27,0,"err",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"r_optional",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+29,0,"gnt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+191,0,"CounterWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+65,0,"cnt_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"cnt_down",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+105,0,"in_flight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+196,0,"sbr_port_rready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"select_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+106,0,"select_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+67,0,"is_same_target_dbg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"no_flight_dbg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"one_completing_dbg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"forward_ok_dbg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"forward_condition_met_actual",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("i_counter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+191,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+193,0,"STICKY_OVERFLOW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+147,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"clear_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"load_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"down_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"delta_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+203,0,"d_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+105,0,"q_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+104,0,"overflow_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+107,0,"counter_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+72,0,"counter_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("proc_req", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+204,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_spi_peripheral", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+147,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"be_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+38,0,"addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+73,0,"gnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+131,0,"rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+128,0,"sck_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"mosi_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"cs_no",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+205,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+205,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+206,0,"SPI_DATA_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+207,0,"SPI_CLK_DIVIDER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+208,0,"SPI_CTRL_ADDR_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+209,0,"SPI_TX_ADDR_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+210,0,"SPI_STATUS_ADDR_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+133,0,"state_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+134,0,"state_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+135,0,"start_flag_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"start_flag_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+137,0,"tx_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+137,0,"tx_data_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+138,0,"bit_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+139,0,"bit_cnt_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+140,0,"spi_clk_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+141,0,"spi_clk_cnt_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+130,0,"rvalid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+131,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+142,0,"spi_clk_phase",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+143,0,"status_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+144,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"done_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"gnt_for_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"gnt_for_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"read_req_accepted_this_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+146,0,"next_bit_idx_calc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_user_err", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("ObiCfg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+193,0,"UseRReady",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+193,0,"CombGnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+197,0,"AddrWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+197,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+198,0,"IdWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+193,0,"Integrity",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+199,0,"BeFull",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->pushPrefix("OptionalCfg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+193,0,"UseAtop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+193,0,"UseMemtype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+193,0,"UseProt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+193,0,"UseDbg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+200,0,"AUserWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+200,0,"WUserWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+200,0,"RUserWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+200,0,"MidWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+200,0,"AChkWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+200,0,"RChkWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+192,0,"NumMaxTrans",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+211,0,"RspData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+147,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"testmode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("obi_req_i", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("a", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+31,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+32,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"be",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+34,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"aid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+36,0,"a_optional",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+37,0,"req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("obi_rsp_o", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("r", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+98,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"rid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+100,0,"err",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"r_optional",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+102,0,"gnt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBus(c+108,0,"rid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+109,0,"fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"fifo_pop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("i_id_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+193,0,"FALL_THROUGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+198,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+192,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+192,0,"ADDR_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+147,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"testmode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"full_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"usage_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+35,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+76,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+108,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+103,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+192,0,"FifoDepth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+77,0,"gate_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+112,0,"read_pointer_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+113,0,"read_pointer_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+78,0,"write_pointer_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+114,0,"write_pointer_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+79,0,"status_cnt_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+115,0,"status_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("mem_n", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+80,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("mem_q", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+116,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_user_font_rom", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+212,0,"ROM_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+213,0,"ROM_ADDR_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+147,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("obi_req_i", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("a", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+52,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+53,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"be",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+55,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"aid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+57,0,"a_optional",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+58,0,"req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("obi_rsp_o", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("r", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+59,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"rid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+61,0,"err",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"r_optional",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+63,0,"gnt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBus(c+214,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+205,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+117,0,"rvalid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+118,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+119,0,"read_req_accepted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+81,0,"addr_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+82,0,"read_addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"rom_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+84,0,"read_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+173,0,"rom_byte_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("i_user_spi_ctrl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+215,0,"PRNG_SEED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+147,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("obi_req_i", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("a", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+45,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+46,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"be",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+48,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"aid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+50,0,"a_optional",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+51,0,"req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("obi_rsp_o", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("r", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+160,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+161,0,"rid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+162,0,"err",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"r_optional",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+164,0,"gnt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+95,0,"spi_cs1_no",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"spi_cs2_no",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"spi_dc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+214,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+205,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+208,0,"GPIO_CTRL_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+209,0,"PRNG_CTRL_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+210,0,"PRNG_READ_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+216,0,"CS1_N_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+217,0,"CS2_N_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+207,0,"DC_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+216,0,"PRNG_EN_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+95,0,"cs1_n_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"cs1_n_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"cs2_n_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"cs2_n_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"dc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"dc_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"prng_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+120,0,"prng_out_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"prng_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+122,0,"rvalid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+123,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+124,0,"read_req_accepted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"write_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"read_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+91,0,"addr_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+48,0,"reg_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"reg_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+93,0,"grant_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"grant_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("i_xorshift", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+197,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+215,0,"SEED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+147,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+121,0,"rand_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"state_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"state_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+218,0,"SHIFT_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+219,0,"SHIFT_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+220,0,"SHIFT_C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+126,0,"t1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"t2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_user_domain_spi_engine_test___024root__trace_init_sub__TOP__cb_filter_pkg__0(Vtb_user_domain_spi_engine_test___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_spi_engine_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_spi_engine_test___024root__trace_init_sub__TOP__cb_filter_pkg__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("EgSeeds", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+221,0,"PermuteSeed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+222,0,"XorSeed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+223,0,"PermuteSeed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+224,0,"XorSeed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+225,0,"PermuteSeed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+226,0,"XorSeed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_user_domain_spi_engine_test___024root__trace_init_sub__TOP__dm__0(Vtb_user_domain_spi_engine_test___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_spi_engine_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_spi_engine_test___024root__trace_init_sub__TOP__dm__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+227,0,"DbgVersion013",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+228,0,"ProgBufSize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+227,0,"DataCount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+229,0,"HaltAddress",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+231,0,"ResumeAddress",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+233,0,"ExceptionAddress",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+235,0,"DataAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+236,0,"CauseBreakpoint",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+237,0,"CauseTrigger",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+238,0,"CauseRequest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+239,0,"CauseSingleStep",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
}

VL_ATTR_COLD void Vtb_user_domain_spi_engine_test___024root__trace_init_sub__TOP__obi_pkg__0(Vtb_user_domain_spi_engine_test___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_spi_engine_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_spi_engine_test___024root__trace_init_sub__TOP__obi_pkg__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+240,0,"DefaultAtop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+241,0,"DefaultMemtype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+242,0,"DefaultProt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("ObiMinimalOptionalConfig", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+193,0,"UseAtop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+193,0,"UseMemtype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+193,0,"UseProt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+193,0,"UseDbg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+200,0,"AUserWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+200,0,"WUserWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+200,0,"RUserWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+200,0,"MidWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+200,0,"AChkWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+200,0,"RChkWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ObiAtopOptionalConfig", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+199,0,"UseAtop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+193,0,"UseMemtype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+193,0,"UseProt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+193,0,"UseDbg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+200,0,"AUserWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+200,0,"WUserWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+200,0,"RUserWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+200,0,"MidWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+200,0,"AChkWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+200,0,"RChkWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ObiDefaultConfig", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+193,0,"UseRReady",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+193,0,"CombGnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+197,0,"AddrWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+197,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+192,0,"IdWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+193,0,"Integrity",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+199,0,"BeFull",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->pushPrefix("OptionalCfg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+193,0,"UseAtop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+193,0,"UseMemtype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+193,0,"UseProt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+193,0,"UseDbg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+200,0,"AUserWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+200,0,"WUserWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+200,0,"RUserWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+200,0,"MidWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+200,0,"AChkWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+200,0,"RChkWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_user_domain_spi_engine_test___024root__trace_init_sub__TOP__user_pkg__0(Vtb_user_domain_spi_engine_test___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_spi_engine_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_spi_engine_test___024root__trace_init_sub__TOP__user_pkg__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+192,0,"NumUserDomainSubordinates",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+243,0,"UserDomainBaseAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+244,0,"UserPeriphRange",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+245,0,"UserSpiAddrOffset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+192,0,"NumDemuxSbrRules",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+191,0,"NumDemuxSbr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+208,0,"SPI_ENGINE_CTRL_REG_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+209,0,"SPI_ENGINE_TX_REG_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+210,0,"SPI_ENGINE_STATUS_REG_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->pushPrefix("user_addr_map", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+194,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+181,0,"start_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"end_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_user_domain_spi_engine_test___024root__trace_init_sub__TOP__soc_ctrl_reg_pkg__0(Vtb_user_domain_spi_engine_test___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_spi_engine_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_spi_engine_test___024root__trace_init_sub__TOP__soc_ctrl_reg_pkg__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+246,0,"BlockAw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+186,0,"SOC_CTRL_BOOTADDR_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+247,0,"SOC_CTRL_FETCHEN_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+248,0,"SOC_CTRL_CORESTATUS_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+249,0,"SOC_CTRL_BOOTMODE_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("SOC_CTRL_PERMIT", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+250+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_user_domain_spi_engine_test___024root__trace_init_sub__TOP__croc_pkg__0(Vtb_user_domain_spi_engine_test___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_spi_engine_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_spi_engine_test___024root__trace_init_sub__TOP__croc_pkg__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+200,0,"HartId",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+254,0,"JtagPulpManufacturer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 10,0);
    tracep->declBus(c+255,0,"JtagCrocPartNum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 15,0);
    tracep->declBus(c+256,0,"JtagCrocVersion",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 3,0);
    tracep->pushPrefix("PulpJtagIdCode", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+256,0,"version",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 3,0);
    tracep->declBus(c+255,0,"part_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 15,0);
    tracep->declBus(c+254,0,"manufacturer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 10,0);
    tracep->declBit(c+199,0,"_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->popPrefix();
    tracep->declBus(c+201,0,"NumExternalIrqs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+257,0,"PeriphBaseAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+258,0,"PeriphAddrRange",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+258,0,"SramBaseAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+191,0,"NumSramBanks",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+259,0,"SramBankNumWords",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+260,0,"SramBankAddrWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+261,0,"SramAddrRange",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+243,0,"UserBaseAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+262,0,"UserAddrRange",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+201,0,"NumCrocDomainSubordinates",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+201,0,"NumXbarManagers",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+201,0,"NumXbarSbrRules",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+263,0,"NumXbarSbr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("croc_addr_map", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+194,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+184,0,"start_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+264,0,"end_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+204,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+264,0,"start_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+265,0,"end_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+266,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+265,0,"start_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+267,0,"end_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+268,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+269,0,"start_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+270,0,"end_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+257,0,"DebugAddrOffset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+271,0,"DebugAddrRange",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+272,0,"SocCtrlAddrOffset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+244,0,"SocCtrlAddrRange",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+273,0,"UartAddrOffset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+244,0,"UartAddrRange",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+274,0,"GpioAddrOffset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+244,0,"GpioAddrRange",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+275,0,"TimerAddrOffset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+244,0,"TimerAddrRange",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+263,0,"NumPeriphRules",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+276,0,"NumPeriphs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("periph_addr_map", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+277,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+278,0,"start_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+279,0,"end_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+268,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+280,0,"start_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+281,0,"end_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+266,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+282,0,"start_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+283,0,"end_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+204,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+284,0,"start_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+285,0,"end_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+194,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+184,0,"start_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+286,0,"end_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("MgrObiCfg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+193,0,"UseRReady",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+193,0,"CombGnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+197,0,"AddrWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+197,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+192,0,"IdWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+193,0,"Integrity",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+199,0,"BeFull",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->pushPrefix("OptionalCfg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+193,0,"UseAtop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+193,0,"UseMemtype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+193,0,"UseProt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+193,0,"UseDbg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+200,0,"AUserWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+200,0,"WUserWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+200,0,"RUserWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+200,0,"MidWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+200,0,"AChkWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+200,0,"RChkWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("SbrObiCfg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+193,0,"UseRReady",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+193,0,"CombGnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+197,0,"AddrWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+197,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+198,0,"IdWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+193,0,"Integrity",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+199,0,"BeFull",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->pushPrefix("OptionalCfg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+193,0,"UseAtop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+193,0,"UseMemtype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+193,0,"UseProt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+193,0,"UseDbg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+200,0,"AUserWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+200,0,"WUserWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+200,0,"RUserWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+200,0,"MidWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+200,0,"AChkWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+200,0,"RChkWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_user_domain_spi_engine_test___024root__trace_init_sub__TOP__cve2_pkg__0(Vtb_user_domain_spi_engine_test___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_spi_engine_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_spi_engine_test___024root__trace_init_sub__TOP__cve2_pkg__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+188,0,"PMP_MAX_REGIONS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+287,0,"PMP_CFG_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+200,0,"PMP_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+192,0,"PMP_I2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+191,0,"PMP_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+288,0,"CSR_OFF_PMP_CFG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+289,0,"CSR_OFF_PMP_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+198,0,"CSR_MSTATUS_MIE_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+290,0,"CSR_MSTATUS_MPIE_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+213,0,"CSR_MSTATUS_MPP_BIT_LOW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+291,0,"CSR_MSTATUS_MPP_BIT_HIGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+292,0,"CSR_MSTATUS_MPRV_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+293,0,"CSR_MSTATUS_TW_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+202,0,"CSR_MISA_MXL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+198,0,"CSR_MSIX_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+290,0,"CSR_MTIX_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+213,0,"CSR_MEIX_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+188,0,"CSR_MFIX_BIT_LOW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+294,0,"CSR_MFIX_BIT_HIGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+200,0,"CSR_MSECCFG_MML_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+192,0,"CSR_MSECCFG_MMWP_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+191,0,"CSR_MSECCFG_RLB_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+295,0,"MVENDORID_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+296,0,"MVENDORID_BANK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+297,0,"MARCHID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+298,0,"CSR_MVENDORID_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+297,0,"CSR_MARCHID_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+184,0,"CSR_MIMPID_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+184,0,"CSR_MCONFIGPTR_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_user_domain_spi_engine_test___024root__trace_init_top(Vtb_user_domain_spi_engine_test___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_spi_engine_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_spi_engine_test___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_user_domain_spi_engine_test___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_user_domain_spi_engine_test___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_user_domain_spi_engine_test___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_user_domain_spi_engine_test___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_user_domain_spi_engine_test___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_user_domain_spi_engine_test___024root__trace_register(Vtb_user_domain_spi_engine_test___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_spi_engine_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_spi_engine_test___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_user_domain_spi_engine_test___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_user_domain_spi_engine_test___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_user_domain_spi_engine_test___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_user_domain_spi_engine_test___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_user_domain_spi_engine_test___024root__trace_const_0_sub_0(Vtb_user_domain_spi_engine_test___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_user_domain_spi_engine_test___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_spi_engine_test___024root__trace_const_0\n"); );
    // Init
    Vtb_user_domain_spi_engine_test___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_user_domain_spi_engine_test___024root*>(voidSelf);
    Vtb_user_domain_spi_engine_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_user_domain_spi_engine_test___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_user_domain_spi_engine_test___024root__trace_const_0_sub_0(Vtb_user_domain_spi_engine_test___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_spi_engine_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_spi_engine_test___024root__trace_const_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullDouble(oldp+174,(4.99999999999999929e+01));
    bufp->fullDouble(oldp+176,(9.99999999999999858e+01));
    bufp->fullIData(oldp+178,(0xbb8U),32);
    bufp->fullIData(oldp+179,(0x3a98U),32);
    bufp->fullIData(oldp+180,(0x10U),32);
    bufp->fullIData(oldp+181,(0x20001000U),32);
    bufp->fullIData(oldp+182,(0x20001004U),32);
    bufp->fullIData(oldp+183,(0x20001008U),32);
    bufp->fullIData(oldp+184,(0U),32);
    bufp->fullBit(oldp+185,(0U));
    bufp->fullCData(oldp+186,(0U),4);
    bufp->fullBit(oldp+187,(0U));
    bufp->fullIData(oldp+188,(0x10U),32);
    bufp->fullBit(oldp+189,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserSpiCtrl));
    bufp->fullBit(oldp+190,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__UserFontRom));
    bufp->fullIData(oldp+191,(2U),32);
    bufp->fullIData(oldp+192,(1U),32);
    bufp->fullBit(oldp+193,(0U));
    bufp->fullIData(oldp+194,(1U),32);
    bufp->fullIData(oldp+195,(0x20002000U),32);
    bufp->fullBit(oldp+196,(1U));
    bufp->fullIData(oldp+197,(0x20U),32);
    bufp->fullIData(oldp+198,(3U),32);
    bufp->fullBit(oldp+199,(1U));
    bufp->fullIData(oldp+200,(0U),32);
    bufp->fullIData(oldp+201,(4U),32);
    bufp->fullCData(oldp+202,(1U),2);
    bufp->fullCData(oldp+203,(0U),2);
    bufp->fullIData(oldp+204,(2U),32);
    bufp->fullIData(oldp+205,(0x20U),32);
    bufp->fullIData(oldp+206,(8U),32);
    bufp->fullIData(oldp+207,(2U),32);
    bufp->fullSData(oldp+208,(0U),12);
    bufp->fullSData(oldp+209,(4U),12);
    bufp->fullSData(oldp+210,(8U),12);
    bufp->fullIData(oldp+211,(0xbadcab1eU),32);
    bufp->fullIData(oldp+212,(0x474U),32);
    bufp->fullIData(oldp+213,(0xbU),32);
    bufp->fullIData(oldp+214,(0xcU),32);
    bufp->fullIData(oldp+215,(0xcafebabeU),32);
    bufp->fullIData(oldp+216,(0U),32);
    bufp->fullIData(oldp+217,(1U),32);
    bufp->fullIData(oldp+218,(0xdU),32);
    bufp->fullIData(oldp+219,(0x11U),32);
    bufp->fullIData(oldp+220,(5U),32);
    bufp->fullIData(oldp+221,(0x47df4U),32);
    bufp->fullIData(oldp+222,(0x3e20e8fU),32);
    bufp->fullIData(oldp+223,(0x12ff886U),32);
    bufp->fullIData(oldp+224,(0xf3181U),32);
    bufp->fullIData(oldp+225,(0x11d2e881U),32);
    bufp->fullIData(oldp+226,(0x3e7b72U),32);
    bufp->fullCData(oldp+227,(2U),4);
    bufp->fullCData(oldp+228,(8U),5);
    bufp->fullQData(oldp+229,(0x800ULL),64);
    bufp->fullQData(oldp+231,(0x808ULL),64);
    bufp->fullQData(oldp+233,(0x810ULL),64);
    bufp->fullSData(oldp+235,(0x380U),12);
    bufp->fullCData(oldp+236,(1U),3);
    bufp->fullCData(oldp+237,(2U),3);
    bufp->fullCData(oldp+238,(3U),3);
    bufp->fullCData(oldp+239,(4U),3);
    bufp->fullCData(oldp+240,(0U),6);
    bufp->fullCData(oldp+241,(0U),2);
    bufp->fullCData(oldp+242,(7U),3);
    bufp->fullIData(oldp+243,(0x20000000U),32);
    bufp->fullIData(oldp+244,(0x1000U),32);
    bufp->fullIData(oldp+245,(0x20001000U),32);
    bufp->fullIData(oldp+246,(4U),32);
    bufp->fullCData(oldp+247,(4U),4);
    bufp->fullCData(oldp+248,(8U),4);
    bufp->fullCData(oldp+249,(0xcU),4);
    bufp->fullCData(oldp+250,(vlSymsp->TOP__soc_ctrl_reg_pkg.__PVT__SOC_CTRL_PERMIT[0]),4);
    bufp->fullCData(oldp+251,(vlSymsp->TOP__soc_ctrl_reg_pkg.__PVT__SOC_CTRL_PERMIT[1]),4);
    bufp->fullCData(oldp+252,(vlSymsp->TOP__soc_ctrl_reg_pkg.__PVT__SOC_CTRL_PERMIT[2]),4);
    bufp->fullCData(oldp+253,(vlSymsp->TOP__soc_ctrl_reg_pkg.__PVT__SOC_CTRL_PERMIT[3]),4);
    bufp->fullSData(oldp+254,(0x6d9U),11);
    bufp->fullSData(oldp+255,(0xc0c5U),16);
    bufp->fullCData(oldp+256,(0U),4);
    bufp->fullIData(oldp+257,(0U),32);
    bufp->fullIData(oldp+258,(0x10000000U),32);
    bufp->fullIData(oldp+259,(0x200U),32);
    bufp->fullIData(oldp+260,(9U),32);
    bufp->fullIData(oldp+261,(0x1000U),32);
    bufp->fullIData(oldp+262,(0x60000000U),32);
    bufp->fullIData(oldp+263,(5U),32);
    bufp->fullIData(oldp+264,(0x10000000U),32);
    bufp->fullIData(oldp+265,(0x10000800U),32);
    bufp->fullIData(oldp+266,(3U),32);
    bufp->fullIData(oldp+267,(0x10001000U),32);
    bufp->fullIData(oldp+268,(4U),32);
    bufp->fullIData(oldp+269,(0x20000000U),32);
    bufp->fullIData(oldp+270,(0x80000000U),32);
    bufp->fullIData(oldp+271,(0x40000U),32);
    bufp->fullIData(oldp+272,(0x3000000U),32);
    bufp->fullIData(oldp+273,(0x3002000U),32);
    bufp->fullIData(oldp+274,(0x3005000U),32);
    bufp->fullIData(oldp+275,(0x300a000U),32);
    bufp->fullIData(oldp+276,(6U),32);
    bufp->fullIData(oldp+277,(5U),32);
    bufp->fullIData(oldp+278,(0x300a000U),32);
    bufp->fullIData(oldp+279,(0x300b000U),32);
    bufp->fullIData(oldp+280,(0x3005000U),32);
    bufp->fullIData(oldp+281,(0x3006000U),32);
    bufp->fullIData(oldp+282,(0x3002000U),32);
    bufp->fullIData(oldp+283,(0x3003000U),32);
    bufp->fullIData(oldp+284,(0x3000000U),32);
    bufp->fullIData(oldp+285,(0x3001000U),32);
    bufp->fullIData(oldp+286,(0x40000U),32);
    bufp->fullIData(oldp+287,(8U),32);
    bufp->fullSData(oldp+288,(0x3a0U),12);
    bufp->fullSData(oldp+289,(0x3b0U),12);
    bufp->fullIData(oldp+290,(7U),32);
    bufp->fullIData(oldp+291,(0xcU),32);
    bufp->fullIData(oldp+292,(0x11U),32);
    bufp->fullIData(oldp+293,(0x15U),32);
    bufp->fullIData(oldp+294,(0x1fU),32);
    bufp->fullCData(oldp+295,(2U),7);
    bufp->fullIData(oldp+296,(0xcU),25);
    bufp->fullIData(oldp+297,(0x23U),32);
    bufp->fullIData(oldp+298,(0x602U),32);
}

VL_ATTR_COLD void Vtb_user_domain_spi_engine_test___024root__trace_full_0_sub_0(Vtb_user_domain_spi_engine_test___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_user_domain_spi_engine_test___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_spi_engine_test___024root__trace_full_0\n"); );
    // Init
    Vtb_user_domain_spi_engine_test___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_user_domain_spi_engine_test___024root*>(voidSelf);
    Vtb_user_domain_spi_engine_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_user_domain_spi_engine_test___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_user_domain_spi_engine_test___024root__trace_full_0_sub_0(Vtb_user_domain_spi_engine_test___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_spi_engine_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_spi_engine_test___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__ref_clk_i));
    bufp->fullBit(oldp+2,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__testmode_i));
    bufp->fullIData(oldp+3,((IData)((vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_mgr_obi_rsp 
                                     >> 5U))),32);
    bufp->fullBit(oldp+4,((1U & (IData)((vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_mgr_obi_rsp 
                                         >> 4U)))));
    bufp->fullBit(oldp+5,((1U & (IData)((vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_mgr_obi_rsp 
                                         >> 3U)))));
    bufp->fullBit(oldp+6,((1U & (IData)((vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_mgr_obi_rsp 
                                         >> 2U)))));
    bufp->fullBit(oldp+7,((1U & (IData)((vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_mgr_obi_rsp 
                                         >> 1U)))));
    bufp->fullBit(oldp+8,((1U & (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_mgr_obi_rsp))));
    bufp->fullSData(oldp+9,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__gpio_in_sync_i),16);
    bufp->fullBit(oldp+10,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__rst_ni));
    bufp->fullIData(oldp+11,(((vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[2U] 
                               << 0x16U) | (vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[1U] 
                                            >> 0xaU))),32);
    bufp->fullBit(oldp+12,((1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[1U] 
                                  >> 9U))));
    bufp->fullCData(oldp+13,((0xfU & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[1U] 
                                      >> 5U))),4);
    bufp->fullIData(oldp+14,(((vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[1U] 
                               << 0x1bU) | (vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] 
                                            >> 5U))),32);
    bufp->fullCData(oldp+15,((7U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] 
                                    >> 2U))),3);
    bufp->fullBit(oldp+16,((1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U] 
                                  >> 1U))));
    bufp->fullBit(oldp+17,((1U & vlSelfRef.tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req[0U])));
    bufp->fullBit(oldp+18,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__req_ongoing));
    bufp->fullIData(oldp+19,(((vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[1U] 
                               << 0x19U) | (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[0U] 
                                            >> 7U))),32);
    bufp->fullCData(oldp+20,((7U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[0U] 
                                    >> 4U))),3);
    bufp->fullBit(oldp+21,((1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[0U] 
                                  >> 3U))));
    bufp->fullBit(oldp+22,((1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[0U] 
                                  >> 2U))));
    bufp->fullBit(oldp+23,((1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[0U] 
                                  >> 1U))));
    bufp->fullBit(oldp+24,((1U & vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[0U])));
    bufp->fullIData(oldp+25,(((vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[2U] 
                               << 0x12U) | (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[1U] 
                                            >> 0xeU))),32);
    bufp->fullCData(oldp+26,((7U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[1U] 
                                    >> 0xbU))),3);
    bufp->fullBit(oldp+27,((1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[1U] 
                                  >> 0xaU))));
    bufp->fullBit(oldp+28,((1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[1U] 
                                  >> 9U))));
    bufp->fullBit(oldp+29,((1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[1U] 
                                  >> 8U))));
    bufp->fullBit(oldp+30,((1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[1U] 
                                  >> 7U))));
    bufp->fullIData(oldp+31,(((vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                               << 0x16U) | (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[1U] 
                                            >> 0xaU))),32);
    bufp->fullBit(oldp+32,((1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[1U] 
                                  >> 9U))));
    bufp->fullCData(oldp+33,((0xfU & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[1U] 
                                      >> 5U))),4);
    bufp->fullIData(oldp+34,(((vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[1U] 
                               << 0x1bU) | (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0U] 
                                            >> 5U))),32);
    bufp->fullCData(oldp+35,((7U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0U] 
                                    >> 2U))),3);
    bufp->fullBit(oldp+36,((1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0U] 
                                  >> 1U))));
    bufp->fullBit(oldp+37,((1U & vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0U])));
    bufp->fullIData(oldp+38,(((vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[4U] 
                               << 0xcU) | (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                           >> 0x14U))),32);
    bufp->fullBit(oldp+39,((1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                  >> 0x13U))));
    bufp->fullCData(oldp+40,((0xfU & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                      >> 0xfU))),4);
    bufp->fullIData(oldp+41,(((vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                               << 0x11U) | (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                                            >> 0xfU))),32);
    bufp->fullCData(oldp+42,((7U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+43,((1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                                  >> 0xbU))));
    bufp->fullBit(oldp+44,((1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                                  >> 0xaU))));
    bufp->fullIData(oldp+45,(((vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_req[2U] 
                               << 0x16U) | (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_req[1U] 
                                            >> 0xaU))),32);
    bufp->fullBit(oldp+46,((1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_req[1U] 
                                  >> 9U))));
    bufp->fullCData(oldp+47,((0xfU & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_req[1U] 
                                      >> 5U))),4);
    bufp->fullIData(oldp+48,(((vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_req[1U] 
                               << 0x1bU) | (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_req[0U] 
                                            >> 5U))),32);
    bufp->fullCData(oldp+49,((7U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_req[0U] 
                                    >> 2U))),3);
    bufp->fullBit(oldp+50,((1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_req[0U] 
                                  >> 1U))));
    bufp->fullBit(oldp+51,((1U & vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_req[0U])));
    bufp->fullIData(oldp+52,(((vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_req[2U] 
                               << 0x16U) | (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_req[1U] 
                                            >> 0xaU))),32);
    bufp->fullBit(oldp+53,((1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_req[1U] 
                                  >> 9U))));
    bufp->fullCData(oldp+54,((0xfU & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_req[1U] 
                                      >> 5U))),4);
    bufp->fullIData(oldp+55,(((vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_req[1U] 
                               << 0x1bU) | (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_req[0U] 
                                            >> 5U))),32);
    bufp->fullCData(oldp+56,((7U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_req[0U] 
                                    >> 2U))),3);
    bufp->fullBit(oldp+57,((1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_req[0U] 
                                  >> 1U))));
    bufp->fullBit(oldp+58,((1U & vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_req[0U])));
    bufp->fullIData(oldp+59,((IData)((vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_rsp 
                                      >> 7U))),32);
    bufp->fullCData(oldp+60,((7U & (IData)((vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_rsp 
                                            >> 4U)))),3);
    bufp->fullBit(oldp+61,((1U & (IData)((vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_rsp 
                                          >> 3U)))));
    bufp->fullBit(oldp+62,((1U & (IData)((vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_rsp 
                                          >> 2U)))));
    bufp->fullBit(oldp+63,((1U & (IData)((vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_rsp 
                                          >> 1U)))));
    bufp->fullBit(oldp+64,((1U & (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_rsp))));
    bufp->fullBit(oldp+65,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__cnt_up));
    bufp->fullBit(oldp+66,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__select_d));
    bufp->fullBit(oldp+67,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__is_same_target_dbg));
    bufp->fullBit(oldp+68,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__no_flight_dbg));
    bufp->fullBit(oldp+69,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__one_completing_dbg));
    bufp->fullBit(oldp+70,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__forward_ok_dbg));
    bufp->fullBit(oldp+71,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__forward_condition_met_actual));
    bufp->fullCData(oldp+72,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_d),3);
    bufp->fullBit(oldp+73,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o));
    bufp->fullBit(oldp+74,((IData)((0x800000U == (0xfff80000U 
                                                  & vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U])))));
    bufp->fullBit(oldp+75,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__read_req_accepted_this_cycle));
    bufp->fullBit(oldp+76,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT____Vcellinp__i_id_fifo__push_i));
    bufp->fullBit(oldp+77,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__gate_clock));
    bufp->fullBit(oldp+78,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_n));
    bufp->fullCData(oldp+79,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_n),2);
    bufp->fullCData(oldp+80,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_n),3);
    bufp->fullSData(oldp+81,((0xfffU & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_req[1U] 
                                        >> 0xaU))),12);
    bufp->fullBit(oldp+82,((0x474U > (0xfffU & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_req[1U] 
                                                >> 0xaU)))));
    bufp->fullSData(oldp+83,((0x7ffU & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_req[1U] 
                                        >> 0xaU))),11);
    bufp->fullBit(oldp+84,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_font_rom__DOT__read_req));
    bufp->fullBit(oldp+85,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__cs1_n_d));
    bufp->fullBit(oldp+86,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__cs2_n_d));
    bufp->fullBit(oldp+87,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__dc_d));
    bufp->fullBit(oldp+88,(((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT____VdfgRegularize_h18fe919a_0_4) 
                            & ((vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_req[0U] 
                                >> 5U) & (0x1000U == 
                                          (0x3ffc00U 
                                           & vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_req[1U]))))));
    bufp->fullBit(oldp+89,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__write_req));
    bufp->fullBit(oldp+90,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__read_req));
    bufp->fullSData(oldp+91,((0xfffU & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_req[1U] 
                                        >> 0xaU))),12);
    bufp->fullIData(oldp+92,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__reg_rdata),32);
    bufp->fullBit(oldp+93,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w));
    bufp->fullBit(oldp+94,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r));
    bufp->fullBit(oldp+95,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__cs1_n_q));
    bufp->fullBit(oldp+96,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__cs2_n_q));
    bufp->fullBit(oldp+97,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__dc_q));
    bufp->fullIData(oldp+98,((IData)((vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_error_obi_rsp 
                                      >> 7U))),32);
    bufp->fullCData(oldp+99,((7U & (IData)((vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_error_obi_rsp 
                                            >> 4U)))),3);
    bufp->fullBit(oldp+100,((1U & (IData)((vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_error_obi_rsp 
                                           >> 3U)))));
    bufp->fullBit(oldp+101,((1U & (IData)((vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_error_obi_rsp 
                                           >> 2U)))));
    bufp->fullBit(oldp+102,((1U & (IData)((vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_error_obi_rsp 
                                           >> 1U)))));
    bufp->fullBit(oldp+103,((1U & (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_error_obi_rsp))));
    bufp->fullBit(oldp+104,((1U & ((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q) 
                                   >> 2U))));
    bufp->fullCData(oldp+105,((3U & (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q))),2);
    bufp->fullBit(oldp+106,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__select_q));
    bufp->fullCData(oldp+107,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q),3);
    bufp->fullCData(oldp+108,(((2U >= (3U & ((IData)(3U) 
                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q))))
                                ? (7U & ((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_q) 
                                         >> (3U & ((IData)(3U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q)))))
                                : 0U)),3);
    bufp->fullBit(oldp+109,((1U == (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q))));
    bufp->fullBit(oldp+110,((0U == (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q))));
    bufp->fullBit(oldp+111,((1U & (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q))));
    bufp->fullBit(oldp+112,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_n));
    bufp->fullBit(oldp+113,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q));
    bufp->fullBit(oldp+114,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q));
    bufp->fullCData(oldp+115,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q),2);
    bufp->fullCData(oldp+116,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_q),3);
    bufp->fullBit(oldp+117,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_font_rom__DOT__rvalid_q));
    bufp->fullIData(oldp+118,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_font_rom__DOT__rdata_q),32);
    bufp->fullBit(oldp+119,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_font_rom__DOT__read_req_accepted));
    bufp->fullIData(oldp+120,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__prng_out_q),32);
    bufp->fullIData(oldp+121,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__i_xorshift__DOT__state_q),32);
    bufp->fullBit(oldp+122,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__rvalid_q));
    bufp->fullIData(oldp+123,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__rdata_q),32);
    bufp->fullBit(oldp+124,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__read_req_accepted));
    bufp->fullIData(oldp+125,((vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__i_xorshift__DOT__t2 
                               ^ VL_SHIFTL_III(32,32,32, vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__i_xorshift__DOT__t2, 5U))),32);
    bufp->fullIData(oldp+126,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__i_xorshift__DOT__t1),32);
    bufp->fullIData(oldp+127,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__i_xorshift__DOT__t2),32);
    bufp->fullBit(oldp+128,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__spi_sck_o));
    bufp->fullBit(oldp+129,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__spi_mosi_o));
    bufp->fullBit(oldp+130,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__rvalid_q));
    bufp->fullIData(oldp+131,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__rdata_q),32);
    bufp->fullBit(oldp+132,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__cs_no));
    bufp->fullCData(oldp+133,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__state_q),2);
    bufp->fullCData(oldp+134,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__state_d),2);
    bufp->fullBit(oldp+135,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_q));
    bufp->fullBit(oldp+136,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_d));
    bufp->fullCData(oldp+137,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_q),8);
    bufp->fullCData(oldp+138,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q),3);
    bufp->fullCData(oldp+139,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_d),3);
    bufp->fullCData(oldp+140,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q),2);
    bufp->fullCData(oldp+141,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_d),2);
    bufp->fullBit(oldp+142,((2U <= (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q))));
    bufp->fullCData(oldp+143,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__status_bits),2);
    bufp->fullBit(oldp+144,(((0U != (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)) 
                             & (3U != (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)))));
    bufp->fullBit(oldp+145,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__done_q));
    bufp->fullCData(oldp+146,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__unnamedblk1__DOT__next_bit_idx_calc),3);
    bufp->fullBit(oldp+147,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__clk_i));
    bufp->fullIData(oldp+148,((IData)((((0x4dU >= ((IData)(2U) 
                                                   + 
                                                   (0x7fU 
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
                                         : 0ULL) >> 5U))),32);
    bufp->fullCData(oldp+149,((7U & (IData)((((0x4dU 
                                               >= ((IData)(2U) 
                                                   + 
                                                   (0x7fU 
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
                                               : 0ULL) 
                                             >> 2U)))),3);
    bufp->fullBit(oldp+150,((1U & (IData)((((0x4dU 
                                             >= ((IData)(2U) 
                                                 + 
                                                 (0x7fU 
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
                                             : 0ULL) 
                                           >> 1U)))));
    bufp->fullBit(oldp+151,((1U & (IData)(((0x4dU >= 
                                            ((IData)(2U) 
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
                                            : 0ULL)))));
    bufp->fullBit(oldp+152,(((0x4dU >= ((IData)(1U) 
                                        + (0x7fU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))) 
                             && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                       (((IData)(1U) 
                                         + (0x7fU & 
                                            ((IData)(0x27U) 
                                             * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                                        >> 5U)] >> 
                                       (0x1fU & ((IData)(1U) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))))));
    bufp->fullBit(oldp+153,(((0x4dU >= (0x7fU & ((IData)(0x27U) 
                                                 * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)))) 
                             && (1U & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                       (3U & (((IData)(0x27U) 
                                               * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx)) 
                                              >> 5U))] 
                                       >> (0x1fU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx))))))));
    bufp->fullIData(oldp+154,((IData)((vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_obi_rsp 
                                       >> 7U))),32);
    bufp->fullCData(oldp+155,((7U & (IData)((vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_obi_rsp 
                                             >> 4U)))),3);
    bufp->fullBit(oldp+156,((1U & (IData)((vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_obi_rsp 
                                           >> 3U)))));
    bufp->fullBit(oldp+157,((1U & (IData)((vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_obi_rsp 
                                           >> 2U)))));
    bufp->fullBit(oldp+158,((1U & (IData)((vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_obi_rsp 
                                           >> 1U)))));
    bufp->fullBit(oldp+159,((1U & (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_obi_rsp))));
    bufp->fullIData(oldp+160,((IData)((vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_rsp 
                                       >> 7U))),32);
    bufp->fullCData(oldp+161,((7U & (IData)((vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_rsp 
                                             >> 4U)))),3);
    bufp->fullBit(oldp+162,((1U & (IData)((vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_rsp 
                                           >> 3U)))));
    bufp->fullBit(oldp+163,((1U & (IData)((vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_rsp 
                                           >> 2U)))));
    bufp->fullBit(oldp+164,((1U & (IData)((vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_rsp 
                                           >> 1U)))));
    bufp->fullBit(oldp+165,((1U & (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_rsp))));
    bufp->fullBit(oldp+166,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx));
    bufp->fullBit(oldp+167,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_addr_decode_periphs__DOT__dec_valid_o));
    bufp->fullBit(oldp+168,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_addr_decode_periphs__DOT__dec_error_o));
    bufp->fullBit(oldp+169,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__matched_rules));
    bufp->fullBit(oldp+170,(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__cnt_down));
    bufp->fullBit(oldp+171,(((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__cnt_up) 
                             ^ (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__cnt_down))));
    bufp->fullBit(oldp+172,(((vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                              >> 0x13U) & ((0U == (IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)) 
                                           & ((4U == 
                                               (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                >> 0x14U)) 
                                              | (0U 
                                                 == 
                                                 (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                  >> 0x14U)))))));
    bufp->fullCData(oldp+173,(((0x474U > (0xfffU & 
                                          (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_req[1U] 
                                           >> 0xaU)))
                                ? ((0x473U >= (0x7ffU 
                                               & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_req[1U] 
                                                  >> 0xaU)))
                                    ? vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_font_rom__DOT__rom_data
                                   [(0x7ffU & (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_req[1U] 
                                               >> 0xaU))]
                                    : 0U) : 0U)),8);
}
