/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "appointmentsview.h"
#include "filelist.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLogin;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QFrame *frame;
    QGridLayout *gridLayout_4;
    QPushButton *programButton;
    QFrame *connectionFrame;
    QGridLayout *gridLayout_3;
    QLabel *appointmentStatusLabel;
    QLabel *connectionStatusLabel;
    QPushButton *connectButton;
    FileList *filesList;
    QFrame *frame_2;
    QGridLayout *gridLayout_2;
    AppointmentsView *appointmentsView;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionLogin = new QAction(MainWindow);
        actionLogin->setObjectName(QString::fromUtf8("actionLogin"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        programButton = new QPushButton(frame);
        programButton->setObjectName(QString::fromUtf8("programButton"));

        gridLayout_4->addWidget(programButton, 1, 1, 1, 1);

        connectionFrame = new QFrame(frame);
        connectionFrame->setObjectName(QString::fromUtf8("connectionFrame"));
        connectionFrame->setFrameShape(QFrame::StyledPanel);
        connectionFrame->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(connectionFrame);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        appointmentStatusLabel = new QLabel(connectionFrame);
        appointmentStatusLabel->setObjectName(QString::fromUtf8("appointmentStatusLabel"));

        gridLayout_3->addWidget(appointmentStatusLabel, 0, 0, 1, 1);

        connectionStatusLabel = new QLabel(connectionFrame);
        connectionStatusLabel->setObjectName(QString::fromUtf8("connectionStatusLabel"));

        gridLayout_3->addWidget(connectionStatusLabel, 1, 0, 1, 1);


        gridLayout_4->addWidget(connectionFrame, 2, 0, 2, 1);

        connectButton = new QPushButton(frame);
        connectButton->setObjectName(QString::fromUtf8("connectButton"));

        gridLayout_4->addWidget(connectButton, 2, 1, 1, 1);

        filesList = new FileList(frame);
        filesList->setObjectName(QString::fromUtf8("filesList"));

        gridLayout_4->addWidget(filesList, 0, 0, 1, 2);


        gridLayout->addWidget(frame, 0, 0, 1, 1);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        appointmentsView = new AppointmentsView(frame_2);
        appointmentsView->setObjectName(QString::fromUtf8("appointmentsView"));

        gridLayout_2->addWidget(appointmentsView, 0, 0, 1, 1);


        gridLayout->addWidget(frame_2, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionLogin);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionLogin->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        programButton->setText(QCoreApplication::translate("MainWindow", "Program", nullptr));
        appointmentStatusLabel->setText(QCoreApplication::translate("MainWindow", "Not Appointment time", nullptr));
        connectionStatusLabel->setText(QCoreApplication::translate("MainWindow", "Not connected", nullptr));
        connectButton->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("MainWindow", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
