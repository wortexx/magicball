// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_user_spi_ctrl.h for the primary calling header

#ifndef VERILATED_VTB_USER_SPI_CTRL___024ROOT_H_
#define VERILATED_VTB_USER_SPI_CTRL___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_user_spi_ctrl_soc_ctrl_reg_pkg;


class Vtb_user_spi_ctrl__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_user_spi_ctrl___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtb_user_spi_ctrl_soc_ctrl_reg_pkg* __PVT__soc_ctrl_reg_pkg;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_user_spi_ctrl__DOT__clk_i;
    CData/*0:0*/ tb_user_spi_ctrl__DOT__rst_ni;
    CData/*0:0*/ tb_user_spi_ctrl__DOT__req_ongoing;
    CData/*0:0*/ tb_user_spi_ctrl__DOT__unnamedblk1__DOT__read_error;
    CData/*0:0*/ tb_user_spi_ctrl__DOT__dut__DOT__cs1_n_q;
    CData/*0:0*/ tb_user_spi_ctrl__DOT__dut__DOT__cs2_n_q;
    CData/*0:0*/ tb_user_spi_ctrl__DOT__dut__DOT__dc_q;
    CData/*0:0*/ tb_user_spi_ctrl__DOT__dut__DOT__rvalid_q;
    CData/*0:0*/ tb_user_spi_ctrl__DOT__dut__DOT__read_granted_this_cycle;
    CData/*0:0*/ tb_user_spi_ctrl__DOT__dut__DOT__write_req;
    CData/*0:0*/ tb_user_spi_ctrl__DOT__dut__DOT__read_req;
    CData/*0:0*/ tb_user_spi_ctrl__DOT__dut__DOT__grant_w;
    CData/*0:0*/ tb_user_spi_ctrl__DOT__dut__DOT__grant_r;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_user_spi_ctrl__DOT__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_user_spi_ctrl__DOT__rst_ni__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_user_spi_ctrl__DOT__unnamedblk1__DOT__read_back_data;
    IData/*31:0*/ tb_user_spi_ctrl__DOT__dut__DOT__rdata_q;
    IData/*31:0*/ tb_user_spi_ctrl__DOT__dut__DOT__reg_rdata_comb;
    IData/*31:0*/ __VactIterCount;
    VlWide<3>/*73:0*/ tb_user_spi_ctrl__DOT__obi_req_i_to_dut;
    QData/*38:0*/ tb_user_spi_ctrl__DOT__obi_rsp_o_from_dut;
    VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_he028f39d__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_user_spi_ctrl__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_user_spi_ctrl___024root(Vtb_user_spi_ctrl__Syms* symsp, const char* v__name);
    ~Vtb_user_spi_ctrl___024root();
    VL_UNCOPYABLE(Vtb_user_spi_ctrl___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
