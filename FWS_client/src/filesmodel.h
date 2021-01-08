#ifndef FILESMODEL_H
#define FILESMODEL_H


#include <QString>
#include <QFile>

#include <iostream>

#include "serverconnection.h"
#include "filetransfer.h"
#include "DTO/fileslistdto.h"
#include "DTO/commanddto.h"


class FilesModel
{
public:
    FilesModel(ServerConnection &connection);

    void addFile(QString fileName);
    void removeFile(QString fileName);
    void sendFiles();

    QVector<QString> getFileList();


private:
    QVector<QString> files;
    ServerConnection &connection;
    FileTransfer fileTransfer;

};

#endif // FILESMODEL_H
