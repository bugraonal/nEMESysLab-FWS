#include "fpgaGenerateProgrammingFileCommand.hpp"


fpgaGenerateProgrammingFileCommand::fpgaGenerateProgrammingFileCommand(FPGA *fpga, std::string seconds){
   this->fpga = fpga; 
   this->seconds = seconds;
}

void fpgaGenerateProgrammingFileCommand::execute(){
    fpga->rebuildProject(seconds);
    fpga->synthesizeDesign(seconds);
    fpga->implementDesign(seconds);
    fpga->generateProgrammingFile(seconds);
}
