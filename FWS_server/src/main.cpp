#include "databaseconnector.hpp"
#include "filesystemcontroller.hpp"
#include "fpga/fpgapool.hpp"
//#include "fpga/fpgaempty.hpp"
#include "rpc/server.h"


// Commmands
//#include "commands/command.hpp"
#include "commands/fpgaResetFilesCommand.hpp"
#include "commands/fpgaRebuildProjectCommand.hpp"
#include "commands/fpgaSynthesizeDesignCommand.hpp"
#include "commands/fpgaImplementDesignCommand.hpp"
#include "commands/fpgaGenerateProgrammingFileCommand.hpp"

FileSystemController* FileSystemController::fsc = nullptr;
DataBaseConnector* DataBaseConnector::dbc = nullptr;
//FPGAEmpty* FPGAEmpty fpgaE = nullptr;
int main()
{
  // Initialize Database  
  DataBaseConnector *dbc = dbc->getInstance();
  bool ok = dbc->isOpen();
  std::cout << "Connection Status: " << ok << "\n";

  // Initialize File System
  FileSystemController *fsc = fsc->getInstance();

  // Initialize FPGA Pool 
  std::vector<std::string> fpga_ids = dbc->getFPGAIDS();
  FPGAPool fp = FPGAPool();
  fp.initialize(fpga_ids, fsc->getRoot(), fsc->getISE_path());

  // Initialize Server
//  ServerHandler *sh = sh->getInstance();

//  rpc::server srv(8080);
//
//  srv.bind("login", [&](std::string const& s){
//    std::vector <std::string> tokens;
//    std::stringstream check1(s);
//    std::string intermediate;
//    while(getline(check1, intermediate, ';')) 
//    { 
//      tokens.push_back(intermediate); 
//    }
//    std::string result = dbc->checkLogin(tokens[0], tokens[1]);
//    if (std::stoi(result) > 0)
//      result += " " + dbc->getFPGAbyUserID(result);
//    return std::string("> ") + result;
//  });
//
//  srv.bind("register", [&](std::string const& s){
//    std::vector <std::string> tokens;
//    std::stringstream check1(s);
//    std::string intermediate;
//    while(getline(check1, intermediate, ';')) 
//    { 
//      tokens.push_back(intermediate); 
//    }
//    std::string result = dbc->checkLogin(tokens[0], tokens[1]);
//    if (std::stoi(result) > 0)
//      result += " " + dbc->getFPGAbyUserID(result);
//    return std::string("> ") + result;
//  });

  
//  srv.bind("takeappointment", [&](std::string const& s){
//    std::vector <std::string> tokens;
//    std::stringstream check1(s);
//    std::string intermediate;
//    while(getline(check1, intermediate, ';')) 
//    { 
//      tokens.push_back(intermediate); 
//    }
//    std::string result = dbc->registerFPGAForTime(std::stoi(tokens[0]), tokens[1]);
//    if (std::stoi(result) > 0)
//      result += " " + dbc->getFPGAbyUserID(result);
//    return std::string("> ") + result;
//  });

//  srv.bind("available", [&](std::string const& s){ 
//    std::vector <std::string> tokens;
//    std::stringstream check1(s);
//    std::string intermediate;
//    while(getline(check1, intermediate, ';')) 
//    { 
//      tokens.push_back(intermediate); 
//    }
//    std::vector<std::string> times = dbc->getTodaysHours();
//    std::string result = "";
//    for (auto atime : times)
//      result += atime + ";"; 
//    return std::string("> ") + result;
//  });

  
//  srv.bind("filesend", [&](std::string const& s){ 
//    std::vector <std::string> tokens;
//    std::stringstream check1(s);
//    std::string intermediate;
//    while(getline(check1, intermediate, ';')) 
//    { 
//      tokens.push_back(intermediate); 
//    }
//    int fp_index = dbc->getFPGAbyUserID(tokens[0]);
//    fpgaResetFilesCommand cmd(fp.checkOut(fp_index));
//    cmd.execute();
//    return std::string("> ") + std::to_string(fp_index);
//  });
//  
//  srv.bind("reset", [&](std::string const& s){ 
//    std::vector <std::string> tokens;
//    std::stringstream check1(s);
//    std::string intermediate;
//    while(getline(check1, intermediate, ';')) 
//    { 
//      tokens.push_back(intermediate); 
//    }
//    int fp_index = dbc->getFPGAbyUserID(tokens[0]);
//    fpgaResetFilesCommand cmd(fp.checkOut(fp_index));
//    cmd.execute();
//    return std::string("> ") + "1";
//  });
//
//  srv.bind("rebuild", [&](std::string const& s){ 
//    std::vector <std::string> tokens;
//    std::stringstream check1(s);
//    std::string intermediate;
//    while(getline(check1, intermediate, ';')) 
//    { 
//      tokens.push_back(intermediate); 
//    }
//    int fp_index = dbc->getFPGAbyUserID(tokens[0]);
//    std::string seconds = dbc->getRemainingSeconds();
//    fpgaRebuildProjectCommand cmd(fp.checkOut(fp_index), seconds);
//    cmd.execute();
//    return std::string("> ") + "1";
//  });
//
//  srv.bind("sythesize", [&](std::string const& s){ 
//    std::vector <std::string> tokens;
//    std::stringstream check1(s);
//    std::string intermediate;
//    while(getline(check1, intermediate, ';')) 
//    { 
//      tokens.push_back(intermediate); 
//    }
//    int fp_index = dbc->getFPGAbyUserID(tokens[0]);
//    std::string seconds = dbc->getRemainingSeconds();
//    fpgaSynthesizeDesignCommand cmd(fp.checkOut(fp_index), seconds);
//    cmd.execute();
//    return std::string("> ") + "1";
//  });
//
//  srv.bind("implement", [&](std::string const& s){ 
//    std::vector <std::string> tokens;
//    std::stringstream check1(s);
//    std::string intermediate;
//    while(getline(check1, intermediate, ';')) 
//    { 
//      tokens.push_back(intermediate); 
//    }
//    int fp_index = dbc->getFPGAbyUserID(tokens[0]);
//    std::string seconds = dbc->getRemainingSeconds();
//    fpgaImplementDesignCommand cmd(fp.checkOut(fp_index), seconds);
//    cmd.execute();
//    return std::string("> ") + "1";
//  });
//
//
//  srv.bind("genereteFile", [&](std::string const& s){ 
//    std::vector <std::string> tokens;
//    std::stringstream check1(s);
//    std::string intermediate;
//    while(getline(check1, intermediate, ';')) 
//    { 
//      tokens.push_back(intermediate); 
//    }
//    int fp_index = dbc->getFPGAbyUserID(tokens[0]);
//    std::string seconds = dbc->getRemainingSeconds();
//    fpgaGenerateProgrammingFileCommand cmd(fp.checkOut(fp_index), seconds);
//    cmd.execute();
//    return std::string("> ") + "1";
//  });
  
//  constexpr size_t thread_count = 8;
//
//  srv.async_run(thread_count);
//  std::cin.ignore(); 


  /*---------------------------------------------------*/
  
  std::cout << "#Printing All Users#" << "\n"; 
  auto users = dbc->getAllUsers();
  for (auto user : users)
    std::cout << user << "\n";


  std::cout << "\n\n";
//  dbc->initFileBase();
  std::cout << "#Available Hours#\n";
  auto times = dbc->getTodaysHours();
  for (auto time : times)
    std::cout << time << "\n";

  std::cout << "#Register Function#";
  int id = dbc->getUserID("emre.dedeagac@ozu.edu.tr");
  std::cout << "User ID: " << id << "\n";
  int res = dbc->registerFPGAForTime(id, " 19:00:00");
  std::cout << res << "\n";


//  std::cout << "$FPGA IDS$\n";
//  for (auto& fpga_id : fpga_ids)
//    std::cout << fpga_id << "\n";

//  
  int fpga_id = 2;
  std::string seconds = dbc->getRemainingSeconds();
////  FPGA fpga = FPGA(fpga_id, fsc->getRoot(), fsc->getISE_path());
//
////  FPGA fpga = fp.checkOut(2);
//  fpgaResetFilesCommand cmd0 = fpgaResetFilesCommand(&fpga);
//  cmd0.execute();
//  fpgaRebuildProjectCommand cmd = fpgaRebuildProjectCommand(fp.checkOut(fpga_id), seconds);
  //fp.checkOut(fpga_id);
  fpgaSynthesizeDesignCommand cmd = fpgaSynthesizeDesignCommand(fp.checkOut(fpga_id), seconds);
//  fpgaGenerateProgrammingFileCommand cmd = fpgaGenerateProgrammingFileCommand(&fpga, seconds);
  cmd.execute();
  return 0;
}
