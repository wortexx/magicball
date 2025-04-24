// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vuser_domain_sw_cs_tb__Syms.h"


VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024root__trace_init_sub__TOP__cb_filter_pkg__0(Vuser_domain_sw_cs_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024root__trace_init_sub__TOP__cve2_pkg__0(Vuser_domain_sw_cs_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024root__trace_init_sub__TOP__obi_pkg__0(Vuser_domain_sw_cs_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024root__trace_init_sub__TOP__dm__0(Vuser_domain_sw_cs_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024root__trace_init_sub__TOP__croc_pkg__0(Vuser_domain_sw_cs_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024root__trace_init_sub__TOP__user_pkg__0(Vuser_domain_sw_cs_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024root__trace_init_sub__TOP__soc_ctrl_reg_pkg__0(Vuser_domain_sw_cs_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024root__trace_init_sub__TOP__0(Vuser_domain_sw_cs_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuser_domain_sw_cs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_domain_sw_cs_tb___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("cb_filter_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vuser_domain_sw_cs_tb___024root__trace_init_sub__TOP__cb_filter_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("cve2_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vuser_domain_sw_cs_tb___024root__trace_init_sub__TOP__cve2_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("obi_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vuser_domain_sw_cs_tb___024root__trace_init_sub__TOP__obi_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("dm", VerilatedTracePrefixType::SCOPE_MODULE);
    Vuser_domain_sw_cs_tb___024root__trace_init_sub__TOP__dm__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("croc_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vuser_domain_sw_cs_tb___024root__trace_init_sub__TOP__croc_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("user_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vuser_domain_sw_cs_tb___024root__trace_init_sub__TOP__user_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("soc_ctrl_reg_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vuser_domain_sw_cs_tb___024root__trace_init_sub__TOP__soc_ctrl_reg_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("user_domain_sw_cs_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declDouble(c+119,0,"CLK_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+121,0,"RESET_DURATION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBus(c+123,0,"OBI_TIMEOUT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"SPI_DONE_TIMEOUT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"GpioCount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"SPI_CTRL_REG_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"SPI_TX_REG_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"SPI_STATUS_REG_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"SPI_CTRL_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"SPI_TX_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"SPI_STATUS_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+106,0,"clk_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"rst_ni",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"ref_clk_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"testmode_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("user_sbr_obi_req", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("a", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+10,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"be",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+13,0,"wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"aid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+15,0,"a_optional",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+16,0,"req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("user_sbr_obi_rsp", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("r", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+18,0,"rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"rid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+20,0,"err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"r_optional",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+108,0,"gnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("user_mgr_obi_req", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("a", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+126,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+132,0,"we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"be",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+126,0,"wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"aid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+132,0,"a_optional",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+132,0,"req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
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
    tracep->declBus(c+133,0,"interrupts_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+66,0,"spi_sck_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"spi_mosi_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"tb_cs_ssd1331_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"tb_cs_adxl345_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"tb_dc_ssd1331",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"tb_int_adxl345",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"req_ongoing",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+135,0,"GpioCount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+106,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"ref_clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"testmode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("user_sbr_obi_req_i", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("a", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+10,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"be",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+13,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"aid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+15,0,"a_optional",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+16,0,"req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("user_sbr_obi_rsp_o", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("r", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+18,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"rid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+20,0,"err",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"r_optional",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+108,0,"gnt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("user_mgr_obi_req_o", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("a", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+126,0,"addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+132,0,"we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"be",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+126,0,"wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"aid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+132,0,"a_optional",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+132,0,"req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
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
    tracep->declBus(c+133,0,"interrupts_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+66,0,"spi_sck_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"spi_mosi_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("all_user_sbr_obi_req", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("a", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+41,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+42,0,"we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"be",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+44,0,"wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"aid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+46,0,"a_optional",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+47,0,"req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("a", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+48,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+49,0,"we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+50,0,"be",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+51,0,"wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"aid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+53,0,"a_optional",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+54,0,"req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("all_user_sbr_obi_rsp", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("r", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+29,0,"rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"rid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+31,0,"err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"r_optional",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+33,0,"gnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("r", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+35,0,"rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"rid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+37,0,"err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"r_optional",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+39,0,"gnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("user_error_obi_req", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("a", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+41,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+42,0,"we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"be",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+44,0,"wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"aid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+46,0,"a_optional",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+47,0,"req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("user_error_obi_rsp", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("r", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+68,0,"rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"rid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+70,0,"err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"r_optional",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+72,0,"gnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("user_spi_obi_req", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("a", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+48,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+49,0,"we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+50,0,"be",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+51,0,"wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"aid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+53,0,"a_optional",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+54,0,"req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("user_spi_obi_rsp", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("r", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+22,0,"rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"rid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+24,0,"err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"r_optional",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+26,0,"gnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBus(c+113,0,"user_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("i_addr_decode_periphs", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+136,0,"NoIndices",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+137,0,"NoRules",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+138,0,"Napot",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+137,0,"IdxWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+10,0,"addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("addr_map_i", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+139,0,"idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"start_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,0,"end_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+113,0,"idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+114,0,"dec_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"dec_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"en_default_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+132,0,"default_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("i_addr_decode_dync", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+136,0,"NoIndices",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+137,0,"NoRules",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+138,0,"Napot",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+137,0,"IdxWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+10,0,"addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("addr_map_i", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+139,0,"idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"start_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,0,"end_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+113,0,"idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+114,0,"dec_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"dec_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"en_default_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+132,0,"default_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+132,0,"config_ongoing_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+116,0,"matched_rules",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+137,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_obi_demux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("ObiCfg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+138,0,"UseRReady",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+138,0,"CombGnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+142,0,"AddrWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+142,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+143,0,"IdWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+138,0,"Integrity",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+144,0,"BeFull",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->pushPrefix("OptionalCfg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+138,0,"UseAtop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+138,0,"UseMemtype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+138,0,"UseProt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+138,0,"UseDbg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+145,0,"AUserWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+145,0,"WUserWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+145,0,"RUserWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+145,0,"MidWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+145,0,"AChkWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+145,0,"RChkWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+136,0,"NumMgrPorts",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+136,0,"NumMaxTrans",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+106,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+113,0,"sbr_port_select_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("sbr_port_req_i", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("a", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+10,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"be",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+13,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"aid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+15,0,"a_optional",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+16,0,"req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("sbr_port_rsp_o", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("r", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+18,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"rid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+20,0,"err",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"r_optional",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+108,0,"gnt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mgr_ports_req_o", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("a", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+41,0,"addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+42,0,"we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"be",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+44,0,"wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"aid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+46,0,"a_optional",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+47,0,"req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("a", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+48,0,"addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+49,0,"we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+50,0,"be",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+51,0,"wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"aid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+53,0,"a_optional",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+54,0,"req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mgr_ports_rsp_i", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("r", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+29,0,"rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"rid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+31,0,"err",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"r_optional",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+33,0,"gnt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("r", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+35,0,"rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"rid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+37,0,"err",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"r_optional",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+39,0,"gnt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+137,0,"CounterWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+55,0,"cnt_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"cnt_down",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+75,0,"in_flight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+141,0,"sbr_port_rready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"select_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+76,0,"select_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("i_counter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+137,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+138,0,"STICKY_OVERFLOW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+106,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"clear_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"load_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"down_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+141,0,"delta_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+132,0,"d_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+75,0,"q_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+74,0,"overflow_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+77,0,"counter_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+57,0,"counter_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("proc_req", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+146,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_spi_peripheral", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+106,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+50,0,"be_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+48,0,"addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+58,0,"gnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+66,0,"sck_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"mosi_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"cs_no",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+147,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+147,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+148,0,"SPI_DATA_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+149,0,"SPI_CLK_DIVIDER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+150,0,"SPI_CTRL_ADDR_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+151,0,"SPI_TX_ADDR_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+152,0,"SPI_STATUS_ADDR_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+81,0,"state_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+82,0,"state_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+83,0,"start_flag_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"start_flag_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"tx_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+85,0,"tx_data_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+86,0,"bit_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+87,0,"bit_cnt_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+88,0,"spi_clk_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+89,0,"spi_clk_cnt_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+78,0,"rvalid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"granted_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+91,0,"spi_clk_phase",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"status_read_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+92,0,"status_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+93,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"done_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"done_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"gnt_for_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"gnt_for_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+96,0,"next_bit_idx_calc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_user_err", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("ObiCfg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+138,0,"UseRReady",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+138,0,"CombGnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+142,0,"AddrWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+142,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+143,0,"IdWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+138,0,"Integrity",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+144,0,"BeFull",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->pushPrefix("OptionalCfg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+138,0,"UseAtop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+138,0,"UseMemtype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+138,0,"UseProt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+138,0,"UseDbg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+145,0,"AUserWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+145,0,"WUserWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+145,0,"RUserWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+145,0,"MidWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+145,0,"AChkWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+145,0,"RChkWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+137,0,"NumMaxTrans",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+153,0,"RspData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+106,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"testmode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("obi_req_i", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("a", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+41,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+42,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"be",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+44,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"aid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+46,0,"a_optional",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+47,0,"req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("obi_rsp_o", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("r", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+68,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"rid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+70,0,"err",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"r_optional",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+72,0,"gnt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBus(c+97,0,"rid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+98,0,"fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"fifo_pop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("i_id_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+138,0,"FALL_THROUGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+143,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+137,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+137,0,"ADDR_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+106,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"testmode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"full_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+100,0,"usage_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+45,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+61,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+97,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+73,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+137,0,"FifoDepth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+62,0,"gate_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+101,0,"read_pointer_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+102,0,"read_pointer_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+63,0,"write_pointer_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+103,0,"write_pointer_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+64,0,"status_cnt_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+104,0,"status_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("mem_n", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+65,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("mem_q", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+105,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024root__trace_init_sub__TOP__cb_filter_pkg__0(Vuser_domain_sw_cs_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuser_domain_sw_cs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_domain_sw_cs_tb___024root__trace_init_sub__TOP__cb_filter_pkg__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("EgSeeds", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+154,0,"PermuteSeed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+155,0,"XorSeed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+156,0,"PermuteSeed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+157,0,"XorSeed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+158,0,"PermuteSeed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+159,0,"XorSeed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024root__trace_init_sub__TOP__dm__0(Vuser_domain_sw_cs_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuser_domain_sw_cs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_domain_sw_cs_tb___024root__trace_init_sub__TOP__dm__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+160,0,"DbgVersion013",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+161,0,"ProgBufSize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+160,0,"DataCount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+162,0,"HaltAddress",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+164,0,"ResumeAddress",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+166,0,"ExceptionAddress",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+168,0,"DataAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+169,0,"CauseBreakpoint",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+170,0,"CauseTrigger",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+171,0,"CauseRequest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+172,0,"CauseSingleStep",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
}

VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024root__trace_init_sub__TOP__obi_pkg__0(Vuser_domain_sw_cs_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuser_domain_sw_cs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_domain_sw_cs_tb___024root__trace_init_sub__TOP__obi_pkg__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+173,0,"DefaultAtop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+174,0,"DefaultMemtype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+175,0,"DefaultProt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("ObiMinimalOptionalConfig", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+138,0,"UseAtop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+138,0,"UseMemtype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+138,0,"UseProt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+138,0,"UseDbg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+145,0,"AUserWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+145,0,"WUserWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+145,0,"RUserWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+145,0,"MidWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+145,0,"AChkWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+145,0,"RChkWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ObiAtopOptionalConfig", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+144,0,"UseAtop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+138,0,"UseMemtype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+138,0,"UseProt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+138,0,"UseDbg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+145,0,"AUserWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+145,0,"WUserWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+145,0,"RUserWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+145,0,"MidWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+145,0,"AChkWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+145,0,"RChkWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ObiDefaultConfig", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+138,0,"UseRReady",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+138,0,"CombGnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+142,0,"AddrWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+142,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+137,0,"IdWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+138,0,"Integrity",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+144,0,"BeFull",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->pushPrefix("OptionalCfg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+138,0,"UseAtop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+138,0,"UseMemtype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+138,0,"UseProt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+138,0,"UseDbg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+145,0,"AUserWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+145,0,"WUserWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+145,0,"RUserWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+145,0,"MidWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+145,0,"AChkWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+145,0,"RChkWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024root__trace_init_sub__TOP__user_pkg__0(Vuser_domain_sw_cs_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuser_domain_sw_cs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_domain_sw_cs_tb___024root__trace_init_sub__TOP__user_pkg__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+137,0,"NumUserDomainSubordinates",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+176,0,"UserSpiAddrRange",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+177,0,"UserSpiAddrOffset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+137,0,"NumDemuxSbrRules",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+136,0,"NumDemuxSbr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("user_addr_map", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+139,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"start_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,0,"end_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024root__trace_init_sub__TOP__croc_pkg__0(Vuser_domain_sw_cs_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuser_domain_sw_cs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_domain_sw_cs_tb___024root__trace_init_sub__TOP__croc_pkg__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+145,0,"HartId",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+178,0,"JtagPulpManufacturer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 10,0);
    tracep->declBus(c+179,0,"JtagCrocPartNum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 15,0);
    tracep->declBus(c+180,0,"JtagCrocVersion",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 3,0);
    tracep->pushPrefix("PulpJtagIdCode", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+180,0,"version",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 3,0);
    tracep->declBus(c+179,0,"part_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 15,0);
    tracep->declBus(c+178,0,"manufacturer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 10,0);
    tracep->declBit(c+144,0,"_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->popPrefix();
    tracep->declBus(c+181,0,"NumExternalIrqs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+182,0,"PeriphBaseAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+183,0,"PeriphAddrRange",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+183,0,"SramBaseAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+136,0,"NumSramBanks",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+184,0,"SramBankNumWords",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+185,0,"SramBankAddrWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+186,0,"SramAddrRange",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+187,0,"UserBaseAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+188,0,"UserAddrRange",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+181,0,"NumCrocDomainSubordinates",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+181,0,"NumXbarManagers",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+181,0,"NumXbarSbrRules",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+189,0,"NumXbarSbr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("croc_addr_map", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+139,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"start_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"end_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+146,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"start_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"end_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+192,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"start_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,0,"end_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+127,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+194,0,"start_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"end_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+182,0,"DebugAddrOffset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+196,0,"DebugAddrRange",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+197,0,"SocCtrlAddrOffset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+176,0,"SocCtrlAddrRange",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+198,0,"UartAddrOffset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+176,0,"UartAddrRange",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+199,0,"GpioAddrOffset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+176,0,"GpioAddrRange",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+200,0,"TimerAddrOffset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+176,0,"TimerAddrRange",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+189,0,"NumPeriphRules",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+201,0,"NumPeriphs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("periph_addr_map", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+202,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+203,0,"start_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+204,0,"end_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+127,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+205,0,"start_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+206,0,"end_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+192,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+207,0,"start_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+208,0,"end_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+146,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+209,0,"start_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+210,0,"end_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+139,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"start_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+211,0,"end_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("MgrObiCfg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+138,0,"UseRReady",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+138,0,"CombGnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+142,0,"AddrWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+142,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+137,0,"IdWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+138,0,"Integrity",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+144,0,"BeFull",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->pushPrefix("OptionalCfg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+138,0,"UseAtop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+138,0,"UseMemtype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+138,0,"UseProt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+138,0,"UseDbg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+145,0,"AUserWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+145,0,"WUserWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+145,0,"RUserWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+145,0,"MidWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+145,0,"AChkWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+145,0,"RChkWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("SbrObiCfg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+138,0,"UseRReady",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+138,0,"CombGnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+142,0,"AddrWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+142,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+143,0,"IdWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+138,0,"Integrity",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+144,0,"BeFull",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->pushPrefix("OptionalCfg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+138,0,"UseAtop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+138,0,"UseMemtype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+138,0,"UseProt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+138,0,"UseDbg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+145,0,"AUserWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+145,0,"WUserWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+145,0,"RUserWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+145,0,"MidWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+145,0,"AChkWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+145,0,"RChkWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024root__trace_init_sub__TOP__soc_ctrl_reg_pkg__0(Vuser_domain_sw_cs_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuser_domain_sw_cs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_domain_sw_cs_tb___024root__trace_init_sub__TOP__soc_ctrl_reg_pkg__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+149,0,"BlockAw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+133,0,"SOC_CTRL_BOOTADDR_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+212,0,"SOC_CTRL_FETCHEN_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+213,0,"SOC_CTRL_CORESTATUS_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+214,0,"SOC_CTRL_BOOTMODE_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("SOC_CTRL_PERMIT", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+215+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
}

VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024root__trace_init_sub__TOP__cve2_pkg__0(Vuser_domain_sw_cs_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuser_domain_sw_cs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_domain_sw_cs_tb___024root__trace_init_sub__TOP__cve2_pkg__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+135,0,"PMP_MAX_REGIONS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+219,0,"PMP_CFG_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+145,0,"PMP_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+137,0,"PMP_I2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+136,0,"PMP_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+220,0,"CSR_OFF_PMP_CFG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+221,0,"CSR_OFF_PMP_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+143,0,"CSR_MSTATUS_MIE_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+222,0,"CSR_MSTATUS_MPIE_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+223,0,"CSR_MSTATUS_MPP_BIT_LOW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+224,0,"CSR_MSTATUS_MPP_BIT_HIGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+225,0,"CSR_MSTATUS_MPRV_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+226,0,"CSR_MSTATUS_TW_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+227,0,"CSR_MISA_MXL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+143,0,"CSR_MSIX_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+222,0,"CSR_MTIX_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+223,0,"CSR_MEIX_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+135,0,"CSR_MFIX_BIT_LOW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+228,0,"CSR_MFIX_BIT_HIGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+145,0,"CSR_MSECCFG_MML_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+137,0,"CSR_MSECCFG_MMWP_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+136,0,"CSR_MSECCFG_RLB_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+229,0,"MVENDORID_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+230,0,"MVENDORID_BANK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+231,0,"MARCHID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+232,0,"CSR_MVENDORID_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+231,0,"CSR_MARCHID_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"CSR_MIMPID_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"CSR_MCONFIGPTR_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024root__trace_init_top(Vuser_domain_sw_cs_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuser_domain_sw_cs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_domain_sw_cs_tb___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vuser_domain_sw_cs_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vuser_domain_sw_cs_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vuser_domain_sw_cs_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024root__trace_register(Vuser_domain_sw_cs_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuser_domain_sw_cs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_domain_sw_cs_tb___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vuser_domain_sw_cs_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vuser_domain_sw_cs_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vuser_domain_sw_cs_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vuser_domain_sw_cs_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024root__trace_const_0_sub_0(Vuser_domain_sw_cs_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_domain_sw_cs_tb___024root__trace_const_0\n"); );
    // Init
    Vuser_domain_sw_cs_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vuser_domain_sw_cs_tb___024root*>(voidSelf);
    Vuser_domain_sw_cs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vuser_domain_sw_cs_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024root__trace_const_0_sub_0(Vuser_domain_sw_cs_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuser_domain_sw_cs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_domain_sw_cs_tb___024root__trace_const_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullDouble(oldp+119,(4.99999999999999929e+01));
    bufp->fullDouble(oldp+121,(9.99999999999999858e+01));
    bufp->fullIData(oldp+123,(0x3e8U),32);
    bufp->fullIData(oldp+124,(0x1388U),32);
    bufp->fullIData(oldp+125,(0x10U),32);
    bufp->fullIData(oldp+126,(0U),32);
    bufp->fullIData(oldp+127,(4U),32);
    bufp->fullIData(oldp+128,(8U),32);
    bufp->fullIData(oldp+129,(0x20001000U),32);
    bufp->fullIData(oldp+130,(0x20001004U),32);
    bufp->fullIData(oldp+131,(0x20001008U),32);
    bufp->fullBit(oldp+132,(0U));
    bufp->fullCData(oldp+133,(0U),4);
    bufp->fullBit(oldp+134,(0U));
    bufp->fullIData(oldp+135,(0x10U),32);
    bufp->fullIData(oldp+136,(2U),32);
    bufp->fullIData(oldp+137,(1U),32);
    bufp->fullBit(oldp+138,(0U));
    bufp->fullIData(oldp+139,(1U),32);
    bufp->fullIData(oldp+140,(0x20002000U),32);
    bufp->fullBit(oldp+141,(1U));
    bufp->fullIData(oldp+142,(0x20U),32);
    bufp->fullIData(oldp+143,(3U),32);
    bufp->fullBit(oldp+144,(1U));
    bufp->fullIData(oldp+145,(0U),32);
    bufp->fullIData(oldp+146,(2U),32);
    bufp->fullIData(oldp+147,(0x20U),32);
    bufp->fullIData(oldp+148,(8U),32);
    bufp->fullIData(oldp+149,(4U),32);
    bufp->fullSData(oldp+150,(0U),12);
    bufp->fullSData(oldp+151,(4U),12);
    bufp->fullSData(oldp+152,(8U),12);
    bufp->fullIData(oldp+153,(0xbadcab1eU),32);
    bufp->fullIData(oldp+154,(0x47df4U),32);
    bufp->fullIData(oldp+155,(0x3e20e8fU),32);
    bufp->fullIData(oldp+156,(0x12ff886U),32);
    bufp->fullIData(oldp+157,(0xf3181U),32);
    bufp->fullIData(oldp+158,(0x11d2e881U),32);
    bufp->fullIData(oldp+159,(0x3e7b72U),32);
    bufp->fullCData(oldp+160,(2U),4);
    bufp->fullCData(oldp+161,(8U),5);
    bufp->fullQData(oldp+162,(0x800ULL),64);
    bufp->fullQData(oldp+164,(0x808ULL),64);
    bufp->fullQData(oldp+166,(0x810ULL),64);
    bufp->fullSData(oldp+168,(0x380U),12);
    bufp->fullCData(oldp+169,(1U),3);
    bufp->fullCData(oldp+170,(2U),3);
    bufp->fullCData(oldp+171,(3U),3);
    bufp->fullCData(oldp+172,(4U),3);
    bufp->fullCData(oldp+173,(0U),6);
    bufp->fullCData(oldp+174,(0U),2);
    bufp->fullCData(oldp+175,(7U),3);
    bufp->fullIData(oldp+176,(0x1000U),32);
    bufp->fullIData(oldp+177,(0x20001000U),32);
    bufp->fullSData(oldp+178,(0x6d9U),11);
    bufp->fullSData(oldp+179,(0xc0c5U),16);
    bufp->fullCData(oldp+180,(0U),4);
    bufp->fullIData(oldp+181,(4U),32);
    bufp->fullIData(oldp+182,(0U),32);
    bufp->fullIData(oldp+183,(0x10000000U),32);
    bufp->fullIData(oldp+184,(0x200U),32);
    bufp->fullIData(oldp+185,(9U),32);
    bufp->fullIData(oldp+186,(0x1000U),32);
    bufp->fullIData(oldp+187,(0x20000000U),32);
    bufp->fullIData(oldp+188,(0x60000000U),32);
    bufp->fullIData(oldp+189,(5U),32);
    bufp->fullIData(oldp+190,(0x10000000U),32);
    bufp->fullIData(oldp+191,(0x10000800U),32);
    bufp->fullIData(oldp+192,(3U),32);
    bufp->fullIData(oldp+193,(0x10001000U),32);
    bufp->fullIData(oldp+194,(0x20000000U),32);
    bufp->fullIData(oldp+195,(0x80000000U),32);
    bufp->fullIData(oldp+196,(0x40000U),32);
    bufp->fullIData(oldp+197,(0x3000000U),32);
    bufp->fullIData(oldp+198,(0x3002000U),32);
    bufp->fullIData(oldp+199,(0x3005000U),32);
    bufp->fullIData(oldp+200,(0x300a000U),32);
    bufp->fullIData(oldp+201,(6U),32);
    bufp->fullIData(oldp+202,(5U),32);
    bufp->fullIData(oldp+203,(0x300a000U),32);
    bufp->fullIData(oldp+204,(0x300b000U),32);
    bufp->fullIData(oldp+205,(0x3005000U),32);
    bufp->fullIData(oldp+206,(0x3006000U),32);
    bufp->fullIData(oldp+207,(0x3002000U),32);
    bufp->fullIData(oldp+208,(0x3003000U),32);
    bufp->fullIData(oldp+209,(0x3000000U),32);
    bufp->fullIData(oldp+210,(0x3001000U),32);
    bufp->fullIData(oldp+211,(0x40000U),32);
    bufp->fullCData(oldp+212,(4U),4);
    bufp->fullCData(oldp+213,(8U),4);
    bufp->fullCData(oldp+214,(0xcU),4);
    bufp->fullCData(oldp+215,(vlSymsp->TOP__soc_ctrl_reg_pkg.__PVT__SOC_CTRL_PERMIT[0]),4);
    bufp->fullCData(oldp+216,(vlSymsp->TOP__soc_ctrl_reg_pkg.__PVT__SOC_CTRL_PERMIT[1]),4);
    bufp->fullCData(oldp+217,(vlSymsp->TOP__soc_ctrl_reg_pkg.__PVT__SOC_CTRL_PERMIT[2]),4);
    bufp->fullCData(oldp+218,(vlSymsp->TOP__soc_ctrl_reg_pkg.__PVT__SOC_CTRL_PERMIT[3]),4);
    bufp->fullIData(oldp+219,(8U),32);
    bufp->fullSData(oldp+220,(0x3a0U),12);
    bufp->fullSData(oldp+221,(0x3b0U),12);
    bufp->fullIData(oldp+222,(7U),32);
    bufp->fullIData(oldp+223,(0xbU),32);
    bufp->fullIData(oldp+224,(0xcU),32);
    bufp->fullIData(oldp+225,(0x11U),32);
    bufp->fullIData(oldp+226,(0x15U),32);
    bufp->fullCData(oldp+227,(1U),2);
    bufp->fullIData(oldp+228,(0x1fU),32);
    bufp->fullCData(oldp+229,(2U),7);
    bufp->fullIData(oldp+230,(0xcU),25);
    bufp->fullIData(oldp+231,(0x23U),32);
    bufp->fullIData(oldp+232,(0x602U),32);
}

VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024root__trace_full_0_sub_0(Vuser_domain_sw_cs_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_domain_sw_cs_tb___024root__trace_full_0\n"); );
    // Init
    Vuser_domain_sw_cs_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vuser_domain_sw_cs_tb___024root*>(voidSelf);
    Vuser_domain_sw_cs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vuser_domain_sw_cs_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024root__trace_full_0_sub_0(Vuser_domain_sw_cs_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuser_domain_sw_cs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_domain_sw_cs_tb___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.user_domain_sw_cs_tb__DOT__ref_clk_i));
    bufp->fullBit(oldp+2,(vlSelfRef.user_domain_sw_cs_tb__DOT__testmode_i));
    bufp->fullIData(oldp+3,((IData)((vlSelfRef.user_domain_sw_cs_tb__DOT__user_mgr_obi_rsp 
                                     >> 5U))),32);
    bufp->fullBit(oldp+4,((1U & (IData)((vlSelfRef.user_domain_sw_cs_tb__DOT__user_mgr_obi_rsp 
                                         >> 4U)))));
    bufp->fullBit(oldp+5,((1U & (IData)((vlSelfRef.user_domain_sw_cs_tb__DOT__user_mgr_obi_rsp 
                                         >> 3U)))));
    bufp->fullBit(oldp+6,((1U & (IData)((vlSelfRef.user_domain_sw_cs_tb__DOT__user_mgr_obi_rsp 
                                         >> 2U)))));
    bufp->fullBit(oldp+7,((1U & (IData)((vlSelfRef.user_domain_sw_cs_tb__DOT__user_mgr_obi_rsp 
                                         >> 1U)))));
    bufp->fullBit(oldp+8,((1U & (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__user_mgr_obi_rsp))));
    bufp->fullSData(oldp+9,(vlSelfRef.user_domain_sw_cs_tb__DOT__gpio_in_sync_i),16);
    bufp->fullIData(oldp+10,(((vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] 
                               << 0x16U) | (vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
                                            >> 0xaU))),32);
    bufp->fullBit(oldp+11,((1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
                                  >> 9U))));
    bufp->fullCData(oldp+12,((0xfU & (vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
                                      >> 5U))),4);
    bufp->fullIData(oldp+13,(((vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
                               << 0x1bU) | (vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
                                            >> 5U))),32);
    bufp->fullCData(oldp+14,((7U & (vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
                                    >> 2U))),3);
    bufp->fullBit(oldp+15,((1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
                                  >> 1U))));
    bufp->fullBit(oldp+16,((1U & vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U])));
    bufp->fullBit(oldp+17,(vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing));
    bufp->fullIData(oldp+18,((IData)((((0x4dU >= ((IData)(2U) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))
                                        ? (0x1fffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                               (((IData)(0x26U) 
                                                                 + 
                                                                 (0x7fU 
                                                                  & ((IData)(0x27U) 
                                                                     * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                >> 5U)])) 
                                               << (
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                    ? 0x20U
                                                    : 
                                                   ((IData)(0x40U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                              | (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(2U) 
                                                       + 
                                                       (0x7fU 
                                                        & ((IData)(0x27U) 
                                                           * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                   ? 0ULL
                                                   : 
                                                  ((QData)((IData)(
                                                                   vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x21U) 
                                                                     + 
                                                                     (0x7fU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                    (((IData)(2U) 
                                                                      + 
                                                                      (0x7fU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                     >> 5U)])) 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))))
                                        : 0ULL) >> 5U))),32);
    bufp->fullCData(oldp+19,((7U & (IData)((((0x4dU 
                                              >= ((IData)(2U) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))
                                              ? (0x1fffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                     (((IData)(0x26U) 
                                                                       + 
                                                                       (0x7fU 
                                                                        & ((IData)(0x27U) 
                                                                           * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                      >> 5U)])) 
                                                     << 
                                                     ((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                       ? 0x20U
                                                       : 
                                                      ((IData)(0x40U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                                    | (((0U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(2U) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                         ? 0ULL
                                                         : 
                                                        ((QData)((IData)(
                                                                         vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                         (((IData)(0x21U) 
                                                                           + 
                                                                           (0x7fU 
                                                                            & ((IData)(0x27U) 
                                                                               * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                          >> 5U)])) 
                                                         << 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & ((IData)(2U) 
                                                              + 
                                                              (0x7fU 
                                                               & ((IData)(0x27U) 
                                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                                       | ((QData)((IData)(
                                                                          vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                          (((IData)(2U) 
                                                                            + 
                                                                            (0x7fU 
                                                                             & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                           >> 5U)])) 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(2U) 
                                                              + 
                                                              (0x7fU 
                                                               & ((IData)(0x27U) 
                                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))))
                                              : 0ULL) 
                                            >> 2U)))),3);
    bufp->fullBit(oldp+20,((1U & (IData)((((0x4dU >= 
                                            ((IData)(2U) 
                                             + (0x7fU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))
                                            ? (0x1fffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x26U) 
                                                                     + 
                                                                     (0x7fU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(0x21U) 
                                                                         + 
                                                                         (0x7fU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (((IData)(2U) 
                                                                          + 
                                                                          (0x7fU 
                                                                           & ((IData)(0x27U) 
                                                                              * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                         >> 5U)])) 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))))
                                            : 0ULL) 
                                          >> 1U)))));
    bufp->fullBit(oldp+21,((1U & (IData)(((0x4dU >= 
                                           ((IData)(2U) 
                                            + (0x7fU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))
                                           ? (0x1fffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                  (((IData)(0x26U) 
                                                                    + 
                                                                    (0x7fU 
                                                                     & ((IData)(0x27U) 
                                                                        * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                    ? 0x20U
                                                    : 
                                                   ((IData)(0x40U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                                 | (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(2U) 
                                                          + 
                                                          (0x7fU 
                                                           & ((IData)(0x27U) 
                                                              * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                      ? 0ULL
                                                      : 
                                                     ((QData)((IData)(
                                                                      vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                      (((IData)(0x21U) 
                                                                        + 
                                                                        (0x7fU 
                                                                         & ((IData)(0x27U) 
                                                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                       >> 5U)])) 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                                    | ((QData)((IData)(
                                                                       vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(2U) 
                                                                         + 
                                                                         (0x7fU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                        >> 5U)])) 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))))
                                           : 0ULL)))));
    bufp->fullIData(oldp+22,((IData)((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_rsp 
                                      >> 7U))),32);
    bufp->fullCData(oldp+23,((7U & (IData)((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_rsp 
                                            >> 4U)))),3);
    bufp->fullBit(oldp+24,((1U & (IData)((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_rsp 
                                          >> 3U)))));
    bufp->fullBit(oldp+25,((1U & (IData)((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_rsp 
                                          >> 2U)))));
    bufp->fullBit(oldp+26,((1U & (IData)((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_rsp 
                                          >> 1U)))));
    bufp->fullBit(oldp+27,((1U & (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_rsp))));
    bufp->fullBit(oldp+28,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_down));
    bufp->fullIData(oldp+29,(((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[1U] 
                               << 0x19U) | (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[0U] 
                                            >> 7U))),32);
    bufp->fullCData(oldp+30,((7U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[0U] 
                                    >> 4U))),3);
    bufp->fullBit(oldp+31,((1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[0U] 
                                  >> 3U))));
    bufp->fullBit(oldp+32,((1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[0U] 
                                  >> 2U))));
    bufp->fullBit(oldp+33,((1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[0U] 
                                  >> 1U))));
    bufp->fullBit(oldp+34,((1U & vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[0U])));
    bufp->fullIData(oldp+35,(((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[2U] 
                               << 0x12U) | (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[1U] 
                                            >> 0xeU))),32);
    bufp->fullCData(oldp+36,((7U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[1U] 
                                    >> 0xbU))),3);
    bufp->fullBit(oldp+37,((1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[1U] 
                                  >> 0xaU))));
    bufp->fullBit(oldp+38,((1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[1U] 
                                  >> 9U))));
    bufp->fullBit(oldp+39,((1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[1U] 
                                  >> 8U))));
    bufp->fullBit(oldp+40,((1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[1U] 
                                  >> 7U))));
    bufp->fullIData(oldp+41,(((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                               << 0x16U) | (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[1U] 
                                            >> 0xaU))),32);
    bufp->fullBit(oldp+42,((1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[1U] 
                                  >> 9U))));
    bufp->fullCData(oldp+43,((0xfU & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[1U] 
                                      >> 5U))),4);
    bufp->fullIData(oldp+44,(((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[1U] 
                               << 0x1bU) | (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0U] 
                                            >> 5U))),32);
    bufp->fullCData(oldp+45,((7U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0U] 
                                    >> 2U))),3);
    bufp->fullBit(oldp+46,((1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0U] 
                                  >> 1U))));
    bufp->fullBit(oldp+47,((1U & vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0U])));
    bufp->fullIData(oldp+48,(((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[4U] 
                               << 0xcU) | (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                           >> 0x14U))),32);
    bufp->fullBit(oldp+49,((1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                  >> 0x13U))));
    bufp->fullCData(oldp+50,((0xfU & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                      >> 0xfU))),4);
    bufp->fullIData(oldp+51,(((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                               << 0x11U) | (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                                            >> 0xfU))),32);
    bufp->fullCData(oldp+52,((7U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+53,((1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                                  >> 0xbU))));
    bufp->fullBit(oldp+54,((1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                                  >> 0xaU))));
    bufp->fullBit(oldp+55,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_up));
    bufp->fullBit(oldp+56,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_d));
    bufp->fullCData(oldp+57,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_d),2);
    bufp->fullBit(oldp+58,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o));
    bufp->fullBit(oldp+59,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__status_read_req));
    bufp->fullBit(oldp+60,((IData)((0x800000U == (0xfff80000U 
                                                  & vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U])))));
    bufp->fullBit(oldp+61,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT____Vcellinp__i_id_fifo__push_i));
    bufp->fullBit(oldp+62,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__gate_clock));
    bufp->fullBit(oldp+63,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_n));
    bufp->fullCData(oldp+64,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_n),2);
    bufp->fullCData(oldp+65,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_n),3);
    bufp->fullBit(oldp+66,(vlSelfRef.user_domain_sw_cs_tb__DOT__spi_sck_o));
    bufp->fullBit(oldp+67,(vlSelfRef.user_domain_sw_cs_tb__DOT__spi_mosi_o));
    bufp->fullIData(oldp+68,((IData)((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_error_obi_rsp 
                                      >> 7U))),32);
    bufp->fullCData(oldp+69,((7U & (IData)((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_error_obi_rsp 
                                            >> 4U)))),3);
    bufp->fullBit(oldp+70,((1U & (IData)((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_error_obi_rsp 
                                          >> 3U)))));
    bufp->fullBit(oldp+71,((1U & (IData)((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_error_obi_rsp 
                                          >> 2U)))));
    bufp->fullBit(oldp+72,((1U & (IData)((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_error_obi_rsp 
                                          >> 1U)))));
    bufp->fullBit(oldp+73,((1U & (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_error_obi_rsp))));
    bufp->fullBit(oldp+74,((1U & ((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q) 
                                  >> 1U))));
    bufp->fullBit(oldp+75,((1U & (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q))));
    bufp->fullBit(oldp+76,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q));
    bufp->fullCData(oldp+77,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q),2);
    bufp->fullBit(oldp+78,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__rvalid_q));
    bufp->fullIData(oldp+79,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__rdata_q),32);
    bufp->fullBit(oldp+80,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__cs_no));
    bufp->fullCData(oldp+81,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_q),2);
    bufp->fullCData(oldp+82,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_d),2);
    bufp->fullBit(oldp+83,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_q));
    bufp->fullBit(oldp+84,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_d));
    bufp->fullCData(oldp+85,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_q),8);
    bufp->fullCData(oldp+86,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q),3);
    bufp->fullCData(oldp+87,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_d),3);
    bufp->fullCData(oldp+88,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q),3);
    bufp->fullCData(oldp+89,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_d),3);
    bufp->fullIData(oldp+90,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__granted_addr_q),32);
    bufp->fullBit(oldp+91,((4U <= (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q))));
    bufp->fullCData(oldp+92,((((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__done_q) 
                               << 1U) | ((0U != (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)) 
                                         & (3U != (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_q))))),2);
    bufp->fullBit(oldp+93,(((0U != (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)) 
                            & (3U != (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)))));
    bufp->fullBit(oldp+94,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__done_q));
    bufp->fullBit(oldp+95,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__done_d));
    bufp->fullCData(oldp+96,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__unnamedblk1__DOT__next_bit_idx_calc),4);
    bufp->fullCData(oldp+97,(((2U >= (3U & ((IData)(3U) 
                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q))))
                               ? (7U & ((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_q) 
                                        >> (3U & ((IData)(3U) 
                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q)))))
                               : 0U)),3);
    bufp->fullBit(oldp+98,((1U == (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q))));
    bufp->fullBit(oldp+99,((0U == (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q))));
    bufp->fullBit(oldp+100,((1U & (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q))));
    bufp->fullBit(oldp+101,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_n));
    bufp->fullBit(oldp+102,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q));
    bufp->fullBit(oldp+103,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q));
    bufp->fullCData(oldp+104,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q),2);
    bufp->fullCData(oldp+105,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_q),3);
    bufp->fullBit(oldp+106,(vlSelfRef.user_domain_sw_cs_tb__DOT__clk_i));
    bufp->fullBit(oldp+107,(vlSelfRef.user_domain_sw_cs_tb__DOT__rst_ni));
    bufp->fullBit(oldp+108,(((0x4dU >= ((IData)(1U) 
                                        + (0x7fU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))) 
                             && (1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                       (((IData)(1U) 
                                         + (0x7fU & 
                                            ((IData)(0x27U) 
                                             * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))) 
                                        >> 5U)] >> 
                                       (0x1fU & ((IData)(1U) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))))))));
    bufp->fullBit(oldp+109,(vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_ssd1331_n));
    bufp->fullBit(oldp+110,(vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_adxl345_n));
    bufp->fullBit(oldp+111,(vlSelfRef.user_domain_sw_cs_tb__DOT__tb_dc_ssd1331));
    bufp->fullBit(oldp+112,(vlSelfRef.user_domain_sw_cs_tb__DOT__tb_int_adxl345));
    bufp->fullBit(oldp+113,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx));
    bufp->fullBit(oldp+114,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_addr_decode_periphs__DOT__dec_valid_o));
    bufp->fullBit(oldp+115,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_addr_decode_periphs__DOT__dec_error_o));
    bufp->fullBit(oldp+116,(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__matched_rules));
    bufp->fullBit(oldp+117,(((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_up) 
                             ^ (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_down))));
    bufp->fullBit(oldp+118,(((vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                              >> 0x13U) & ((0U == (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)) 
                                           & ((4U == 
                                               (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                >> 0x14U)) 
                                              | (0U 
                                                 == 
                                                 (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                  >> 0x14U)))))));
}
