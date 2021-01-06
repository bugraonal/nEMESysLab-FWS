#ifndef FILESMODEL_H
#define FILESMODEL_H


#include <vector>
#include <alogrithm>

#include <QString>
#include <QFile>

class FilesModel
{
public:
    FilesModel();

    void addFile(QString fileName);
    void removeFile(QString fileName);

    std::vector<QFile> getFileList();


private:
    std::vector<QFile> files;

};

#endif // FILESMODEL_H
