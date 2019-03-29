#include <iostream>       // std::cout
#include <bitset>         // std::bitset

class ALU {
	public:
		int get_op1(void);
		int get_op2(void);
		bool get_status();
		
	private:
		bool pack_status();
		int OP1;
		int OP2;
};

int ALU::get_op1(){
	return OP1;
}

int ALU::get_op2(){
	return OP2;
}

bool ALU::get_status(){
	return OP2;
}


