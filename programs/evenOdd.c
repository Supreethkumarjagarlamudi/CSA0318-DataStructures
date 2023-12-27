#include <stdio.h>
int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if(number%2 == 0){
        printf("It is an even number.\n");
    }else{
        printf("it is an odd number.\n");
    }
}