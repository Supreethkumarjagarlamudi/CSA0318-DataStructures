#include <stdio.h>
void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
void heapify(int arr[], int size, int i){
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;
    if(left < size && arr[left] > arr[largest]){
        largest = left;
    }
    if(right < size && arr[right] > arr[largest]){
        largest = right;
    }
    if(largest != i){
        swap(&arr[i], &arr[largest]);
        heapify(arr, size, largest);
    }
}
void heapSort(int arr[], int size){
    for(int i = size/2 - 1; i >= 0; i--){
        heapify(arr, size, i);
    }
    for (int i = size - 1; i >= 0; i--) {
 
        swap(&arr[0], &arr[i]);
 
        // Heapify root element
        // to get highest element at
        // root again
        heapify(arr, i, 0);
    }
}
void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[] = {12, 11, 13, 5, 6 , 7};
    int size = sizeof(arr)/sizeof(arr[0]);
    heapSort(arr, size);
    printf("Sorted array: ");
    printArray(arr, size);
}