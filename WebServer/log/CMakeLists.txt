cmake_minimum_required(VERSION 3.23)
set(LIB_SRC AppendFile.cpp AsyncLogging.cpp LogFile.cpp Logger.cpp LogStream.cpp)
add_library(libserver_log STATIC ${LIB_SRC})
set_target_properties(libserver_base PROPERTIES OUTPUT_NAME "server_log")