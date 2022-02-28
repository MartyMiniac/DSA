
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
    
}

void InsertionSort(int * arr, int size) {
    
}





void swap(int * a, int * b) {
    int t = *a;
    *a = *b;
    *b = t;
}