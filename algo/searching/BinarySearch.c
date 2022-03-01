/**
 * @file BinarySearch.c
 * @author Rohan Verma (rohanvermaara@gmail.com)
 * @brief time complexity: O(log n)
 * @version 0.1
 * @date 2022-02-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include "Searching.h"
#define ELEMENTS 25, 174, 364, 368, 524, 533, 664, 723, 940, 966
#define SEARCHELEMENT 524
#define SIZE 10

int main() {
    int arr[] = {ELEMENTS};
    int se = SEARCHELEMENT;
    int idx=-1;

    if((idx=BinarySearch(arr, SIZE, se))==-1) {
        printf("Search Element %d not found\n", se);
    }
    else {
        printf("Search element %d found at location %d\n", se, idx);
    }

    return 0;
}