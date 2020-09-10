`timescale 1ns / 1ps

module Uart_rx_tb;

	// Inputs
	reg i_Clock;
	reg i_Rx_Serial;

	// Outputs
	wire o_Rx_DV;
	wire [7:0] o_Rx_Byte;

	// Instantiate the Unit Under Test (UUT)
	Uart_rx uut (
		.i_Clock(i_Clock), 
		.i_Rx_Serial(i_Rx_Serial), 
		.o_Rx_DV(o_Rx_DV), 
		.o_Rx_Byte(o_Rx_Byte)
	);

	
	initial begin 
	i_Clock = 0;
	forever #10 i_Clock = ~i_Clock;
	end
	
	initial begin
		// Initialize Inputs
		i_Rx_Serial = 1;

		// Wait 100 ns for global reset to finish
		#100;
		
		
		
		// Wait 100 ns for global reset to finish
		#500000;
		#104166//bit start0
		i_Rx_Serial = 0;
		#104166//bit 1
		i_Rx_Serial = 0;
		#104166//bit 2 
		i_Rx_Serial = 0;
		#104166//bit 3
		i_Rx_Serial = 0;
		#104166//bit 4
		i_Rx_Serial = 1;
		#104166//bit 5
		i_Rx_Serial = 0;
		#104166//bit 6
		i_Rx_Serial = 1;
		#104166//bit 7
		i_Rx_Serial = 0;
		#104166//bit 8
		i_Rx_Serial = 1;
		#104166//bit stop0
		i_Rx_Serial = 1;
		#104166//bit stop1
		i_Rx_Serial = 1; 
		
				
		// Wait 100 ns for global reset to finish
		#500000;
		#104166//bit start0
		i_Rx_Serial = 0;
		#104166//bit 1
		i_Rx_Serial = 0;
		#104166//bit 2 
		i_Rx_Serial = 0;
		#104166//bit 3
		i_Rx_Serial = 0;
		#104166//bit 4
		i_Rx_Serial = 1;
		#104166//bit 5
		i_Rx_Serial = 0;
		#104166//bit 6
		i_Rx_Serial = 1;
		#104166//bit 7
		i_Rx_Serial = 0;
		#104166//bit 8
		i_Rx_Serial = 1;
		#104166//bit stop0
		i_Rx_Serial = 1;
		#104166//bit stop1
		i_Rx_Serial = 1; 
		
        		
		// Wait 100 ns for global reset to finish
		#500000;
		#104166//bit start0
		i_Rx_Serial = 0;
		#104166//bit 1
		i_Rx_Serial = 1;
		#104166//bit 2 
		i_Rx_Serial = 1;
		#104166//bit 3
		i_Rx_Serial = 1;
		#104166//bit 4
		i_Rx_Serial = 1;
		#104166//bit 5
		i_Rx_Serial = 0;
		#104166//bit 6
		i_Rx_Serial = 0;
		#104166//bit 7
		i_Rx_Serial = 0;
		#104166//bit 8
		i_Rx_Serial = 0;
		#104166//bit stop0
		i_Rx_Serial = 1;
		#104166//bit stop1
		i_Rx_Serial = 1; 
		
       // Wait 100 ns for global reset to finish
		#500000;
		#104166//bit start0
		i_Rx_Serial = 0;
		#104166//bit 1
		i_Rx_Serial = 1;
		#104166//bit 2 
		i_Rx_Serial = 0;
		#104166//bit 3
		i_Rx_Serial = 1;
		#104166//bit 4
		i_Rx_Serial = 0;
		#104166//bit 5
		i_Rx_Serial = 0;
		#104166//bit 6
		i_Rx_Serial = 0;
		#104166//bit 7
		i_Rx_Serial = 0;
		#104166//bit 8
		i_Rx_Serial = 0;
		#104166//bit stop0
		i_Rx_Serial = 1;
		#104166//bit stop1
		i_Rx_Serial = 1; 
        
		// Add stimulus here

	end
      
endmodule

