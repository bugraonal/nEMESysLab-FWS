#ifndef FILESYSTEMCONTROLLER_H
#define FILESYSTEMCONTROLLER_H

#include <iostream>
#include <vector>
#include <string>
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
    void removeVerilogFiles(std::string directory);
};

#endif // FILESYSTEMCONTROLLER_H
