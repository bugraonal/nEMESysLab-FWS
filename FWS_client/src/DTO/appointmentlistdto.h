#ifndef APPOINTMENTLISTDTO_H
#define APPOINTMENTLISTDTO_H

#include "dtointerface.h"
#include <vector>
#include <string>
#include <sstream>

class AppointmentListDTO : public DTOInterface {

public:

    AppointmentListDTO(std::vector<std::string> appointments) {
        this->data = "";
        std::stringstream ss;
        for (auto appointment : appointments) {
            ss << appointment << ";";
        }
        ss >> this->data;

    }
};

#endif // APPOINTMENTLISTDTO_H
