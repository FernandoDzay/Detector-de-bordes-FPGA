module Convolution(
input [71:0] pixeles,
output [10:0] escalar
    );
	 
wire signed [21:0] escalar2;
wire signed [10:0] escalar3;
wire signed [10:0] escalar;

wire signed [10:0] elemento1 = {3'b000, pixeles[71:64]};
wire signed [10:0] elemento2 = {3'b000, pixeles[63:56]};
wire signed [10:0] elemento3 = {3'b000, pixeles[55:48]};
wire signed [10:0] elemento4 = {3'b000, pixeles[47:40]};
wire signed [10:0] elemento5 = {3'b000, pixeles[39:32]};
wire signed [10:0] elemento6 = {3'b000, pixeles[31:24]};
wire signed [10:0] elemento7 = {3'b000, pixeles[23:16]};
wire signed [10:0] elemento8 = {3'b000, pixeles[15:8]};
wire signed [10:0] elemento9 = {3'b000, pixeles[7:0]};

wire signed [21:0] multi1 = elemento1 * (11'b00010000000);//1
wire signed [21:0] multi2 = elemento2 * (11'b00000000000);//0
wire signed [21:0] multi3 = elemento3 * (11'b00010000000);//(11'b11110000000);//-1
wire signed [21:0] multi4 = elemento4 * (11'b00100000000);//2
wire signed [21:0] multi5 = elemento5 * (11'b00000000000);//0
wire signed [21:0] multi6 = elemento6 * (11'b00100000000);//(11'b11100000000);//-2
wire signed [21:0] multi7 = elemento7 * (11'b00010000000);//1
wire signed [21:0] multi8 = elemento8 * (11'b00000000000);//0
wire signed [21:0] multi9 = elemento9 * (11'b00010000000);//(11'b11110000000);//-1




wire signed [21:0] multii3 = multi3 * (-1);
wire signed [21:0] multii6 = multi6 * (-1);
wire signed [21:0] multii9 = multi9 * (-1);



assign escalar2 = multi1+multi2+multii3+multi4+multi5+multii6+multi7+multi8+multii9;
assign escalar3 = escalar2[17:7];

wire signed [10:0] prueba = escalar3 * (-1);

assign escalar = escalar3;


endmodule




