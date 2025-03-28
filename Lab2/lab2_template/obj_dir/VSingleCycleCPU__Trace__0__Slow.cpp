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
    tracep->declBit(c+45,"clk", false,-1);
    tracep->declBit(c+46,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+47+i*1,"r", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("SingleCycleCPU ");
    tracep->declBit(c+45,"clk", false,-1);
    tracep->declBit(c+46,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+47+i*1,"r", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("m_ALU ");
    tracep->declBus(c+81,"ALUctl", false,-1, 3,0);
    tracep->declBus(c+82,"A", false,-1, 31,0);
    tracep->declBus(c+83,"B", false,-1, 31,0);
    tracep->declBus(c+84,"ALUOut", false,-1, 31,0);
    tracep->declBit(c+85,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ALUCtrl ");
    tracep->declBus(c+86,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+87,"funct7", false,-1);
    tracep->declBus(c+88,"funct3", false,-1, 2,0);
    tracep->declBus(c+1,"ALUCtl", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_1 ");
    tracep->declBus(c+89,"a", false,-1, 31,0);
    tracep->declBus(c+90,"b", false,-1, 31,0);
    tracep->declBus(c+91,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_2 ");
    tracep->declBus(c+92,"a", false,-1, 31,0);
    tracep->declBus(c+93,"b", false,-1, 31,0);
    tracep->declBus(c+94,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_BranchComp ");
    tracep->declBus(c+95,"A", false,-1, 31,0);
    tracep->declBus(c+96,"B", false,-1, 31,0);
    tracep->declBit(c+97,"BrEq", false,-1);
    tracep->declBit(c+98,"BrLT", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Control ");
    tracep->declBus(c+99,"opcode", false,-1, 6,0);
    tracep->declBus(c+100,"funct3", false,-1, 2,0);
    tracep->declBit(c+101,"BrEq", false,-1);
    tracep->declBit(c+102,"BrLT", false,-1);
    tracep->declBit(c+2,"memRead", false,-1);
    tracep->declBus(c+3,"memtoReg", false,-1, 1,0);
    tracep->declBus(c+4,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+5,"memWrite", false,-1);
    tracep->declBit(c+6,"ALUSrc", false,-1);
    tracep->declBit(c+7,"regWrite", false,-1);
    tracep->declBus(c+8,"PCSel", false,-1, 1,0);
    tracep->declBus(c+9,"ctrl", false,-1, 9,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_DataMemory ");
    tracep->declBit(c+103,"rst", false,-1);
    tracep->declBit(c+104,"clk", false,-1);
    tracep->declBit(c+105,"memWrite", false,-1);
    tracep->declBit(c+106,"memRead", false,-1);
    tracep->declBus(c+107,"address", false,-1, 31,0);
    tracep->declBus(c+108,"writeData", false,-1, 31,0);
    tracep->declBus(c+79,"readData", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ImmGen ");
    tracep->declBus(c+109,"inst", false,-1, 31,0);
    tracep->declBus(c+109,"imm", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_InstMem ");
    tracep->declBus(c+110,"readAddr", false,-1, 31,0);
    tracep->declBus(c+10,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_ALU ");
    tracep->declBus(c+111,"size", false,-1, 31,0);
    tracep->declBit(c+112,"sel", false,-1);
    tracep->declBus(c+113,"s0", false,-1, 31,0);
    tracep->declBus(c+114,"s1", false,-1, 31,0);
    tracep->declBus(c+115,"out", false,-1, 31,0);
    tracep->declBus(c+115,"o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_PC ");
    tracep->declBus(c+111,"size", false,-1, 31,0);
    tracep->declBus(c+116,"sel", false,-1, 1,0);
    tracep->declBus(c+117,"s0", false,-1, 31,0);
    tracep->declBus(c+118,"s1", false,-1, 31,0);
    tracep->declBus(c+119,"s2", false,-1, 31,0);
    tracep->declBus(c+120,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_WriteData ");
    tracep->declBus(c+111,"size", false,-1, 31,0);
    tracep->declBus(c+121,"sel", false,-1, 1,0);
    tracep->declBus(c+122,"s0", false,-1, 31,0);
    tracep->declBus(c+123,"s1", false,-1, 31,0);
    tracep->declBus(c+124,"s2", false,-1, 31,0);
    tracep->declBus(c+125,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_PC ");
    tracep->declBit(c+126,"clk", false,-1);
    tracep->declBit(c+127,"rst", false,-1);
    tracep->declBus(c+128,"pc_i", false,-1, 31,0);
    tracep->declBus(c+80,"pc_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Register ");
    tracep->declBit(c+129,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBit(c+131,"regWrite", false,-1);
    tracep->declBus(c+132,"readReg1", false,-1, 4,0);
    tracep->declBus(c+133,"readReg2", false,-1, 4,0);
    tracep->declBus(c+134,"writeReg", false,-1, 4,0);
    tracep->declBus(c+135,"writeData", false,-1, 31,0);
    tracep->declBus(c+11,"readData1", false,-1, 31,0);
    tracep->declBus(c+12,"readData2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+13+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ShiftLeftOne ");
    tracep->declBus(c+136,"i", false,-1, 31,0);
    tracep->declBus(c+137,"o", false,-1, 31,0);
    tracep->declBus(c+137,"out", false,-1, 31,0);
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
    bufp->fullCData(oldp+1,(vlSelf->SingleCycleCPU__DOT__m_ALUCtrl__DOT__ALUCtl),4);
    bufp->fullBit(oldp+2,((1U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                 >> 7U))));
    bufp->fullCData(oldp+3,((3U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                   >> 5U))),2);
    bufp->fullCData(oldp+4,((3U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                   >> 3U))),2);
    bufp->fullBit(oldp+5,((1U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                 >> 2U))));
    bufp->fullBit(oldp+6,((1U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                 >> 1U))));
    bufp->fullBit(oldp+7,((1U & (IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl))));
    bufp->fullCData(oldp+8,((3U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                   >> 8U))),2);
    bufp->fullSData(oldp+9,(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl),10);
    bufp->fullIData(oldp+10,(((0x80U <= vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__readAddr)
                               ? 0U : ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                        [(0x7fU & vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__readAddr)] 
                                        << 0x18U) | 
                                       ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                         [(0x7fU & 
                                           ((IData)(1U) 
                                            + vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__readAddr))] 
                                         << 0x10U) 
                                        | ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                            [(0x7fU 
                                              & ((IData)(2U) 
                                                 + vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__readAddr))] 
                                            << 8U) 
                                           | vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                           [(0x7fU 
                                             & ((IData)(3U) 
                                                + vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__readAddr))]))))),32);
    bufp->fullIData(oldp+11,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
                             [vlSelf->SingleCycleCPU__DOT__m_Register__DOT__readReg1]),32);
    bufp->fullIData(oldp+12,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
                             [vlSelf->SingleCycleCPU__DOT__m_Register__DOT__readReg2]),32);
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
    bufp->fullBit(oldp+45,(vlSelf->clk));
    bufp->fullBit(oldp+46,(vlSelf->start));
    bufp->fullIData(oldp+47,(vlSelf->r[0]),32);
    bufp->fullIData(oldp+48,(vlSelf->r[1]),32);
    bufp->fullIData(oldp+49,(vlSelf->r[2]),32);
    bufp->fullIData(oldp+50,(vlSelf->r[3]),32);
    bufp->fullIData(oldp+51,(vlSelf->r[4]),32);
    bufp->fullIData(oldp+52,(vlSelf->r[5]),32);
    bufp->fullIData(oldp+53,(vlSelf->r[6]),32);
    bufp->fullIData(oldp+54,(vlSelf->r[7]),32);
    bufp->fullIData(oldp+55,(vlSelf->r[8]),32);
    bufp->fullIData(oldp+56,(vlSelf->r[9]),32);
    bufp->fullIData(oldp+57,(vlSelf->r[10]),32);
    bufp->fullIData(oldp+58,(vlSelf->r[11]),32);
    bufp->fullIData(oldp+59,(vlSelf->r[12]),32);
    bufp->fullIData(oldp+60,(vlSelf->r[13]),32);
    bufp->fullIData(oldp+61,(vlSelf->r[14]),32);
    bufp->fullIData(oldp+62,(vlSelf->r[15]),32);
    bufp->fullIData(oldp+63,(vlSelf->r[16]),32);
    bufp->fullIData(oldp+64,(vlSelf->r[17]),32);
    bufp->fullIData(oldp+65,(vlSelf->r[18]),32);
    bufp->fullIData(oldp+66,(vlSelf->r[19]),32);
    bufp->fullIData(oldp+67,(vlSelf->r[20]),32);
    bufp->fullIData(oldp+68,(vlSelf->r[21]),32);
    bufp->fullIData(oldp+69,(vlSelf->r[22]),32);
    bufp->fullIData(oldp+70,(vlSelf->r[23]),32);
    bufp->fullIData(oldp+71,(vlSelf->r[24]),32);
    bufp->fullIData(oldp+72,(vlSelf->r[25]),32);
    bufp->fullIData(oldp+73,(vlSelf->r[26]),32);
    bufp->fullIData(oldp+74,(vlSelf->r[27]),32);
    bufp->fullIData(oldp+75,(vlSelf->r[28]),32);
    bufp->fullIData(oldp+76,(vlSelf->r[29]),32);
    bufp->fullIData(oldp+77,(vlSelf->r[30]),32);
    bufp->fullIData(oldp+78,(vlSelf->r[31]),32);
    bufp->fullIData(oldp+79,(vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__readData),32);
    bufp->fullIData(oldp+80,(vlSelf->SingleCycleCPU__DOT__m_PC__DOT__pc_o),32);
    bufp->fullCData(oldp+81,(vlSelf->SingleCycleCPU__DOT__m_ALU__DOT__ALUctl),4);
    bufp->fullIData(oldp+82,(vlSelf->SingleCycleCPU__DOT__m_ALU__DOT__A),32);
    bufp->fullIData(oldp+83,(vlSelf->SingleCycleCPU__DOT__m_ALU__DOT__B),32);
    bufp->fullIData(oldp+84,(((8U & (IData)(vlSelf->SingleCycleCPU__DOT__m_ALU__DOT__ALUctl))
                               ? 0U : ((4U & (IData)(vlSelf->SingleCycleCPU__DOT__m_ALU__DOT__ALUctl))
                                        ? ((2U & (IData)(vlSelf->SingleCycleCPU__DOT__m_ALU__DOT__ALUctl))
                                            ? ((1U 
                                                & (IData)(vlSelf->SingleCycleCPU__DOT__m_ALU__DOT__ALUctl))
                                                ? (
                                                   VL_LTS_III(32, vlSelf->SingleCycleCPU__DOT__m_ALU__DOT__A, vlSelf->SingleCycleCPU__DOT__m_ALU__DOT__B)
                                                    ? 1U
                                                    : 0U)
                                                : (vlSelf->SingleCycleCPU__DOT__m_ALU__DOT__A 
                                                   - vlSelf->SingleCycleCPU__DOT__m_ALU__DOT__B))
                                            : 0U) : 
                                       ((2U & (IData)(vlSelf->SingleCycleCPU__DOT__m_ALU__DOT__ALUctl))
                                         ? ((1U & (IData)(vlSelf->SingleCycleCPU__DOT__m_ALU__DOT__ALUctl))
                                             ? 0U : 
                                            (vlSelf->SingleCycleCPU__DOT__m_ALU__DOT__A 
                                             + vlSelf->SingleCycleCPU__DOT__m_ALU__DOT__B))
                                         : ((1U & (IData)(vlSelf->SingleCycleCPU__DOT__m_ALU__DOT__ALUctl))
                                             ? (vlSelf->SingleCycleCPU__DOT__m_ALU__DOT__A 
                                                | vlSelf->SingleCycleCPU__DOT__m_ALU__DOT__B)
                                             : (vlSelf->SingleCycleCPU__DOT__m_ALU__DOT__A 
                                                & vlSelf->SingleCycleCPU__DOT__m_ALU__DOT__B)))))),32);
    bufp->fullBit(oldp+85,((0U == ((8U & (IData)(vlSelf->SingleCycleCPU__DOT__m_ALU__DOT__ALUctl))
                                    ? 0U : ((4U & (IData)(vlSelf->SingleCycleCPU__DOT__m_ALU__DOT__ALUctl))
                                             ? ((2U 
                                                 & (IData)(vlSelf->SingleCycleCPU__DOT__m_ALU__DOT__ALUctl))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->SingleCycleCPU__DOT__m_ALU__DOT__ALUctl))
                                                  ? 
                                                 (VL_LTS_III(32, vlSelf->SingleCycleCPU__DOT__m_ALU__DOT__A, vlSelf->SingleCycleCPU__DOT__m_ALU__DOT__B)
                                                   ? 1U
                                                   : 0U)
                                                  : 
                                                 (vlSelf->SingleCycleCPU__DOT__m_ALU__DOT__A 
                                                  - vlSelf->SingleCycleCPU__DOT__m_ALU__DOT__B))
                                                 : 0U)
                                             : ((2U 
                                                 & (IData)(vlSelf->SingleCycleCPU__DOT__m_ALU__DOT__ALUctl))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->SingleCycleCPU__DOT__m_ALU__DOT__ALUctl))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->SingleCycleCPU__DOT__m_ALU__DOT__A 
                                                  + vlSelf->SingleCycleCPU__DOT__m_ALU__DOT__B))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->SingleCycleCPU__DOT__m_ALU__DOT__ALUctl))
                                                  ? 
                                                 (vlSelf->SingleCycleCPU__DOT__m_ALU__DOT__A 
                                                  | vlSelf->SingleCycleCPU__DOT__m_ALU__DOT__B)
                                                  : 
                                                 (vlSelf->SingleCycleCPU__DOT__m_ALU__DOT__A 
                                                  & vlSelf->SingleCycleCPU__DOT__m_ALU__DOT__B))))))));
    bufp->fullCData(oldp+86,(vlSelf->SingleCycleCPU__DOT__m_ALUCtrl__DOT__ALUOp),2);
    bufp->fullBit(oldp+87,(vlSelf->SingleCycleCPU__DOT__m_ALUCtrl__DOT__funct7));
    bufp->fullCData(oldp+88,(vlSelf->SingleCycleCPU__DOT__m_ALUCtrl__DOT__funct3),3);
    bufp->fullIData(oldp+89,(vlSelf->SingleCycleCPU__DOT__m_Adder_1__DOT__a),32);
    bufp->fullIData(oldp+90,(vlSelf->SingleCycleCPU__DOT__m_Adder_1__DOT__b),32);
    bufp->fullIData(oldp+91,((vlSelf->SingleCycleCPU__DOT__m_Adder_1__DOT__a 
                              + vlSelf->SingleCycleCPU__DOT__m_Adder_1__DOT__b)),32);
    bufp->fullIData(oldp+92,(vlSelf->SingleCycleCPU__DOT__m_Adder_2__DOT__a),32);
    bufp->fullIData(oldp+93,(vlSelf->SingleCycleCPU__DOT__m_Adder_2__DOT__b),32);
    bufp->fullIData(oldp+94,((vlSelf->SingleCycleCPU__DOT__m_Adder_2__DOT__a 
                              + vlSelf->SingleCycleCPU__DOT__m_Adder_2__DOT__b)),32);
    bufp->fullIData(oldp+95,(vlSelf->SingleCycleCPU__DOT__m_BranchComp__DOT__A),32);
    bufp->fullIData(oldp+96,(vlSelf->SingleCycleCPU__DOT__m_BranchComp__DOT__B),32);
    bufp->fullBit(oldp+97,(((vlSelf->SingleCycleCPU__DOT__m_BranchComp__DOT__A 
                             == vlSelf->SingleCycleCPU__DOT__m_BranchComp__DOT__B)
                             ? 1U : 0U)));
    bufp->fullBit(oldp+98,((VL_LTS_III(32, vlSelf->SingleCycleCPU__DOT__m_BranchComp__DOT__A, vlSelf->SingleCycleCPU__DOT__m_BranchComp__DOT__B)
                             ? 1U : 0U)));
    bufp->fullCData(oldp+99,(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__opcode),7);
    bufp->fullCData(oldp+100,(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__funct3),3);
    bufp->fullBit(oldp+101,(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__BrEq));
    bufp->fullBit(oldp+102,(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__BrLT));
    bufp->fullBit(oldp+103,(vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__rst));
    bufp->fullBit(oldp+104,(vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__clk));
    bufp->fullBit(oldp+105,(vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__memWrite));
    bufp->fullBit(oldp+106,(vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__memRead));
    bufp->fullIData(oldp+107,(vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__address),32);
    bufp->fullIData(oldp+108,(vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__writeData),32);
    bufp->fullIData(oldp+109,(vlSelf->SingleCycleCPU__DOT__m_ImmGen__DOT__inst),32);
    bufp->fullIData(oldp+110,(vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__readAddr),32);
    bufp->fullIData(oldp+111,(0x20U),32);
    bufp->fullBit(oldp+112,(vlSelf->SingleCycleCPU__DOT__m_Mux_ALU__DOT__sel));
    bufp->fullIData(oldp+113,(vlSelf->SingleCycleCPU__DOT__m_Mux_ALU__DOT__s0),32);
    bufp->fullIData(oldp+114,(vlSelf->SingleCycleCPU__DOT__m_Mux_ALU__DOT__s1),32);
    bufp->fullIData(oldp+115,(((IData)(vlSelf->SingleCycleCPU__DOT__m_Mux_ALU__DOT__sel)
                                ? vlSelf->SingleCycleCPU__DOT__m_Mux_ALU__DOT__s1
                                : vlSelf->SingleCycleCPU__DOT__m_Mux_ALU__DOT__s0)),32);
    bufp->fullCData(oldp+116,(vlSelf->SingleCycleCPU__DOT__m_Mux_PC__DOT__sel),2);
    bufp->fullIData(oldp+117,(vlSelf->SingleCycleCPU__DOT__m_Mux_PC__DOT__s0),32);
    bufp->fullIData(oldp+118,(vlSelf->SingleCycleCPU__DOT__m_Mux_PC__DOT__s1),32);
    bufp->fullIData(oldp+119,(vlSelf->SingleCycleCPU__DOT__m_Mux_PC__DOT__s2),32);
    bufp->fullIData(oldp+120,(((0U == (IData)(vlSelf->SingleCycleCPU__DOT__m_Mux_PC__DOT__sel))
                                ? vlSelf->SingleCycleCPU__DOT__m_Mux_PC__DOT__s0
                                : ((1U == (IData)(vlSelf->SingleCycleCPU__DOT__m_Mux_PC__DOT__sel))
                                    ? vlSelf->SingleCycleCPU__DOT__m_Mux_PC__DOT__s1
                                    : ((2U == (IData)(vlSelf->SingleCycleCPU__DOT__m_Mux_PC__DOT__sel))
                                        ? vlSelf->SingleCycleCPU__DOT__m_Mux_PC__DOT__s2
                                        : vlSelf->SingleCycleCPU__DOT__m_Mux_PC__DOT__s0)))),32);
    bufp->fullCData(oldp+121,(vlSelf->SingleCycleCPU__DOT__m_Mux_WriteData__DOT__sel),2);
    bufp->fullIData(oldp+122,(vlSelf->SingleCycleCPU__DOT__m_Mux_WriteData__DOT__s0),32);
    bufp->fullIData(oldp+123,(vlSelf->SingleCycleCPU__DOT__m_Mux_WriteData__DOT__s1),32);
    bufp->fullIData(oldp+124,(vlSelf->SingleCycleCPU__DOT__m_Mux_WriteData__DOT__s2),32);
    bufp->fullIData(oldp+125,(((0U == (IData)(vlSelf->SingleCycleCPU__DOT__m_Mux_WriteData__DOT__sel))
                                ? vlSelf->SingleCycleCPU__DOT__m_Mux_WriteData__DOT__s0
                                : ((1U == (IData)(vlSelf->SingleCycleCPU__DOT__m_Mux_WriteData__DOT__sel))
                                    ? vlSelf->SingleCycleCPU__DOT__m_Mux_WriteData__DOT__s1
                                    : ((2U == (IData)(vlSelf->SingleCycleCPU__DOT__m_Mux_WriteData__DOT__sel))
                                        ? vlSelf->SingleCycleCPU__DOT__m_Mux_WriteData__DOT__s2
                                        : vlSelf->SingleCycleCPU__DOT__m_Mux_WriteData__DOT__s0)))),32);
    bufp->fullBit(oldp+126,(vlSelf->SingleCycleCPU__DOT__m_PC__DOT__clk));
    bufp->fullBit(oldp+127,(vlSelf->SingleCycleCPU__DOT__m_PC__DOT__rst));
    bufp->fullIData(oldp+128,(vlSelf->SingleCycleCPU__DOT__m_PC__DOT__pc_i),32);
    bufp->fullBit(oldp+129,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__clk));
    bufp->fullBit(oldp+130,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__rst));
    bufp->fullBit(oldp+131,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regWrite));
    bufp->fullCData(oldp+132,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__readReg1),5);
    bufp->fullCData(oldp+133,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__readReg2),5);
    bufp->fullCData(oldp+134,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__writeReg),5);
    bufp->fullIData(oldp+135,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__writeData),32);
    bufp->fullIData(oldp+136,(vlSelf->SingleCycleCPU__DOT__m_ShiftLeftOne__DOT__i),32);
    bufp->fullIData(oldp+137,((vlSelf->SingleCycleCPU__DOT__m_ShiftLeftOne__DOT__i 
                               << 1U)),32);
}
