#include <stdio.h>
int main(){
    int arr[] = {1, 2, 3, 4, 5, 3, 1, 6, 5, 8};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < size; i++){
        for(int j = i+1; j < size; j++){
            if(arr[i] == arr[j]){
                printf("%d ", arr[i]);
            }
        }
    }
}