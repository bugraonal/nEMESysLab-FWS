#ifndef __COMMAND_H_
#define __COMMAND_H_

#include "../fpga/fpga.hpp"


class Command {
    public:
        virtual ~Command(){};
        virtual void execute() = 0;
};

#endif // __COMMAND_H_
