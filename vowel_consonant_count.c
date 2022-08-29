#include<stdio.h>

int isVowel(char ch){
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') return 1;
    else if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') return 1;
    else return 0;
}
void count(char s[]){
    int vowel, consonant, digit, space, other;
    vowel = consonant = digit = space = other = 0;
    for(int i = 0; s[i] != '\0'; i++){
        if(isVowel(s[i])) vowel++;
        else if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) consonant++;
        else if(s[i] >= '0' && s[i] <= '9') digit++;
        else if(s[i] == ' ') space++;
        else other++;
    }
    printf("Vowels: %d", vowel);
    printf("\nConsonant: %d", consonant);
    printf("\nDigit: %d", digit);
    printf("\nSpace: %d", space);
    printf("\nOther: %d", other);
}

int main(){
    char s[100];
    printf("Please enter the string: ");
    fgets(s, sizeof(s), stdin);
    count(s);
    return 0;
}