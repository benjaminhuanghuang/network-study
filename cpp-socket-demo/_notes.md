## Reference
- [网络通信socket](https://freecplus.net/0047ac4059b14d52bcc1d4df6ae8bb83.html)
- [CentOS7 配置防火墙](https://freecplus.net/9cdf4fa7397f4b98976c176894295ab6.html)


socket提供了stream socket 和数据报（datagram）socket 两种通信机制




## Operation on Linux
```
  ./server 5005


  ./client 127.0.0.1 5005

  # check firewall
  sudo firewall-cmd --state

  # check firewall port
  sudo firewall-cmd --list-port

  # 开放5000-5500之间的端口
  firewall-cmd --zone=public --add-port=5000-5500/tcp --permanent

  # 移去5000-5500之间的端口
  firewall-cmd --zone=public --remove-port=5000-5500/tcp --permanent

  firewall-cmd --reload

  # close
  systemctl stop firewalld
```

## debug
```
  gdb server
  (gdb) set args 5005
  (gdb) b 23
  (gdb) run
  (gdb) n
  (gdb) p listenfd
```


```
  gdb client
  (gdb) set args 192.168.0.134 5005
  (gdb) b 23
  (gdb) run
  (gdb) p sockfd
```