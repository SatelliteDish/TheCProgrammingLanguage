CC = gcc
CFLAGS = -Wall -Wextra -g
CFILES = helloWorld.c
OBJECTS = helloWorld.o
BINARY = helloWorld

all: $(BINARY)

$(BINARY): $(OBJECTS)
	@$(CC) -o $@ $^

%.o: %.c
	@$(CC) $(CFLAGS) -c -s $@ $^

clean: $(BINARY)
	rm -rf *.o
