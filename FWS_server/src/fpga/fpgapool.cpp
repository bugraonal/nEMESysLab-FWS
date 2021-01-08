#include "fpgapool.hpp"

void FPGAPool::initialize(std::vector<std::string> fpga_ids, std::string root, std::string ISE_path){
    pool.clear();
    for (auto& fpga_id : fpga_ids){
        pool.push_back(FPGA(fpga_id, root, ISE_path));
    }
}

FPGA* FPGAPool::getFPGAbyID(int fpga_id){
    return &pool[fpga_id-1];
}
