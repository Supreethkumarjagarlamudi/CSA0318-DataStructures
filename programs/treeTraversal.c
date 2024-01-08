#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *leftChild;
    struct node *rightChild;
};
struct node *root;
struct node *newNode;

struct node *create(struct node *root, int element){
    if(root == NULL){
        newNode = (struct node *)malloc(sizeof(struct node));
        newNode->data = element;
        newNode->leftChild = NULL;
        newNode->rightChild = NULL;

        return (newNode);
    }else if(element < root->data){
        root->leftChild=create(root->leftChild, element);
    }else if(element > root->data){
        root->rightChild=create(root->rightChild, element);
    }

    return(root);
}
void inorder(struct node *root){
    if(root != NULL){
        inorder(root->leftChild);
        printf("%d ", root->data);
        inorder(root->rightChild);
    }
}
void preorder(struct node *root){
    if(root != NULL){
        printf("%d ", root->data);
        preorder(root->leftChild);
        preorder(root->rightChild);
    }
}
void postorder(struct node *root){
    if(root != NULL){
        postorder(root->leftChild);
        postorder(root->rightChild);
        printf("%d ", root->data);
    }
}

int main(){
    int element, ch;
    do{
        printf("\nMenu\n");
        printf("1. Create \n2. Inorder \n3. Preorder \n4. Postorder \n5. Exit\n");
        printf("Enter an option");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter an element: ");
            scanf("%d", &element);
            root=create(root, element);
            break;
        case 2:
            inorder(root);
            break;
        case 3:
            preorder(root);
            break;
        case 4:
            postorder(root);
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Invalid Expression\n");
            break;
        }
    }
    while(ch > 0 && ch <= 5);
}