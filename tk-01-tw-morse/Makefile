# Makefile for 01_block

CC = gcc
FILES = calculatesystemstate.o chartomorse.o createenvironmentdata.o morsetobinary.o  main.o
OUT_EXE = codecool
CFLAGS=-I.
DEPS = selfprot.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS) -g

all: $(FILES)
	$(CC) -o $(OUT_EXE) $^ $(CFALGS) -lm -g

clean:
	rm -f *.o core