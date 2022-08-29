#include<stdio.h>

int main(){
    char s1[100], s2[100];
    printf("Please enter the string 1: ");
    // fgets(s1, sizeof(s1), stdin); // considers newline as input
    gets(s1);
    printf("Please enter the string 2: ");
    gets(s2);
    int i, j;
    for(i = 0; s1[i] != '\0'; i++);
    for(j = 0; s2[j] != '\0'; j++, i++){
        s1[i] = s2[j];
    }
    s1[i] = '\0';
    printf("String after Concat: %s", s1);
    return 0;
}