CC = gcc
CFLAGS = -Wall -Wextra -g

CFILES = trimBlanks.c
OBJECTS = trimBlanks.o

BINARY = TrimBlanks

all: ${BINARY}

${BINARY}: ${OBJECTS}
	@${CC} -o $@ $^

%.o: %.c
	@${CC} ${CFLAGS} -c -o $@ $^

clean: ${BINARY}
	rm -rf *.o
