#include "fpgaSynthesizeDesignCommand.hpp"

fpgaSynthesizeDesignCommand::fpgaSynthesizeDesignCommand(FPGA *fpga, std::string seconds){
    this->fpga = fpga;
    this->seconds = seconds;
}

void fpgaSynthesizeDesignCommand::execute(){
    fpga->rebuildProject(seconds);
    fpga->synthesizeDesign(seconds);
}
