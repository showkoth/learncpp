#include<stdio.h>

int fibo(int n){
    if(n <= 1) return n;
    else return fibo(n - 1) + fibo(n - 2);
}
int main(){
    int n;
    printf("Please enter the value of N : \n");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("%d ", fibo(i));
    }
    return 0;
}