#pragma once
#include "Component.h"
#include "Wire.h"

class Machine {
    public:
        Machine(void);
        void build(void);
        void run(void);
        friend class Wire;
    private:
        std::string machine_def;
        //parts needed
        Component *parts[10];
        Wire *wires[10];
        int part_count;
        int wire_count;

        Component *find_part(std::string name);
};
