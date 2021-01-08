#ifndef SERVERCONNECTION_H
#define SERVERCONNECTION_H

#include <QString>
#include <QStringList>

#include <rpc/client.h>

#include "dtointerface.h"

class ServerConnection
{
public:
    ServerConnection(QString ip, QString port);
    std::string send(std::string funcName, DTOInterface dto);

    bool connectToServer();

private:

    QString ip;
    QString port;
    rpc::client *rpcClient;
};

#endif // SERVERCONNECTION_H
