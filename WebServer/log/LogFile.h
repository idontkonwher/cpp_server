//
// Created by idontkonwher.
//

#ifndef SERVER_LOGFILE_H
#define SERVER_LOGFILE_H
#include <memory>
#include <string>
#include <mutex>
#include "AppendFile.h"
#include "../base/NonCopyable.hpp"


// TODO 提供自动归档功能
class LogFile : noncopyable {
public:
    // 每被append flushEveryN次，flush一下，会往文件写，只不过，文件也是带缓冲区的
    LogFile(const std::string& basename, int flushEveryN = 1024);
    ~LogFile();

    void append(const char* logline, int len);
    void flush();
    bool rollFile();

private:
    void append_unlocked(const char* logline, int len);

    const std::string basename_;
    const int flushEveryN_;

    int count_;
    std::unique_ptr<std::mutex> mutex_;
    std::unique_ptr<AppendFile> file_;
};


#endif //SERVER_LOGFILE_H
