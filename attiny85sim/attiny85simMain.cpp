#include <iostream>
#include "Machine.h"

Machine m;

int main(int argc, char *argv[]){
    std::cout << "cycsi v(0.8.0)" << std::endl;
    std::cout << "running..." <<std::endl;

    //construct the machine
    m.build();

    //make data move
    m.run();

    std::cout << "Done!" << std::endl;
}
