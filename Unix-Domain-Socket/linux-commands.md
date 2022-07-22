
socket文件不能通过普通的文件读写命令操作（比如说echo "xxx" > socket.file）它。
因为它是在网络层上面工作的。只能通过socket读写函数去操作它。


ncat实现了类似于cat命令的访问unix socket。-U指定了该文件是Unix域socket文件类型，
```
ncat -U /tmp/tbsocket1
```


ncat也可以通过映射socket文件到监听的端口上。
```
# 映射tcp的8080流量到unix socket
ncat -vlk 8080 -c 'ncat -U /tmp/tbsocket1'

# 通过curl发起http请求访问
curl http://localhost:8080
```

## 用socat 创建Unix Domain Sockets
```
socat unix-listen:/tmp/stream.sock,fork /dev/null&
socat unix-recvfrom:/tmp/datagram.sock,fork /dev/null&
```



## curl access unix socket
```
$ curl --unix-socket /tmp/nginx-status-server.sock http://localhost/nginx_status
```