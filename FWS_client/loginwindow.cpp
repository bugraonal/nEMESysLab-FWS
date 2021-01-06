#include "loginwindow.h"
#include "ui_loginwindow.h"


LoginWindow::LoginWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    connect(ui->buttonBox, &QDialogButtonBox::accepted, this, &LoginWindow::onAccept);
    connect(ui->registerButton, &QPushButton::clicked, this, &LoginWindow::onRegister);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}


QString LoginWindow::hashPassword(QString pass) {
    return QString(picosha2::hash256_hex_string(pass.toStdString()).c_str());
}

QString LoginWindow::makeCredentials(){
    QString email = ui->emailLine->text();
    QString pass = ui->passwordLine->text();

    QString hashedPass = hashPassword(pass);
    return email + "|" + hashedPass;
}

void LoginWindow::onAccept() {
    emit login(makeCredentials());
}

void LoginWindow::onRegister() {
    emit registerUser(makeCredentials());
}
