#ifndef APPOINTMENTSVIEW_H
#define APPOINTMENTSVIEW_H

#include <QWidget>

#include "appointmentsmodel.h"

namespace Ui {
class AppointmentsView;
}

class AppointmentsView : public QWidget
{
    Q_OBJECT

public:
    explicit AppointmentsView(QWidget *parent = nullptr);
    ~AppointmentsView();

    void setAppointmentsModel(AppointmentsModel *model);

private:
    Ui::AppointmentsView *ui;
    AppointmentsModel *model;

    void addAppointment();
    void removeAppointment();
    void refresh();

};

#endif // APPOINTMENTSVIEW_H
