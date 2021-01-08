#ifndef COMMANDDTO_H
#define COMMANDDTO_H

#include "dtointerface.h"
#include <QString>

class CommandDTO : public DTOInterface {

public:
    CommandDTO(QString command) { this->data = command.toStdString(); }

};

#endif // COMMANDDTO_H
