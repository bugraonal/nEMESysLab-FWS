#include "appointmentsview.h"
#include "ui_appointmentsview.h"

AppointmentsView::AppointmentsView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AppointmentsView)
{
    ui->setupUi(this);


    connect(ui->getAppointmentButton, &QPushButton::clicked, this, &AppointmentsView::addAppointment);
    connect(ui->removeAppointmentButton, &QPushButton::clicked, this, &AppointmentsView::removeAppointment);
}

void AppointmentsView::setAppointmentsModel(AppointmentsModel *model) { this->model = model; }

AppointmentsView::~AppointmentsView()
{
    delete ui;
}


void AppointmentsView::addAppointment() {

    QTime time = QTime::fromString(ui->timeBox->currentText());
    bool added = model->addAppointment(time);
    if (added) {
        ui->listWidget->addItem(time.toString());
    }
    else {
        ui->statusLabel->setText("Timeslot not available");
    }

}

void AppointmentsView::removeAppointment() {

    QTime time = QTime::fromString(ui->timeBox->currentText());
    model->removeAppointment(time);
    delete ui->listWidget->takeItem(ui->listWidget->row(ui->listWidget->currentItem()));

}
