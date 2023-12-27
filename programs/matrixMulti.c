#include <stdio.h>
int main(){
    int rows, column;
    printf("Enter Number of rows: ");
    scanf("%d", &rows);
    printf("Enter Number of columns: ");
    scanf("%d", &column);
    int mat1[rows][column];
    int mat2[rows][column];
    int multi[rows][column];
    printf("Enter Matrix 1: \n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < column; j++){
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter Matrix 2: \n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < column; j++){
            scanf("%d", &mat2[i][j]);
        }
    }
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < column; j++){
            multi[i][j] = 0;
            for(int k = 0; k < column; k++){
                multi[i][j] += mat1[i][k]*mat2[k][j];
            }
        }
    }
    printf("Matrix 1: \n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < column; j++){
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Matrix 2: \n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < column; j++){
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Matrix Multiplication: \n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < column; j++){
            printf("%d ", multi[i][j]);
        }
        printf("\n");
    }
}