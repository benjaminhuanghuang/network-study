
计算机硬件有两种储存数据的方式：大端字节序（big endian）和小端字节序（little endian）。

举例来说，数值0x2211使用两个字节储存：高位字节是0x22，低位字节是0x11。

大端字节序：高位字节在前，低位字节在后，这是人类读写数值的方法。
小端字节序：低位字节在前，高位字节在后，即以0x1122形式储存。


为什么会有小端字节序？答案是，计算机电路先处理低位字节，效率比较高，因为计算都是从低位开始的。所以，计算机的内部处理都是小端字节序。

但是，人类还是习惯读写大端字节序。所以，除了计算机的内部处理，其他的场合几乎都是大端字节序，比如网络传输和文件储存


网络字节顺序是TCP/IP中规定好的一种数据表示格式，它与具体的CPU类型、操作系统等无关，从而可以保证数据在不同主机之间传输时能够被正确解释。
网络字节顺序采用big endian（大端）排序方式。

网络字节顺序NBO（Network Byte Order）与主机字节顺序（HBO，Host Byte Order）之间的转换函数：
```
  # 32 bits
  htonl()--"Host to Network Long"
  ntohl()--"Network to Host Long"

  # 16 bits
  htons()--"Host to Network Short"
  ntohs()--"Network to Host Short"   
``` 

192.168.190.134

to binary (little endian)
11000000.10101000.10111110.10000110

to unsigned int
3232284294

to NBO (little endian)
10000110 10111110 10101000 11000000

to unsinged int
2260641984


