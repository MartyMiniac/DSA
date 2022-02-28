/**
 * @file JumpSearch.c
 * @author Rohan Verma (rohanvermaara@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-02-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include "Searching.h"

#define ELEMENTS 11, 89, 406, 472, 570, 593, 670, 711, 738, 875
#define SEARCHELEMENTS 593
#define SIZE 10

int main() {
    int arr[] = {ELEMENTS};
    int se = SEARCHELEMENTS;
    int idx=-1;

    if((idx=JumpSearch(arr, SIZE, se))==-1) {
        printf("Search Element %d not found\n", se);
    }
    else {        
        printf("Element %d found at index %d\n", se, idx);
    }

    return 0;
}