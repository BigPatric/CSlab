module PipelineCPU (
    input clk,
    input start,
    output signed [31:0] r [0:31]
);

// When input start is zero, cpu should reset
// When input start is high, cpu start running

// The rst signal is active low, which means the module will reset if the rst signal is zero.
// And you should follow this design.

// Wires for interconnections
wire [31:0] pc_current;
wire [31:0] pc_next;
wire [31:0] pc_plus4;
wire [31:0] pc_branch;

wire [31:0] instruct;
wire [31:0] imm;
wire [31:0] reg_read_data1, reg_read_data2;
wire [31:0] alu_result, mem_read_data, write_data;
wire [31:0] alu_src_b;
wire [3:0] alu_control;
wire branch_eq, branch_lt, mem_read, mem_write, alu_src, reg_write, jump;
wire [1:0] mem_to_reg; 
wire [1:0] alu_op;
wire [1:0] pc_sel;

wire [31:0] shift_one;


// Program Counter
PC m_PC(
    .clk(clk),
    .rst(start),
    .pc_i(pc_next),
    .pc_o(pc_current)
);

// PC + 4 Adder
Adder m_Adder_1(
    .a(pc_current),
    .b(32'h4),
    .sum(pc_plus4)
);

// instruct Memory
InstructionMemory m_InstMem(
    .readAddr(pc_current),
    .inst(instruct)
);

wire [31:0] pc_current_IF_ID;
wire [31:0] pc_plus4_IF_ID;
wire [31:0] instruct_IF_ID;
// IF/ID Reg
IF_ID_Reg m_IF_ID_Reg(
    .clk(clk),
    .rst(start),
    .pc_i(pc_current),
    .pc_4_i(pc_plus4),
    .inst_i(instruct),

    .pc_o(pc_current_IF_ID),
    .pc_4_o(pc_plus4_IF_ID),
    .inst_o(instruct_IF_ID)
);
wire RePC;
wire Flush_HD;
HazardDetection hazard_detection_unit(
    .opcode(instruct_IF_ID[6:0]),
    .memtoReg(mem_to_reg),
    .id_R1(instruct_IF_ID[19:15]),
    .id_R2(instruct_IF_ID[24:20]),
    .ex_Rd(writeReg_ID_EX),
    .mem_Rd(writeReg_EX_MEM),
    .ID_EX_MemRead(mem_read_ID_EX),
    .mem_MemRead(mem_read_EX_MEM),
    .RePC(RePC),
    .Flush_HD(Flush_HD)
);


// Assign instruct fields
wire [6:0]opcode = instruct_IF_ID[6:0];
wire [2:0]funct3 = instruct_IF_ID[14:12];
wire funct7 = instruct_IF_ID[30];

// Control Unit
Control m_Control(
    .opcode(opcode),
    .funct3(funct3),
    .BrEq(branch_eq),
    .BrLT(branch_lt),

    .memRead(mem_read),
    .memtoReg(mem_to_reg), 
    .ALUOp(alu_op),
    .memWrite(mem_write),
    .ALUSrc(alu_src),
    .regWrite(reg_write),
    .PCSel(pc_sel)
);

wire [4:0]readReg1 = instruct_IF_ID[19:15];
wire [4:0]readReg2 = instruct_IF_ID[24:20];
wire [4:0]writeReg = instruct_IF_ID[11:7];
// Register File
Register m_Register(
    .clk(clk),
    .rst(start),
    .regWrite(reg_write_MEM_WB),
    .readReg1(readReg1),
    .readReg2(readReg2),
    .writeReg(write_reg_MEM_WB),
    .writeData(write_data),
    .readData1(reg_read_data1),
    .readData2(reg_read_data2)
);

// ======= for validation =======
// == Dont change this section ==
assign r = m_Register.regs;
// ======= for validation =======

wire [31:0] reg_readData1_mux;
wire [31:0] reg_readData2_mux;
// The Muxs after Reg[]
Mux2to1 #(.size(32)) mux_readData1(
    .sel(id_ForwardA),
    .s0(reg_read_data1),
    .s1(alu_result_EX_MEM),
    .out(reg_readData1_mux)
);
Mux2to1 #(.size(32)) mux_readData2(
    .sel(id_ForwardB),
    .s0(reg_read_data2),
    .s1(alu_result_EX_MEM),
    .out(reg_readData2_mux)
);

