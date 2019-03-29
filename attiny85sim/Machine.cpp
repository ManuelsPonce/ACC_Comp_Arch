#include <iostream>
#include <fstream>
#include "Machine.h"
#include "Component.h"
#include "Wire.h"

Machine::Machine(void){
    machine_def = "machine.hdl";
}

Component *Machine::find_part(std::string name){
    for(int i=0; i<part_count; i++){
        if(parts[i]->getName() == name)
            return parts[i];}
    return NULL;
}

void Machine::build(void){
    std::fstream fin;
    std::string token, in_token, out_token;

    fin.open(machine_def);
    if(!fin){
        std::cout << "no machine def found. Aborting..." << std::endl;
        exit(EXIT_FAILURE);
    }

    while(fin >> token){
        //load all component parts
        if(token == "PARTS"){
            std::cout << "begin part definitions" << std::endl;
            fin>>token; //component name
            while(token != "END"){
                parts[part_count++] = new Component(token,0);
                std::cout << "\t" << token << std:: endl;
                fin >> token; // colon
                fin >> token; //type
                fin >> token; //next symbol
            }   
            std::cout << "end part definitions" << std::endl;
        }
        else if (token == "CONNECTIONS"){
            //Wire up all connections with wires
            std::cout << "begin connection definitions" << std::endl;
            fin >> token;
            while(token != "END"){
                in_token = token.substr(0,token.find("."));
                wires[wire_count]= new Wire();
                std::cout << "\t" << in_token;
                fin >> token; //"->"  symbol
                fin >> token; //type
                out_token = token.substr(0,token.find("."));
                std::cout << "->";
                //create this connection
                std::cout << out_token << std::endl;
                wires[wire_count]->attach_in(find_part(in_token));
                wires[wire_count]->attach_out(find_part(out_token));
                wire_count++;
                fin >> token; //Next stmbol
        }
        std::cout << "end connection definitions" << std::endl;
        }
        else{
            std::cout << "\t" << token << std::endl;}

    std::cout << "MAchine constucted using:" << std::endl;
    std::cout << "\t" << part_count << " components" << std::endl;
    std::cout << "\t" << wire_count << " wire" << std::endl;
    }
}

void Machine::run(void){
    int maxTicks = 10;
    for(int time=0; time<maxTicks; time++){
        for(int w=0; w<wire_count; w++){
            std::cout<< "t" << time << ": "; 
            wires[w]->tick();
        }
    }
}
