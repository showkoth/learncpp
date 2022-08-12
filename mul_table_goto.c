#include<stdio.h>

int main(){
    int number, i = 1;
    printf("Enter the number to print the multiplication table: \n");
    scanf("%d", &number);
    table:
      printf("%d * %d = %d\n", number, i, number * i);
      i++; 
    if(i <= 10) goto table;
}