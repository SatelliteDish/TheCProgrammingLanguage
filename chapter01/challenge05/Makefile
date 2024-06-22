CC = gcc
CFLAGS = -Wall -Wextra -g

CFILES = reverseCToFTable.c
OBJECTS = reverseCToFTable.o

BINARY = ReverseToFTable

all: ${BINARY}

$(BINARY): $(OBJECTS)
	@$(CC) -o $@ $^

%.o: %.c
	@$(CC) $(CFLAGS) -c -o $@ $^

clean: ${BINARY}
	rm -rf *.o
