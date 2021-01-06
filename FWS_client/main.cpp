#include "mainwindow.h"
#include "loginwindow.h"

#include <QApplication>
#include <QObject>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    LoginWindow loginWindow;

    QObject::connect(&w, &MainWindow::loginWindow, [&loginWindow](){loginWindow.exec();});

    return a.exec();
}
