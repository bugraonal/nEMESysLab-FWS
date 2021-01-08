#include "filelist.h"

FileList::FileList(QWidget *parent) : QWidget(parent)
{
    layout = new QGridLayout;
    listView = new QListWidget;
    addButton = new QPushButton("Add...");
    removeButton = new QPushButton("Remove");
    filesLabel = new QLabel("Files");

    QFrame *buttonsFrame = new QFrame();
    QGridLayout *buttonsLayout = new QGridLayout;
    buttonsFrame->setLayout(buttonsLayout);


    layout->addWidget(filesLabel, 0, 0);
    layout->addWidget(listView, 1, 0);
    buttonsLayout->addWidget(addButton, 0, 0);
    buttonsLayout->addWidget(removeButton, 0, 1);
    layout->addWidget(buttonsFrame, 2, 0);


    connect(addButton, &QPushButton::clicked, this, &FileList::addFile);
    connect(removeButton, &QPushButton::clicked, this, &FileList::removeFile);

    setLayout(layout);

}

void FileList::setFilesModel(FilesModel *filesModel) { this-> filesModel = filesModel; }

void FileList::addFile() {
    QFileDialog *diag = new QFileDialog();
    diag->setNameFilter("Verilog & Contraints (*.v *.sv *.ucf)");
    diag->setFileMode(QFileDialog::ExistingFiles);
    if (diag->exec()) {
        for (auto f : diag->selectedFiles()) {
            filesModel->addFile(f);
            listView->addItem(f);
        }
    }

}

void FileList::removeFile() {
    filesModel->removeFile(listView->currentItem()->text());
    delete listView->takeItem(listView->row(listView->currentItem()));

}
