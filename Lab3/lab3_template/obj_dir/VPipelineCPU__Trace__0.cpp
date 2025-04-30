// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPipelineCPU__Syms.h"


void VPipelineCPU___024root__trace_chg_sub_0(VPipelineCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VPipelineCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_chg_top_0\n"); );
    // Init
    VPipelineCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPipelineCPU___024root*>(voidSelf);
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VPipelineCPU___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VPipelineCPU___024root__trace_chg_sub_0(VPipelineCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->PipelineCPU__DOT__alu_src_b),32);
        bufp->chgIData(oldp+1,(vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__pc_t),32);
        bufp->chgBit(oldp+2,(vlSelf->PipelineCPU__DOT__mem_write_ID_EX));
        bufp->chgBit(oldp+3,(vlSelf->PipelineCPU__DOT__alu_src_ID_EX));
        bufp->chgCData(oldp+4,(vlSelf->PipelineCPU__DOT__alu_op_ID_EX),2);
        bufp->chgIData(oldp+5,(vlSelf->PipelineCPU__DOT__reg_read_data1_ID_EX),32);
        bufp->chgIData(oldp+6,(vlSelf->PipelineCPU__DOT__reg_read_data2_ID_EX),32);
        bufp->chgIData(oldp+7,(vlSelf->PipelineCPU__DOT__imm_ID_EX),32);
        bufp->chgIData(oldp+8,(vlSelf->PipelineCPU__DOT__reg_read_data2_EX_MEM),32);
        bufp->chgBit(oldp+9,(vlSelf->PipelineCPU__DOT__mem_write_EX_MEM));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+10,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0]),32);
        bufp->chgIData(oldp+11,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[1]),32);
        bufp->chgIData(oldp+12,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[2]),32);
        bufp->chgIData(oldp+13,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[3]),32);
        bufp->chgIData(oldp+14,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[4]),32);
        bufp->chgIData(oldp+15,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[5]),32);
        bufp->chgIData(oldp+16,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[6]),32);
        bufp->chgIData(oldp+17,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[7]),32);
        bufp->chgIData(oldp+18,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[8]),32);
        bufp->chgIData(oldp+19,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[9]),32);
        bufp->chgIData(oldp+20,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[10]),32);
        bufp->chgIData(oldp+21,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[11]),32);
        bufp->chgIData(oldp+22,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[12]),32);
        bufp->chgIData(oldp+23,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[13]),32);
        bufp->chgIData(oldp+24,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[14]),32);
        bufp->chgIData(oldp+25,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[15]),32);
        bufp->chgIData(oldp+26,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[16]),32);
        bufp->chgIData(oldp+27,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[17]),32);
        bufp->chgIData(oldp+28,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[18]),32);
        bufp->chgIData(oldp+29,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[19]),32);
        bufp->chgIData(oldp+30,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[20]),32);
        bufp->chgIData(oldp+31,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[21]),32);
        bufp->chgIData(oldp+32,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[22]),32);
        bufp->chgIData(oldp+33,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[23]),32);
        bufp->chgIData(oldp+34,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[24]),32);
        bufp->chgIData(oldp+35,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[25]),32);
        bufp->chgIData(oldp+36,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[26]),32);
        bufp->chgIData(oldp+37,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[27]),32);
        bufp->chgIData(oldp+38,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[28]),32);
        bufp->chgIData(oldp+39,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[29]),32);
        bufp->chgIData(oldp+40,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[30]),32);
        bufp->chgIData(oldp+41,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+42,(vlSelf->PipelineCPU__DOT__pc_current),32);
        bufp->chgIData(oldp+43,(((IData)(4U) + vlSelf->PipelineCPU__DOT__pc_current)),32);
        bufp->chgIData(oldp+44,(((0x80U <= vlSelf->PipelineCPU__DOT__pc_current)
                                  ? 0U : ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                           [(0x7fU 
                                             & vlSelf->PipelineCPU__DOT__pc_current)] 
                                           << 0x18U) 
                                          | ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                              [(0x7fU 
                                                & ((IData)(1U) 
                                                   + vlSelf->PipelineCPU__DOT__pc_current))] 
                                              << 0x10U) 
                                             | ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                                 [(0x7fU 
                                                   & ((IData)(2U) 
                                                      + vlSelf->PipelineCPU__DOT__pc_current))] 
                                                 << 8U) 
                                                | vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                                [(0x7fU 
                                                  & ((IData)(3U) 
                                                     + vlSelf->PipelineCPU__DOT__pc_current))]))))),32);
        bufp->chgIData(oldp+45,(vlSelf->PipelineCPU__DOT__imm),32);
        bufp->chgIData(oldp+46,(((0U == (IData)(vlSelf->PipelineCPU__DOT__mem_to_reg_MEM_WB))
                                  ? vlSelf->PipelineCPU__DOT__alu_result_MEM_WB
                                  : ((1U == (IData)(vlSelf->PipelineCPU__DOT__mem_to_reg_MEM_WB))
                                      ? vlSelf->PipelineCPU__DOT__mem_read_data_MEM_WB
                                      : ((2U == (IData)(vlSelf->PipelineCPU__DOT__mem_to_reg_MEM_WB))
                                          ? vlSelf->PipelineCPU__DOT__pc_plus4_MEM_WB
                                          : 0U)))),32);
        bufp->chgCData(oldp+47,(vlSelf->PipelineCPU__DOT__alu_control),4);
        bufp->chgIData(oldp+48,((vlSelf->PipelineCPU__DOT__imm 
                                 << 1U)),32);
        bufp->chgIData(oldp+49,(vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__pc_4_t),32);
        bufp->chgIData(oldp+50,(vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t),32);
        bufp->chgCData(oldp+51,((0x7fU & vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t)),7);
        bufp->chgCData(oldp+52,((7U & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+53,((1U & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                     >> 0x1eU))));
        bufp->chgCData(oldp+54,((0x1fU & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+55,((0x1fU & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+56,((0x1fU & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                          >> 7U))),5);
        bufp->chgBit(oldp+57,(vlSelf->PipelineCPU__DOT__reg_write_ID_EX));
        bufp->chgCData(oldp+58,(vlSelf->PipelineCPU__DOT__mem_to_reg_ID_EX),2);
        bufp->chgIData(oldp+59,(vlSelf->PipelineCPU__DOT__pc_plus4_ID_EX),32);
        bufp->chgCData(oldp+60,(vlSelf->PipelineCPU__DOT__writeReg_ID_EX),5);
        bufp->chgIData(oldp+61,(vlSelf->PipelineCPU__DOT__pc_plus4_EX_MEM),32);
        bufp->chgCData(oldp+62,(vlSelf->PipelineCPU__DOT__write_reg_EX_MEM),5);
        bufp->chgBit(oldp+63,(vlSelf->PipelineCPU__DOT__reg_write_EX_MEM));
        bufp->chgCData(oldp+64,(vlSelf->PipelineCPU__DOT__mem_to_reg_EX_MEM),2);
        bufp->chgIData(oldp+65,(vlSelf->PipelineCPU__DOT__alu_result_MEM_WB),32);
        bufp->chgIData(oldp+66,(vlSelf->PipelineCPU__DOT__mem_read_data_MEM_WB),32);
        bufp->chgCData(oldp+67,(vlSelf->PipelineCPU__DOT__write_reg_MEM_WB),5);
        bufp->chgBit(oldp+68,(vlSelf->PipelineCPU__DOT__reg_write_MEM_WB));
        bufp->chgCData(oldp+69,(vlSelf->PipelineCPU__DOT__mem_to_reg_MEM_WB),2);
        bufp->chgIData(oldp+70,(vlSelf->PipelineCPU__DOT__pc_plus4_MEM_WB),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+71,(vlSelf->PipelineCPU__DOT__reg_read_data1),32);
        bufp->chgIData(oldp+72,(vlSelf->PipelineCPU__DOT__reg_read_data2),32);
        bufp->chgBit(oldp+73,(((vlSelf->PipelineCPU__DOT__reg_read_data1 
                                == vlSelf->PipelineCPU__DOT__reg_read_data2)
                                ? 1U : 0U)));
        bufp->chgBit(oldp+74,((VL_LTS_III(32, vlSelf->PipelineCPU__DOT__reg_read_data1, vlSelf->PipelineCPU__DOT__reg_read_data2)
                                ? 1U : 0U)));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgIData(oldp+75,(vlSelf->PipelineCPU__DOT__alu_result),32);
        bufp->chgBit(oldp+76,((0U == vlSelf->PipelineCPU__DOT__alu_result)));
        bufp->chgBit(oldp+77,(vlSelf->PipelineCPU__DOT__mem_read_ID_EX));
        bufp->chgIData(oldp+78,(vlSelf->PipelineCPU__DOT__alu_result_EX_MEM),32);
        bufp->chgBit(oldp+79,(vlSelf->PipelineCPU__DOT__mem_read_EX_MEM));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgBit(oldp+80,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl) 
                                     >> 7U))));
        bufp->chgBit(oldp+81,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl) 
                                     >> 2U))));
        bufp->chgBit(oldp+82,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl) 
                                     >> 1U))));
        bufp->chgBit(oldp+83,((1U & (IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl))));
        bufp->chgCData(oldp+84,((3U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl) 
                                       >> 5U))),2);
        bufp->chgCData(oldp+85,((3U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl) 
                                       >> 3U))),2);
        bufp->chgCData(oldp+86,(vlSelf->PipelineCPU__DOT__pc_sel),2);
        bufp->chgCData(oldp+87,(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl),8);
    }
    bufp->chgBit(oldp+88,(vlSelf->clk));
    bufp->chgBit(oldp+89,(vlSelf->start));
    bufp->chgIData(oldp+90,(vlSelf->r[0]),32);
    bufp->chgIData(oldp+91,(vlSelf->r[1]),32);
    bufp->chgIData(oldp+92,(vlSelf->r[2]),32);
    bufp->chgIData(oldp+93,(vlSelf->r[3]),32);
    bufp->chgIData(oldp+94,(vlSelf->r[4]),32);
    bufp->chgIData(oldp+95,(vlSelf->r[5]),32);
    bufp->chgIData(oldp+96,(vlSelf->r[6]),32);
    bufp->chgIData(oldp+97,(vlSelf->r[7]),32);
    bufp->chgIData(oldp+98,(vlSelf->r[8]),32);
    bufp->chgIData(oldp+99,(vlSelf->r[9]),32);
    bufp->chgIData(oldp+100,(vlSelf->r[10]),32);
    bufp->chgIData(oldp+101,(vlSelf->r[11]),32);
    bufp->chgIData(oldp+102,(vlSelf->r[12]),32);
    bufp->chgIData(oldp+103,(vlSelf->r[13]),32);
    bufp->chgIData(oldp+104,(vlSelf->r[14]),32);
    bufp->chgIData(oldp+105,(vlSelf->r[15]),32);
    bufp->chgIData(oldp+106,(vlSelf->r[16]),32);
    bufp->chgIData(oldp+107,(vlSelf->r[17]),32);
    bufp->chgIData(oldp+108,(vlSelf->r[18]),32);
    bufp->chgIData(oldp+109,(vlSelf->r[19]),32);
    bufp->chgIData(oldp+110,(vlSelf->r[20]),32);
    bufp->chgIData(oldp+111,(vlSelf->r[21]),32);
    bufp->chgIData(oldp+112,(vlSelf->r[22]),32);
    bufp->chgIData(oldp+113,(vlSelf->r[23]),32);
    bufp->chgIData(oldp+114,(vlSelf->r[24]),32);
    bufp->chgIData(oldp+115,(vlSelf->r[25]),32);
    bufp->chgIData(oldp+116,(vlSelf->r[26]),32);
    bufp->chgIData(oldp+117,(vlSelf->r[27]),32);
    bufp->chgIData(oldp+118,(vlSelf->r[28]),32);
    bufp->chgIData(oldp+119,(vlSelf->r[29]),32);
    bufp->chgIData(oldp+120,(vlSelf->r[30]),32);
    bufp->chgIData(oldp+121,(vlSelf->r[31]),32);
    bufp->chgIData(oldp+122,(((0U == (IData)(vlSelf->PipelineCPU__DOT__pc_sel))
                               ? ((IData)(4U) + vlSelf->PipelineCPU__DOT__pc_current)
                               : ((1U == (IData)(vlSelf->PipelineCPU__DOT__pc_sel))
                                   ? (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__pc_t 
                                      + (vlSelf->PipelineCPU__DOT__imm 
                                         << 1U)) : 
                                  ((2U == (IData)(vlSelf->PipelineCPU__DOT__pc_sel))
                                    ? vlSelf->PipelineCPU__DOT__alu_result
                                    : 0U)))),32);
    bufp->chgIData(oldp+123,((vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__pc_t 
                              + (vlSelf->PipelineCPU__DOT__imm 
                                 << 1U))),32);
    bufp->chgIData(oldp+124,(vlSelf->PipelineCPU__DOT__mem_read_data),32);
}

void VPipelineCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_cleanup\n"); );
    // Init
    VPipelineCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPipelineCPU___024root*>(voidSelf);
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}
