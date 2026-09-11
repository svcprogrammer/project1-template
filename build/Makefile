# Part II: complete this Makefile.
# Requirements are given in the handout.

CC = gcc
CFLAGS = -Wall -Wextra -g

# TODO: default target 'stats'

stats: main.o stats.o
	$(CC) $(CFLAGS) main.o stats.o -o stats

# TODO: rules for main.o and stats.o with correct header dependencies

main.o: main.c stats.h
	$(CC) $(CFLAGS) -c main.c -o main.o

stats.o: stats.c stats.h
	$(CC) $(CFLAGS) -c stats.c -o stats.o

# TODO: clean target

clean:
	rm -f main.o stats.o stats

.PHONY: clean
