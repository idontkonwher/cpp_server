//
// Created by idontkonwher on 2022/7/12.
//

#ifndef SERVER_SERVER_H
#define SERVER_SERVER_H

#include <memory>
#include "Channel.h"
#include "EventLoop.h"
#include "EventLoopThreadPool.h"

class Server {
public:
    //传入mainLoop
    Server(EventLoop *loop, int threadNum, int port);
    ~Server() {}
    EventLoop *getLoop() const { return loop_; }
    void start();
    void handNewConn();
    void handThisConn() { loop_->updatePoller(acceptChannel_); }

private:
    EventLoop *loop_;
    int threadNum_;
    std::unique_ptr<EventLoopThreadPool> eventLoopThreadPool_;
    bool started_;
    std::shared_ptr<Channel> acceptChannel_;
    int port_;
    int listenFd_;
    static const int MAXFDS = 100000;
};


#endif //SERVER_SERVER_H
