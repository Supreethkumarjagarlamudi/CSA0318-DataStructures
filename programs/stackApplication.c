#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int prec(char c){
    if(c == '^'){
        return 3;
    }else if(c == '/' || c == '*'){
        return 2;
    }else if(c == '+' || c == '-'){
        return 1;
    }else{
        return -1;
    }
}

char associativity(char c){
    if(c == '^'){
        return 'R';
    }
    return 'L';
}
void infixToPostfix(char s[]){
    char result[1000];
    int resultIndex = 0;
    int len = strlen(s);
    char stack[1000];
    int stackIndex = -1;

    for(int i = 0; i < len; i++){
        char c = s[i];
        //scanned element is operands
        if(c >= 'a' && c <= 'z' ||c >= 'A' && c <='Z'||c >= '0' && c <='9'){
            result[resultIndex++] = c;
        }
        //scanned element is (
        else if(c == '('){
            stack[++stackIndex] = c;
        }
        //scanned element is )
        else if(c == ')'){
            while(stackIndex >= 0 && stack[stackIndex] != '('){
                result[resultIndex++] = stack[stackIndex--];
            }
            stackIndex--;
        }
        else{
            while(stackIndex >= 0 && (prec(s[i]) < prec(stack[stackIndex]) || prec(s[i]) == prec(stack[stackIndex]) && associativity(s[i]) == 'L')){
                result[resultIndex++] = stack[stackIndex--];
            }
            stack[++stackIndex] = c;
        }
    }
    //poping all the elements
    while(stackIndex >= 0){
        result[resultIndex++] = stack[stackIndex--];
    }
    result[resultIndex++] = '\0';
    printf("%s", result);
}
int main(){
    char exp[100];
    fgets(exp, 100, stdin);
    int count=0;
    for(int i = 0; i < 100; i++){
        if (exp[i] != '\0')
        {
            count++;
        }else{
            count--;
            break;
        }
    }
    infixToPostfix(exp);
}