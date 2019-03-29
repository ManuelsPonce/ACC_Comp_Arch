#include <iostream>
#include <map>
#include <string>

int main(){

    //Craeting C++ map called "pins"
    std::map<std::string, int> pins;

    //populating "pins"
    pins["PCO"]=5;
    pins["MADDR"]=3;
    pins["INST"]=7;

   // for(int i=0; i<3; i++){
     //   std::cout << pins[i] << std::endl;
	//}	
	
	for (auto& t : pins)
    std::cout << t.first << " " 
              << t.second.first << " " 
              << t.second.second << "\n";

    return 0;
}
