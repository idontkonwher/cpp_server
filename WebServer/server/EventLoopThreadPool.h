//
// Created by idontkonwher.
//
#ifndef SERVER_EVENTLOOPTHREADPOOL_H
#define SERVER_EVENTLOOPTHREADPOOL_H
#include <memory>
#include <vector>
#include "EventLoopThread.h"
#include "../log/Logger.h"
#include "../base/NonCopyable.hpp"


class EventLoopThreadPool : noncopyable {
 public:
  EventLoopThreadPool(EventLoop* baseLoop, int numThreads);

  ~EventLoopThreadPool() { LOG << "~EventLoopThreadPool()"; }
  void start();

  EventLoop* getNextLoop();

 private:
  EventLoop* baseLoop_;
  bool started_;
  int numThreads_;
  int next_;
  std::vector<std::shared_ptr<EventLoopThread>> threads_;
  std::vector<EventLoop*> loops_;
};
#endif //SERVER_EVENTLOOPTHREADPOOL_H