Unix domain socket 主要用于同一主机上的进程间通信。

不需要基于网络协议，主要是基于文件系统的.

与主机间的进程通信不同，它不是通过 "IP地址 + TCP或UDP端口号" 的方式进程通信，而是使用 socket 类型的文件来完成通信

UNIX domain socket 与网络 socket 编程最明显的不同在于地址格式不同，用结构体 sockaddr_un 表示，网络编程的 socket 地址是 IP 地址加端口号，而 UNIX domain socket 的地址是一个 socket 类型的文件在文件系统中的路径，这个 socket 文件由 bind() 调用创建，如果调用 bind() 时该文件已存在，则 bind() 错误返回。


我们最多看到Unix domain socket的地方可能就是docker了，docker需要和实体机进行快速的数据传输和信息交换，
一般情况下UDS的文件是以.socket结尾的，我们可以在/var/run目录下面使用下面的命令来查找：
```
find . -name "*.sock"
```