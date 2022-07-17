//
// Created by idontkonwher.
//
#include "EventLoopThread.h"
#include <functional>

EventLoopThread::EventLoopThread()
: loop_(NULL),
  exiting_(false),
  thread_(thread(std::bind(&EventLoopThread::threadFunc, this))),
  mutex_(){}

EventLoopThread::~EventLoopThread() {
  exiting_ = true;
  if (loop_ != NULL) {
    loop_->quit();
    thread_.join();
  }
}

EventLoop* EventLoopThread::startLoop() {
    //线程构造即启动
    //该函数由main_loop 调用
//  assert(!thread_.started());
//  thread_.start();
    {
      unique_lock<mutex> lock(mutex_);
      // 一直等到threadFun在Thread里真正跑起来
      cond_.wait(lock, [this]() ->bool{
          return loop_;
      });
    }
    return loop_;
}

void EventLoopThread::threadFunc() {
    EventLoop loop;
    {
      unique_lock<mutex> lock(mutex_);
      loop_ = &loop;
      cond_.notify_one();
    }
    loop.loop();
    // assert(exiting_);
    loop_ = NULL;
}