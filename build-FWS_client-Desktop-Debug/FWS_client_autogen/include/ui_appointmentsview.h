/********************************************************************************
** Form generated from reading UI file 'appointmentsview.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPOINTMENTSVIEW_H
#define UI_APPOINTMENTSVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AppointmentsView
{
public:
    QGridLayout *gridLayout;
    QListWidget *listWidget;
    QLabel *label;
    QLabel *statusLabel;
    QPushButton *getAppointmentButton;
    QPushButton *pushButton;
    QTimeEdit *timeEdit;
    QPushButton *removeAppointmentButton;

    void setupUi(QWidget *AppointmentsView)
    {
        if (AppointmentsView->objectName().isEmpty())
            AppointmentsView->setObjectName(QString::fromUtf8("AppointmentsView"));
        AppointmentsView->resize(453, 514);
        gridLayout = new QGridLayout(AppointmentsView);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        listWidget = new QListWidget(AppointmentsView);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        gridLayout->addWidget(listWidget, 1, 0, 1, 2);

        label = new QLabel(AppointmentsView);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        statusLabel = new QLabel(AppointmentsView);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));

        gridLayout->addWidget(statusLabel, 4, 0, 1, 1);

        getAppointmentButton = new QPushButton(AppointmentsView);
        getAppointmentButton->setObjectName(QString::fromUtf8("getAppointmentButton"));

        gridLayout->addWidget(getAppointmentButton, 2, 1, 1, 1);

        pushButton = new QPushButton(AppointmentsView);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 4, 1, 1, 1);

        timeEdit = new QTimeEdit(AppointmentsView);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));

        gridLayout->addWidget(timeEdit, 2, 0, 1, 1);

        removeAppointmentButton = new QPushButton(AppointmentsView);
        removeAppointmentButton->setObjectName(QString::fromUtf8("removeAppointmentButton"));

        gridLayout->addWidget(removeAppointmentButton, 3, 1, 1, 1);


        retranslateUi(AppointmentsView);

        QMetaObject::connectSlotsByName(AppointmentsView);
    } // setupUi

    void retranslateUi(QWidget *AppointmentsView)
    {
        AppointmentsView->setWindowTitle(QCoreApplication::translate("AppointmentsView", "Form", nullptr));
        label->setText(QCoreApplication::translate("AppointmentsView", "Appointments", nullptr));
        statusLabel->setText(QCoreApplication::translate("AppointmentsView", "---", nullptr));
        getAppointmentButton->setText(QCoreApplication::translate("AppointmentsView", "Get Appointment", nullptr));
        pushButton->setText(QCoreApplication::translate("AppointmentsView", "Refresh", nullptr));
        removeAppointmentButton->setText(QCoreApplication::translate("AppointmentsView", "Remove", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AppointmentsView: public Ui_AppointmentsView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPOINTMENTSVIEW_H
