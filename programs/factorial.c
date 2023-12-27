#include <stdio.h>
int main(){
    int num, multi=1;
    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        multi *= i;
    }
    printf("Factorial of %d is %d\n", num, multi);
}