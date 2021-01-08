#ifndef __FPGAEMPTY_H_
#define __FPGAEMPTY_H_

#include "fpgaabstract.hpp"


class FPGAEmpty: public FPGAAbstract
{
    private:
        static FPGAEmpty *fpgaE;
        int id = -1;
        std::string path = "";
        std::string ISE_path = "";    
        FPGAEmpty();
        FPGAEmpty(std::string id, std::string root, std::string ISE_path);
        
    public:
        static FPGAEmpty* getInstance();
        void resetFiles();
        void rebuildProject(std::string seconds);    
        void synthesizeDesign(std::string seconds);
        void implementDesign(std::string seconds);
        void generateProgrammingFile(std::string seconds);
        int getID();

};

#endif // __FPGAEMPTY_H_
