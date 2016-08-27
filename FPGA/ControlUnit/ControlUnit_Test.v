`timescale 1ns / 1ps

module ControlUnit_Test;

	// Inputs
	reg [4:0] opcode;

	// Outputs
	wire reg_write;
	wire is_move;
	wire is_mem_access;
	wire is_imm;
	wire [2:0] alu_function;
	wire flags_write;
	wire dm_write_enable;
	wire is_jz;
	wire is_jnz;
	wire is_jl;
	wire is_jg;
	wire is_jump;

	// Instantiate the Unit Under Test (UUT)
	ControlUnit uut (
		.opcode(opcode), 
		.reg_write(reg_write), 
		.is_move(is_move), 
		.is_mem_access(is_mem_access), 
		.is_imm(is_imm), 
		.alu_function(alu_function), 
		.flags_write(flags_write), 
		.dm_write_enable(dm_write_enable), 
		.is_jz(is_jz), 
		.is_jnz(is_jnz), 
		.is_jl(is_jl), 
		.is_jg(is_jg), 
		.is_jump(is_jump)
	);

	initial begin
		// Initialize Inputs
		opcode = 0;

		// Wait 500 ns for global reset to finish
		#100;
        
		// Add stimulus here
		opcode = 5'd0;
		#500
		opcode = 5'd1;
		#500
		opcode = 5'd2;
		#500
		opcode = 5'd3;
		#500
		opcode = 5'd4;
		#500
		opcode = 5'd5;
		#500
		opcode = 5'd6;
		#500
		opcode = 5'd7;
		#500
		opcode = 5'd8;
		#500
		opcode = 5'd9;
		#500
		opcode = 5'd10;
		#500
		opcode = 5'd11;
		#500
		opcode = 5'd12;
		#500
		opcode = 5'd13;
		#500
		opcode = 5'd14;
		#500
		opcode = 5'd15;
		#500
		opcode = 5'd16;
		#500
		opcode = 5'd17;
	end
      
endmodule

