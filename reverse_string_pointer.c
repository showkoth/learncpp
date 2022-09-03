#include<stdio.h>
#include<string.h>

void reverse(char s[]){
    int size = strlen(s);
    for(int i = 0; i < size/2; i++){
        char temp = s[i];
        s[i] = s[size - 1 - i];
        s[size - 1 - i] = temp;
    }
}

int main(){
    char input[100];
    printf("Please enter the string: \n");
    gets(input);
    printf("String : ");
    puts(input);
    reverse(input);
    printf("\nReverse string: ");
    puts(input);
}