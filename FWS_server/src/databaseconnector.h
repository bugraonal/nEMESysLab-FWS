#ifndef DATABASECONNECTOR_H
#define DATABASECONNECTOR_H

// STD Library
#include <iostream>
#include <string>
#include <vector>
#include <sys/stat.h>
#include <sys/types.h>

// Qt Libraries
#include <QtSql>
// #include <QDebug> activate when using qDebug
#include <QString>

class DataBaseConnector
{
private:
    static DataBaseConnector *dbc;
    QSqlDatabase db;
    DataBaseConnector();
    std::string field2String(auto s);
public:
    static DataBaseConnector *getInstance();
    QSqlDatabase getDatabase();
    std::vector<std::string> getAllUsers();
    void initFileBase();
    std::vector<std::string> getTodaysHours();
};

#endif // DATABASECONNECTOR_H
