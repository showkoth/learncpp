#include<stdio.h>

int isAlphabet(char ch){
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z' )) return 1;
    else return 0;
}
int main(){
    char str[100];
    int i, j;
    printf("Please enter the string: ");
    gets(str);
    for(i = 0; str[i] != '\0'; i++){ // traverse
        while(!(isAlphabet(str[i]) || str[i] == '\0')){
            for(j = i; str[j] != '\0'; ++j){ // replace
                str[j] = str[j + 1];
            }
            str[j] = '\0';
        }
    }
    printf("After removing the output string is %s \n", str);
}