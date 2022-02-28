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
#define ELEMENTS 25, 174, 364, 368, 524, 533, 664, 723, 940, 966
#define SEARCHELEMENT 524
#define SIZE 10

int main() {
    int arr[] = {ELEMENTS};
    int se = SEARCHELEMENT;

    int start=0, end=SIZE;
    
    while(start<=end) {
        int mid=(start+end)/2;
        int me=arr[mid];
        if(se==me) {
            printf("Search element %d found at location %d\n", se, mid);
            return 0;
        }
        else if(se<me) {
            end=mid-1;
        }
        else {
            start=mid+1;
        }

    }

    printf("Search Element %d not found\n", se);
    return 0;
}