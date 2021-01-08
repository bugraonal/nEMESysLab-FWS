#ifndef MEDIATORINTERFACE_H
#define MEDIATORINTERFACE_H

#include <QString>
#include "Mediator/basecomponent.h"
#include "DTO/dtointerface.h"

class MediatorInterface {

    void notify(BaseComponent *sender, QString event, DTOInterface dto, QString &response);
};

#endif // MEDIATORINTERFACE_H
