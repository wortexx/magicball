// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuser_domain_sw_cs_tb.h for the primary calling header

#ifndef VERILATED_VUSER_DOMAIN_SW_CS_TB___024ROOT_H_
#define VERILATED_VUSER_DOMAIN_SW_CS_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vuser_domain_sw_cs_tb___024unit;
class Vuser_domain_sw_cs_tb_soc_ctrl_reg_pkg;


class Vuser_domain_sw_cs_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuser_domain_sw_cs_tb___024root final : public VerilatedModule {
  public:
    // CELLS
    Vuser_domain_sw_cs_tb___024unit* __PVT____024unit;
    Vuser_domain_sw_cs_tb_soc_ctrl_reg_pkg* __PVT__soc_ctrl_reg_pkg;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ user_domain_sw_cs_tb__DOT__clk_i;
        CData/*0:0*/ user_domain_sw_cs_tb__DOT__rst_ni;
        CData/*0:0*/ user_domain_sw_cs_tb__DOT__ref_clk_i;
        CData/*0:0*/ user_domain_sw_cs_tb__DOT__testmode_i;
        CData/*0:0*/ user_domain_sw_cs_tb__DOT__spi_sck_o;
        CData/*0:0*/ user_domain_sw_cs_tb__DOT__spi_mosi_o;
        CData/*0:0*/ user_domain_sw_cs_tb__DOT__tb_cs_ssd1331_n;
        CData/*0:0*/ user_domain_sw_cs_tb__DOT__tb_cs_adxl345_n;
        CData/*0:0*/ user_domain_sw_cs_tb__DOT__tb_dc_ssd1331;
        CData/*0:0*/ user_domain_sw_cs_tb__DOT__tb_int_adxl345;
        CData/*0:0*/ user_domain_sw_cs_tb__DOT__req_ongoing;
        CData/*0:0*/ user_domain_sw_cs_tb__DOT__dut__DOT__user_idx;
        CData/*0:0*/ user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o;
        CData/*0:0*/ user_domain_sw_cs_tb__DOT__dut__DOT__i_addr_decode_periphs__DOT__dec_valid_o;
        CData/*0:0*/ user_domain_sw_cs_tb__DOT__dut__DOT__i_addr_decode_periphs__DOT__dec_error_o;
        CData/*0:0*/ user_domain_sw_cs_tb__DOT__dut__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__matched_rules;
        CData/*0:0*/ user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_up;
        CData/*0:0*/ user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_down;
        CData/*0:0*/ user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_d;
        CData/*0:0*/ user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q;
        CData/*0:0*/ user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT____Vlvbound_h235a59af__0;
        CData/*1:0*/ user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q;
        CData/*1:0*/ user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_d;
        CData/*0:0*/ user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT____Vcellinp__i_id_fifo__push_i;
        CData/*0:0*/ user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__gate_clock;
        CData/*0:0*/ user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_n;
        CData/*0:0*/ user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q;
        CData/*0:0*/ user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_n;
        CData/*0:0*/ user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q;
        CData/*1:0*/ user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_n;
        CData/*1:0*/ user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q;
        CData/*2:0*/ user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_n;
        CData/*2:0*/ user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_q;
        CData/*2:0*/ user_domain_sw_cs_tb__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT____Vlvbound_h3dcab515__0;
        CData/*0:0*/ user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__cs_no;
        CData/*1:0*/ user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_q;
        CData/*1:0*/ user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__state_d;
        CData/*0:0*/ user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_q;
        CData/*0:0*/ user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_d;
        CData/*7:0*/ user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_q;
        CData/*7:0*/ user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_d;
        CData/*2:0*/ user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q;
        CData/*2:0*/ user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_d;
        CData/*2:0*/ user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q;
        CData/*2:0*/ user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_d;
        CData/*0:0*/ user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__rvalid_q;
        CData/*0:0*/ user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__status_read_req;
        CData/*0:0*/ user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__done_q;
        CData/*0:0*/ user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__done_d;
        CData/*3:0*/ user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__unnamedblk1__DOT__next_bit_idx_calc;
        CData/*7:0*/ __Vtask_user_domain_sw_cs_tb__DOT__send_data__150__data;
        CData/*7:0*/ __Vtask_user_domain_sw_cs_tb__DOT__send_spi_byte_raw__153__spi_data;
        CData/*0:0*/ __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__154__busy_bit;
        CData/*0:0*/ __Vtrigprevexpr___TOP__user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o__0;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__user_domain_sw_cs_tb__DOT__clk_i__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__user_domain_sw_cs_tb__DOT__rst_ni__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ user_domain_sw_cs_tb__DOT__gpio_in_sync_i;
        VlWide<3>/*72:0*/ user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT____Vlvbound_h19131224__0;
        IData/*31:0*/ user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__rdata_q;
    };
    struct {
        IData/*31:0*/ user_domain_sw_cs_tb__DOT__dut__DOT__i_spi_peripheral__DOT__granted_addr_q;
        IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__send_data__150__device;
        IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__154__status_val;
        IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__154__timeout_count;
        IData/*31:0*/ __VactIterCount;
        VlWide<3>/*73:0*/ user_domain_sw_cs_tb__DOT__user_sbr_obi_req;
        QData/*36:0*/ user_domain_sw_cs_tb__DOT__user_mgr_obi_rsp;
        VlWide<3>/*77:0*/ user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp;
        QData/*38:0*/ user_domain_sw_cs_tb__DOT__dut__DOT__user_error_obi_rsp;
        QData/*38:0*/ user_domain_sw_cs_tb__DOT__dut__DOT__user_spi_obi_rsp;
        VlWide<5>/*147:0*/ user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o;
        VlUnpacked<CData/*0:0*/, 9> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h7829ce67__0;
    VlTriggerVec<2> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vuser_domain_sw_cs_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vuser_domain_sw_cs_tb___024root(Vuser_domain_sw_cs_tb__Syms* symsp, const char* v__name);
    ~Vuser_domain_sw_cs_tb___024root();
    VL_UNCOPYABLE(Vuser_domain_sw_cs_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
