CC = gcc
CFLAGS = -Wall -g
TARGET = app
OBJS = main.o stack.o

all: $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

stack.o: stack.c stack.h
	$(CC) $(CFLAGS) -c stack.c

clean:
	del $(OBJS)