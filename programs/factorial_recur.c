#include <stdio.h>
int factorial(int num){
    if(num >= 1){
        return num*factorial(num-1);
    }else{
        return 1;
    }
}
int main(){
    int num = 5;
    int result = factorial(num);
    printf("The factorial of %d is %d\n",num,  result);
}