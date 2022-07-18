## CPP Server
1. 项目用于学习 muduo，代码参考 https://github.com/qinguoyi/TinyWebServer
    >网络编程基础可参阅《Linux高性能服务器编程》
   > 
    >muduo原理可参参阅《Linux 多线程服务端编程 使用muduo C++ 网络库》
2. 线程、同步等操作改用STL库中的实现。
    >STL多线程可参阅《C++并发编程实战 第二版》
3. docker 使用
    ```
   docker build -t my_server .
   docker run -it -d -p 80:80 -v {网站根目录}:/root/server/bin/root my_server
   ```