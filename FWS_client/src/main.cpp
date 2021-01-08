#include "mainwindow.h"
#include "loginwindow.h"
#include "filesmodel.h"
#include "filelist.h"
#include "appointmentsmodel.h"
#include "serverconnection.h"
#include "connectionwidget.h"

#include <QApplication>
#include <QObject>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    ServerConnection connection("", "");

    LoginWindow loginWindow;
    loginWindow.setConnection(&connection);

    QObject::connect(&w, &MainWindow::loginWindow, [&loginWindow](){loginWindow.exec();});

    FilesModel filesModel(connection);
    w.setFilesModel(&filesModel);

    AppointmentsModel appointmentsModel(connection);
    w.setAppointmentsModel(&appointmentsModel);

    ConnectionWidget connectionWidget;
    connectionWidget.setConnection(&connection);


    return a.exec();
}
