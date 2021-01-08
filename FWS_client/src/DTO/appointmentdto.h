#ifndef APPOINTMENTDTO_H
#define APPOINTMENTDTO_H

#include "dtointerface.h"
#include <QTime>

class AppointmentDTO : public DTOInterface {

public:

    AppointmentDTO(QString appointment) {
        this-> data = appointment.toStdString();
    }
};

#endif // APPOINTMENTDTO_H
