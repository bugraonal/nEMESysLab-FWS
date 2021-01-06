#include "filesmodel.h"

FilesModel::FilesModel() : files{}
{

}

void FilesModel::addFile(QString fileName) {
    QFile file(fileName);
    if (file.exists())
        files.push_back(file);
}

void FilesModel::removeFile(QString fileName) {
    files.erase(std::remove_if(files.begin(), files.end(),
                               [fileName](QFile file) { return file.fileName().compare(fileName) == 0; }), files.end());
}

std::vector<QFile> FilesModel::getFileList() { return files; }
