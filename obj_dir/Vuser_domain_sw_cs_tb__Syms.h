// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VUSER_DOMAIN_SW_CS_TB__SYMS_H_
#define VERILATED_VUSER_DOMAIN_SW_CS_TB__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "Vuser_domain_sw_cs_tb.h"

// INCLUDE MODULE CLASSES
#include "Vuser_domain_sw_cs_tb___024root.h"
#include "Vuser_domain_sw_cs_tb___024unit.h"
#include "Vuser_domain_sw_cs_tb_soc_ctrl_reg_pkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vuser_domain_sw_cs_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vuser_domain_sw_cs_tb* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vuser_domain_sw_cs_tb___024root TOP;
    Vuser_domain_sw_cs_tb___024unit TOP____024unit;
    Vuser_domain_sw_cs_tb_soc_ctrl_reg_pkg TOP__soc_ctrl_reg_pkg;

    // SCOPE NAMES
    VerilatedScope __Vscope_user_domain_sw_cs_tb;
    VerilatedScope __Vscope_user_domain_sw_cs_tb__read_obi;
    VerilatedScope __Vscope_user_domain_sw_cs_tb__wait_spi_done;
    VerilatedScope __Vscope_user_domain_sw_cs_tb__write_obi;

    // CONSTRUCTORS
    Vuser_domain_sw_cs_tb__Syms(VerilatedContext* contextp, const char* namep, Vuser_domain_sw_cs_tb* modelp);
    ~Vuser_domain_sw_cs_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
