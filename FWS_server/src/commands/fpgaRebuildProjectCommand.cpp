#include "fpgaRebuildProjectCommand.hpp"

fpgaRebuildProjectCommand::fpgaRebuildProjectCommand(FPGA *fpga, std::string seconds){
   this->fpga = fpga; 
   this->seconds = seconds;
}

void fpgaRebuildProjectCommand::execute(){
    fpga->rebuildProject(seconds);
}
