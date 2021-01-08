#ifndef DTOINTERFACE_H
#define DTOINTERFACE_H

#include <string>

class DTOInterface {

protected:
    std::string data;


public:
    std::string getData() { return this->data; }
};

#endif // DTOINTERFACE_H
