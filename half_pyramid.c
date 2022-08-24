#include<stdio.h>

int main(){
    int rows;
    printf("Please enter the number of rows: \n");
    scanf("%d", &rows);
    for(int i = 1; i <= rows ; i++ ) // initialization ; condition ; increment
    {
        for(int j = 1; j <= i; j++){
            // printf("* ");
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}