module ALUCtrl (
    input [1:0] ALUOp,
    input funct7,
    input [2:0] funct3,
    output reg [3:0] ALUCtl
);

    // TODO: implement your ALU control here
    // For testbench verifying, Do not modify input and output pin
    // Hint: using ALUOp, funct7, funct3 to select exact operation
    always @(*) begin
    //     4'b0010:ALUOut = A+B;//add
    //     4'b0110:ALUOut = A-B;//sub
    //     4'b0000:ALUOut = A&B;//and
    //     4'b0001:ALUOut = A|B;//or
    //     4'b0100:ALUOut = A^B;//xor
    //     4'b0111:ALUOut = (A<B)?1:0;//slt
    //     4'b1001:ALUOut = ($unsigned(A)<$unsigned(B))?1:0;
        case(ALUOp)
            2'b10 : case({funct7,funct3})
                        // TODO
                    4'b0000: ALUCtl = 4'b0010;// add
                    4'b1000: ALUCtl = 4'b0110;// sub
                    4'b0111: ALUCtl = 4'b0000;// and 
                    4'b0110: ALUCtl = 4'b0001;// or
                    4'b0010: ALUCtl = 4'b0111;// slt
                    4'b0011: ALUCtl = 4'b1001;
                    default: ALUCtl = 4'bxxxx;
                    endcase
            2'b11 : case(funct3)
                        // TODO
                    3'b000: ALUCtl = 4'b0010; //add
                    3'b111: ALUCtl = 4'b0000; //and
                    3'b110: ALUCtl = 4'b0001; //ori
                    3'b100: ALUCtl = 4'b0100; //xori
                    //3'b001: ALUCtl = 4'b1100; //slli
                    //3'b101: ALUCtl = (funct7) ? 4'b1010 : 4'b1011;//srli/srai
                    3'b010: ALUCtl = 4'b0111; //slti
                    3'b011: ALUCtl = 4'b1001; //sltiu
                    default: ALUCtl = 4'bxxxx;
                    endcase
            2'b00 : case(funct3)
                        // TODO
                    //3'b010: ALUCtl = 4'b0010; // ADD
                    default: ALUCtl = 4'b0010;//add
                    endcase
            2'b01 : case(funct3)
                        // TODO
                    3'b000: ALUCtl = 4'b0110;//sub
                    3'b001: ALUCtl = 4'b0110;
                    3'b100: ALUCtl = 4'b0111;// <
                    //3'b101: ALUCtl = 4'b1000;// >=
                    3'b110: ALUCtl = 4'b1001;// < unsigned
                    //3'b111: ALUCtl = 4'b1001;// >=
                    default: ALUCtl = 4'bxxxx;
                    endcase
            default : ALUCtl = 4'bxxxx;
        endcase
    end


endmodule

