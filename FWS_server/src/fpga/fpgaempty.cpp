#include "fpgaempty.hpp"

FPGAEmpty::FPGAEmpty(){
  id = -1;
  path = "";
  ISE_path = "";
}

FPGAEmpty* FPGAEmpty::getInstance(){
  if (fpgaE == nullptr)
    fpgaE = new FPGAEmpty();
  return fpgaE;
}


FPGAEmpty::FPGAEmpty(std::string id, std::string root, std::string ISE_path){
}

void FPGAEmpty::resetFiles(){
}

void FPGAEmpty::rebuildProject(std::string seconds){
}

void FPGAEmpty::synthesizeDesign(std::string seconds){
}


void FPGAEmpty::implementDesign(std::string seconds){
}

void FPGAEmpty::generateProgrammingFile(std::string seconds){
}

int FPGAEmpty::getID(){
  return this->id;
}
