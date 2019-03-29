#include <iostream>
#include "Decoder.h"
#include <bitset>

int main(){
	uint16_t ir[5] = {0b1000001010000100, 0b0000000000000000, 0b1111111111111111, 0b0000010000110000, 0b1010101010101010};
	
	Decoder decode;
	
	for(int i=0; i<5; i++){
	
	    decode.set_ir(ir[i]);
	    decode.tick();

	    std::cout << "IR = "; 
	    std::bitset<6> bin(decode.get_opcode());
	    std::cout << bin << " ";
	    std::bitset<5> bin1(decode.get_op1());
	    std::cout << bin1 << " ";
	    std::bitset<5> bin2(decode.get_op2());
	    std::cout << bin2 << std::endl;
	}		 
	
	return 0;
}
