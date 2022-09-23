#include<stdio.h>
#include<math.h>

int binaryToDecimal(long binary){
    int decimal = 0;
    int i = 0;
    while(binary > 0){
        int remainder = binary % 10;
        decimal = decimal + remainder * pow(2, i);
        binary = binary / 10;
        i++;
    }
    return decimal;
}

int main(){
    long binary;
    printf("Please enter the binary number: \n");
    scanf("%ld", &binary);
    printf("The decimal of %ld is : %d \n", binary, binaryToDecimal(binary));
    return 0;
}