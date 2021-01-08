#include "fpgaImplementDesignCommand.hpp"


fpgaImplementDesignCommand::fpgaImplementDesignCommand(FPGA *fpga, std::string seconds){
   this->fpga = fpga; 
   this->seconds = seconds;
}

void fpgaImplementDesignCommand::execute(){
    fpga->rebuildProject(seconds);
    fpga->synthesizeDesign(seconds);
    fpga->implementDesign(seconds);
}
