#include <math.h>
#include <stdio.h>

void insertionSort(int array[], int size){
    int i, j, key;
    for(i = 0; i < size; i++){
        key = array[i];
        j = i - 1;
        while(j >= 0 && array[j] > key){
            array[j+1] = array[j];
            j = j - 1;
        }
        array[j+1] = key;
    }
}
void printarray(int array[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}
int main(){
    int arr[] = {12, 11, 13, 5, 6};
    int size = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, size);
    printarray(arr, size);
}