#include "databaseconnector.hpp"

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
  //QSqlQuery query("SELECT * FROM TimesOfDay WHERE timeofday>time(now()) AND timeofday NOT IN(SELECT TIME(appointment) FROM Appointments WHERE DATE(appointment) = DATE(now()));");
  QSqlQuery query("SELECT * FROM TimesOfDay WHERE timeofday>time(now()) AND timeofday NOT IN(SELECT TIME(appointment) FROM Appointments WHERE DATE(appointment) = DATE(now()) GROUP BY appointment HAVING count(fpga_id) = (SELECT COUNT(F.fpga_id) FROM FPGA AS F));");
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

int DataBaseConnector::registerFPGAForTime(int user_id, std::string time){
  int fpga_id;
  QSqlQuery query;
  query.prepare("SELECT fpga_id FROM FPGA WHERE fpga_id NOT IN (SELECT fpga_id FROM Appointments WHERE TIME(appointment) = ?)");
  query.addBindValue(time.substr(1).c_str());
  query.exec();
  while (query.next()) {
    fpga_id = std::stoi(field2String(query.value(0)));
    break;
  }
  QSqlQuery query1;
  std::cout << user_id << " " << fpga_id << " " << time << "\n";
  query1.prepare("INSERT INTO Appointments (user_id, fpga_id, appointment) VALUES (?, ?, CONCAT(DATE(NOW()), ?));");
  query1.addBindValue(user_id);
  query1.addBindValue(fpga_id);
  query1.addBindValue(time.c_str());
  query1.exec();
  //qDebug() << query1.lastQuery();
  //qDebug() << query1.lastError();
  if (field2String(query1.lastError().databaseText()) == "") {
    return 1;
  } else {
    return -1;
  }
}

int DataBaseConnector::getUserID(std::string mail) {
  QSqlQuery query;
  query.prepare("SELECT user_id FROM Users WHERE user_email = ?;");
  query.addBindValue(mail.c_str());
  query.exec();
  while (query.next())
    return std::stoi(field2String(query.value(0)));
}


std::vector<std::string> DataBaseConnector::getFPGAIDS(){
  std::vector<std::string> vec;
  QSqlQuery query;
  query.prepare("SELECT fpga_id FROM FPGA;");
  query.exec();
  while(query.next())
    vec.push_back(field2String(query.value(0)));
  return vec;
}

std::string DataBaseConnector::checkLogin(std::string email, std::string pwd){
  std::string result;
  QSqlQuery query;
  query.prepare("SELECT COUNT(*) FROM Users WHERE user_email = ? AND user_password = ?");
  query.addBindValue(email.c_str());
  query.addBindValue(pwd.c_str());
  query.exec();
  while(query.next())
    result = field2String(query.value(0));
  return result;
}

int DataBaseConnector::getFPGAbyUserID(std::string user_id) {
  int result;
  QSqlQuery query;
  query.prepare("SELECT appointment,fpga_id FROM Appointments WHERE user_id = ? AND appointment > (NOW() - INTERVAL 29 MINUTE) LIMIT 1;");
  query.exec();
  while(query.next()){
    result = std::stoi(field2String(query.next()));
  }
  return result;
}

bool DataBaseConnector::isOpen(){
    return db.isOpen();
}


std::string DataBaseConnector::field2String(QVariant s) {
  return s.toString().toUtf8().constData();
}


