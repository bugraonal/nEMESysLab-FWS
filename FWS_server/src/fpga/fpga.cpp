#include "fpga.hpp"

FPGA::FPGA(std::string id, std::string root, std::string ISE_path){
    this->id = std::stoi(id);
    this->path = root + "/fpga" + id;
    this->ISE_path = ISE_path;
}

void FPGA::resetFiles(){
    if (!fs::exists(path)){
        std::cerr << "Couldn't find FPGA project file. \(" << path <<")\n";
    } else {
        
        // Searching through the directory
        for (fs::directory_entry& file : fs::directory_iterator(path)){
            // If file is not a directory and has a .v extension than delete it.
            if (!fs::is_directory(file) && file.path().extension() != ".tcl") {
                fs::remove(file.path());
            } else if (fs::is_directory(file)) {
                fs::remove_all(file.path());
            }
        }
    }
}

void FPGA::rebuildProject(std::string seconds){
  // Command Example: $ISE_PATH/xtclsh $FPGAN_PATH/fpgaN.tcl rebuild_project > $FPGAN_PATH/output.txt
  fs::current_path(path);
  std::string output = "./output.txt";
  proc::child c(("timeout " + seconds + "s " + ISE_path + "/xtclsh " + path + "/fpga" + std::to_string(id) + ".tcl " + "rebuild_project"), proc::std_out > output);
  c.wait();   
}

void FPGA::synthesizeDesign(std::string seconds){
  // Command Example: $ISE_PATH/xtclsh $FPGAN_PATH/fpgaN.tcl rebuild_project > $FPGAN_PATH/output.txt
  fs::current_path(path);
  std::string output = "./output.txt";
  proc::child c(("timeout " + seconds + "s " + ISE_path + "/xtclsh " + path + "/fpga" + std::to_string(id) + ".tcl " + "synthesize_design"), proc::std_out > output);
  c.wait();   
}


void FPGA::implementDesign(std::string seconds){
  // Command Example: $ISE_PATH/xtclsh $FPGAN_PATH/fpgaN.tcl rebuild_project > $FPGAN_PATH/output.txt
  fs::current_path(path);
  std::string output = "./output.txt";
  proc::child c(("timeout " + seconds + "s " + ISE_path + "/xtclsh " + path + "/fpga" + std::to_string(id) + ".tcl " + "implement_design"), proc::std_out > output);
//  c.wait();   
}

void FPGA::generateProgrammingFile(std::string seconds){
  // Command Example: $ISE_PATH/xtclsh $FPGAN_PATH/fpgaN.tcl rebuild_project > $FPGAN_PATH/output.txt
  fs::current_path(path);
  std::string output = "./output.txt";
  proc::child c(("timeout " + seconds + "s " + ISE_path + "/xtclsh " + path + "/fpga" + std::to_string(id) + ".tcl " + "generate_programming_file"), proc::std_out > output);
  c.wait();   
}
