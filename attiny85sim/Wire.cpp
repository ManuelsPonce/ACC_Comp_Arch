#include <iostream>
#include <string>
#include "Wire.h"
#include "Component.h"

//constructor
Wire::Wire(){
    data = -1;

    //attachments
    in = NULL;
    out = NULL;
}

//Accessors do not modify object state
void Wire::write(void){
    //send wire data to output
    dest = out->getName();
    out->write();
    std::cout << source <<"-(" << data <<")->" << dest << std::endl;
}

//mutators modify object state
void Wire::read(void){
    //load wire data from input
    data = in->write();
    source = in->getName();
}

void Wire::attach_in(Component *c_in) {
    //connect component to input side
    in = c_in;
}

void Wire::attach_out(Component *c_out){
    //connect component to output side
    out = c_out;
}

void Wire::tick(void){
    //on demand get new data and deliver it 
    read();
    write();
}
