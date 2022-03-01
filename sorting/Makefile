CC = gcc
CFLAGS = -Wall -g
TARGET = app
OBJS = Sorting.o SelectionSort.o BubbleSort.o InsertionSort.o RecursiveBubbleSort.o RecursiveInsertionSort.o

all:
	$(info Enter a recipe to run like "Make SelectionSort")
	$(info All the executables will be named as app.exe)

Sorting.o: Sorting.c
	$(CC) $(CFLAGS) -c Sorting.c

SelectionSort: Sorting.o SelectionSort.c
	$(CC) $(CFLAGS) -c SelectionSort.c
	$(CC) $(CFLAGS) -o $(TARGET) Sorting.o SelectionSort.o

BubbleSort: Sorting.o BubbleSort.c
	$(CC) $(CFLAGS) -c BubbleSort.c
	$(CC) $(CFLAGS) -o $(TARGET) Sorting.o BubbleSort.o

RecursiveBubbleSort: Sorting.o RecursiveBubbleSort.c
	$(CC) $(CFLAGS) -c RecursiveBubbleSort.c
	$(CC) $(CFLAGS) -o $(TARGET) Sorting.o RecursiveBubbleSort.o

InsertionSort: Sorting.o InsertionSort.c
	$(CC) $(CFLAGS) -c InsertionSort.c
	$(CC) $(CFLAGS) -o $(TARGET) Sorting.o InsertionSort.o

RecursiveInsertionSort: Sorting.o RecursiveInsertionSort.c
	$(CC) $(CFLAGS) -c RecursiveInsertionSort.c
	$(CC) $(CFLAGS) -o $(TARGET) Sorting.o RecursiveInsertionSort.o

clean:
	del $(OBJS)