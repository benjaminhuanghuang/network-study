C      = gcc
FLAGS  = -Wall -std=c11 -g


all: server client

clean:
	rm -f *.exe

server: server.c
	$(C) $(FLAGS) server.c -o server.exe

client: client.c
	$(C) $(FLAGS) client.c -o client.exe



