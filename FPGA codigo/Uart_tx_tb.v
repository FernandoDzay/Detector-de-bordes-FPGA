`timescale 1ns / 1ps



module Uart_tx_tb;

	// Inputs
	reg i_Clock;
	reg i_Tx_DV;
	reg [7:0] i_Tx_Byte;

	// Outputs
	wire o_Tx_Active;
	wire o_Tx_Serial;
	wire o_Tx_Done;

	// Instantiate the Unit Under Test (UUT)
	Uart_tx uut (
		.i_Clock(i_Clock), 
		.i_Tx_DV(i_Tx_DV), 
		.i_Tx_Byte(i_Tx_Byte), 
		.o_Tx_Active(o_Tx_Active), 
		.o_Tx_Serial(o_Tx_Serial), 
		.o_Tx_Done(o_Tx_Done)
	);


	initial begin 
	i_Clock = 0;
	forever #1 i_Clock = ~i_Clock;
	end
	
	initial begin
		// Initialize Inputs
		i_Clock = 0;
		i_Tx_DV = 0;
		i_Tx_Byte = 33;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

