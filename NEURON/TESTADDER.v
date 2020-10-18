`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:54:44 09/27/2018
// Design Name:   ADDER
// Module Name:   C:/Users/dimit/Documents/FPGA/MULTIPLIER/TESTADDER.v
// Project Name:  MULTIPLIER
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ADDER
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TESTADDER;

	// Inputs
	reg Clock;
	reg SignA;
	reg SignB;
	reg [5:0] ExponentA;
	reg [5:0] ExponentB;
	reg [11:0] MantissaA;
	reg [11:0] MantissaB;

	// Outputs
	wire SignOut;
	wire [5:0] ExponentOut;
	wire [11:0] MantissaOut;
	wire Cout;

	// Instantiate the Unit Under Test (UUT)
	ADDER uut (
		.Clock(Clock), 
		.SignA(SignA), 
		.SignB(SignB), 
		.ExponentA(ExponentA), 
		.ExponentB(ExponentB), 
		.MantissaA(MantissaA), 
		.MantissaB(MantissaB), 
		.SignOut(SignOut), 
		.ExponentOut(ExponentOut), 
		.MantissaOut(MantissaOut), 
		.Cout(Cout)
	);

	initial begin
		// Initialize Inputs
		Clock = 0;
		SignA = 0;
		SignB = 0;
		ExponentA = 0;
		ExponentB = 0;
		MantissaA = 0;
		MantissaB = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		
		SignA = 0;
		SignB = 0;
		ExponentA = 6'b000111;
		ExponentB = 6'b000111;
		MantissaA = 12'b000000111111;
		MantissaB = 12'b000111011100;
	end
	
	always 
		#5 Clock = !Clock;
      
endmodule

