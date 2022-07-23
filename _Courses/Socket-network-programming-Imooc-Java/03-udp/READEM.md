# User Datagram Protocol
UDP 可以单播, 组播, 广播

- DNS
- TFTP
- SNMP
- Video, Audio


## Format
![](./udp-header.png)

- UDP 最大长度
length 16 bits , 最多可以表示 65535 bits
还要减去 header 8字节 = 65507 bytes


## UDP API
- DatagramSocket()   不用指定IP和Port
- DatagramSocket(int port)   不用指定IP和Port
- DatagramSocket(int port, InetAddress localAddr)

- receive(DatagramPacket d)
- send(DatagramPacket d)

- DatagramPacket(byte[] buf, int offset, int length, InetAddress address, int port)
- setData(byte[] buf, int offset, int length)

