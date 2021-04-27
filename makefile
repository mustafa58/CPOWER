OBJC = main.o power.o
CC=gcc
CFLAGS = -Wall -O2
power: main.o power.o
	gcc main.o power.o -o power
main.o: main.c power.h
	gcc -c main.c
power.o: power.c
	gcc -c power.c
rebuild: power.c main.c power.h
	make clean; make
clean:
	rm -f ${OBJC} power
