#include "appointmentsmodel.h"

AppointmentsModel::AppointmentsModel(ServerConnection &connection) : connection{connection}
{

}

bool AppointmentsModel::addAppointment(QTime appointment) {
    /*
     * This function will add a new QFile to the list if the file exists in
     * the given path
    */
    appointments.append(appointment);
    connection.send("takeappointment", AppointmentDTO(appointment));
    return true;
}

void AppointmentsModel::removeAppointment(QTime appointment) {
    /*
     * This function will remove a file from the list given
     * the file name
    */
    bool deleted = false;
    appointment = appointment.addSecs(-appointment.second()); // set seconds to 0
    appointments.erase(std::remove_if(appointments.begin(), appointments.end(),
                               [appointment, &deleted](QTime app) {
                                   //return deleted = timeString.compare(app) == 0;
                                   return deleted = app == appointment;
                              }), appointments.end());
    if (deleted) {
        //server.deleteAppointment(appointment);
    }
}

QVector<QTime> AppointmentsModel::getAppointments() { return appointments; }
