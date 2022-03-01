CC = gcc
CFLAGS = -Wall -g
TARGET = app
OBJS = main.o linkedlist.o

all: $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

linkedlist.o: linkedlist.c
	$(CC) $(CFLAGS) -c linkedlist.c

main.o: main.c
	$(CC) $(CFLAGS) -c main.c


clean:
	del $(OBJS)