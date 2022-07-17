cmake_minimum_required(VERSION 3.23)
set(LIB_SRC Channel.cpp Epoll.cpp EventLoop.cpp EventLoopThread.cpp EventLoopThreadPool.cpp HttpData.cpp Server.cpp Timer.cpp)
add_library(libserver_server STATIC ${LIB_SRC})
set_target_properties(libserver_base PROPERTIES OUTPUT_NAME "server_server")