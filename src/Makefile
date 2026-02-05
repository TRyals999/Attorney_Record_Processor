# Compiler and flags
CC = gcc
CFLAGS = -Wall -g

# Default target
all: attorney_processor

# Link object files into final executable
attorney_processor: main.o lawyer.o
	$(CC) $(CFLAGS) -o processor main.o lawyer.o

# Compile main.c into main.o
main.o: main.c lawyer.h
	$(CC) $(CFLAGS) -c main.c

# Compile lawyer.c into lawyer.o
lawyer.o: lawyer.c lawyer.h
	$(CC) $(CFLAGS) -c lawyer.c

# Clean up build files
clean:
	rm -f *.o attorney_processor
