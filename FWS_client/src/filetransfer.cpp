#include "filetransfer.h"

FileTransfer::FileTransfer()
{

}


void FileTransfer::sendFiles(QVector<QString> files, std::string fpgaID) {
    QProcess p;
    QString cmd = "scp";
    QStringList args;
    for (auto f : files) {
        args << f << "emre@localhost:/media/SharedFile/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/build/fpga" + QString::fromStdString(fpgaID);
        p.start(cmd, args);
        p.waitForFinished();
        args.clear();
    }
}
