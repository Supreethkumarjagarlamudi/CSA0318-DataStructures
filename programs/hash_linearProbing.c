#include <stdio.h>
#include <stdlib.h>
#define tableSize 10
int hashTable[tableSize] = {NULL};
void insert(){
    int key, index, i, flag = 0, hkey;
    printf("Enter an element: ");
    scanf("%d", &key);
    hkey = key%tableSize;
    for(i = 0; i < tableSize; i++){
        index = (hkey + i)%tableSize;
        if(hashTable[index] == NULL){
            hashTable[index] = key;
            break;
        }
    }
    if(i == tableSize){
        printf("\n Element cannot be inserted\n");
    }
}
void search(){
    int key, index, i, flag = 0, hkey;
    printf("\n Enter search element: ");
    scanf("%d", &key);
    hkey = key%tableSize;
    for(i = 0; i < tableSize; i++){
        index = (hkey + i)%tableSize;
        if(hashTable[index] == key){
            printf("The value is found at %d", index);
            break;
        }
    }
    if (i == tableSize)
    {
        printf("\n Value not found \n");
    }
    
}
void display(){
    int i;
    for(i = 0; i < tableSize; i++){
        printf("\n at index %d = %d", i, hashTable[i]);
    }
}
int main(){
    int opt, i;
    while(1){
        printf("\n Menu \n");
        printf("1. Insert\n"
                "2. Display\n"
                "3. Search\n"
                "4. exit\n");

        printf("Enter an option: ");
        scanf("%d", &opt);
        switch (opt)
        {
        case 1:
            insert();
            break;
        case 2:
            display();
            break;
        case 3:
            search();
            break;
        case 4:
            exit(0);
            break;
        
        default:
            printf("\n Invalid Expression \n");
            break;
        }
    }
}