#include<stdio.h>

void printMatrix(int a[][10], int row, int col){
    printf("The matrix is : \n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("%d ",a[i][j]);
            if(j == col - 1) printf("\n");
        }
    }
}

void intputMatrix(int a[][10], int row, int col){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("Enter the element a%d%d",i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
}

int main(){
    int matrix[10][10], trans[10][10], row, col;
    printf("Please enter the number of rows and columns: ");
    scanf("%d %d", &row, &col);
    printf("\nEnter the matrix elements: \n");
    intputMatrix(matrix, row, col);
    printf("\nOriginal Matrix : \n");
    printMatrix(matrix, row, col);
    // transpose the matrix
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            trans[j][i] = matrix[i][j];
        }
    }
    printf("\nTransposed Matrix: \n");
    printMatrix(trans, col, row);
    return 0;

}