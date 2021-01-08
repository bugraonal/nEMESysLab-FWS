#ifndef APPOINTMENTSMODEL_H
#define APPOINTMENTSMODEL_H


#include <QVector>
#include <QTime>
#include "serverconnection.h"

#include "DTO/appointmentdto.h"
#include "DTO/commanddto.h"

class AppointmentsModel
{
public:
    AppointmentsModel(ServerConnection &connection);

    QVector<QString> getAppointments();
    bool addAppointment(QString appointment);
    void removeAppointment(QString appointment);
    QVector<QString> getTimeSlots();

private:
    QVector<QString> appointments;
    ServerConnection &connection;
};


#endif // APPOINTMENTSMODEL_H
