#include <iostream>

//Globals
int REG2 = 0;
int REG3 = 0;
int REGZ = 0;
int ROUT;

//Declerations
int fetch();
int decode();
int execute();
int store();

int main()
{
    while(true){
        fetch();
        decode();
        execute();
        store();   
    }

    return 0;
}

int fetch(){
	char key = 0;
	
	std::cin.get(key);
	REG3 = key;
	//std::cout << REG3 <<std::endl; 
}

int decode(){
	
	if(REG3 >= '0' && REG3 <= '9'){
		REG2 = REG3 - '0';
		//std::cout << REG2 <<std::endl;
	}
		
}

int execute(){
	
	for(int i=REG2; i>=0; i--){
		
		while(REGZ >= 0){
		if(REG3 == '+')
			REGZ++;
		else if(REG3 == '-')
			REGZ--;
		}
		if (REGZ < 0)
			std::cout << "ERROR" << std::endl;
	}
}

int store(){
	ROUT = REGZ;
	std::cout << "Result: " << ROUT << std::endl;
}
