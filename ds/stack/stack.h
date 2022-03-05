/**
 * @file stack.h
 * @author Rohan Verma (rohanvermaara@gmail.com)
 * @version 0.1
 * @date 2022-03-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef STACK_H
#define STACK_H

extern const int STACK_SUCCESS;
extern const int STACK_NULL_POINTER_ERROR;

struct node {
    struct node * next;
    int data;
};

void stack_init(struct node ** n, int data, int * status);
void stack_push(struct node ** n, int data, int * status);
int stack_peek(struct node ** n, int * status);
int stack_pop(struct node ** n, int * status);

#endif