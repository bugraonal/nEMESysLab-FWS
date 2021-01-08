#include "dbLoginCommand.hpp"

dbLoginCommand::dbLoginCommand(DataBaseConnector *dbc, std::string email, std::string pwd){
    this->dbc = dbc;
    this->email = email;
    this->pwd = pwd;
}

void dbLoginCommand::execute(){
    dbc->checkLogin(email, pwd);
}
