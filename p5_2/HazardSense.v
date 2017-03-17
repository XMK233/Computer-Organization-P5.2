`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:25:38 11/24/2015 
// Design Name: 
// Module Name:    Hazard 
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
module HSU(
	input [31:0]Instruction,
	input [4:0]RtE,
	input MemReadE,
	input MemReadM,
	input RegWriteE,
	output IFIDWrite,
	output PCWrite,
	output Bubble//สนตร
    );
	 wire [4:0]RsD = Instruction[25:21];
	 wire [4:0]RtD = Instruction[20:16];
	 assign IFIDWrite = ((RegWriteE === 1|| MemReadE === 1 || MemReadM === 1) && ((RtE === RsD) || (RtE === RtD))) ? 1 : 0;
	 assign PCWrite = ((RegWriteE === 1|| MemReadE === 1 || MemReadM === 1) && ((RtE === RsD) || (RtE === RtD))) ? 1 : 0;
	 assign Bubble = ((RegWriteE === 1|| MemReadE === 1 || MemReadM === 1) && ((RtE === RsD) || (RtE === RtD))) ? 1 : 0;
endmodule
