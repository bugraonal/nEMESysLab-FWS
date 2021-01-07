#ifndef FILESYSTEMCONTROLLER_H
#define FILESYSTEMCONTROLLER_H

#include <cstdio>
#include <boost/filesystem.hpp>

namespace fs = boost::filesystem;

class FileSystemController
{
private:
    static FileSystemController* fsc;
    FileSystemController();
public:
    static FileSystemController* getInstance();
};

#endif // FILESYSTEMCONTROLLER_H
