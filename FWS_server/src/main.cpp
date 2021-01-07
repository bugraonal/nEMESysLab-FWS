#include "databaseconnector.h"
#include "filesystemcontroller.h"


FileSystemController* FileSystemController::fsc = nullptr;
DataBaseConnector* DataBaseConnector::dbc = nullptr;
int main()
{
  
  // Initialize Database  
  DataBaseConnector *dbc = dbc->getInstance();
  QSqlDatabase db = dbc->getDatabase();
  bool ok = db.isOpen();
  std::cout << "Connection Status: " << ok << "\n";
  
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

  bool result = fs::remove("./1/*.txt");
  std::cout << result << "\n";
  return 0;
}
