// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_USER_DOMAIN_SPI_ENGINE_TEST__SYMS_H_
#define VERILATED_VTB_USER_DOMAIN_SPI_ENGINE_TEST__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "Vtb_user_domain_spi_engine_test.h"

// INCLUDE MODULE CLASSES
#include "Vtb_user_domain_spi_engine_test___024root.h"
#include "Vtb_user_domain_spi_engine_test___024unit.h"
#include "Vtb_user_domain_spi_engine_test_soc_ctrl_reg_pkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_user_domain_spi_engine_test__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_user_domain_spi_engine_test* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_user_domain_spi_engine_test___024root TOP;
    Vtb_user_domain_spi_engine_test___024unit TOP____024unit;
    Vtb_user_domain_spi_engine_test_soc_ctrl_reg_pkg TOP__soc_ctrl_reg_pkg;

    // SCOPE NAMES
    VerilatedScope __Vscope_tb_user_domain_spi_engine_test;
    VerilatedScope __Vscope_tb_user_domain_spi_engine_test__read_obi;
    VerilatedScope __Vscope_tb_user_domain_spi_engine_test__wait_spi_engine_idle;
    VerilatedScope __Vscope_tb_user_domain_spi_engine_test__write_obi;

    // CONSTRUCTORS
    Vtb_user_domain_spi_engine_test__Syms(VerilatedContext* contextp, const char* namep, Vtb_user_domain_spi_engine_test* modelp);
    ~Vtb_user_domain_spi_engine_test__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
