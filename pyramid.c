#include<stdio.h>

int main(){
    int rows;
    printf("Please enter the number of rows: \n");
    scanf("%d", &rows);
    for(int i = 0; i < rows; i++){ // line number
        for(int j = 0; j < rows - i; j++) printf(" "); // print spaces
        for(int k = 0; k <= i; k++){
            printf("* "); // print value
        }
        printf("\n");
    }
    
}