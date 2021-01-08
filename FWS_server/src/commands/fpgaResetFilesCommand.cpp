#include "fpgaResetFilesCommand.hpp"

fpgaResetFilesCommand::fpgaResetFilesCommand(FPGA *fpga) {
    this->fpga = fpga;
}

void fpgaResetFilesCommand::execute(){
    fpga->resetFiles();
}
