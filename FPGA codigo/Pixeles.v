module Pixeles(
input Send,
input Capture,
input [7:0] i_Pixel,
output reg [71:0] o_Pixeles = 0
    );

//reg [7:0] r_Pixel;
reg [71:0] r_Pixeles = 0;

always@(posedge Capture)
	begin
		r_Pixeles <= {i_Pixel, r_Pixeles[71:8]};
	end
	
always@(posedge Send)
	begin
		o_Pixeles[71:0] <= r_Pixeles[71:0];
	end


endmodule
