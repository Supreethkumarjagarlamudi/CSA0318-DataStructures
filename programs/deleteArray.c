#include <stdio.h>
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int indexToDelete = 3;

    if(indexToDelete > size ||indexToDelete < 0){
        printf("Deletion is not possible");
    }
    for(int i = indexToDelete; i < size-1; i++){
        arr[i] = arr[i+1];
    }
    size--;
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}