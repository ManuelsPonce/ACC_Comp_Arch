#include <iostream>
#include "Component.h"

Component::Component(std::string n, int val) {
    data = val;
    name = n;
}

int Component::write(void) {
    return data;
}

int Component::read(int val) {
    return data=val;
}

std::string Component::getName(void) {
    return name;
}
