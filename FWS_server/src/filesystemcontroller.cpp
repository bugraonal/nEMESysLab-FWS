#include "filesystemcontroller.hpp"

FileSystemController::FileSystemController()
{ 
  pt::ptree pt;
  json::read_json("config.json" , pt);
  std::string root_path = pt.get<std::string>("root");
  std::string ise_path = pt.get<std::string>("ISE");
  this->root = root_path;
  this->ISE_path = ise_path;
}

FileSystemController* FileSystemController::getInstance()
{
  if(fsc == nullptr)
    fsc = new FileSystemController();

  return fsc;
}

void FileSystemController::resetFiles(std::string& fpga_id)
{
  // Checking if directory exists
  std::string directory = root + "/fpga" + fpga_id;
  if (!fs::exists(directory)){
    std::cerr << "Couldn't find FPGA project file. \(" << directory <<")\n";
  } else {

    // Searching through the directory
    for (fs::directory_entry& file : fs::directory_iterator(directory)){
      // If file is not a directory and has a .v extension than delete it.
      if (!fs::is_directory(file) && file.path().extension() != ".tcl") {
        fs::remove(file.path());
      } else if (fs::is_directory(file)) {
        fs::remove_all(file.path());
      }
    }
  }
}

void FileSystemController::executeImplementCommand(std::string& fpga_id, std::string& seconds)
{
  std::string fpga_path =  root + "/fpga" + fpga_id;
  // Command Example: $ISE_PATH/xtclsh $FPGAN_PATH/fpgaN.tcl rebuild_project > $FPGAN_PATH/output.txt
  fs::current_path(fpga_path);
  std::string output = "./output.txt";
  proc::child c(("timeout " + seconds + "s " +ISE_path + "/xtclsh " + fpga_path + "/fpga" + fpga_id + ".tcl " + "rebuild_project"), proc::std_out > output);
  c.wait();
}

std::string FileSystemController::getRoot(){
  return root;
}

std::string FileSystemController::getISE_path(){
  return ISE_path;
}
