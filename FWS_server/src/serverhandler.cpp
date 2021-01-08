#include "serverhandler.hpp"

ServerHandler* ServerHandler::getInstance(){
    if(sh == nullptr)
        sh = new ServerHandler();

    return sh;
}

ServerHandler::ServerHandler(){
//    srv = rpc::server(8080);
//    
//    srv.bind("echo", [](){
//        
//    });
}
