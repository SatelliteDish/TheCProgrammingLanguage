CC = gcc
CFLAGS = -Wall -Wextra -g

CFILES = cToFTable.c
OBJECTS = cToFTable.o

BINARY = cToFTable

all: ${BINARY}

$(BINARY): $(OBJECTS)
	@$(CC) -o $@ $^

%.o: %.c
	@$(CC) $(CFLAGS) -c -o $@ $^

clean: ${BINARY}
	rm -rf *.o
