#include "filesystemcontroller.h"

FileSystemController::FileSystemController()
{

}


FileSystemController* FileSystemController::getInstance(){
  if(fsc == nullptr)
    fsc = new FileSystemController();

  return fsc;
}

void FileSystemController::removeVerilogFiles(std::string fpga_id){
  
  // Checking if directory exists
  std::string directory = "./fpga" + fpga_id;
  if (!fs::exists(directory)){
    std::cerr << "Couldn't find FPGA project file.";
  } else {
    std::cout << "Found Directory: " << directory << "\n";
  }

  // Searching through the directory
  for (fs::directory_entry& file : fs::directory_iterator(directory)){
    if (!fs::is_directory(file) && file.path().extension() == ".v") {
      fs::remove(file.path());
    }
  }
}
