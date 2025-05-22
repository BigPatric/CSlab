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
    output reg [1:0] PCSel,
    output reg flushCtrl,
    output reg PCorR1
);
    // PC -> 0, R1 -> 1
    reg [7:0] crtl;
    assign {memRead,memtoReg,ALUOp,memWrite,ALUSrc,regWrite} = crtl;
    reg [9:0] b1 = 10'b01_0_00_00_0_0_0;
    reg [9:0] b2 = 10'b00_0_00_00_0_0_0;
    assign flushCtrl = (PCSel == 0)?0:1; 
    assign PCorR1 = (PCSel == 2'b01)?0:1;
    always@(*) begin
        PCSel = 2'b00;
        case(opcode)
            7'b0000011: crtl = 8'b1_01_00_0_1_1;  //load 
            7'b0010011: crtl = 8'b0_00_01_0_1_1;  // immediate add sub 
            7'b0100011: crtl = 8'b0_00_00_1_1_0; // store 
            7'b0110011: crtl = 8'b0_00_10_0_0_1; //R type 
            
            7'b1100111:begin
                PCSel = 2'b10;
                crtl = 8'b0_10_00_0_1_1; //jalr 
            end 
            7'b1101111:begin
                PCSel = 2'b01;
                crtl = 8'b0_10_00_0_1_1; //jal 
            end
            7'b1100011:begin //  branch
                crtl = 8'b0_00_00_0_0_0;
                case(funct3)
                    3'b000: begin // beq
                        PCSel = (BrEq)?2'b01:2'b00;
                    end
                    3'b001: begin // bne
                        PCSel = (~BrEq)?2'b01:2'b00;
                    end
                    3'b100: begin // blt
                        PCSel = (BrLT)?2'b01:2'b00;
                    end
                    3'b101: begin // bge
                        PCSel = (~BrLT)?2'b01:2'b00;
                    end
                    default: begin
                        crtl = 8'b0_00_00_0_0_0;
                    end
                endcase 
            end
            default: crtl = 8'b0_00_00_0_0_0;
        endcase
    end


endmodule

