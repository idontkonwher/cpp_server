//
// Created by idontkonwher.
//

#ifndef SERVER_APPENDFILE_H
#define SERVER_APPENDFILE_H
#include <string>
#include <chrono>
#include "../base/NonCopyable.hpp"


class AppendFile : noncopyable {
public:
    explicit AppendFile(std::string filename);
    ~AppendFile();
    // append 会向文件写
    void append(const char *logline, const size_t len);
    void flush();

private:
    size_t write(const char *logline, size_t len);
    FILE *fp_;
    char buffer_[64 * 1024];
};


#endif //SERVER_APPENDFILE_H
