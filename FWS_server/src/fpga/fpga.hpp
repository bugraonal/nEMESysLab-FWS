#ifndef __FPGA_H_
#define __FPGA_H_

#include "fpgaabstract.hpp"

// #include <iostream>
// #include <string>
// #include <boost/filesystem.hpp>
// #include <boost/process.hpp>

// namespace fs = boost::filesystem;
// namespace proc = boost::process;

class FPGA {// : public FPGAAbstract {

    private:
        int id;
        std::string path;
        std::string ISE_path;    
        
    public:
        FPGA(std::string id, std::string root, std::string ISE_path);
        void resetFiles();
        void rebuildProject(std::string seconds);    
        void synthesizeDesign(std::string seconds);
        void implementDesign(std::string seconds);
        void generateProgrammingFile(std::string seconds);
        int getID();
};


#endif // __FPGA_H_
