#ifndef __FPGAIMPLEMENTDESIGNCOMMAND_H_
#define __FPGAIMPLEMENTDESIGNCOMMAND_H_

#include "command.hpp"

class fpgaImplementDesignCommand: public Command {
    private:
        FPGA *fpga;
        std::string seconds;

    public:
        fpgaImplementDesignCommand(FPGA *fpga, std::string seconds);
        void execute();
};

#endif // __FPGAIMPLEMENTDESIGNCOMMAND_H_
