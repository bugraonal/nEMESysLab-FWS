#include <iostream>
#include <vector>

#include <QDebug>

#include "databaseconnector.h"



DataBaseConnector *DataBaseConnector::dbc = nullptr;
int main()
{
  
  // Initialize Database  
  DataBaseConnector *dbc = dbc->getInstance();
  QSqlDatabase db = dbc->getDatabase();
  bool ok = db.isOpen();
  std::cout << "Connection Status: " << ok << std::endl;
  
  std::cout << "#Printing All Users#" << std::endl; 
  auto users = dbc->getAllUsers();
  for (auto user : users)
  std::cout << user << std::endl;
  return 0;
}
