#ifndef CREDENTIALSDTO_H
#define CREDENTIALSDTO_H

#include "dtointerface.h"
#include <sstream>
#include <QString>

class CredentialsDTO : public DTOInterface {

public:
    CredentialsDTO(QString email, QString hashedPass) {
        std::stringstream ss;
        this->data = "";

        ss << email.toStdString() << ";" << hashedPass.toStdString();

        ss >> this->data;
    }
};

#endif // CREDENTIALSDTO_H
