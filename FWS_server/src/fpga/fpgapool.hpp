#ifndef __FPGAPOOL_H_
#define __FPGAPOOL_H_

#include <vector>

#include "fpga.hpp"


class FPGAPool{
    private:
        std::vector<FPGA> pool;
    public:
        void initialize(std::vector<std::string> fpga_ids, std::string root, std::string ISE_path);
        FPGA* getFPGAbyID(int fpga_id);
};

#endif // __FPGAPOOL_H_
