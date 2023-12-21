#include <stdio.h>
int main(){
    int arr[] = {44, 66, 77, 22, 99, 88};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 88;
    for(int i = 0; i < size; i++){
        if(key == arr[i]){
            printf("Position of key %d is %d\n", key, i);
        }
    } 
    
}