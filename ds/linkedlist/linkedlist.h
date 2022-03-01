#ifndef LINKEDLIST_H
#define LINKEDLIST_H

extern const int UNDEFINED_NODE;
extern const int NODE_NOT_FOUND;
extern const int SUCCESS;

struct node {
    struct node * next;
    int data;
};

int init(struct node * n, int data);
int add(struct node * n, int data);
int delete(struct node * n, int pos, int * status);
int getData(struct node * n, int pos, int * status);
struct node * getNode(struct node * n, int pos, int * status);

#endif