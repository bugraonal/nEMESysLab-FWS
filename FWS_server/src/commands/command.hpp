#ifndef __COMMAND_H_
#define __COMMAND_H_

#include <iostream>
#include <string>

class Command {

    std::string user_id;
    std::string fpga_id;

    Command (std::string user_id, std::string fpga_id) {
        this->user_id = user_id;
        this->fpga_id = fpga_id;
    }
    
    virtual void execute();
};

#endif // __COMMAND_H_
