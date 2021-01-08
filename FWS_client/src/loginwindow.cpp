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
    /*
     * This function uses the PicoSHA2 library's string hashing function
     * to hash the password
    */
    return QString(picosha2::hash256_hex_string(pass.toStdString()).c_str());
}

QString LoginWindow::makeCredentials(){
    /*
     * This function combines the email and the hashed password with a pipe ('|')
     * seperator. It returns this as a QString
    */
    QString email = ui->emailLine->text();
    QString pass = ui->passwordLine->text();

    QString hashedPass = hashPassword(pass);
    return email + "|" + hashedPass;
}

void LoginWindow::onAccept() {
    /*
     * This function is a slot triggered when the accpet button is pressed. It
     * will emit the login signal which will be transmitted to serverConnection
     * class.
    */
    emit login(makeCredentials());
}

void LoginWindow::onRegister() {
    /*
     * This function is a slot triggered when the register button is pressed. It
     * will emit the registerUser signal which will be transmitted to serverConnection
     * class.
    */
    emit registerUser(makeCredentials());
}
