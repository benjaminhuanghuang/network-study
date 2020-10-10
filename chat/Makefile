C      = gcc
FLAGS  = -Wall -std=c11 -g


all: server client

clean:
	rm -f p1 p2 p3 p4

server: server.c
	$(C) $(FLAGS) server.c -o server.exe

client: client.c
	$(C) $(FLAGS) client.c -o client.exe



