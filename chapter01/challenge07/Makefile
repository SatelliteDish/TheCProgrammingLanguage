CC = gcc
CFLAGS = -Wall -Wextra -g

CFILES = printEOF.c
OBJECTS = printEOF.o

BINARY = PrintEOF

all: ${BINARY}

${BINARY}: ${OBJECTS}
	@${CC} -o $@ $^

%.o: %.c
	@${CC} ${CFLAGS} -c -o $@ $^

clean: ${BINARY}
	rm -rf *.o
