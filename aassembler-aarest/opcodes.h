#pragma once
// Opcodes
enum {c_nop,
	c_op_add, c_op_sub, c_op_mult, c_op_div, c_op_mod, c_op_chs,
	c_op_cmpeq, c_op_cmpne, c_op_cmpgt, c_op_cmpge, c_op_cmplt, c_op_cmple,
	c_write, c_read,
	c_loadc, c_inc, c_dec, c_dup, c_swap, c_drop,
	c_jump, c_jumpnz,  c_jumpz,
	c_loadr, c_storer, c_loads, c_stores,
	c_call, c_return
};
const char * opct [] = {
	"nop", "add", "sub", "mult", "div", "mod", "chs",
	"cmpeq", "cmp_ne", "cmpgt", "cmpge", "cmplt", "cmple",
	"write", "read",
	"loadc", "inc", "dec", "dup", "swap", "drop",
	"jump", "jumpnz", "jumpz",
	"loadr", "storer", "loads", "stores",
	"call", "return"
};
// Arguments
