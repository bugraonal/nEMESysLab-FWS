#ifndef __DBLOGINCOMMAND_H_
#define __DBLOGINCOMMAND_H_

#include "command.hpp"
#inlcude "../databaseconnector.hpp"

class dbLoginCommand: public Command
{
    private:
        DataBaseConnector *dbc;
        std::string email;
        std::string pwd;

    public:
        dbLoginCommand(DataBaseConnector *dbc, std::string email, std::string pwd);
        void execute();
};
    
#endif // __DBLOGINCOMMAND_H_
