#include <stdlib.h>
#include <stdio.h>


void swap(int * a, int * b);

void SelectionSort(int * arr, int size) {
    for(int i=0; i<size-1; i++) {
        int min_idx=i;
        for(int j=i+1; j<size; j++) {
            if(arr[j]<arr[min_idx]) {
                min_idx=j;
            }
        }
        swap(&arr[i], &arr[min_idx]);
    }
}

void BubbleSort(int * arr, int size) {
    for(int i=size; i>-1; i--) {
        for(int j=0; j<i-1; j++) {
            if(arr[j]>arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

void RecursiveBubbleSort(int * arr, int size) {
    //base case condition
    if(size==1) {
        return;
    }

    for(int i=0; i<size-1; i++) {
        if(arr[i+1]<arr[i]) {
            swap(&arr[i+1], &arr[i]);
        }
    }

    //recursive condition
    RecursiveBubbleSort(arr, size-1);
}

void InsertionSort(int * arr, int size) {
    for(int i=1; i<size; i++) {
        int j=i-1;
        int key=arr[i];
        while(j>=0 && arr[j]>key) {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

void RecursiveInsertionSort(int * arr, int size) {
    //base condition
    if (size <= 1) {
        return;
    }
    RecursiveInsertionSort( arr, size-1);

    int last = arr[size-1];
    int j = size-2;

    while (j >= 0 && arr[j] > last)
    {
        arr[j+1] = arr[j];
        j--;
    }

    arr[j+1] = last;
}

void merge(int * arr, int l, int m, int r);
void MergeSort(int * arr, int l, int r) {
    //base case
    if(l>=r) {
        return;
    }

    int m = l+(r-l)/2;
    MergeSort(arr, l, m);
    MergeSort(arr, m+1, r);
    merge(arr, l, m, r);
}

void merge(int * arr, int l, int m, int r) {
    int arrLSize = m-l+1;
    int arrRSize = r-m;

    int * arrL = malloc(arrLSize * sizeof(int));
    int * arrR = malloc(arrRSize * sizeof(int));

    for(int i=0; i<arrLSize; i++) {
        arrL[i]=arr[i+l];
    }
    for(int i=0; i<arrRSize; i++) {
        arrR[i]=arr[m+1+l];
    }

    int idxL = 0, idxR = 0, idx = l;

    while(idxL<arrLSize && idxR<arrRSize) {
        if(arrL[idxL] < arrR[idxR]) {
            arr[idx++]=arrL[idxL++];
        }
        else {
            arr[idx++]=arrR[idxR++];
        }
    }

    for(int i=idxL; i<arrLSize; i++) {
        arr[idx++]=arrL[idxL];
    }
    for(int i=idxR; i<arrRSize; i++) {
        arr[idx++]=arrR[idxR];
    }

    free(arrL);
    free(arrR);

}






void swap(int * a, int * b) {
    int t = *a;
    *a = *b;
    *b = t;
}