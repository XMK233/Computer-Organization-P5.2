`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:35:47 11/23/2015 
// Design Name: 
// Module Name:    ctrl 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Controller(
    input [31:0]Instruction,
	 //
    output RegWriteD,//w
    output MemtoRegD,
    output MemWriteD,//m
    output [2:0]ALUCtrlD,//ex
    output ALUSrcD,
    output RegDstD,
    output JumpToTargetD,//?
	 output JumpAndLinkD,
	 output JumpRegD,
	 output BgtzD,
	 output BeqD
    );
	wire fcAddu, fcSubu, fcbgtz, fcjr,fcAdd;
	wire addu, subu, add, ori, lui, j, jal,jr, addi;
	wire beq;
	wire [5:0]func,op;
	
	assign func = Instruction[5:0];
	assign op = Instruction[31:26];
	//
	assign fcAddu = (func[5] & ~func[4] & ~func[3] & ~func[2] & ~func[1] & func[0]);
	assign fcSubu = (func[5] & ~func[4] & ~func[3] & ~func[2] & func[1] & func[0]);
	assign fcAdd = (func[5] & ~func[4] & ~func[3] & ~func[2] & ~func[1] & ~func[0]);
	assign fcbgtz = (~Instruction[20] & ~Instruction[19] & ~Instruction[18] & ~Instruction[17] & ~Instruction[16]);
	assign fcjr = (~func[5] & ~func[4] & func[3] & ~func[2] & ~func[1] & ~func[0]);
	//
	assign addu = (~op[5] & ~op[4] & ~op[3] & ~op[2] & ~op[1] & ~op[0] & fcAddu);
	assign subu = (~op[5] & ~op[4] & ~op[3] & ~op[2] & ~op[1] & ~op[0] & fcSubu);
	assign add = (~op[5] & ~op[4] & ~op[3] & ~op[2] & ~op[1] & ~op[0] & fcAdd);
	assign lui = (~op[5] & ~op[4] & op[3] & op[2] & op[1] & op[0]);
	assign j = (~op[5] & ~op[4] & ~op[3] & ~op[2] & op[1] & ~op[0]);
	assign jal = (~op[5] & ~op[4] & ~op[3] & ~op[2] & op[1] & op[0]);
	assign ori = (~op[5] & ~op[4] & op[3] & op[2] & ~op[1] & op[0]);
	assign lw = (op[5] & ~op[4] & ~op[3] & ~op[2] & op[1] & op[0]);
	assign sw = (op[5] & ~op[4] & op[3] & ~op[2] & op[1] & op[0]);
	assign addi = (~op[5] & ~op[4] & op[3] & ~op[2] & ~op[1] & ~op[0] );
	assign bgtz = (~op[5] & ~op[4] & ~op[3] & op[2] & op[1] & op[0] & fcbgtz);
	assign beq = (~op[5] & ~op[4] & ~op[3] & op[2] & ~op[1] & ~op[0]);
	assign jr = (~op[5] & ~op[4] & ~op[3] & ~op[2] & ~op[1] & ~op[0] & fcjr);
	//
	assign RegDstD = addu | subu | add;
	assign ALUSrcD = ori | lui | addi | sw | lw;
	assign MemtoRegD = lw; 
	assign RegWriteD = addu | add | subu | ori | lw | lui | addi;
	assign MemWriteD = sw;
	assign Add = addu | add | sw | lw | addi;
	assign Subtract = subu | beq;
	assign ALUCtrlD = (Add) ? 3'b000 : 
							(Subtract)? 3'b001 : 
							(ori) ? 3'b010 : 
							(lui) ? 3'b011 : 3'bx;
	assign JumpToTargetD = j;
	assign JumpAndLinkD = jal;
	assign JumpRegD = jr;
	assign BgtzD = bgtz;
	assign BeqD = beq;
endmodule
