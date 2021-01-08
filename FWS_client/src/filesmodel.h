#ifndef FILESMODEL_H
#define FILESMODEL_H


#include <QString>
#include <QFile>

#include <iostream>

class FilesModel
{
public:
    FilesModel();

    void addFile(QString fileName);
    void removeFile(QString fileName);

    QVector<QString> getFileList();


private:
    QVector<QString> files;

};

#endif // FILESMODEL_H
