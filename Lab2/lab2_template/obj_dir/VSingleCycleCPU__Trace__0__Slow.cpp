// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSingleCycleCPU__Syms.h"


VL_ATTR_COLD void VSingleCycleCPU___024root__trace_init_sub__TOP__0(VSingleCycleCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+58,"clk", false,-1);
    tracep->declBit(c+59,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+60+i*1,"r", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("SingleCycleCPU ");
    tracep->declBit(c+58,"clk", false,-1);
    tracep->declBit(c+59,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+60+i*1,"r", true,(i+0), 31,0);
    }
    tracep->declBus(c+45,"pc_current", false,-1, 31,0);
    tracep->declBus(c+92,"pc_next", false,-1, 31,0);
    tracep->declBus(c+46,"pc_plus4", false,-1, 31,0);
    tracep->declBus(c+93,"pc_branch", false,-1, 31,0);
    tracep->declBus(c+47,"instruction", false,-1, 31,0);
    tracep->declBus(c+48,"imm_gen_out", false,-1, 31,0);
    tracep->declBus(c+55,"reg_read_data1", false,-1, 31,0);
    tracep->declBus(c+56,"reg_read_data2", false,-1, 31,0);
    tracep->declBus(c+1,"alu_result", false,-1, 31,0);
    tracep->declBus(c+94,"mem_read_data", false,-1, 31,0);
    tracep->declBus(c+95,"write_data", false,-1, 31,0);
    tracep->declBus(c+2,"alu_src_b", false,-1, 31,0);
    tracep->declBus(c+3,"alu_control", false,-1, 3,0);
    tracep->declBus(c+49,"funct3", false,-1, 2,0);
    tracep->declBus(c+50,"opcode", false,-1, 6,0);
    tracep->declBit(c+51,"funct7", false,-1);
    tracep->declBit(c+96,"branch_eq", false,-1);
    tracep->declBit(c+57,"branch_lt", false,-1);
    tracep->declBit(c+4,"mem_read", false,-1);
    tracep->declBit(c+5,"mem_write", false,-1);
    tracep->declBit(c+6,"alu_src", false,-1);
    tracep->declBit(c+7,"reg_write", false,-1);
    tracep->declBit(c+8,"mem_to_reg", false,-1);
    tracep->declBus(c+9,"alu_op", false,-1, 1,0);
    tracep->declBus(c+97,"write_data_sel", false,-1, 1,0);
    tracep->declBus(c+10,"pc_sel", false,-1, 1,0);
    tracep->pushNamePrefix("m_ALU ");
    tracep->declBus(c+3,"ALUctl", false,-1, 3,0);
    tracep->declBus(c+55,"A", false,-1, 31,0);
    tracep->declBus(c+2,"B", false,-1, 31,0);
    tracep->declBus(c+1,"ALUOut", false,-1, 31,0);
    tracep->declBit(c+96,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ALUCtrl ");
    tracep->declBus(c+9,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+51,"funct7", false,-1);
    tracep->declBus(c+49,"funct3", false,-1, 2,0);
    tracep->declBus(c+3,"ALUCtl", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_1 ");
    tracep->declBus(c+45,"a", false,-1, 31,0);
    tracep->declBus(c+98,"b", false,-1, 31,0);
    tracep->declBus(c+46,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_2 ");
    tracep->declBus(c+45,"a", false,-1, 31,0);
    tracep->declBus(c+93,"b", false,-1, 31,0);
    tracep->declBus(c+93,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_BranchComp ");
    tracep->declBus(c+55,"A", false,-1, 31,0);
    tracep->declBus(c+56,"B", false,-1, 31,0);
    tracep->declBit(c+96,"BrEq", false,-1);
    tracep->declBit(c+57,"BrLT", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Control ");
    tracep->declBus(c+50,"opcode", false,-1, 6,0);
    tracep->declBus(c+49,"funct3", false,-1, 2,0);
    tracep->declBit(c+96,"BrEq", false,-1);
    tracep->declBit(c+57,"BrLT", false,-1);
    tracep->declBit(c+4,"memRead", false,-1);
    tracep->declBus(c+11,"memtoReg", false,-1, 1,0);
    tracep->declBus(c+9,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+5,"memWrite", false,-1);
    tracep->declBit(c+6,"ALUSrc", false,-1);
    tracep->declBit(c+7,"regWrite", false,-1);
    tracep->declBus(c+10,"PCSel", false,-1, 1,0);
    tracep->declBus(c+12,"ctrl", false,-1, 9,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_DataMemory ");
    tracep->declBit(c+59,"rst", false,-1);
    tracep->declBit(c+58,"clk", false,-1);
    tracep->declBit(c+5,"memWrite", false,-1);
    tracep->declBit(c+4,"memRead", false,-1);
    tracep->declBus(c+1,"address", false,-1, 31,0);
    tracep->declBus(c+56,"writeData", false,-1, 31,0);
    tracep->declBus(c+94,"readData", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ImmGen ");
    tracep->declBus(c+48,"inst", false,-1, 31,0);
    tracep->declBus(c+48,"imm", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_InstMem ");
    tracep->declBus(c+45,"readAddr", false,-1, 31,0);
    tracep->declBus(c+47,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_ALU ");
    tracep->declBus(c+99,"size", false,-1, 31,0);
    tracep->declBit(c+6,"sel", false,-1);
    tracep->declBus(c+56,"s0", false,-1, 31,0);
    tracep->declBus(c+48,"s1", false,-1, 31,0);
    tracep->declBus(c+2,"out", false,-1, 31,0);
    tracep->declBus(c+2,"o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_PC ");
    tracep->declBus(c+99,"size", false,-1, 31,0);
    tracep->declBus(c+10,"sel", false,-1, 1,0);
    tracep->declBus(c+45,"s0", false,-1, 31,0);
    tracep->declBus(c+46,"s1", false,-1, 31,0);
    tracep->declBus(c+93,"s2", false,-1, 31,0);
    tracep->declBus(c+92,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_WriteData ");
    tracep->declBus(c+99,"size", false,-1, 31,0);
    tracep->declBus(c+97,"sel", false,-1, 1,0);
    tracep->declBus(c+1,"s0", false,-1, 31,0);
    tracep->declBus(c+94,"s1", false,-1, 31,0);
    tracep->declBus(c+100,"s2", false,-1, 31,0);
    tracep->declBus(c+95,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_PC ");
    tracep->declBit(c+58,"clk", false,-1);
    tracep->declBit(c+59,"rst", false,-1);
    tracep->declBus(c+92,"pc_i", false,-1, 31,0);
    tracep->declBus(c+45,"pc_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Register ");
    tracep->declBit(c+58,"clk", false,-1);
    tracep->declBit(c+59,"rst", false,-1);
    tracep->declBit(c+7,"regWrite", false,-1);
    tracep->declBus(c+52,"readReg1", false,-1, 4,0);
    tracep->declBus(c+53,"readReg2", false,-1, 4,0);
    tracep->declBus(c+54,"writeReg", false,-1, 4,0);
    tracep->declBus(c+95,"writeData", false,-1, 31,0);
    tracep->declBus(c+55,"readData1", false,-1, 31,0);
    tracep->declBus(c+56,"readData2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+13+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ShiftLeftOne ");
    tracep->declBus(c+48,"i", false,-1, 31,0);
    tracep->declBus(c+93,"o", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_init_top(VSingleCycleCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_init_top\n"); );
    // Body
    VSingleCycleCPU___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSingleCycleCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSingleCycleCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_register(VSingleCycleCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VSingleCycleCPU___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VSingleCycleCPU___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VSingleCycleCPU___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_full_sub_0(VSingleCycleCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_full_top_0\n"); );
    // Init
    VSingleCycleCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSingleCycleCPU___024root*>(voidSelf);
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VSingleCycleCPU___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_full_sub_0(VSingleCycleCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->SingleCycleCPU__DOT__alu_result),32);
    bufp->fullIData(oldp+2,(vlSelf->SingleCycleCPU__DOT__alu_src_b),32);
    bufp->fullCData(oldp+3,(vlSelf->SingleCycleCPU__DOT__alu_control),4);
    bufp->fullBit(oldp+4,(vlSelf->SingleCycleCPU__DOT__mem_read));
    bufp->fullBit(oldp+5,((1U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                 >> 2U))));
    bufp->fullBit(oldp+6,((1U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                 >> 1U))));
    bufp->fullBit(oldp+7,((1U & (IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl))));
    bufp->fullBit(oldp+8,((1U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                 >> 5U))));
    bufp->fullCData(oldp+9,((3U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                   >> 3U))),2);
    bufp->fullCData(oldp+10,((3U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                    >> 8U))),2);
    bufp->fullCData(oldp+11,((3U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                    >> 5U))),2);
    bufp->fullSData(oldp+12,(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl),10);
    bufp->fullIData(oldp+13,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0]),32);
    bufp->fullIData(oldp+14,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[1]),32);
    bufp->fullIData(oldp+15,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[2]),32);
    bufp->fullIData(oldp+16,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[3]),32);
    bufp->fullIData(oldp+17,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[4]),32);
    bufp->fullIData(oldp+18,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[5]),32);
    bufp->fullIData(oldp+19,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[6]),32);
    bufp->fullIData(oldp+20,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[7]),32);
    bufp->fullIData(oldp+21,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[8]),32);
    bufp->fullIData(oldp+22,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[9]),32);
    bufp->fullIData(oldp+23,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[10]),32);
    bufp->fullIData(oldp+24,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[11]),32);
    bufp->fullIData(oldp+25,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[12]),32);
    bufp->fullIData(oldp+26,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[13]),32);
    bufp->fullIData(oldp+27,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[14]),32);
    bufp->fullIData(oldp+28,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[15]),32);
    bufp->fullIData(oldp+29,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[16]),32);
    bufp->fullIData(oldp+30,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[17]),32);
    bufp->fullIData(oldp+31,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[18]),32);
    bufp->fullIData(oldp+32,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[19]),32);
    bufp->fullIData(oldp+33,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[20]),32);
    bufp->fullIData(oldp+34,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[21]),32);
    bufp->fullIData(oldp+35,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[22]),32);
    bufp->fullIData(oldp+36,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[23]),32);
    bufp->fullIData(oldp+37,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[24]),32);
    bufp->fullIData(oldp+38,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[25]),32);
    bufp->fullIData(oldp+39,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[26]),32);
    bufp->fullIData(oldp+40,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[27]),32);
    bufp->fullIData(oldp+41,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[28]),32);
    bufp->fullIData(oldp+42,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[29]),32);
    bufp->fullIData(oldp+43,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[30]),32);
    bufp->fullIData(oldp+44,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[31]),32);
    bufp->fullIData(oldp+45,(vlSelf->SingleCycleCPU__DOT__pc_current),32);
    bufp->fullIData(oldp+46,(((IData)(4U) + vlSelf->SingleCycleCPU__DOT__pc_current)),32);
    bufp->fullIData(oldp+47,(((0x80U <= vlSelf->SingleCycleCPU__DOT__pc_current)
                               ? 0U : vlSelf->__VdfgTmp_hc3307145__0)),32);
    bufp->fullIData(oldp+48,((((0x80U <= vlSelf->SingleCycleCPU__DOT__pc_current)
                                ? 0U : vlSelf->__VdfgTmp_hc3307145__0) 
                              >> 0x14U)),32);
    bufp->fullCData(oldp+49,(((0x80U <= vlSelf->SingleCycleCPU__DOT__pc_current)
                               ? 0U : (7U & ((IData)(vlSelf->__VdfgTmp_hebd63ba7__0) 
                                             >> 4U)))),3);
    bufp->fullCData(oldp+50,(((0x80U <= vlSelf->SingleCycleCPU__DOT__pc_current)
                               ? 0U : (0x7fU & (IData)(vlSelf->__VdfgTmp_hebd05efc__0)))),7);
    bufp->fullBit(oldp+51,(((0x80U > vlSelf->SingleCycleCPU__DOT__pc_current) 
                            & ((IData)(vlSelf->__VdfgTmp_hb17e49cd__0) 
                               >> 6U))));
    bufp->fullCData(oldp+52,(((0x80U <= vlSelf->SingleCycleCPU__DOT__pc_current)
                               ? 0U : (0x1fU & (vlSelf->__VdfgTmp_hca52c8c2__0 
                                                >> 0xfU)))),5);
    bufp->fullCData(oldp+53,(((0x80U <= vlSelf->SingleCycleCPU__DOT__pc_current)
                               ? 0U : (0x1fU & (vlSelf->__VdfgTmp_hc3307145__0 
                                                >> 0x14U)))),5);
    bufp->fullCData(oldp+54,(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Register__writeReg),5);
    bufp->fullIData(oldp+55,(vlSelf->SingleCycleCPU__DOT__reg_read_data1),32);
    bufp->fullIData(oldp+56,(vlSelf->SingleCycleCPU__DOT__reg_read_data2),32);
    bufp->fullBit(oldp+57,((VL_LTS_III(32, vlSelf->SingleCycleCPU__DOT__reg_read_data1, vlSelf->SingleCycleCPU__DOT__reg_read_data2)
                             ? 1U : 0U)));
    bufp->fullBit(oldp+58,(vlSelf->clk));
    bufp->fullBit(oldp+59,(vlSelf->start));
    bufp->fullIData(oldp+60,(vlSelf->r[0]),32);
    bufp->fullIData(oldp+61,(vlSelf->r[1]),32);
    bufp->fullIData(oldp+62,(vlSelf->r[2]),32);
    bufp->fullIData(oldp+63,(vlSelf->r[3]),32);
    bufp->fullIData(oldp+64,(vlSelf->r[4]),32);
    bufp->fullIData(oldp+65,(vlSelf->r[5]),32);
    bufp->fullIData(oldp+66,(vlSelf->r[6]),32);
    bufp->fullIData(oldp+67,(vlSelf->r[7]),32);
    bufp->fullIData(oldp+68,(vlSelf->r[8]),32);
    bufp->fullIData(oldp+69,(vlSelf->r[9]),32);
    bufp->fullIData(oldp+70,(vlSelf->r[10]),32);
    bufp->fullIData(oldp+71,(vlSelf->r[11]),32);
    bufp->fullIData(oldp+72,(vlSelf->r[12]),32);
    bufp->fullIData(oldp+73,(vlSelf->r[13]),32);
    bufp->fullIData(oldp+74,(vlSelf->r[14]),32);
    bufp->fullIData(oldp+75,(vlSelf->r[15]),32);
    bufp->fullIData(oldp+76,(vlSelf->r[16]),32);
    bufp->fullIData(oldp+77,(vlSelf->r[17]),32);
    bufp->fullIData(oldp+78,(vlSelf->r[18]),32);
    bufp->fullIData(oldp+79,(vlSelf->r[19]),32);
    bufp->fullIData(oldp+80,(vlSelf->r[20]),32);
    bufp->fullIData(oldp+81,(vlSelf->r[21]),32);
    bufp->fullIData(oldp+82,(vlSelf->r[22]),32);
    bufp->fullIData(oldp+83,(vlSelf->r[23]),32);
    bufp->fullIData(oldp+84,(vlSelf->r[24]),32);
    bufp->fullIData(oldp+85,(vlSelf->r[25]),32);
    bufp->fullIData(oldp+86,(vlSelf->r[26]),32);
    bufp->fullIData(oldp+87,(vlSelf->r[27]),32);
    bufp->fullIData(oldp+88,(vlSelf->r[28]),32);
    bufp->fullIData(oldp+89,(vlSelf->r[29]),32);
    bufp->fullIData(oldp+90,(vlSelf->r[30]),32);
    bufp->fullIData(oldp+91,(vlSelf->r[31]),32);
    bufp->fullIData(oldp+92,(((0U == (3U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                            >> 8U)))
                               ? vlSelf->SingleCycleCPU__DOT__pc_current
                               : ((1U == (3U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                                >> 8U)))
                                   ? ((IData)(4U) + vlSelf->SingleCycleCPU__DOT__pc_current)
                                   : ((2U == (3U & 
                                              ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                               >> 8U)))
                                       ? vlSelf->SingleCycleCPU__DOT__pc_branch
                                       : vlSelf->SingleCycleCPU__DOT__pc_current)))),32);
    bufp->fullIData(oldp+93,(vlSelf->SingleCycleCPU__DOT__pc_branch),32);
    bufp->fullIData(oldp+94,(vlSelf->SingleCycleCPU__DOT__mem_read_data),32);
    bufp->fullIData(oldp+95,(vlSelf->SingleCycleCPU__DOT__write_data),32);
    bufp->fullBit(oldp+96,(vlSelf->SingleCycleCPU__DOT__branch_eq));
    bufp->fullCData(oldp+97,(vlSelf->SingleCycleCPU__DOT__write_data_sel),2);
    bufp->fullIData(oldp+98,(4U),32);
    bufp->fullIData(oldp+99,(0x20U),32);
    bufp->fullIData(oldp+100,(0U),32);
}
