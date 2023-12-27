#include <stdio.h>
#define size 5
int stack[size];
int invertedStack[size];
int top = -1;
int invertedTop = -1;

void push(int num){
    if(top > size-1){
        printf("\nOverFlow\n");
    }else{
        top++;
        stack[top] = num;
    }
}
void invertedPush(int num){
    if(invertedTop >= size-1){
        printf("\nOverFlow\n");
    }else{
        invertedTop++;
        invertedStack[invertedTop] = num;
    }
}
int pop(){
    int temp;
    if(top == -1){
        printf("\nUnderFlow\n");
    }else{
        temp = top;
        top--;
    }
    return stack[temp];
}
int invertpop(){
    int temp;
    if(invertedTop == -1){
        printf("\nUnderFlow\n");
    }else{
        temp = invertedTop;
        invertedTop--;
    }
    return invertedStack[temp];
}
void showStack(){
    for(int i = top; i >= 0; i--){
        printf("%d\n", stack[i]);
    }
}
void showInvertStack(){
    for(int i = invertedTop; i >= 0; i--){
        printf("%d\n", invertedStack[i]);
    }
}
void invertStack(){
    int lastElement = pop();
    invertedPush(lastElement);

}
int main(){
    push(22);
    push(55);
    push(33);
    push(66);
    push(88);
    while(top != -1){
        invertStack();
    }
    showInvertStack();
    printf("\n");
    invertpop();
    invertpop();
    invertpop();
    invertedPush(90);
    invertedPush(36);
    invertedPush(11);
    invertedPush(88);
    invertpop();
    invertpop();
    showInvertStack();
}