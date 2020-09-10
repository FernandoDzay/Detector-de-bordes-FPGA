module CountTo9(
input Pulse,
output reg NineBitsDone = 0
    );

reg [3:0] count = 0;

always@(posedge Pulse)
	begin
		if(count<8)
			begin
				NineBitsDone <= 0;
				count <= count + 1;
			end
		else
			begin
				NineBitsDone <= 1;
				count <= 0;
			end
	end

endmodule
