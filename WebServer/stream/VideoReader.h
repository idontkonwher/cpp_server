//
// Created by idontkonwher.
//

#ifndef SERVER_VIDEOREADER_H
#define SERVER_VIDEOREADER_H
#include "../log/Logger.h"
#include <string>
#include <ffmpeg/libavcodec/avcodec.h>

class VideoReader {
public:
    VideoReader(std::string file_name_):file_name_(file_name_){}

private:
    std::string file_name_;
};


#endif //SERVER_VIDEOREADER_H
