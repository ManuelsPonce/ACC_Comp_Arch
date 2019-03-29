#pragma once
#include <cstdint>
#include <bitset>

class Decoder{
	public:
		Decoder();
		void set_ir(uint16_t ir);
		uint8_t get_opcode(void);
		uint8_t get_op1(void);
		uint8_t get_op2(void);
		bool fetch_literal(void);
		void tick(void);
	private:
		uint16_t IR;
		uint8_t OP1;
		uint8_t OP2;
		uint8_t OPCODE;
};
