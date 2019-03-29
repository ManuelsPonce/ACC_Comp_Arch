#include <iostream>
#include "Decoder.h"


Decoder::Decoder(){}


void Decoder::set_ir(uint16_t ir) {
    IR = ir;
}

void Decoder::tick(void){
	
	uint16_t temp_ir = IR;
	
	OP2 = temp_ir & 0x1f;
	temp_ir = temp_ir>>5;
	OP1 = temp_ir & 0x1f;
	temp_ir = temp_ir>>5;
	OPCODE = temp_ir;
}

uint8_t Decoder::get_opcode(void){
	return OPCODE;
}

uint8_t Decoder::get_op1(void){
	return OP1;
}

uint8_t Decoder::get_op2(void){
	return OP2;
}

bool Decoder::fetch_literal(void){
	
	uint16_t temp_ir = IR;

	if (temp_ir & (1<<15))
		return true;
	
	return false;		
}
