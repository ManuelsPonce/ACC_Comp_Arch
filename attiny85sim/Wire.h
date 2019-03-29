#pragma once
#include <string>

class Component;

class Wire {
    public:
        Wire();
        void attach_in(Component *c_in);
        void attach_out(Component *c_out);
        void tick(void);
    private:
        int data;
        Component *in;
        Component *out;
        std::string source, dest;
        void read(void);
        void write(void);
};
