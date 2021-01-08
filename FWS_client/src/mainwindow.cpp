#include "mainwindow.h"
#include "./ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->actionLogin, &QAction::triggered, this, &MainWindow::loginWindow);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setFilesModel(FilesModel *model) {
    ui->filesList->setFilesModel(model);
}

void MainWindow::setAppointmentsModel(AppointmentsModel *model) {
    ui->appointmentsView->setAppointmentsModel(model);
}
