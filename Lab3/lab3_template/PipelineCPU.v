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

// Assign instruct fields
wire [6:0]opcode = instruct[6:0];
wire [2:0]funct3 = instruct[14:12];
wire funct7 = instruct[30];
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

wire [4:0]readReg1 = instruct[19:15];
wire [4:0]readReg2 = instruct[24:20];
wire [4:0]writeReg = instruct[11:7];
// Register File
Register m_Register(
    .clk(clk),
    .rst(start),
    .regWrite(reg_write),
    .readReg1(readReg1),
    .readReg2(readReg2),
    .writeReg(writeReg),
    .writeData(write_data),
    .readData1(reg_read_data1),
    .readData2(reg_read_data2)
);

// ======= for validation =======
// == Dont change this section ==
assign r = m_Register.regs;
// ======= for validation =======

// Branch Comparator
BranchComp m_BranchComp(
    .A(reg_read_data1),
    .B(reg_read_data2),
    .BrEq(branch_eq),
    .BrLT(branch_lt)
);

// Immediate Generator
ImmGen m_ImmGen(
    .inst(instruct), 
    .imm(imm)
);

// Shift Left 1
ShiftLeftOne m_ShiftLeftOne(
    .i(imm),
    .o(shift_one)
);

// Branch Target Adder
Adder m_Adder_2(
    .a(pc_current),
    .b(shift_one),
    .sum(pc_branch)
);

// PC Mux
Mux3to1 #(.size(32)) m_Mux_PC(
    .sel(pc_sel),
    .s0(pc_plus4),
    .s1(pc_branch),
    .s2(alu_result), 
    .out(pc_next)
);

// ALU Source Mux
Mux2to1 #(.size(32)) m_Mux_ALU(
    .sel(alu_src),
    .s0(reg_read_data2),
    .s1(imm),
    .out(alu_src_b)
);

// ALU Control
ALUCtrl m_ALUCtrl(
    .ALUOp(alu_op),
    .funct7(funct7),
    .funct3(funct3),
    .ALUCtl(alu_control)
);

// ALU
ALU m_ALU(
    .ALUctl(alu_control),
    .A(reg_read_data1),
    .B(alu_src_b),
    .ALUOut(alu_result),
    .zero(jump)
);

// Data Memory
DataMemory m_DataMemory(
    .rst(start),
    .clk(clk),
    .memWrite(mem_write),
    .memRead(mem_read),
    .address(alu_result),
    .writeData(reg_read_data2),
    .readData(mem_read_data)
);

// Write Data Mux
Mux3to1 #(.size(32)) m_Mux_WriteData(
    .sel(mem_to_reg),
    .s0(alu_result),
    .s1(mem_read_data),
    .s2(pc_plus4), 
    .out(write_data)
);

endmodule
