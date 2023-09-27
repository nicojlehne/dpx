CFLAGS = -Os -s -fno-ident -fno-asynchronous-unwind-tables

SRC=$(wildcard *.c)

all: clean
	gcc -o ./bin/dpx ./src/dpx.c $(CFLAGS)

clean:
	rm -f ./bin/dpx

run:
	./bin/dpx 2