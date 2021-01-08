#ifndef APPOINTMENTSMODEL_H
#define APPOINTMENTSMODEL_H


#include <QVector>
#include <QTime>

class AppointmentsModel
{
public:
    AppointmentsModel();

    QVector<QTime> getAppointments();
    bool addAppointment(QTime appointment);
    void removeAppointment(QTime appointment);

private:
    QVector<QTime> appointments;
};


#endif // APPOINTMENTSMODEL_H
