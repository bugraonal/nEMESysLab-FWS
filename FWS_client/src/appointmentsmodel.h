#ifndef APPOINTMENTSMODEL_H
#define APPOINTMENTSMODEL_H


#include <QVector>
#include <QTime>
#include "serverconnection.h"

#include "DTO/appointmentdto.h"

class AppointmentsModel
{
public:
    AppointmentsModel(ServerConnection &connection);

    QVector<QTime> getAppointments();
    bool addAppointment(QTime appointment);
    void removeAppointment(QTime appointment);

private:
    QVector<QTime> appointments;
    ServerConnection &connection;
};


#endif // APPOINTMENTSMODEL_H
