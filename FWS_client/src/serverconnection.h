#ifndef SERVERCONNECTION_H
#define SERVERCONNECTION_H

#include <QString>
#include <QStringList>

#include <rpc/client.h>

#include "DTO/dtointerface.h"

class ServerConnection
{
public:
    ServerConnection(){};
    ServerConnection(QString ip, QString port);
    std::string send(std::string funcName, DTOInterface dto);

    bool connectToServer();

    void setUserID();

    void setIPandPort(QString ip, QString port) {
        this->ip = ip;
        this->port = port;
    }

private:

    QString ip;
    QString port;
    std::string userID;
    rpc::client *rpcClient;
};

#endif // SERVERCONNECTION_H
