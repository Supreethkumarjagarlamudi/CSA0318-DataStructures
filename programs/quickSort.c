#include <stdio.h>

void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}


int partition(int array[], int low, int high) {

  int pivot = array[high];
  
  int i = (low - 1);

  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {

      i++;

      swap(&array[i], &array[j]);
    }
  }

  swap(&array[i + 1], &array[high]);

  return (i + 1);
}
void quickSort(int array[], int low, int high) {
  if (low < high) {
    

    int pi = partition(array, low, high);

    quickSort(array, low, pi - 1);

    quickSort(array, pi + 1, high);
  }
}
void printfArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}
int main(){
    int arr[] = {12, 17, 6, 25, 1 , 5};
    int size = sizeof(arr)/sizeof(arr[0]);

    quickSort(arr, 0 ,size-1);
    printf("Sorted Array\n");
    printfArray(arr, size);
}