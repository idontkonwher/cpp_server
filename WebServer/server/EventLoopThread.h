//
// Created by idontkonwher.
//
#ifndef SERVER_EVENTLOOPTHREAD_H
#define SERVER_EVENTLOOPTHREAD_H

#include <thread>
#include <condition_variable>
#include <mutex>
#include "EventLoop.h"
#include "../base/NonCopyable.hpp"


class EventLoopThread : noncopyable {
 public:
  EventLoopThread();
  ~EventLoopThread();
  EventLoop* startLoop();

 private:
  void threadFunc();
  EventLoop* loop_;
  bool exiting_;
  thread thread_;
  mutex mutex_;
//  unique_lock<mutex> lock_;
  condition_variable cond_;
};
#endif //SERVER_EVENTLOOPTHREAD_H