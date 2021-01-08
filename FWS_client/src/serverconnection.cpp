#include "serverconnection.h"

ServerConnection::ServerConnection(QString ip, QString port) : ip{ip}, port{port}
{

}

bool ServerConnection::connectToServer() {
    rpcClient = new rpc::client(ip.toStdString(), port.toInt());
    auto connectionState = rpcClient->get_connection_state();
    return connectionState == rpc::client::connection_state::connected;

}

std::string ServerConnection::send(std::string funcName, DTOInterface dto) {
    std::string response = rpcClient->call(funcName, dto.getData()).as<std::string>();
    return response;
}
