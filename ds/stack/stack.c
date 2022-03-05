/**
 * @file stack.c
 * @author Rohan Verma (rohanvermaara@gmail.com)
 * @version 0.1
 * @date 2022-03-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdlib.h>
#include "stack.h"

const int STACK_SUCCESS=0;
const int STACK_NULL_POINTER_ERROR=-1;

void setStatus(int * status, int value);
void stack_init(struct node ** n, int data, int * status) {
    struct node * new = malloc(sizeof(struct node));
    *n=new;
    new->next=NULL;
    new->data=data;
    setStatus(status, STACK_SUCCESS);
}

void stack_push(struct node ** n, int data, int * status) {
    struct node * new = malloc(sizeof(struct node));
    new->next=*n;
    new->data=data;
    *n=new;
    setStatus(status, STACK_SUCCESS);
}

int stack_peek(struct node ** n, int * status) {
    if((*n)==NULL) {
        setStatus(status, STACK_NULL_POINTER_ERROR);
        return -1;
    }
    setStatus(status, STACK_SUCCESS);
    return (*n)->data;
}

int stack_pop(struct node ** n, int * status) {
    if((*n)==NULL) {
        setStatus(status, STACK_NULL_POINTER_ERROR);
        return -1;
    }
    int data=(*n)->data;
    *n=(*n)->next;
    setStatus(status, STACK_SUCCESS);
    return data;
}



void setStatus(int * status, int value) {
    if(status!=NULL) {
        *status=value;
    }
}