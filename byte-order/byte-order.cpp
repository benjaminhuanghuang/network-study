#include <stdio.h>
#include <sys/socket.h>

int main(int argc, char *argv[]){
  /*
    192.168.190.134
    to binary (little endian)
    11000000.10101000.10111110.10000110

    to unsigned int
    3232284294
  */
  printf("%u\n", htonl(3232284294));
}