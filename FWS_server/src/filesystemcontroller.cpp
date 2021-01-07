#include "filesystemcontroller.h"

FileSystemController::FileSystemController()
{

}


FileSystemController* FileSystemController::getInstance(){
    if(fsc == nullptr)
        fsc = new FileSystemController();

    return fsc;
}
