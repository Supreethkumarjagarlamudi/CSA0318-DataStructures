#include <stdio.h>
int main(){
    int arr[5] = {1, 2, 3, 4, 6};
    int size = 5;
    int pos = 4;
    int value = 5;
    for(int i = size-1; i > pos; i--){
        arr[i] = arr[i-1];
    }
    arr[pos] = value;
    for(int i = 0; i < size+1; i++){
        printf("%d ", arr[i]);
    }
}