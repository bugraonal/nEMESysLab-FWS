#include "databaseconnector.h"
#include "filesystemcontroller.h"


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
  
  std::string fpga_id = "1";
  fsc->removeVerilogFiles(fpga_id); 

  return 0;
}
