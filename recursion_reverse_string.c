#include<stdio.h>

void reverse(char* str){
    if(*str == '\0') return;
    else reverse(str + 1);
    printf("%c",*str);
}

void reverseStr(char str[], int i){
    if(str[i] == '\0') return;
    else reverseStr(str, i + 1);
    printf("%c",str[i]);
}

int main(){
    char str[100];
    printf("Please enter the string : ");
    gets(str);
    printf("Reverse string is: ");
    // reverse(str);
    reverseStr(str, 0);
    return 0;
}