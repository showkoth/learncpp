#include<stdio.h>

int nCr(int n, int r){
    if(n < r) return 0; // base case 1
    if(n == 1 || r == 0) return 1; // base case 2
    if(r == 1) return n; // base case 3
    return nCr(n - 1, r - 1) + nCr(n - 1, r); // formula 
}
int fact(int n){
    if(n == 1) return 1;
    else return n * fact(n - 1);
}
int main(){
    int n, r;
    printf("Please input n and r: \n");
    scanf("%d %d", &n, &r);
    // printf("The value of %dC%d is %d\n", n, r, nCr(n,r));
    int f = fact(n) / (fact(r) * fact(n - r));
    printf("The value of %dC%d is %d\n", n, r, f);
    return 0;
}