`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:59:15 12/01/2015 
// Design Name: 
// Module Name:    jbunit1 
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
module JU(
	input Ifjr,
	input RegWriteM,
	input RegWriteW,
	input MemtoRegM,
	input MemtoRegW,
	input [4:0]RsD,
	input [4:0]RdM,
	input [4:0]RdW,
	input [31:0]ALUResultM,
	input [31:0]WData,
	input [31:0]RData1,
	output JumpReg,
	output [31:0]nPCin
    );
	assign JumpReg = Ifjr; 
	assign nPCin = (Ifjr === 1 && RegWriteM === 1 && MemtoRegM === 0 && (RsD === RdM)) ? ALUResultM : 
					   (Ifjr === 1 && RegWriteW === 1 && MemtoRegW === 1 && (RsD === RdW)) ? WData : 
						RData1;
endmodule
