// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSingleCycleCPU.h for the primary calling header

#include "verilated.h"

#include "VSingleCycleCPU__Syms.h"
#include "VSingleCycleCPU___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleCPU___024root___dump_triggers__act(VSingleCycleCPU___024root* vlSelf);
#endif  // VL_DEBUG

void VSingleCycleCPU___024root___eval_triggers__act(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->SingleCycleCPU__DOT__branch_eq) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__branch_eq));
    vlSelf->__VactTriggered.at(1U) = (vlSelf->SingleCycleCPU__DOT__pc_branch 
                                      != vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__pc_branch);
    vlSelf->__VactTriggered.at(2U) = (((IData)(vlSelf->clk) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk))) 
                                      | ((IData)(vlSelf->start) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__start))));
    vlSelf->__VactTriggered.at(3U) = (((~ (IData)(vlSelf->clk)) 
                                       & (IData)(vlSelf->__Vtrigrprev__TOP__clk)) 
                                      | ((~ (IData)(vlSelf->start)) 
                                         & (IData)(vlSelf->__Vtrigrprev__TOP__start)));
    vlSelf->__VactTriggered.at(4U) = (((IData)(vlSelf->clk) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk))) 
                                      | ((~ (IData)(vlSelf->start)) 
                                         & (IData)(vlSelf->__Vtrigrprev__TOP__start)));
    vlSelf->__VactTriggered.at(5U) = ((vlSelf->SingleCycleCPU__DOT__alu_result 
                                       != vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__alu_result) 
                                      | ((IData)(vlSelf->SingleCycleCPU__DOT__mem_read) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__mem_read)));
    vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__branch_eq 
        = vlSelf->SingleCycleCPU__DOT__branch_eq;
    vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__pc_branch 
        = vlSelf->SingleCycleCPU__DOT__pc_branch;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__start = vlSelf->start;
    vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__alu_result 
        = vlSelf->SingleCycleCPU__DOT__alu_result;
    vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__mem_read 
        = vlSelf->SingleCycleCPU__DOT__mem_read;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(0U) = 1U;
        vlSelf->__VactTriggered.at(1U) = 1U;
        vlSelf->__VactTriggered.at(5U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VSingleCycleCPU___024root___dump_triggers__act(vlSelf);
    }
#endif
}
