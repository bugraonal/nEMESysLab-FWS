#ifndef __FPGARESETFILESCOMMAND_H_
#define __FPGARESETFILESCOMMAND_H_

#include "command.hpp"

class fpgaResetFilesCommand: public Command {

    private:
        FPGA *fpga;

    public:
        fpgaResetFilesCommand(FPGA *fpga); 

        void execute();
};

#endif // __FPGARESETFILESCOMMAND_H_
