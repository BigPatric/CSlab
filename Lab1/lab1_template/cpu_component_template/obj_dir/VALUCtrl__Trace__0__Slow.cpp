// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VALUCtrl__Syms.h"


VL_ATTR_COLD void VALUCtrl___024root__trace_init_sub__TOP__0(VALUCtrl___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALUCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALUCtrl___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+2,"funct7", false,-1);
    tracep->declBus(c+3,"funct3", false,-1, 2,0);
    tracep->declBus(c+4,"ALUCtl", false,-1, 3,0);
    tracep->pushNamePrefix("ALUCtrl ");
    tracep->declBus(c+1,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+2,"funct7", false,-1);
    tracep->declBus(c+3,"funct3", false,-1, 2,0);
    tracep->declBus(c+4,"ALUCtl", false,-1, 3,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VALUCtrl___024root__trace_init_top(VALUCtrl___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALUCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALUCtrl___024root__trace_init_top\n"); );
    // Body
    VALUCtrl___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VALUCtrl___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VALUCtrl___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VALUCtrl___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VALUCtrl___024root__trace_register(VALUCtrl___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALUCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALUCtrl___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VALUCtrl___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VALUCtrl___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VALUCtrl___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VALUCtrl___024root__trace_full_sub_0(VALUCtrl___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VALUCtrl___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALUCtrl___024root__trace_full_top_0\n"); );
    // Init
    VALUCtrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALUCtrl___024root*>(voidSelf);
    VALUCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VALUCtrl___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VALUCtrl___024root__trace_full_sub_0(VALUCtrl___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VALUCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALUCtrl___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->ALUOp),2);
    bufp->fullBit(oldp+2,(vlSelf->funct7));
    bufp->fullCData(oldp+3,(vlSelf->funct3),3);
    bufp->fullCData(oldp+4,(vlSelf->ALUCtl),4);
}
