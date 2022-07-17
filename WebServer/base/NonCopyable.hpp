//
// Created by idontkonwher.
//

#ifndef SERVER_NONCOPYABLE_HPP
#define SERVER_NONCOPYABLE_HPP
class noncopyable {
protected:
    noncopyable() {}
    ~noncopyable() {}

private:
    noncopyable(const noncopyable&) = delete;
    const noncopyable& operator=(const noncopyable&) = delete;
};
#endif //SERVER_NONCOPYABLE_HPP
