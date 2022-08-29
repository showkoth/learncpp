#include<stdio.h>

int characterFrequency(char str[], char ch){
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == ch) count++;
    }
    return count;
}

int main(){
    char str[100];
    printf("Please input the string: \n");
    // scanf("%s", str);
    fgets(str, sizeof(str), stdin);
    // char ch;
    // printf("Please enter the character to calculate the frequncy : ");
    // scanf("%c", &ch);
    printf("String is : %s",str);
    for(int i = 0; str[i] != '\0'; i++){
        printf("The frequency of %c is %d \n", str[i], characterFrequency(str, str[i]));
    }
    return 0;
}