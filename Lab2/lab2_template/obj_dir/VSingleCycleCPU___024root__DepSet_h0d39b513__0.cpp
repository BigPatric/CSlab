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
    vlSelf->__VactTriggered.at(0U) = (((IData)(vlSelf->SingleCycleCPU__DOT__m_PC__DOT__clk) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__m_PC__DOT__clk))) 
                                      | ((IData)(vlSelf->SingleCycleCPU__DOT__m_PC__DOT__rst) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__m_PC__DOT__rst))));
    vlSelf->__VactTriggered.at(1U) = (((~ (IData)(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__clk)) 
                                       & (IData)(vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__m_Register__DOT__clk)) 
                                      | ((~ (IData)(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__rst)) 
                                         & (IData)(vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__m_Register__DOT__rst)));
    vlSelf->__VactTriggered.at(2U) = (((IData)(vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__clk) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__m_DataMemory__DOT__clk))) 
                                      | ((~ (IData)(vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__rst)) 
                                         & (IData)(vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__m_DataMemory__DOT__rst)));
    vlSelf->__VactTriggered.at(3U) = ((vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__address 
                                       != vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__m_DataMemory__DOT__address) 
                                      | ((IData)(vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__memRead) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__m_DataMemory__DOT__memRead)));
    vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__m_PC__DOT__clk 
        = vlSelf->SingleCycleCPU__DOT__m_PC__DOT__clk;
    vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__m_PC__DOT__rst 
        = vlSelf->SingleCycleCPU__DOT__m_PC__DOT__rst;
    vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__m_Register__DOT__clk 
        = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__clk;
    vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__m_Register__DOT__rst 
        = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__rst;
    vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__m_DataMemory__DOT__clk 
        = vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__clk;
    vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__m_DataMemory__DOT__rst 
        = vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__rst;
    vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__m_DataMemory__DOT__address 
        = vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__address;
    vlSelf->__Vtrigrprev__TOP__SingleCycleCPU__DOT__m_DataMemory__DOT__memRead 
        = vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__memRead;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(3U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VSingleCycleCPU___024root___dump_triggers__act(vlSelf);
    }
#endif
}
