module Control (
    input [6:0] opcode,
    input [2:0] funct3,
    input BrEq, BrLT,
    output reg memRead,
    output reg [1:0] memtoReg,
    output reg [1:0] ALUOp,
    output reg memWrite,
    output reg ALUSrc,
    output reg regWrite,
    output reg [1:0] PCSel
);

    // TODO: implement your Control here
    // Hint: follow the Architecture (figure in spec) to set output signal
    reg [8:0] ctrl;
    assign { memRead, memtoReg, ALUOp, memWrite, ALUSrc, regWrite} = ctrl;
    assign PCSel = (opcode == 7'b1100011) ? 2'b10 : (BrEq || BrLT) ? 2'b01 : 2'b00;
    // if BrEq or BrLT is 1, set PCSel to 2'b01
    // if opcode is 7'b1100011, set PCSel to 2'b10

    always @(*)begin
        case(opcode)
            7'b0110011: ctrl = 8'b0_00_10_0_0_1; // R-type
            7'b0000011: ctrl = 8'b1_01_00_0_1_1; // Load (I-type)
            7'b0100011: ctrl = 8'b0_00_00_1_1_0; // Store (S-type)
            7'b1100011: begin // Branch (B-type)
                if (BrEq || BrLT)
                    ctrl = 8'b0_00_01_0_0_0; // Branch if equal / less than
                else
                    ctrl = 8'b0_00_00_0_0_0; // Default
            end
            7'b0010011: ctrl = 8'b0_00_11_0_1_1; // Immediate (I-type)
            7'b1101111: ctrl = 8'b0_10_00_0_0_1; // JAL (J-type)
            7'b1100111: ctrl = 8'b0_10_00_0_1_1; // JALR (I-type)
            default:    ctrl = 8'b0_00_00_0_0_0; // Default case
        endcase
    end
endmodule

