#include "databaseconnector.hpp"
#include "filesystemcontroller.hpp"
#include "fpga/fpgapool.hpp"

// Commmands
//#include "commands/command.hpp"
#include "commands/fpgaResetFilesCommand.hpp"
#include "commands/fpgaRebuildProjectCommand.hpp"
#include "commands/fpgaSynthesizeDesignCommand.hpp"
#include "commands/fpgaImplementDesignCommand.hpp"
#include "commands/fpgaGenerateProgrammingFileCommand.hpp"

FileSystemController* FileSystemController::fsc = nullptr;
DataBaseConnector* DataBaseConnector::dbc = nullptr;
int main()
{
  // Initialize Database  
  DataBaseConnector *dbc = dbc->getInstance();
  bool ok = dbc->isOpen();
  std::cout << "Connection Status: " << ok << "\n";

  // Initialize File System
  FileSystemController *fsc = fsc->getInstance();


//  std::cout << "#Printing All Users#" << "\n"; 
//  auto users = dbc->getAllUsers();
//  for (auto user : users)
//    std::cout << user << "\n";


//  std::cout << "\n\n";
//  dbc->initFileBase();
//  std::cout << "#Available Hours#\n";
//  auto times = dbc->getTodaysHours();
//  for (auto time : times)
//    std::cout << time << "\n";

//  int id = dbc->getUserID("emre.dedeagac@ozu.edu.tr");
//  std::cout << "User ID: " << id << "\n";
//  dbc->registerFPGAForTime(id, " 23:00:00");

//  std::cout << "$FPGA IDS$\n";
  std::vector<std::string> fpga_ids = dbc->getFPGAIDS();
//  for (auto& fpga_id : fpga_ids)
//    std::cout << fpga_id << "\n";

  FPGAPool fp = FPGAPool();
  fp.initialize(fpga_ids, fsc->getRoot(), fsc->getISE_path());
  
  int fpga_id = 2;
  std::string seconds = dbc->getRemainingSeconds();
//  fsc->resetFiles(fpga_id); 
//  fsc->executeImplementCommand(fpga_id, seconds);

//  FPGA fpga = FPGA(fpga_id, fsc->getRoot(), fsc->getISE_path());
//  //fpga.resetFiles();
//  fpgaResetFilesCommand cmd = fpgaResetFilesCommand(&fpga);
//  fpgaGenerateProgrammingFileCommand cmd = fpgaGenerateProgrammingFileCommand(&fpga, seconds);
  fpgaRebuildProjectCommand cmd = fpgaRebuildProjectCommand(fp.getFPGAbyID(fpga_id), seconds);
  cmd.execute();
  return 0;
}
