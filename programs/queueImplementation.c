#include <stdio.h>
#define size 5
int queue[size];
int front=-1, rear=-1;
void enqueue(int num){
    if(rear >= size-1){
        printf("\nOverFlow\n");
    }else{
        front=0;
        rear++;
        queue[rear] = num;
    }
}
void dequeue(){
    if(front == -1){
        printf("\nUnderFlow\n");
    }else{
        front++;
    }
}
void display(){
    for(int i = front; i <= rear; i++){
        printf("%d ", queue[i]);
    }
}
int main(){
    enqueue(24);
    enqueue(76);
    enqueue(100);
    enqueue(32);
    enqueue(293);
    enqueue(231);
    display();
    dequeue();
    printf("\n");
    display();
}