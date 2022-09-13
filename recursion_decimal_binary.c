#include<stdio.h>

int decimalToBinary(int decimal){ // 5
    if(decimal == 0) return 0; // base case // 
    else{
        int remainder = decimal % 2;
        return remainder + 10 * decimalToBinary(decimal / 2);
    }
}
int main(){
    int n;
    printf("Please enter a decimal number: \n");
    scanf("%d", &n);
    printf("The binary of %d is %d \n", n, decimalToBinary(n));
    return 0;
}