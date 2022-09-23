#include<stdio.h>

int main(){
    int decimal, i = 0;
    char hexadecimal[100];
    printf("Please enter the decimal number: \n");
    scanf("%d",&decimal);
    while(decimal > 0){
        int remainder = decimal % 16;
        if(remainder < 10){
            hexadecimal[i++] = 48 + remainder;
        }
        else{
            hexadecimal[i++] = 55 + remainder;
        }
        decimal = decimal / 16;
    }
    for(int j = i - 1; j >= 0; j--){
        printf("%d",hexadecimal[j]);
    }
    return 0;
}