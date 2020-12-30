#include <iostream>
#include <QCoreApplication>
#include <QtSql>


int main()
{
  QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
  db.setHostName("localhost");
  db.setUserName("emre");
  db.setPassword("P4ss1234!");
  bool ok = db.open();


  std::cout << "Connection Status: " << ok << std::endl;


  return 0;
}
