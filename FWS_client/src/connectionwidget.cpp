#include "connectionwidget.h"
#include "ui_connectionwidget.h"

ConnectionWidget::ConnectionWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ConnectionWidget)
{
    ui->setupUi(this);
    ui->commandBox->addItem("Synthesize");
    ui->commandBox->addItem("Implement");
    ui->commandBox->addItem("Generate Programming File");
    ui->commandBox->addItem("Reset Files");
    ui->commandBox->addItem("Rebuild");

    connect(ui->runButton, &QPushButton::clicked, this, &ConnectionWidget::runCommand);
}

ConnectionWidget::~ConnectionWidget()
{
    delete ui;
}


void ConnectionWidget::runCommand() {
    QString command = ui->commandBox->currentText();

    if (command.compare("Synthesize") == 0)
        connection->send("synthesize", CommandDTO(""));
    else if (command.compare("Rebuild") == 0)
        connection->send("rebuild", CommandDTO(""));
    else if (command.compare("Reset Files") == 0)
        connection->send("reset", CommandDTO(""));
    else if (command.compare("Implement") == 0)
        connection->send("implement", CommandDTO(""));
    else if (command.compare("Generate Programming File"))
        connection->send("generateFile", CommandDTO(""));
}


void ConnectionWidget::connectToServer() {
    connection->setIPandPort(ui->ipLine->text(), ui->portLine->text());
    connection->connectToServer();
    ui->connectButton->setText("Disconnect");
}
