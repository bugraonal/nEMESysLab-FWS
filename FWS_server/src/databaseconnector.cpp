#include "databaseconnector.h"

DataBaseConnector::DataBaseConnector(){
  db = QSqlDatabase::addDatabase("QMYSQL");
  db.setHostName("localhost");
  db.setDatabaseName("FWS");
  db.setUserName("emre");
  db.setPassword("P4ss1234!");
  db.open();
}

DataBaseConnector* DataBaseConnector::getInstance(){
  if (dbc == nullptr)
    dbc = new DataBaseConnector();
  
  return dbc;
}

QSqlDatabase DataBaseConnector::getDatabase(){
  return db;
}

std::vector<std::string> DataBaseConnector::getAllUsers() {
  std::vector<std::string> vec;
  QSqlQuery query("SELECT user_name,user_surname FROM Users;");
  // qDebug() << query.lastError();
  while (query.next()){
    QString name = query.value(0).toString();
    QString surname = query.value(1).toString();
    name.append(" ").append(surname);
    vec.push_back(name.toUtf8().constData());
  }
  return vec;
}


void DataBaseConnector::initFileBase(){
  QSqlQuery query("SELECT fpga_id FROM FPGA;");
  while (query.next()){
    std::string id = query.value(0).toString().toUtf8().constData();
    if(mkdir(id.c_str(), 1777) == -1)
      std::cerr << "Error: Couldn't initialize file base" << std::endl;
  }
}
