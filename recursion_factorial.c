#include<stdio.h>

int fact(int n){
    if(n == 0) return 1;
    return n * fact(n - 1);
}
int main(){
    int n;
    printf("Please enter the number: \n");
    scanf("%d", &n);
    printf("The factorial of %d is %d \n", n, fact(n));
    return 0;
}