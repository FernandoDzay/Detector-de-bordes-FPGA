module Pulse(
input clk,
input Boton,
output Pulse
    );
 
parameter IDLE = 2'b00;
parameter RISING = 2'b01;
parameter FALLING = 2'b10;

reg rpulse = 0;
reg [1:0] state = 0;


  
always@(posedge clk)
	begin
		
		case(state)
			IDLE:
				begin
					if(Boton) state <= RISING;
				end
			RISING:
				begin
					rpulse <= 1;
					state <= FALLING;
				end
			FALLING:
				begin
					rpulse <= 0;
					if(Boton==0)state <= IDLE;
				end
			default:
				begin
				state <= IDLE;
				end
		endcase
		
	end
	 
	assign Pulse = rpulse;



endmodule
