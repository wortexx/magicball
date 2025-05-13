// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_user_domain_hw_ctrl.h for the primary calling header

#ifndef VERILATED_VTB_USER_DOMAIN_HW_CTRL___024ROOT_H_
#define VERILATED_VTB_USER_DOMAIN_HW_CTRL___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_user_domain_hw_ctrl___024unit;
class Vtb_user_domain_hw_ctrl_soc_ctrl_reg_pkg;


class Vtb_user_domain_hw_ctrl__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_user_domain_hw_ctrl___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtb_user_domain_hw_ctrl___024unit* __PVT____024unit;
    Vtb_user_domain_hw_ctrl_soc_ctrl_reg_pkg* __PVT__soc_ctrl_reg_pkg;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_user_domain_hw_ctrl__DOT__clk_i;
        CData/*0:0*/ tb_user_domain_hw_ctrl__DOT__rst_ni;
        CData/*0:0*/ tb_user_domain_hw_ctrl__DOT__ref_clk_i;
        CData/*0:0*/ tb_user_domain_hw_ctrl__DOT__testmode_i;
        CData/*0:0*/ tb_user_domain_hw_ctrl__DOT__spi_sck_o;
        CData/*0:0*/ tb_user_domain_hw_ctrl__DOT__spi_mosi_o;
        CData/*0:0*/ tb_user_domain_hw_ctrl__DOT__req_ongoing;
        CData/*7:0*/ tb_user_domain_hw_ctrl__DOT__font_byte;
        CData/*0:0*/ tb_user_domain_hw_ctrl__DOT__unnamedblk1__DOT__read_err;
        CData/*2:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx;
        CData/*0:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o;
        CData/*0:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_addr_decode_user_periphs__DOT__dec_valid_o;
        CData/*0:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_addr_decode_user_periphs__DOT__dec_error_o;
        CData/*3:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_addr_decode_user_periphs__DOT__i_addr_decode_dync__DOT__matched_rules;
        CData/*0:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__cnt_down_sig;
        CData/*2:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_d;
        CData/*2:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q;
        CData/*0:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__grant_condition_is_met_for_read;
        CData/*0:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__grant_condition_was_met_q;
        CData/*0:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__forward_this_request;
        CData/*0:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__target_is_current_selection;
        CData/*0:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__no_transactions_in_flight;
        CData/*0:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__one_transaction_is_completing;
        CData/*0:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__sub_conditions_for_forwarding;
        CData/*0:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT____Vlvbound_h19899a0f__0;
        CData/*3:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__i_counter__DOT__counter_q;
        CData/*3:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__i_counter__DOT__counter_d;
        CData/*0:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT____Vcellinp__i_id_fifo__push_i;
        CData/*0:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__gate_clock;
        CData/*0:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_n;
        CData/*0:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q;
        CData/*0:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_n;
        CData/*0:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q;
        CData/*1:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_n;
        CData/*1:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q;
        CData/*2:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_n;
        CData/*2:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_q;
        CData/*2:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT____Vlvbound_h3dcab515__0;
        CData/*0:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__cs_no;
        CData/*1:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q;
        CData/*1:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_d;
        CData/*0:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_q;
        CData/*0:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_d;
        CData/*7:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_q;
        CData/*7:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_d;
        CData/*2:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q;
        CData/*2:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_d;
        CData/*1:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q;
        CData/*1:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_d;
        CData/*0:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rvalid_q_internal;
        CData/*0:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__was_read_granted_to_status_prev_cycle;
        CData/*1:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__status_bits;
        CData/*0:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__done_q;
        CData/*0:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__gnt_for_read_status_comb;
        CData/*0:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__cs1_n_q;
        CData/*0:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__cs2_n_q;
        CData/*0:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__dc_q;
        CData/*0:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__rvalid_q;
        CData/*0:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__read_granted_this_cycle;
        CData/*0:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__write_req;
        CData/*0:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__read_req;
        CData/*0:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w;
        CData/*0:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r;
        CData/*0:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__rvalid_q;
    };
    struct {
        CData/*0:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__read_req_accepted;
        CData/*0:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__read_req;
        CData/*7:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__rom_byte_data_comb;
        CData/*0:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__trigger_prng_update;
        CData/*0:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__rvalid_q;
        CData/*0:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__read_granted_this_cycle;
        CData/*0:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__is_ctrl_write;
        CData/*0:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__is_rdata_read;
        CData/*0:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__read_req;
        CData/*7:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__send_byte_hw_ctrl__61__byte_val;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__is_ctrl_write__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__is_rdata_read__0;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__is_ctrl_write__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__is_rdata_read__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__clk_i__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__rst_ni__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ tb_user_domain_hw_ctrl__DOT__gpio_in_sync_i;
        IData/*31:0*/ tb_user_domain_hw_ctrl__DOT__unnamedblk1__DOT__read_data;
        VlWide<3>/*72:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT____Vlvbound_h82b62aa2__0;
        IData/*31:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rdata_q_internal;
        IData/*31:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__data_for_rvalid_q;
        IData/*31:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__rdata_q;
        IData/*31:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__reg_rdata_comb;
        IData/*31:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__rdata_q;
        IData/*31:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__check_file_exists_label__DOT__file_handle;
        IData/*31:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__prng_state_q;
        IData/*31:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__prng_state_d;
        IData/*31:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__t1;
        IData/*31:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__t2;
        IData/*31:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__rdata_q;
        IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__send_byte_hw_ctrl__61__cs_pin_idx;
        IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__send_byte_hw_ctrl__61__is_data;
        IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__77__r_addr;
        IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__77__timeout_count_rvalid;
        IData/*31:0*/ __VactIterCount;
        VlWide<3>/*73:0*/ tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req;
        QData/*36:0*/ tb_user_domain_hw_ctrl__DOT__user_mgr_obi_rsp;
        VlWide<7>/*194:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp;
        QData/*38:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__user_error_obi_rsp;
        QData/*38:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_engine_obi_rsp;
        QData/*38:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_ctrl_obi_rsp;
        QData/*38:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__user_font_rom_obi_rsp;
        QData/*38:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT__user_prng_obi_rsp;
        VlWide<12>/*369:0*/ tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o;
        QData/*38:0*/ __Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__user_prng_obi_rsp__0;
        QData/*38:0*/ __Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__user_font_rom_obi_rsp__0;
        QData/*38:0*/ __Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_ctrl_obi_rsp__0;
        QData/*38:0*/ __Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__user_prng_obi_rsp__1;
        QData/*38:0*/ __Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__user_font_rom_obi_rsp__1;
        QData/*38:0*/ __Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_ctrl_obi_rsp__1;
        VlUnpacked<CData/*7:0*/, 1140> tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__rom_data;
        VlUnpacked<CData/*0:0*/, 9> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h15786638__0;
    VlTriggerVec<9> __VstlTriggered;
    VlTriggerVec<11> __VactTriggered;
    VlTriggerVec<11> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_user_domain_hw_ctrl__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_user_domain_hw_ctrl___024root(Vtb_user_domain_hw_ctrl__Syms* symsp, const char* v__name);
    ~Vtb_user_domain_hw_ctrl___024root();
    VL_UNCOPYABLE(Vtb_user_domain_hw_ctrl___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
