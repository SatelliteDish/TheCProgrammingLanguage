CC = gcc
CFLAGS = -Wall -Wextra -g

CFILES = countWhitespace.c
OBJECTS = countWhitespace.o

BINARY = CountWhitespace

all: ${BINARY}

${BINARY}: ${OBJECTS}
	@${CC} -o $@ $^

%.o: %.c
	@${CC} ${CFLAGS} -c -o $@ $^

clean: ${BINARY}
	rm -rf *.o
