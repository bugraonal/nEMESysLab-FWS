#ifndef __FPGAGENERATEPROGRAMMINGFILECOMMAND_H_
#define __FPGAGENERATEPROGRAMMINGFILECOMMAND_H_

#include "command.hpp"

class fpgaGenerateProgrammingFileCommand: public Command{    
    private:
        FPGA *fpga;
        std::string seconds;

    public:
        fpgaGenerateProgrammingFileCommand(FPGA *fpga, std::string seconds);
        void execute();
};

#endif // __FPGAGENERATEPROGRAMMINGFILECOMMAND_H_