// Branch Comparator
BranchComp m_BranchComp(
    .A(reg_readData1_mux),
    .B(reg_readData2_mux),
    .BrEq(branch_eq),
    .BrLT(branch_lt)
);

// Immediate Generator
ImmGen m_ImmGen(
    .inst(instruct_IF_ID), 
    .imm(imm)
);

// Shift Left 1
ShiftLeftOne m_ShiftLeftOne(
    .i(imm),
    .o(shift_one)
);

// Branch Target Adder
Adder m_Adder_2(
    .a(pc_current_IF_ID),
    .b(shift_one),
    .sum(pc_branch)
);

// // PC Mux
// Mux3to1 #(.size(32)) m_Mux_PC(
//     .sel(pc_sel),
//     .s0(pc_plus4),
//     .s1(pc_branch),
//     .s2(alu_result), 
//     .out(pc_next)
// );

// PC Mux
wire [31:0] pc_S_out;
Mux2to1 #(.size(32)) m_Mux_PC_Jump(
    .sel(PCSel),
    .s0(pc_plus4),
    .s1(pc_branch),
    .out(pc_S_out)
);
Mux2to1 #(.size(32)) m_Mux_PC(
    .sel(RePC),
    .s0(pc_S_out),
    .s1(pc_current),
    .out(pc_next)
);

wire reg_write_ID_EX;
wire [1:0]mem_to_reg_ID_EX;
wire mem_read_ID_EX;
wire mem_write_ID_EX;
wire alu_src_ID_EX;
wire [1:0] alu_op_ID_EX;
wire [31:0] pc_plus4_ID_EX;
wire [31:0] reg_read_data1_ID_EX;
wire [31:0] reg_read_data2_ID_EX;
wire [31:0] imm_ID_EX;
wire [4:0] writeReg_ID_EX;
wire [2:0] funct3_ID_EX;
wire funct7_ID_EX;
// ID/EX Reg
ID_EX_Reg m_ID_EX_Reg(
    .clk(clk),
    .rst(start),
    .reg_write_i(reg_write),
    .mem_to_reg_i(mem_to_reg),
    .mem_read_i(mem_read),
    .mem_write_i(mem_write),
    .alu_src_i(alu_src),
    .alu_op_i(alu_op),
    .pc_4_i(pc_plus4_IF_ID),
    .read_data1_i(reg_readData1_mux),
    .read_data2_i(reg_readData2_mux),
    .imm_i(imm),
    .write_reg_i(writeReg),
    .funct3_i(funct3),
    .funct7_i(funct7),

    .reg_write_o(reg_write_ID_EX),
    .mem_to_reg_o(mem_to_reg_ID_EX),
    .mem_read_o(mem_read_ID_EX),
    .mem_write_o(mem_write_ID_EX),
    .alu_src_o(alu_src_ID_EX),
    .alu_op_o(alu_op_ID_EX),
    .pc_4_o(pc_plus4_ID_EX),
    .read_data1_o(reg_read_data1_ID_EX),
    .read_data2_o(reg_read_data2_ID_EX),
    .imm_o(imm_ID_EX),
    .write_reg_o(writeReg_ID_EX),
    .funct3_o(funct3_ID_EX),
    .funct7_o(funct7_ID_EX)
);

wire id_ForwardA;
wire id_ForwardB;

wire [1:0]ex_ForwardA;
wire [1:0]ex_ForwardB;

Forwarding_Unit m_Forwarding_Unit(
    .id_R1(instruct_IF_ID[19:15]),
    .id_R2(instruct_IF_ID[24:20]),
    .ex_R1(writeReg_ID_EX),
    .ex_R2(writeReg_ID_EX),
    .mem_Rd(write_reg_EX_MEM),
    .wb_Rd(write_reg_MEM_WB),
    .mem_RegWrite(reg_write_EX_MEM),
    .wb_RegWrite(reg_write_MEM_WB),
    .id_ForwardA(id_ForwardA),
    .id_ForwardB(id_ForwardB),
    .ex_ForwardA(ex_ForwardA),
    .ex_ForwardB(ex_ForwardB)
);

// 3to1 of reg_read_data1 , after ID/EX Reg
wire [31:0] reg_read_data1_ID_EX_mux;
Mux3to1 #(.size(32)) m_Mux_reg_read_data1(
    .sel(ex_ForwardA),
    .s0(reg_read_data1_ID_EX),
    .s1(write_data),
    .s2(alu_result_EX_MEM),
    .out(reg_read_data1_ID_EX_mux)
);

