#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QDialog>
#include <QDialogButtonBox>
#include <QPushButton>
#include "picosha2.h"

#include "serverconnection.h"
#include "DTO/credentialsdto.h"

namespace Ui {
class LoginWindow;
}

class LoginWindow : public QDialog
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();

    void setConnection(ServerConnection *connection) {this->connection = connection;}

private:
    Ui::LoginWindow *ui;

    ServerConnection *connection;
    QString hashPassword(QString pass);

    void onAccept();
    void onRegister();
    QString makeCredentials();


signals:

    void login(QString credentials);
    void registerUser(QString credentials);


};

#endif // LOGINWINDOW_H
