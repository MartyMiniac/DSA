/**
 * @file RecursiveBubbleSort.c
 * @author Rohan Verma (rohanvermaara@gmail.com)
 * @brief Time Complexity: O(n^2)
 * @version 0.1
 * @date 2022-03-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include "Sorting.h"
#define ELEMENTS 508, 504, 353, 597, 711, 697, 407, 189, 324, 626
#define SIZE 10

void printArray(const int * arr, int size);

int main() {
    int arr[] = {ELEMENTS};

    printf("Before Sorting: ");
    printArray(arr, SIZE);
    printf("\nAfter Sorting:  ");
    RecursiveBubbleSort(arr, SIZE);
    printArray(arr, SIZE);
    printf("\n");

    return 0;
}

void printArray(const int * arr, int size) {
    printf("{");
    for(int i=0; i<size-1; i++) {
        printf("%d, ", arr[i]);
    }
    printf("%d}", arr[size-1]);
}