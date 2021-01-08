#ifndef FILESLISTDTO_H
#define FILESLISTDTO_H


#include "dtointerface.h"
#include <QString>
#include <QVector>
#include <sstream>

class FilesListDTO : public DTOInterface {

public:
    FilesListDTO(QVector<QString> files) {
        this->data = "";
        std::stringstream ss;
        for (auto f : files) {
            ss << f.toStdString();
        }

        ss >> this->data;

    }

};

#endif // FILESLISTDTO_H
