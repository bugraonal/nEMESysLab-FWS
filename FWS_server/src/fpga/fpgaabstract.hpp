#ifndef __FPGAABSTRACT_H_
#define __FPGAABSTRACT_H_

#include <iostream>
#include <string>
#include <boost/filesystem.hpp>
#include <boost/process.hpp>

namespace fs = boost::filesystem;
namespace proc = boost::process;

class FPGAAbstract {

private:
    int id;
    std::string path;
    std::string ISE_path;    

public:
    virtual void resetFiles();
    virtual void rebuildProject(std::string seconds);    
    virtual void synthesizeDesign(std::string seconds);
    virtual void implementDesign(std::string seconds);
    virtual void generateProgrammingFile(std::string seconds);    
};


#endif // __FPGA_H_
