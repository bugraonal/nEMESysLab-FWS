#ifndef FILELIST_H
#define FILELIST_H

#include <QWidget>
#include <QListWidget>
#include <QGridLayout>
#include <QLabel>
#include <QPushButton>
#include <QFileDialog>

#include "filesmodel.h"

class FileList : public QWidget
{
    Q_OBJECT
public:
    explicit FileList(QWidget *parent = nullptr);
    void setFilesModel(FilesModel *filesModel);

private:

    QGridLayout *layout;
    FilesModel *filesModel;

    void addFile();
    void removeFile();

    QListWidget *listView;
    QPushButton *addButton;
    QPushButton *removeButton;
    QLabel *filesLabel;


signals:

};

#endif // FILELIST_H
