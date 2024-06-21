CC = gcc
CFLAGS = -Wall -Wextra -g
CFILES = fToCTable.c
OBJECTS = fToCTable.o
BINARY = fToCTable

all: $(BINARY)

$(BINARY): $(OBJECTS)
	@$(CC) -o $@ $^

%.o: %.c
	@$(CC) $(CFLAGS) -c -s $@ $^

clean: ${BINARY}
	rm -rf *.o
