/**
 * @file LinearSearch.c
 * @author Rohan Verma (rohanvermaara@gmail.com)
 * @brief time complexity: O(n)
 * @version 0.1
 * @date 2022-02-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#define ELEMENTS 159, 245, 466, 472, 483, 691, 756, 862, 969, 974
#define SEARCHELEMENT 691
#define SIZE 10

int LinearSearch(const int * arr, int size, int se);

int main() {
    int arr[] = {ELEMENTS};
    int se = SEARCHELEMENT;
    int idx=-1;

    if((idx=LinearSearch(arr, SIZE, se))==-1) {
        printf("Search Element %d not found\n", se);
    }
    else {        
        printf("Element %d found at index %d\n", se, idx);
    }

    return 0;
}

int LinearSearch(const int * arr, int size, int se) {
    for(int i=0; i<size; i++) {
        if(arr[i]==se) {
            return i;
        }
    }

    return -1;
}