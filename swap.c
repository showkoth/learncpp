#include<stdio.h>

int main(){
    int a, b;
    printf("Enter the value of a and b: \n");
    scanf("%d %d", &a, &b);
    int temp = a; // 4 byte
    a = b;
    b = temp;

    printf("The value of a and b are : %d , %d \n", a, b);
}