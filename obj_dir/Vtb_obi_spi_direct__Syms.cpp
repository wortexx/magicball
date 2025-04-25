// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_obi_spi_direct__pch.h"
#include "Vtb_obi_spi_direct.h"
#include "Vtb_obi_spi_direct___024root.h"

// FUNCTIONS
Vtb_obi_spi_direct__Syms::~Vtb_obi_spi_direct__Syms()
{
#ifdef VM_TRACE
    if (__Vm_dumping) _traceDumpClose();
#endif  // VM_TRACE
}

void Vtb_obi_spi_direct__Syms::_traceDump() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumperp->dump(VL_TIME_Q());
}

void Vtb_obi_spi_direct__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedVcdC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void Vtb_obi_spi_direct__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}

Vtb_obi_spi_direct__Syms::Vtb_obi_spi_direct__Syms(VerilatedContext* contextp, const char* namep, Vtb_obi_spi_direct* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(344);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_tb_obi_spi_direct.configure(this, name(), "tb_obi_spi_direct", "tb_obi_spi_direct", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_obi_spi_direct__read_obi.configure(this, name(), "tb_obi_spi_direct.read_obi", "read_obi", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_obi_spi_direct__wait_spi_done.configure(this, name(), "tb_obi_spi_direct.wait_spi_done", "wait_spi_done", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_obi_spi_direct__write_obi.configure(this, name(), "tb_obi_spi_direct.write_obi", "write_obi", -9, VerilatedScope::SCOPE_OTHER);
}
