#include "fpgapool.hpp"

void FPGAPool::initialize(std::vector<std::string> fpga_ids, std::string root, std::string ISE_path){
    pool.clear();
    for (auto& fpga_id : fpga_ids){
        pool.push_back(FPGA(fpga_id, root, ISE_path));
        //pool.push_back((*fpgaE));
    }
}

FPGA* FPGAPool::checkOut(int fpga_id){
//    if (ready[fpga_id-1] != (FPGA) fpgaE){
//        pool[fpga_id-1] = ready[fpga_id-1];
//        ready[fpga_id-1] = (FPGA) fpgaE;
//    }
    return &pool[fpga_id-1];
}

//FPGA* FPGAPool::checkIn(int fpga_id){
//    if (pool[fpga_id-1] != (FPGA) fpgaE){
//        ready[fpga_id-1] = pool[fpga_id-1];
//        pool[fpga_id-1] = (FPGA) fpgaE;
//    }
//}
