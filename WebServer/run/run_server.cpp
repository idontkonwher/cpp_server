//
// Created by idontkonwher.
//
#include <iostream>
#include <getopt.h>
#include <string>
#include "../server/EventLoop.h"
#include "../server/Server.h"
int main(int argc, char *argv[])
{
    std::cout<<"server starting..."<<std::endl;
    int threadNum = 4;
    int port = 80;
    std::string logPath = "./WebServer.log";
    // parse args
    int opt;
    const char *str = "t:l:p:";
    while ((opt = getopt(argc, argv, str)) != -1) {
        switch (opt) {
            case 't': {
                threadNum = atoi(optarg);
                break;
            }
            case 'l': {
                logPath = optarg;
                if (logPath.size() < 2 || optarg[0] != '/') {
                    printf("logPath should start with \"/\"\n");
                    abort();
                }
                break;
            }
            case 'p': {
                port = atoi(optarg);
                break;
            }
            default:
                break;
        }
    }
    Logger::setLogFileName(logPath);
    EventLoop mainLoop;
    Server myHTTPServer(&mainLoop, threadNum, port);
    myHTTPServer.start();
    std::cout<<"server started successfully!"<<std::endl;
    mainLoop.loop();
    return 0;
}