#include<stdio.h>

int main(){
    char ch;
    printf("Please enter the character: \n");
    scanf("%c", &ch);
    printf("integer value is : %d\n", ch);
    if(ch >= 'A' && ch <= 'Z'){
        printf("%c is upper case\n", ch);
    }
    else if(ch >= 'a' && ch <= 'z'){
        printf("%c is lower case\n", ch);
    }
    else{
        printf("%c is not a letter\n", ch);
    }
    return 0;
}