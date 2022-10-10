#include<stdio.h>

int main(){
    int r, c, a[100][100], b[100][100], sum[100][100];
    printf("Please enter the number of rows: (1 to 100) \n");
    scanf("%d", &r);
    printf("Please enter the number of columns: (1 to 100) \n");
    scanf("%d", &c);
    printf("Please enter the elements of 1st matrix : \n");
    // input 1st matrix
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("Enter the element a%d%d", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Please enter the elements of 2nd matrix : \n");
    // input 2nd matrix
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("Enter the element b%d%d", i+1, j+1);
            scanf("%d", &b[i][j]);
        }
    }
    // adding two matrices
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    // printing the result 
    printf("Sum of two matrices : \n");
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}