/**
 * @file main.c
 * @author Rohan Verma (rohanvermaara@gmail.com)
 * @brief a first in first out datastructure with primitives of stack_push, stack_peek and stack_pop
 * @version 0.1
 * @date 2022-03-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

#include "stack.h"

int main() {
    struct node * n;
    int status;
    stack_init(&n, 1, &status);
    if(status==STACK_SUCCESS) {
        printf("Stack Initialized Successfully\n");
    }
    stack_push(&n, 2, &status);
    stack_push(&n, 3, &status);
    stack_push(&n, 4, &status);
    stack_push(&n, 5, &status);

    int data = stack_peek(&n, &status);
    if(status==STACK_SUCCESS) {
        printf("data peek : %d\n", data);
    }
    else {
        printf("NULL Pointer Exception Occurred");
    }

    stack_pop(&n, NULL);
    stack_pop(&n, NULL);
    stack_pop(&n, NULL);
    data = stack_pop(&n, &status);
    if(status==STACK_SUCCESS) {
        printf("data pop: %d\n", data);
    }
    else {
        printf("NULL Pointer Exception Occurred");
    }

    return 0;
}