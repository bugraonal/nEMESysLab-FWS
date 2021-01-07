#include "appointmentsview.h"
#include "ui_appointmentsview.h"

AppointmentsView::AppointmentsView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AppointmentsView)
{
    ui->setupUi(this);

    ui->timeEdit->setTime(QTime::currentTime());

    connect(ui->getAppointmentButton, &QPushButton::clicked, this, &AppointmentsView::addAppointment);
    connect(ui->removeAppointmentButton, &QPushButton::clicked, this, &AppointmentsView::removeAppointment);
}

void AppointmentsView::setAppointmentsModel(AppointmentsModel *model) { this->model = model; }

AppointmentsView::~AppointmentsView()
{
    delete ui;
}


void AppointmentsView::addAppointment() {

    QTime time = ui->timeEdit->time();
    bool added = model->addAppointment(time);
    if (added) {
        ui->listWidget->addItem(time.toString());
    }
    else {
        ui->statusLabel->setText("Timeslot not available");
    }

}

void AppointmentsView::removeAppointment() {

    QTime time = ui->timeEdit->time();
    model->removeAppointment(time);
    delete ui->listWidget->takeItem(ui->listWidget->row(ui->listWidget->currentItem()));

}
