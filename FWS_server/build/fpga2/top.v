module top_module (clk, count);

input clk;

output reg [1:0] count = 0;
reg [1:0] count_next;

always @(posedge clk) begin
  count <= #1 count_next;
end

always @(*) begin
  count_next = count+1;
end

endmodule 
