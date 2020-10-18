`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:Dimitris Christodoulou
// 
// Create Date:    17:49:52 09/11/2018 
// Design Name: 
// Module Name:    tanh 
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
module TANH(Clock, Sign, Exponent, Mantissa, SignOut, ExponentOut, MantissaOut);
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
		else if(Sign == 1)
		begin 
			if (((Exponent == 6'b100000) && (Mantissa[11] == 1)) || (Exponent >= 6'b100000))
			begin
				SignOut <= Sign;
				ExponentOut <= 5'b01111;
				MantissaOut <= 6'b000000;
			end 
			else if ((Exponent == 6'b011111) && (Mantissa[11] == 1))
			begin
				SignOut <= Sign;
				ExponentOut <= 5'b01110;
				MantissaOut <= 6'b111000;
			end
			else if (((Exponent == 6'b011111) && (Mantissa[11:6] == 6'b000111)) || (Exponent == 6'b011111))
			begin
				SignOut <= Sign;
				ExponentOut <= 5'b01110;
				MantissaOut <= 6'b101100;
			end
			else if (((Exponent == 6'b011111) && (Mantissa[11:6] == 6'b000000)) || (Exponent == 6'b011110))
			begin
				SignOut <= Sign;
				ExponentOut <= 5'b01110;
				MantissaOut <= 6'b100000;
			end
			else if ((Exponent == 6'b011110) && (Mantissa[11:10] == 2'b01))
			begin
				SignOut <= Sign;
				ExponentOut <= 5'b01110;
				MantissaOut <= 6'b010100;
			end
			else if (Exponent == 6'b011110) 
			begin
				SignOut <= Sign;
				ExponentOut <= 5'b01110;
				MantissaOut <= 6'b000100;
			end
			else if (Exponent == 6'b011101)
			begin
				SignOut <= Sign;
				ExponentOut <= 5'b01101;
				MantissaOut <= 6'b011000;
			end
			else if (Exponent == 6'b011100)
			begin
				SignOut <= Sign;
				ExponentOut <= 5'b01100;
				MantissaOut <= 6'b011110;
			end
			else
			begin
				SignOut <= Sign;
				ExponentOut <= 5'b01011;
				MantissaOut <= 6'b001000;
			end
		end
		else
		begin
			if ( ((Exponent == 6'b100000) && (Mantissa[11] == 1)) || (Exponent >= 6'b100000))
			begin
				SignOut <= Sign;
				ExponentOut <= 5'b01111;
				MantissaOut <= 6'b000000;
			end 
			else if ((Exponent == 6'b011111) && (Mantissa[11] == 1))
			begin
				SignOut <= Sign;
				ExponentOut <= 5'b01110;
				MantissaOut <= 6'b111000;
			end
			else if (((Exponent == 6'b011111) && (Mantissa[11:6] == 6'b000111)) || (Exponent == 6'b011111))
			begin
				SignOut <= Sign;
				ExponentOut <= 5'b01110;
				MantissaOut <= 6'b101100;
			end
			else if (((Exponent == 6'b011111) && (Mantissa[11:6] == 6'b000000)) || (Exponent == 6'b011110))
			begin
				SignOut <= Sign;
				ExponentOut <= 5'b01110;
				MantissaOut <= 6'b100001;
			end
			else if ((Exponent == 6'b011110) && (Mantissa[11:10] == 2'b01))
			begin
				SignOut <= Sign;
				ExponentOut <= 5'b01110;
				MantissaOut <= 6'b010100;
			end
			else if (Exponent == 6'b011110) 
			begin
				SignOut <= Sign;
				ExponentOut <= 5'b01110;
				MantissaOut <= 6'b000100;
			end
			else if (Exponent == 6'b011101)
			begin
				SignOut <= Sign;
				ExponentOut <= 5'b01101;
				MantissaOut <= 6'b011000;
			end
			else if (Exponent == 6'b011100)
			begin
				SignOut <= Sign;
				ExponentOut <= 5'b01100;
				MantissaOut <= 6'b011110;
			end
			else
			begin
				SignOut <= Sign;
				ExponentOut <= 5'b01011;
				MantissaOut <= 6'b001000;
			end
		end
	end

endmodule
