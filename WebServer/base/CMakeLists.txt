cmake_minimum_required(VERSION 3.13)
set(LIB_SRC NonCopyable.hpp Util.cpp)
add_library(libserver_base STATIC ${LIB_SRC})
set_target_properties(libserver_base PROPERTIES OUTPUT_NAME "server_base")