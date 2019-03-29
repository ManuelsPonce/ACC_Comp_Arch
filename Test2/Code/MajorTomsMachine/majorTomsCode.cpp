#include <iostream>
#include <string>

//declarations
bool isOper(char c);
bool isInt(char c);
bool isAddOrSub(char c);
int addMachine(int result, int integer);
int subMachine(int result, int integer);


int main(){
	
	//declerations
	int reg1 = 0;
	int reg2 = 0;
	char oper;	
	char key = 0;
	int index = 0;
	
	//getting input from user
	std::string input; 
	std::cout << "enter expression: "; 
	getline(std::cin, input);
	key = input[index];
	
	while(key != '\0'){
		std::cout << "Processing: ";
		std::cout << key << std::endl;
		
		if(isOper(key)){
			oper = key;
		}
			
		else if (isInt(key)){
			reg2 = key - '0';
			switch(oper){
				case '+':
				{			
					reg1 = addMachine(reg1,reg2);
					break;
				}
				case '-':
				{
					reg1 = subMachine(reg1,reg2);
					break;
				}
			}
		}
		
		std::cout << "Display: " << reg1 << std::endl;

		++index;
		key = input[index];
	}	
	
	return 0;
}

bool isOper(char c)
{
	if(c == '+' || c=='-')
		return true;
	
	return false;
}

bool isInt(char c) 
{
	if(c >= '0' && c <= '9')
		return true;
		
	return false;
}

int addMachine(int result, int integer)
{
	for(int i=0; i<integer; i++)
		result	= result + 1;
	return result;
}

int subMachine(int result, int integer)
{
	for(int i=0; i<integer; i++)
		result = result - 1;
	return result;
}
