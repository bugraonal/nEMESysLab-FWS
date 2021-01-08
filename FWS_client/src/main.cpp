#include "mainwindow.h"
#include "loginwindow.h"
#include "filesmodel.h"
#include "filelist.h"
#include "appointmentsmodel.h"

#include <QApplication>
#include <QObject>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    LoginWindow loginWindow;

    QObject::connect(&w, &MainWindow::loginWindow, [&loginWindow](){loginWindow.exec();});

    FilesModel filesModel;
    w.setFilesModel(&filesModel);

    AppointmentsModel appointmentsModel;
    w.setAppointmentsModel(&appointmentsModel);

    return a.exec();
}
