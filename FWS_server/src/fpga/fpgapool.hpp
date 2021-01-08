#ifndef __FPGAPOOL_H_
#define __FPGAPOOL_H_

#include <vector>

#include "fpga.hpp"
//#include "fpgaempty.hpp"

//FPGAEmpty* FPGAEmpty::fpgaE = nullptr;
class FPGAPool{
    private:
        //std::vector<FPGAAbstract> ready;
        std::vector<FPGA> pool;
        //FPGAEmpty *fpgaE;
    public:
        void initialize(std::vector<std::string> fpga_ids, std::string root, std::string ISE_path);
        FPGA* checkOut(int fpga_id);
        //void checkIn(int fpga_id);
};

#endif // __FPGAPOOL_H_
