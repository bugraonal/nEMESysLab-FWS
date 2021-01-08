#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "filesmodel.h"
#include "appointmentsmodel.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void setFilesModel(FilesModel *model);
    void setAppointmentsModel(AppointmentsModel *model);

private:
    Ui::MainWindow *ui;

signals:
    void loginWindow();
};
#endif // MAINWINDOW_H
