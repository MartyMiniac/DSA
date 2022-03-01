CC = gcc
CFLAGS = -Wall -g
TARGET = app
OBJS = Searching.o LinearSearch.o BinarySearch.o JumpSearch.o

all:
	$(info Enter a recipe to run like "Make LinearSearch")
	$(info All the executables will be named as app.exe)

Searching.o: Searching.c
	$(CC) $(CFLAGS) -c Searching.c

LinearSearch: Searching.o LinearSearch.c
	$(CC) $(CFLAGS) -c LinearSearch.c
	$(CC) $(CFLAGS) -o $(TARGET) Searching.o LinearSearch.o

BinarySearch: Searching.o BinarySearch.c
	$(CC) $(CFLAGS) -c BinarySearch.c
	$(CC) $(CFLAGS) -o $(TARGET) Searching.o BinarySearch.o

JumpSearch: Searching.o JumpSearch.c
	$(CC) $(CFLAGS) -c JumpSearch.c
	$(CC) $(CFLAGS) -o $(TARGET) Searching.o JumpSearch.o

clean:
	del $(OBJS)