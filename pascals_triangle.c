#include<stdio.h>

int main(){
    int rows, val;
    printf("Please enter the number of rows: \n");
    scanf("%d", &rows);
    for(int i = 0; i < rows; i++){
        for(int space = 1; space <= rows - i; space++) printf(" "); // print the spaces
        for(int j = 0; j <= i; j++){ // co efficient print
            if(j == 0 || j == i){
                val = 1;
            }
            else{
                val = val * (i - j + 1) / j;  // i = 2, j = 0, 1, 2 
                // i = 3, j = 0, 1, 2, 3
            }
            printf("%d ", val);
        }
        printf("\n");

    }
    return 0;
}