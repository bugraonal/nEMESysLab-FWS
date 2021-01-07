#include "filesmodel.h"

FilesModel::FilesModel() : files{}
{

}

void FilesModel::addFile(QString filePath) {
    /*
     * This function will add a new QFile to the list if the file exists in
     * the given path
    */
    QFile file(filePath);
    if (file.exists())
        files.append(filePath);
    else
        std::cerr << "File " << filePath.toStdString() << " does not exist!" << std::endl;

}

void FilesModel::removeFile(QString fileName) {
    /*
     * This function will remove a file from the list given
     * the file name
    */

    files.erase(std::remove_if(files.begin(), files.end(),
                               [fileName](QString file) {
                                   return file.compare(fileName) == 0;
                              }), files.end());
}

QVector<QString> FilesModel::getFileList() { return files; }
