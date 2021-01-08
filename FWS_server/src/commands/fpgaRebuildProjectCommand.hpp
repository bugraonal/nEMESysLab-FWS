#ifndef __FPGAREBUILDPROJECTCOMMAND_H_
#define __FPGAREBUILDPROJECTCOMMAND_H_

#include "command.hpp"

class fpgaRebuildProjectCommand: public Command {
    private:
        FPGA *fpga;
        std::string seconds;

    public:
        fpgaRebuildProjectCommand(FPGA *fpga, std::string seconds);
        void execute();
};

#endif // __FPGAREBUILDPROJECTCOMMAND_H_
