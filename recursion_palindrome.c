#include<stdio.h>
#include<string.h>

typedef enum{true, false} bool;

bool isPalindrome(char str[], int left, int right){
    if(left >= right) return true; // base case
    if(str[left] == str[right]){
        return isPalindrome(str, left + 1, right - 1); //
    }
    else return false;
}
int main(){
    char s[100];
    printf("Please enter the string: \n");
    gets(s);
    if(isPalindrome(s, 0, strlen(s) - 1) == true){
        printf("Palindrome\n");
    }
    else printf("Not Palindrom\n");
    return 0;
}