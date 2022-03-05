/**
 * @file main.c
 * @author Rohan Verma (rohanvermaara@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-03-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

#include "linkedlist.h"

int main() {
    struct node n;
    if(init(&n, 1)==SUCCESS) {
        printf("Linked List Initialized Successfully\n");
    }
    else {
        printf("Error Initializing LinkedList\n");
        return 1;
    }

    add(&n, 2);
    add(&n, 3);
    add(&n, 4);
    add(&n, 5);
    int status;
    printf("data at pos 3 = %d\n", getData(&n, 3, &status));
    printf("Status code : %d\n", status);
    printf("data at pos 2 = %d\n", getNode(&n, 2, &status)->data);
    printf("Status code : %d\n", status);
}