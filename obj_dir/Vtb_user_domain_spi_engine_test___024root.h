// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_user_domain_spi_engine_test.h for the primary calling header

#ifndef VERILATED_VTB_USER_DOMAIN_SPI_ENGINE_TEST___024ROOT_H_
#define VERILATED_VTB_USER_DOMAIN_SPI_ENGINE_TEST___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_user_domain_spi_engine_test___024unit;
class Vtb_user_domain_spi_engine_test_soc_ctrl_reg_pkg;


class Vtb_user_domain_spi_engine_test__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_user_domain_spi_engine_test___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtb_user_domain_spi_engine_test___024unit* __PVT____024unit;
    Vtb_user_domain_spi_engine_test_soc_ctrl_reg_pkg* __PVT__soc_ctrl_reg_pkg;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__clk_i;
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__rst_ni;
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__ref_clk_i;
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__testmode_i;
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__spi_sck_o;
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__spi_mosi_o;
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__req_ongoing;
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__user_idx;
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o;
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__UserSpiCtrl;
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__UserFontRom;
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_addr_decode_periphs__DOT__dec_valid_o;
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_addr_decode_periphs__DOT__dec_error_o;
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__matched_rules;
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__cnt_up;
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__cnt_down;
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__select_d;
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__select_q;
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__is_same_target_dbg;
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__no_flight_dbg;
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__one_completing_dbg;
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__forward_ok_dbg;
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__forward_condition_met_actual;
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT____Vlvbound_h281faa94__0;
        CData/*2:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q;
        CData/*2:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_d;
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT____Vcellinp__i_id_fifo__push_i;
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__gate_clock;
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_n;
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q;
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_n;
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q;
        CData/*1:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_n;
        CData/*1:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q;
        CData/*2:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_n;
        CData/*2:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_q;
        CData/*2:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT____Vlvbound_h3dcab515__0;
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__cs_no;
        CData/*1:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__state_q;
        CData/*1:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__state_d;
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_q;
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_d;
        CData/*7:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_q;
        CData/*7:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_d;
        CData/*2:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q;
        CData/*2:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_d;
        CData/*1:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q;
        CData/*1:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_d;
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__rvalid_q;
        CData/*1:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__status_bits;
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__done_q;
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__read_req_accepted_this_cycle;
        CData/*2:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__unnamedblk1__DOT__next_bit_idx_calc;
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__cs1_n_q;
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__cs1_n_d;
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__cs2_n_q;
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__cs2_n_d;
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__dc_q;
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__dc_d;
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__rvalid_q;
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__read_req_accepted;
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__write_req;
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__read_req;
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w;
    };
    struct {
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r;
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT____VdfgRegularize_h18fe919a_0_4;
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_font_rom__DOT__rvalid_q;
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_font_rom__DOT__read_req_accepted;
        CData/*0:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_font_rom__DOT__read_req;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o__0;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_user_domain_spi_engine_test__DOT__clk_i__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_user_domain_spi_engine_test__DOT__rst_ni__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ tb_user_domain_spi_engine_test__DOT__gpio_in_sync_i;
        VlWide<3>/*72:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_obi_demux__DOT____Vlvbound_h07cd8bd2__0;
        IData/*31:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__rdata_q;
        IData/*31:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__prng_out_q;
        IData/*31:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__rdata_q;
        IData/*31:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__reg_rdata;
        IData/*31:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__i_xorshift__DOT__state_q;
        IData/*31:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__i_xorshift__DOT__t1;
        IData/*31:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__i_xorshift__DOT__t2;
        IData/*31:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_font_rom__DOT__rdata_q;
        IData/*31:0*/ __Vdly__tb_user_domain_spi_engine_test__DOT__dut__DOT__i_spi_peripheral__DOT__rdata_q;
        IData/*31:0*/ __VactIterCount;
        VlWide<3>/*73:0*/ tb_user_domain_spi_engine_test__DOT__user_sbr_obi_req;
        QData/*36:0*/ tb_user_domain_spi_engine_test__DOT__user_mgr_obi_rsp;
        VlWide<3>/*77:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__all_user_sbr_obi_rsp;
        QData/*38:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__user_error_obi_rsp;
        QData/*38:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_obi_rsp;
        VlWide<3>/*73:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_req;
        QData/*38:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_rsp;
        VlWide<3>/*73:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_req;
        QData/*38:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_rsp;
        VlWide<5>/*147:0*/ tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o;
        QData/*38:0*/ __Vtrigprevexpr___TOP__tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_rsp__0;
        QData/*38:0*/ __Vtrigprevexpr___TOP__tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_rsp__0;
        QData/*38:0*/ __Vtrigprevexpr___TOP__tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_rsp__1;
        QData/*38:0*/ __Vtrigprevexpr___TOP__tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_rsp__1;
        VlUnpacked<CData/*7:0*/, 1140> tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_font_rom__DOT__rom_data;
        VlUnpacked<CData/*0:0*/, 11> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h2977615d__0;
    VlTriggerVec<6> __VstlTriggered;
    VlTriggerVec<8> __VactTriggered;
    VlTriggerVec<8> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_user_domain_spi_engine_test__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_user_domain_spi_engine_test___024root(Vtb_user_domain_spi_engine_test__Syms* symsp, const char* v__name);
    ~Vtb_user_domain_spi_engine_test___024root();
    VL_UNCOPYABLE(Vtb_user_domain_spi_engine_test___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
