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

    reg [9:0] crtl;
    assign {PCSel,memRead,memtoReg,ALUOp,memWrite,ALUSrc,regWrite} = crtl;

    always@(*) begin
        case(opcode)
            7'b0000011: crtl = 10'b00_1_01_00_0_1_1;  //load 
            7'b0010011: crtl = 10'b00_0_00_01_0_1_1;  // immediate add sub 
            7'b0100011: crtl = 10'b00_0_xx_00_1_1_0; // store 
            7'b0110011: crtl = 10'b00_0_00_10_0_0_1; //R type 
            7'b1100011: //  branch
                case(funct3)
                    3'b000:
                        if(BrEq) 
                            crtl = 10'b01_0_xx_xx_0_0_0;
                        else 
                            crtl = 10'b00_0_xx_xx_0_0_0;
                        
                        
                    3'b001:
                        if(~BrEq)
                            crtl = 10'b01_0_xx_xx_0_0_0;
                        else 
                            crtl = 10'b00_0_xx_xx_0_0_0;
                    3'b100:
                        if(BrLT)
                            crtl = 10'b01_0_xx_xx_0_0_0;
                        else 
                            crtl = 10'b00_0_xx_xx_0_0_0;
                    3'b101:
                        if(~BrLT)
                            crtl = 10'b01_0_xx_xx_0_0_0;
                        else 
                            crtl = 10'b00_0_xx_xx_0_0_0;
                    default:
                        crtl = 10'b00_0_00_00_0_0_0; 
                endcase 
            7'b1100111:
                crtl = 10'b10_0_10_00_0_1_1; //jalr 
            7'b1101111:
                crtl = 10'b01_0_10_00_0_1_1; //jal 
            default:
                crtl = 10'bxx_x_xx_xx_x_x_x;
        endcase
    end


endmodule

