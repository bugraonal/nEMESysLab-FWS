#ifndef DATABASECONNECTOR_H
#define DATABASECONNECTOR_H

#include <iostream>
#include <string>
#include <vector>

#include <QtSql>
//#include <QDebug> activate when using qDebug
#include <QString>

class DataBaseConnector
{
private:
    static DataBaseConnector *dbc;
    QSqlDatabase db;
    DataBaseConnector();
public:
    static DataBaseConnector *getInstance();
    QSqlDatabase getDatabase();
    std::vector<std::string> getAllUsers();
};

#endif // DATABASECONNECTOR_H
