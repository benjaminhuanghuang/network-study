
## Open Systems Interconnection model (OSI model)
It was standardized in 1977 and is published as ISO 7498

- Physical: This is the level of physical communication in the real world.: voltage levels, radio frequency of Wi-Fi

- Data Link : It deals with protocols for directly communicating between two nodes. It defines how a direct message between nodes starts and ends (framing), error detection and correction, and flow control.

- Network layer : The network layer provides the methods to transmit data sequences (called packets) between nodes in **different networks**. It provides methods to route packets from one node to another (without a direct physical connection) by transferring through many intermediate nodes.

- Transport layer: At this layer, we have methods to reliably deliver variable length data between hosts. These methods deal with splitting up data, recombining it, ensuring data arrives in order, and so on: The Transmission Control Protocol (TCP) and User Datagram Protocol (UDP)

- Session layer: This layer builds on the transport layer by adding methods to establish, checkpoint, suspend, resume, and terminate dialogs.

- Presentation layer: This is the lowest layer at which data structure and presentation for an application are defined. Concerns such as data encoding, serialization, and encryption are handled here.

- Application layer: The applications that the user interfaces with (for example, web browsers and email clients) exist here. 


It should be noted that chunks of data are often referred to by different names depending on the OSI layer they're on. 
A data unit on layer 2 is called a **frame**, since layer 2 is responsible for framing messages. 
A data unit on layer 3 is referred to as a **packet**
while a data unit on layer 4 is a **segment** if it is part of a TCP connection or a **datagram** if it is a UDP message

## TCP/IP layer model
- Network Access layer (1): On this layer, physical connections and data framing happen. 

- Internet layer (2): This layer deals with the concerns of addressing packets and routing them over multiple interconnection networks. It's at this layer that an IP address is defined.

- Host-to-Host layer (3): The host-to-host layer provides two protocols, TCP and UDP. These protocols address concerns such as data order, data segmentation, network congestion, and error correction.

- Process/Application layer (4): The process/application layer is where protocols such as HTTP, SMTP, and FTP are implemented. 

## Internet Protocal
- IPv4 uses 32-bit addresses, which limits it to addressing no more than 2^32 or 4,294,967,296 systems. (4.3 billion)

- IPv6 was designed to replace IPv4 and has been standardized by the Internet Engineering Task Force (IETF) since 1998. It uses a 128-bit address, which allows it to address a theoretical 2^128 about 3.4 * 10^38 addresses.”


## IP Address
- loopback address
It is the address essentially means establish a connection to myself
IPv6 loopback address is 127.0.0.1. 
IPv6 loopback address is ::1

- Classless Inter-Domain Routing (CIDR) notation
```
10.0.0.0/8
172.16.0.0/12
192.168.0.0/16
```
10.0.0.0/8 specifies that the first 8 bits of the 10.0.0.0 address are fixed, the first 8 bits being just the first 10. part; the remaining 0.0.0 part of the address can be anything

- IPv6 to IPv4
Dual-stack implementations also recognize a special class of IPv6 address that map directly to an IPv4 address.

These reserved addresses start with 80 zero bits, and then by 16 one bits, followed by the 32-bit IPv4 address. Using CIDR notation, this block of address is ::ffff:0:0/96.”

