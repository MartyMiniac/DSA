/**
 * @file RecursiveInsertionSort.c
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
#define ELEMENTS 662, 1, 79, 193, 867, 737, 555, 678, 30, 822
#define SIZE 10

void printArray(const int * arr, int size);

int main() {
    int arr[] = {ELEMENTS};

    printf("Before Sorting: ");
    printArray(arr, SIZE);
    printf("\nAfter Sorting:  ");
    RecursiveInsertionSort(arr, SIZE);
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