#ifndef FILETRANSFER_H
#define FILETRANSFER_H

#include <QVector>
#include <QString>
#include <QStringList>
#include <QProcess>


class FileTransfer
{
public:
    FileTransfer();

    void sendFiles(QVector<QString> files, std::string fpgaID);
};

#endif // FILETRANSFER_H
