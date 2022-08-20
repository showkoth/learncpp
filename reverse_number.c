#include<stdio.h>

int main(){
    int n, rev = 0;
    printf("Please enter the number: \n");
    scanf("%d", &n); // 123
    while(n != 0){
        int rem = n % 10;
        // printf("%d", rem);
        rev = rev * 10 + rem;
        n /= 10;
    }
    printf("%d\n", rev);
    // printf("%d\n", rev + 10);
    return 0;
}