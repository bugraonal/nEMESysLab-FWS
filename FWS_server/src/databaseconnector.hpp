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
#include <QDebug> // activate when using qDebug
#include <QString>

class DataBaseConnector
{
    private:
        static DataBaseConnector *dbc;
        QSqlDatabase db;
        DataBaseConnector();
        std::string field2String(QVariant s);
    public:
        static DataBaseConnector *getInstance();
        bool isOpen();
        std::vector<std::string> getAllUsers();
        void initFileBase();
        std::vector<std::string> getTodaysHours();
        std::string getRemainingSeconds();
        void registerFPGAForTime(int user_id, std::string time);
        int getUserID(std::string mail);
        std::vector<std::string> getFPGAIDS();
};

#endif // DATABASECONNECTOR_H
