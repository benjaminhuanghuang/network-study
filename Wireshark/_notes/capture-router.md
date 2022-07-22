


# Caputre package on windows

## Find IP of router
- windows
```
  ipconfig
```
The IP is the IP of Default Gateway

- mac

  Syetem Preferences -> Network -> WiFi -> Advanced -> TCP/IP
  


Use plink connect to router, use tcpdump capture tcp and udp package expect port 22, then send to wireshark

```
plink.exe -ssh 192.168.1.1 -l admin -pw admin -batch "/usr/sbin/tcdump '(tcp or udp)' and port not 22 -s 0 -U -n -i any -w -" | wireshark.exe -k -i
```


tcpdump
```
-U write to disk

-c package count

-n conver domain to IP

-i any   capture any interface 

-s length

-w -   export package to std

```

wireshark
```
-k start wireshark immediately

-i - read input from std input
```