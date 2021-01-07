#ifndef FILESYSTEMCONTROLLER_H
#define FILESYSTEMCONTROLLER_H

#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <boost/filesystem.hpp>
#include <boost/process.hpp>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>


namespace fs = boost::filesystem;
namespace pt = boost::property_tree;
namespace json = boost::property_tree::json_parser;
namespace proc = boost::process;

class FileSystemController
{
private:
    static FileSystemController* fsc;
    FileSystemController();
    std::string root;
    std::string ISE_path;    
public:
    static FileSystemController* getInstance();
    void resetFiles(std::string& directory);
    void executeImplementCommand(std::string& fpga_id, std::string& seconds);    
};

#endif // FILESYSTEMCONTROLLER_H
