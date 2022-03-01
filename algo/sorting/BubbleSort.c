/**
 * @file BubbleSort.c
 * @author Rohan Verma (rohanvermaara@gmail.com)
 * @brief Time Complexity: O(n^2)
 * @version 0.1
 * @date 2022-02-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include "Sorting.h"
#define ELEMENTS 865, 790, 290, 832, 298, 633, 304, 662, 445, 141
#define SIZE 10

void printArray(const int * arr, int size);

int main() {
    int arr[] = {ELEMENTS};

    printf("Before Sorting: ");
    printArray(arr, SIZE);
    printf("\nAfter Sorting:  ");
    BubbleSort(arr, SIZE);
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