#include<stdio.h>

long decimalToBinary(int decimal){
    long binary = 0;
    int i = 1;
    while(decimal != 0){
        int remainder = decimal % 2;
        decimal = decimal / 2;
        binary += remainder * i;
        i = i * 10;
    }
    return binary;
}
int main(){
    int n;
    printf("Please enter a decimal number: \n");
    scanf("%d", &n);
    printf("The binary of %d is:  %ld \n", n, decimalToBinary(n));
    return 0;
}