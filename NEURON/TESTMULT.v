`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:19:55 10/10/2018
// Design Name:   MYLTIPLY6BIT
// Module Name:   C:/Users/dimit/Documents/FPGA/MULTIPLIER/TESTMULT.v
// Project Name:  MULTIPLIER
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: MYLTIPLY6BIT
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TESTMULT;

	// Inputs
	reg SignA;
	reg SignB;
	reg [4:0] ExponentA;
	reg [4:0] ExponentB;
	reg [5:0] MantissaA;
	reg [5:0] MantissaB;

	// Outputs
	wire SignOut;
	wire [5:0] ExponentOut;
	wire ExponentC;
	wire [11:0] MantissaOut;

	// Instantiate the Unit Under Test (UUT)
	MYLTIPLY6BIT uut (
		.SignA(SignA), 
		.SignB(SignB), 
		.ExponentA(ExponentA), 
		.ExponentB(ExponentB), 
		.MantissaA(MantissaA), 
		.MantissaB(MantissaB), 
		.SignOut(SignOut), 
		.ExponentOut(ExponentOut), 
		.ExponentC(ExponentC), 
		.MantissaOut(MantissaOut)
	);

	initial begin
		// Initialize Inputs
		SignA = 0;
		SignB = 0;
		ExponentA = 0;
		ExponentB = 0;
		MantissaA = 0;
		MantissaB = 0;

		// Wait 100 ns for global reset to finish
		#100;
      SignA = 1;
		SignB = 0;
		ExponentA = 5'b00011;
		ExponentB = 5'b00110;
		MantissaA = 6'b000111;
		MantissaB = 6'b001001;
		// Add stimulus here

	end
      
	initial 
		$monitor("MantissaA = %d, MantissaB = %d, MantissaOut = %d\n",MantissaA, MantissaB, MantissaOut);
endmodule

