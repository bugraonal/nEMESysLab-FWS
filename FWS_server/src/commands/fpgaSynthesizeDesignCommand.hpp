#ifndef __FPGASYNTHESIZEDESIGNCOMMAND_H_
#define __FPGASYNTHESIZEDESIGNCOMMAND_H_

#include "command.hpp"

class fpgaSynthesizeDesignCommand: public Command {

    private:
        FPGA *fpga;
        std::string seconds;
        
    public:
        fpgaSynthesizeDesignCommand(FPGA *fpga, std::string seconds);
        void execute();
};

#endif // __FPGASYNTHESIZEDESIGNCOMMAND_H_
