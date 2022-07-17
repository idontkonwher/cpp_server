cmake_minimum_required(VERSION 3.23)
project(server)

set(CMAKE_CXX_STANDARD 14)
find_package(PkgConfig REQUIRED)
pkg_check_modules(LIBAV REQUIRED IMPORTED_TARGET
        libavdevice
        libavfilter
        libavformat
        libavcodec
        libswresample
        libswscale
        libavutil
        )
include_directories(/usr/include/ffmpeg)
add_subdirectory(WebServer)