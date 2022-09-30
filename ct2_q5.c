#include<stdio.h>

int rev(int number){
    int res = 0;
    int rem;
    while(number != 0){
        rem = number % 10;
        res = res * 10 + rem;
        number = number / 10;
    }
    return res;
}

int main(){
    int n;
    printf("Please enter the number: \n");
    scanf("%d", &n);
    if(rev(n) == n) printf("Palindrome\n");
    else printf("Not Palindrome\n");
    return 0;
}