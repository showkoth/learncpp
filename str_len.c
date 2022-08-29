#include<stdio.h>
#include<string.h>

int main(){
    char s[100];
    printf("Please enter the string: ");
    // scanf("%s",&s);
    // fgets(s, sizeof(s), stdin); // input string
    gets(s);
    int length = 0;
    for(int i = 0; s[i] != '\0'; i++) length++;
    printf("The length of the string is : %d \n", length);
    printf("The length using strlen() : %d \n", strlen(s));
    return 0;
}