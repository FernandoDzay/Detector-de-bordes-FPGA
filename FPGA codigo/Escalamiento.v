module Escalamiento(
input [10:0] escalar,
output [7:0] truncamiento
    );
	 
wire [7:0] truncamiento = truncamiento;

wire [10:0] temp = escalar + 11'b01000000000;
wire [14:0] temp2 = {4'b0000,temp};

wire [14:0] razon = 15'b111111110000000/15'b000000000001000;


wire [29:0] operacion = razon * temp2;


assign truncamiento = operacion[21:14];


endmodule
