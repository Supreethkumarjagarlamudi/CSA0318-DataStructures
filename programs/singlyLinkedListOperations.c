#include <stdio.h>
#include <stdlib.h>
struct node{
    int value;
    struct node *next;
};
struct node *head;
void InsertAtBeginning(int value){
    //making newNode
    struct node *new_Node;
    new_Node = (struct node *)malloc(sizeof(struct node));
    new_Node->value = value;
    new_Node->next = head;
    head = new_Node;
}
void InsertAtEnd(int value){
    struct node *new_Node;
    struct node *temp;
    new_Node = (struct node *)malloc(sizeof(struct node));
    new_Node->value = value;
    new_Node->next = 0;
    temp = head;
    while(temp->next != 0){
        temp = temp->next;
    }
    temp->next = new_Node;
}
void InsertAtAnyPosition(int pos, int value){
    int count=0;
    struct node *new_Node;
    struct node *temp;
    new_Node = (struct node *)malloc(sizeof(struct node));
    new_Node->value = value;
    temp = head;
    while(count != pos){
        temp = temp->next;
        count++;
    }
    new_Node->next = temp->next;
    temp->next = new_Node;
}
void display(struct node *head){
    while(head != 0){
        printf("%d ", head->value);
        head = head->next;
    }
    printf("\n");
}
int main(){
    InsertAtBeginning(25);
    display(head);
    InsertAtBeginning(50);
    display(head);
    InsertAtEnd(75);
    display(head);
    InsertAtEnd(100);
    display(head);
    InsertAtEnd(125);
    display(head);
    InsertAtEnd(150);
    display(head);
    InsertAtBeginning(10);
    display(head);
    InsertAtAnyPosition(4, 110);
    display(head);
}