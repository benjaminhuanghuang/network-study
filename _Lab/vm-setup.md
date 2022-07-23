- NAT: 使用 VMnet8, 使vm和host 不在同一网段中

- bridge: 使用 VMnet0, 使vm和host 在同一网段中

- host-only: 使用 VMnet1, vm只能和host通信


## Check network settings
```
cd /etc/network

vim interfaces
```