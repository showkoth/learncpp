#include<stdio.h>

int main(){
    int n; 
    printf("Please enter the number: \n");
    scanf("%d", &n);
    int rev = 0, temp = n;
    while(n > 0){ // n = 121, 12, 1
        int rem = n % 10; // rem = 1, 2, 1
        rev = rev * 10 + rem; // rev = 1, 1 * 10 + 2 = 12, 12*10 + 1 = 121
        n = n / 10; // n = 12, 1, 0
    }
    if(rev == temp) printf("The number %d is palindrome \n", temp);
    else printf("The number %d is not palindrome \n", temp);
    return 0;
}