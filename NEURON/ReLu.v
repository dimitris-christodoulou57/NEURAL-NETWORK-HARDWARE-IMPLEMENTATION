`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:Dimitris Christodoulou
// 
// Create Date:    15:25:30 09/11/2018 
// Design Name: 
// Module Name:    ReLu 
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
module RELU(Clock, Sign, Exponent, Mantissa, SignOut, ExponentOut, MantissaOut);
	input Clock;
	input Sign;
	input [5:0] Exponent;
	input [11:0] Mantissa;
	output reg SignOut;
	output reg[4:0] ExponentOut;
	output reg[5:0] MantissaOut;
	
	always @(posedge Clock)
	begin
		if (Sign == 0 && Exponent == 6'b000000 && Mantissa == 12'b000000000000)
		begin 
			SignOut <= 0;
			ExponentOut <= 5'b00000;
			MantissaOut <= 6'b000000;
		end
		else if (Sign == 1)
		begin
			SignOut <= Sign;
			ExponentOut <= Exponent[4:0];
			MantissaOut <= Mantissa[11:6];
		end
		else
		begin
			SignOut <= 0;
			ExponentOut <= 5'b00000;
			MantissaOut <= 6'b000000;
		end
	end
			

endmodule
