CC = gcc
CFLAGS = -Wall -g
TARGET = app
OBJS = Sorting.o

all:
	$(info Enter a recipe to run like "Make SelectionSort")
	$(info All the executables will be named as app.exe)

Sorting.o: Sorting.c
	$(CC) $(CFLAGS) -c Sorting.c

SelectionSort: Sorting.o SelectionSort.c
	$(CC) $(CFLAGS) -c SelectionSort.c
	$(CC) $(CFLAGS) -o $(TARGET) Sorting.o SelectionSort.o


clean:
	del $(OBJS)