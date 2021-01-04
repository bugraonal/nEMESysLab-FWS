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
  QSqlQuery query("SELECT user_name,user_surname FROM Users;",db);
  // qDebug() << query.lastError();
  while (query.next()){
    QString name = query.value(0).toString();
    QString surname = query.value(1).toString();
    name.append(" ").append(surname);
    vec.push_back(name.toUtf8().constData());
  }
  return vec;
}

