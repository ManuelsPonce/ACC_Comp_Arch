#include <iostream>
#include <string>
#include <limits>

int main()
{
	std::cout << "-------Hw4--------" << std::endl;
	
	//chars
	char a = 'a'; //std::cout << "char " << a << std::endl;
	signed char b = 'b';
	unsigned char c = 'c';
	
	//signed ints
	signed short int d = 1; //std::cout << "signed short int " << d << std::endl;
	signed int e = 2;
	signed long int f = 3;
	signed long long int  g = 4;
	
	//unsigned ints
	unsigned short int h = 5; //std::cout << "unsigned short int " << h << std::endl;
	unsigned int i = 6;
	unsigned long int j = 7;
	unsigned long long int k = 8;
	
	//floating types
	float l = 9.0;
	double m = 10.0;
	long double	n = 11.0;
	
	//bool type
	bool o = false;
	
	//void types
	void p();
	
	//null pointer types
	int *q = NULL;

	//finding biggest and smallest of each 
	
	//I DONT KNOW WHAT IS PRINTING FOR CHARS LOL
    std::cout << "char\t"
              << std::numeric_limits<char>::min() << '\t'
              << std::numeric_limits<char>::max() << '\n';
    std::cout << "signed char\t"
              << std::numeric_limits<unsigned char>::min() << '\t'
              << std::numeric_limits<unsigned char>::max() << '\n';
    std::cout << "unsigned char\t"
              << std::numeric_limits<signed char>::min() << '\t'
              << std::numeric_limits<signed char>::max() << '\n' << '\n';
	
    std::cout << "signed short int\t"
              << std::numeric_limits<signed short int>::min() << '\t'
              << std::numeric_limits<signed short int>::max() << '\n';
    std::cout << "signed int\t"
              << std::numeric_limits<signed int>::min() << '\t'
              << std::numeric_limits<signed int>::max() << '\n';
    std::cout << "signed long int\t"
              << std::numeric_limits<signed long int>::min() << '\t'
              << std::numeric_limits<signed long int>::max() << '\n';
    std::cout << "signed long long int\t"
              << std::numeric_limits<signed long long int>::min() << '\t'
              << std::numeric_limits<signed long long int>::max() << '\n' << '\n';
	
    std::cout << "unsigned short int\t"
              << std::numeric_limits<unsigned short int>::min() << '\t'
              << std::numeric_limits<unsigned short int>::max() << '\n';
    std::cout << "unsigned int\t"
              << std::numeric_limits<unsigned int>::min() << '\t'
              << std::numeric_limits<unsigned int>::max() << '\n';
    std::cout << "unsigned long int\t"
              << std::numeric_limits<unsigned long int>::min() << '\t'
              << std::numeric_limits<unsigned long int>::max() << '\n';
    std::cout << "unsigned long long int\t"
              << std::numeric_limits<unsigned long long int>::min() << '\t'
              << std::numeric_limits<unsigned long long int>::max() << '\n' << '\n';
              
    std::cout << "float\t"
              << std::numeric_limits<float>::min() << '\t'
              << std::numeric_limits<float>::max() << '\n';
    std::cout << "double\t"
              << std::numeric_limits<double>::min() << '\t'
              << std::numeric_limits<double>::max() << '\n';
    std::cout << "long double\t"
              << std::numeric_limits<long double>::min() << '\t'
              << std::numeric_limits<long double>::max() << '\n' << '\n';
              
    std::cout << "bool\t"
              << std::numeric_limits<bool>::min() << '\t'
              << std::numeric_limits<bool>::max() << '\n';
    /*std::cout << "void\t"
              << std::numeric_limits<void>::min() << '\t'
              << std::numeric_limits<void>::max() << '\n';
    std::cout << "null\t"
              << std::numeric_limits<null>::min() << '\t'
              << std::numeric_limits<null>::max() << '\n' << '\n';*/
              
    return 0;
}




