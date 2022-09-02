#include<stdio.h>

int sum(int n){
    // base case // minimum unit of work
    if(n == 1 || n == 0) return n;
    else return n + sum(n -1);
}
int main(){
    int n;
    printf("Please enter the value of N : \n");
    scanf("%d", &n);
    printf("Sum is %d \n", sum(n));
    return 0;
}