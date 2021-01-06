#ifndef FILESMODEL_H
#define FILESMODEL_H


#include <QString>
#include <QFile>

class FilesModel
{
public:
    FilesModel();

    void addFile(QString fileName);
    void removeFile(QString fileName);

    QVector<QFile> getFileList();


private:
    QVector<QFile> files;

};

#endif // FILESMODEL_H
