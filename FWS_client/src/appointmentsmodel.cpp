#include "appointmentsmodel.h"

AppointmentsModel::AppointmentsModel(ServerConnection &connection) : connection{connection}
{

}

bool AppointmentsModel::addAppointment(QString appointment) {
    /*
     * This function will add a new QFile to the list if the file exists in
     * the given path
    */
    appointments.append(appointment);
    connection.send("takeappointment", AppointmentDTO(appointment));
    return true;
}

void AppointmentsModel::removeAppointment(QString appointment) {
    /*
     * This function will remove a file from the list given
     * the file name
    */
    bool deleted = false;
    appointments.erase(std::remove_if(appointments.begin(), appointments.end(),
                               [appointment, &deleted](QString app) {
                                   //return deleted = timeString.compare(app) == 0;
                                   return deleted = app.compare(appointment) == 0;
                              }), appointments.end());
    if (deleted) {
        //server.deleteAppointment(appointment);
    }
}

QVector<QString> AppointmentsModel::getAppointments() { return appointments; }

QVector<QString> AppointmentsModel::getTimeSlots() {
    std::string response = connection.send("available", CommandDTO(""));
    std::stringstream ss(response);
    std::string intermediate;
    QVector<QString> timeSlots;
    while(getline(ss, intermediate, ';')) {
        timeSlots.append(QString::fromStdString(intermediate));
    }
    return timeSlots;
}