wire [31:0]reg_read_data2_ID_EX_mux;
// 3to1 of alu_src_b
Mux3to1 #(.size(32)) m_Mux_reg_read_data2(
    .sel(ex_ForwardB),
    .s0(reg_read_data2_ID_EX),
    .s1(write_data),
    .s2(alu_result_EX_MEM),
    .out(reg_read_data2_ID_EX_mux)
);

// ALU Source Mux
Mux2to1 #(.size(32)) m_Mux_ALU(
    .sel(alu_src_ID_EX),
    .s0(reg_read_data2_ID_EX_mux),
    .s1(imm_ID_EX),
    .out(alu_src_b)
);

// ALU
ALU m_ALU(
    .ALUctl(alu_control),
    .A(reg_read_data1_ID_EX_mux),
    .B(alu_src_b),
    .ALUOut(alu_result),
    .zero(jump)
);

// ALU Control
ALUCtrl m_ALUCtrl(
    .ALUOp(alu_op_ID_EX),
    .funct7(funct7_ID_EX),
    .funct3(funct3_ID_EX),
    .ALUCtl(alu_control)
);

wire [31:0] alu_result_EX_MEM;
wire [31:0] pc_plus4_EX_MEM;
wire [31:0] reg_read_data2_EX_MEM;
wire [4:0] write_reg_EX_MEM;
wire mem_write_EX_MEM;
wire mem_read_EX_MEM;
wire reg_write_EX_MEM;
wire [1:0] mem_to_reg_EX_MEM;

// EX/MEM Reg
EX_MEM_Reg m_EX_MEM_Reg(
    .clk(clk),
    .rst(start),
    .alu_result_i(alu_result),
    .pc_4_i(pc_plus4_ID_EX),
    .readData2_i(reg_read_data2_ID_EX_mux),
    .write_reg_i(writeReg_ID_EX),
    .mem_write_i(mem_write_ID_EX),
    .mem_read_i(mem_read_ID_EX),
    .mem_to_reg_i(mem_to_reg_ID_EX),
    .regWrite_i(reg_write_ID_EX),

    .alu_result_o(alu_result_EX_MEM),
    .pc_4_o(pc_plus4_EX_MEM),
    .readData2_o(reg_read_data2_EX_MEM),
    .write_reg_o(write_reg_EX_MEM), 
    .mem_write_o(mem_write_EX_MEM),
    .mem_read_o(mem_read_EX_MEM),
    .mem_to_reg_o(mem_to_reg_EX_MEM),
    .regWrite_o(reg_write_EX_MEM)
);

// Data Memory
DataMemory m_DataMemory(
    .rst(start),
    .clk(clk),
    .memWrite(mem_write_EX_MEM),
    .memRead(mem_read_EX_MEM),
    .address(alu_result_EX_MEM),
    .writeData(reg_read_data2_EX_MEM),

    .readData(mem_read_data)
);

wire [31:0] alu_result_MEM_WB;
wire [31:0] mem_read_data_MEM_WB;
wire [4:0] write_reg_MEM_WB;
wire reg_write_MEM_WB;
wire [1:0] mem_to_reg_MEM_WB;
wire [31:0] pc_plus4_MEM_WB;
// MEM/WB Reg
MEM_WB_Reg m_MEM_WB_Reg(
    .clk(clk),
    .rst(start),
    .alu_result_i(alu_result_EX_MEM),
    .dmem_read_data_i(mem_read_data),
    .write_reg_i(write_reg_EX_MEM),
    .mem_to_reg_i(mem_to_reg_EX_MEM),
    .reg_write_i(reg_write_EX_MEM),
    .pc_4_i(pc_plus4_EX_MEM),

    .alu_result_o(alu_result_MEM_WB),
    .dmem_read_data_o(mem_read_data_MEM_WB),
    .write_reg_o(write_reg_MEM_WB),
    .mem_to_reg_o(mem_to_reg_MEM_WB),
    .reg_write_o(reg_write_MEM_WB),
    .pc_4_o(pc_plus4_MEM_WB)
);

// Write Data Mux
Mux3to1 #(.size(32)) m_Mux_WriteData(
    .sel(mem_to_reg_MEM_WB),
    .s0(alu_result_MEM_WB),
    .s1(mem_read_data_MEM_WB),
    .s2(pc_plus4_MEM_WB), 
    .out(write_data)
);

endmodule
