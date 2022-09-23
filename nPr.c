#include<stdio.h>
int fact(int n){
    if(n == 0) return 1; // base case
    else return n * fact(n - 1);
}
int main(){
    int n,r;
    printf("Please enter the valuel of N and R: \n");
    scanf("%d %d", &n, &r);
    if(r > n){
        printf("Invalid input! \n");
        return 0;
    }
    int result = fact(n) / fact(n -r);
    printf("nPr = %d",result);
    return 0;
}