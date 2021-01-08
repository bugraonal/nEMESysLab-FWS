#ifndef __SERVERHANDLER_H_
#define __SERVERHANDLER_H_

#include "rpc/server.h"


class ServerHandler
{

    private:
        static ServerHandler *sh; // Server Handler
        //rpc::server srv;
        ServerHandler();
    public:
        static ServerHandler *getInstance();
};

#endif // __SERVER_H_
