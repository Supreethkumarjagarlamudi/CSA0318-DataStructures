#include <stdio.h>
int binarySearch(int arr[], int size, int key){
    int low = 0;
    int high = size;
    int mid;
    while(low <= high){
        mid = (low + (high - low))/2;

        if(key == arr[mid]){
            return mid;
            break;
        }
        if(key > arr[mid]){
            low = mid+1;
        }else{
            high = mid-1;
        }

    }
    return -1;
}
int main(){
    int size;
    scanf("%d", &size);

    int arr[size];

    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    int key;
    scanf("%d", &key);
    int result = binarySearch(arr, size, key);
    if(result == -1){
        printf("Element not found!");
    }else{
        printf("Element found at location at %d", result);
    }
}