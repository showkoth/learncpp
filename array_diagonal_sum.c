#include<stdio.h>

void intputMatrix(int a[][3], int row, int col){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("Enter the element a%d%d",i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
}
void printMatrix(int a[][3], int row, int col){
    printf("The matrix is : \n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("%d ",a[i][j]);
            if(j == col - 1) printf("\n");
        }
    }
}
int main(){
    int n;
    printf("Please enter the row (col) number of the matrix: \n");
    scanf("%d", &n);
    int a[n][n];
    printf("Please enter the matrix elements: \n");
    intputMatrix(a, n, n);
    
    printf("The entered Matrix : \n");
    printMatrix(a, n, n);
    int diagonalSum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j) diagonalSum += a[i][j];
        }
    }
    printf("The diagonal sum is %d \n", diagonalSum);
    return 0;
}