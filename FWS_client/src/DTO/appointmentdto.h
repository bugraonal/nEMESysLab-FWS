#ifndef APPOINTMENTDTO_H
#define APPOINTMENTDTO_H

#include "dtointerface.h"
#include <QTime>

class AppointmentDTO : public DTOInterface {

public:

    AppointmentDTO(QTime appointment) {
        this-> data = appointment.toString().toStdString();
    }
};

#endif // APPOINTMENTDTO_H
