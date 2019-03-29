#pragma once
#include <string>
#include "Wire.h"

class Component{
    public:
        Component(std::string n, int val); //Constructor
        friend class Wire;
    private: 
        std::string name;
        int data;
        
        std::string getName();
        int read(int val);
        int write(void);

};
