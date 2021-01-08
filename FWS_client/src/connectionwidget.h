#ifndef CONNECTIONWIDGET_H
#define CONNECTIONWIDGET_H

#include <QWidget>
#include "DTO/commanddto.h"
#include "serverconnection.h"

namespace Ui {
class ConnectionWidget;
}

class ConnectionWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ConnectionWidget(QWidget *parent = nullptr);
    ~ConnectionWidget();
    void setConnection(ServerConnection *connection) {this->connection = connection;}

private:
    Ui::ConnectionWidget *ui;

    ServerConnection *connection;
    void runCommand();
    void connectToServer();

};

#endif // CONNECTIONWIDGET_H
