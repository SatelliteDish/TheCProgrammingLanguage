CC = gcc
CFLAGS = -Wall -Wextra -g

CFILES = showWhitespace.c
OBJECTS = showWhitespace.o

BINARY = ShowWhitespace

all: ${BINARY}

${BINARY}: ${OBJECTS}
	@${CC} -o $@ $^

%.o: %.c
	@${CC} ${CFLAGS} -c -o $@ $^

clean: ${BINARY}
	rm -rf *.o
