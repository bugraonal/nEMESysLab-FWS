#include "filesystemcontroller.hpp"

FileSystemController::FileSystemController()
{ 
  pt::ptree pt;
  json::read_json("config.json" , pt);
  std::string root_path = pt.get<std::string>("root");
  std::string ise_path = pt.get<std::string>("ISE");
  this->root = root_path;
  this->ISE_path = ise_path;
}

FileSystemController* FileSystemController::getInstance()
{
  if(fsc == nullptr)
    fsc = new FileSystemController();

  return fsc;
}

std::string FileSystemController::getRoot(){
  return root;
}

std::string FileSystemController::getISE_path(){
  return ISE_path;
}
