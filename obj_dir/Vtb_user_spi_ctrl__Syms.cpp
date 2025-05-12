// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_user_spi_ctrl__pch.h"
#include "Vtb_user_spi_ctrl.h"
#include "Vtb_user_spi_ctrl___024root.h"
#include "Vtb_user_spi_ctrl___024unit.h"
#include "Vtb_user_spi_ctrl_soc_ctrl_reg_pkg.h"

// FUNCTIONS
Vtb_user_spi_ctrl__Syms::~Vtb_user_spi_ctrl__Syms()
{
#ifdef VM_TRACE
    if (__Vm_dumping) _traceDumpClose();
#endif  // VM_TRACE
}

void Vtb_user_spi_ctrl__Syms::_traceDump() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumperp->dump(VL_TIME_Q());
}

void Vtb_user_spi_ctrl__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedVcdC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void Vtb_user_spi_ctrl__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}

Vtb_user_spi_ctrl__Syms::Vtb_user_spi_ctrl__Syms(VerilatedContext* contextp, const char* namep, Vtb_user_spi_ctrl* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__soc_ctrl_reg_pkg{this, Verilated::catName(namep, "soc_ctrl_reg_pkg")}
{
        // Check resources
        Verilated::stackCheck(124);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__soc_ctrl_reg_pkg = &TOP__soc_ctrl_reg_pkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__soc_ctrl_reg_pkg.__Vconfigure(true);
    // Setup scopes
    __Vscope_tb_user_spi_ctrl.configure(this, name(), "tb_user_spi_ctrl", "tb_user_spi_ctrl", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_user_spi_ctrl__read_obi.configure(this, name(), "tb_user_spi_ctrl.read_obi", "read_obi", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_user_spi_ctrl__unnamedblk1.configure(this, name(), "tb_user_spi_ctrl.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_user_spi_ctrl__write_obi.configure(this, name(), "tb_user_spi_ctrl.write_obi", "write_obi", -9, VerilatedScope::SCOPE_OTHER);
}
