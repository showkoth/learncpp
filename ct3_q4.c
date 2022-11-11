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
    int a[3][3];
    printf("Please enter the matrix elements: \n");
    intputMatrix(a, 3, 3);

    int r1 = 0, r2 = 0, r3 = 0;
    r1 = a[0][0] * (a[1][1] * a[2][2] - a[1][2] * a[2][1]);
    r2 = a[0][1] * (a[1][0] * a[2][2] - a[2][0] * a[1][2]);
    r3 = a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]);
    int det = r1 - r2 + r3;
    printMatrix(a,3,3);
    if(det == 0) printf("false\n");
    else printf("true\n");
    return 0;
}