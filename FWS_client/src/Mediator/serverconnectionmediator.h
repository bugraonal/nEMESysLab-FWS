#ifndef SERVERCONNECTIONMEDIATOR_H
#define SERVERCONNECTIONMEDIATOR_H


#include "Mediator/mediatorinterface.h"
#include "serverconnection.h"


class ServerConnectionMediator : public MediatorInterface
{
public:
    ServerConnectionMediator(ServerConnection &connection) : connection{connection}
    {

    }

    void notify(BaseComponent *sender, QString event, DTOInterface dto, QString &response) {
        response = QString::fromStdString(connection.send(event.toStdString(), dto));
    }


private:
    ServerConnection &connection;

};

#endif // SERVERCONNECTIONMEDIATOR_H
