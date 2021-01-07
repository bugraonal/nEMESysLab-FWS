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

std::vector<std::string> DataBaseConnector::getAllUsers() {
  std::vector<std::string> vec;
  QSqlQuery query("SELECT user_name,user_surname FROM Users;");
  // qDebug() << query.lastError();
  while (query.next()){
    std::string name = field2String(query.value(0));//.toString();
    std::string surname = field2String(query.value(1));//.toString();
    vec.push_back(name + " " + surname);//name.toUtf8().constData());
  }
  return vec;
}


void DataBaseConnector::initFileBase(){
  QSqlQuery query("SELECT fpga_id FROM FPGA;");
  while (query.next()){
    std::string id = field2String(query.value(0));
    if(mkdir(id.c_str(), 0777) == -1)
      std::cerr << "Error: Couldn't initialize file base" << std::endl;
  }
}

std::vector<std::string>  DataBaseConnector::getTodaysHours(){
  std::vector<std::string> vec;
  QSqlQuery query("SELECT * FROM TimesOfDay WHERE timeofday>time(now()) AND timeofday NOT IN(SELECT TIME(appointment) FROM Appointments WHERE DATE(appointment) = DATE(now()));");
  while (query.next()){
    std::string time = field2String(query.value(0));
    vec.push_back(time);
  }
  return vec;
}

std::string DataBaseConnector::getRemainingSeconds(){
  std::string seconds;
  QSqlQuery query("select TIME_TO_SEC(SUBTIME(timeofday, time(now()) + interval 1 minute)) from TimesOfDay where timeofday>time(now()) and timeofday< time(now()) + interval 30 minute;");
  while (query.next())
    seconds = field2String(query.value(0));
  return seconds;
}

bool DataBaseConnector::isOpen(){
    return db.isOpen();
}



std::string DataBaseConnector::field2String(QVariant s) {
  return s.toString().toUtf8().constData();
}


