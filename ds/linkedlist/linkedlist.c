#include <stdlib.h>
#include <stdio.h>

#include "linkedlist.h"
#define NULL ((void *)0)

const int UNDEFINED_NODE = -1;
const int NODE_NOT_FOUND = -2;
const int SUCCESS = 0;

int init(struct node * n, int data) {
    if(n==NULL) {
        return UNDEFINED_NODE;
    }
    
    n->next = NULL;
    n->data = data;

    return SUCCESS;
}
int add(struct node * n, int data) {
    if(n==NULL) {
        return UNDEFINED_NODE;
    }
    while(n->next!=NULL) {
        n=n->next;
    }

    n->next = malloc(sizeof(struct node));
    n->next->data=data;
    n->next->next=NULL;

    return SUCCESS;
}
int getData(struct node * n, int pos, int * status) {
    *status = SUCCESS;
    if(n==NULL) {
        *status = UNDEFINED_NODE;
        return 0;
    }
    
    for(int i=0; i<pos && n!=NULL; i++) {
        n=n->next;
    }
    
    if(n==NULL) {
        *status = NODE_NOT_FOUND;
        return 0;
    }
    else {
        return n->data;
    }
}
struct node * getNode(struct node * n, int pos, int * status) {
    *status = SUCCESS;
    if(n==NULL) {
        *status = UNDEFINED_NODE;
        return NULL;
    }
    
    for(int i=0; i<=pos && n!=NULL; i++) {
        n=n->next;
    }
    
    if(n==NULL) {
        *status = NODE_NOT_FOUND;
        return NULL;
    }
    else {
        return n;
    }
}