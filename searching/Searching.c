/**
 * @file Searching.c
 * @author Rohan Verma (rohanvermaara@gmail.com)
 * @brief Function definition of all the searching algorithms
 * @version 0.1
 * @date 2022-02-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <math.h>

#include "Searching.h"

int LinearSearch(const int * arr, int size, int se) {
    for(int i=0; i<size; i++) {
        if(arr[i]==se) {
            return i;
        }
    }

    return -1;
}

int BinarySearch(const int * arr, int size, int se) {
    
    int start=0, end=size;
    
    while(start<=end) {
        int mid=(start+end)/2;
        int me=arr[mid];
        if(se==me) {
            return mid;
        }
        else if(se<me) {
            end=mid-1;
        }
        else {
            start=mid+1;
        }

    }

    return -1;
}

int JumpSearch(int * arr, int size, int se) {
    int block = (int)(sqrt(size));
    int i=0;
    for(i=0; i<size && arr[i]<se; i+=block);
    if(i>=size) {
        return -1;
    }
    int * arrnew = arr+i-size;
    int idx=LinearSearch(arrnew, block, se);
    return idx==-1?idx:idx+i-block;
}