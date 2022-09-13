#include<stdio.h>

int gcd(int a, int b){
    if(a > b){
        int tmp = a;
        a = b;
        b = tmp;
    }
    for(int i = a; i >= 1; i--){
        if(a % i == 0 && b % i == 0){
            return i;
        }
    }
}
int main(){
    // int a, b, gcd;
    // printf("Please enter the numbers: \n");
    // scanf("%d %d", &a, &b);
    // printf("The gcd of %d and %d is %d", a, b, gcd(a,b));

    // printf("The gcd of %d and %d is %d", a, b, gcd);
    int x, y = -1;
    printf("Please enter the numbers. To exit enter number less than or equal to 0\n");
    while(1){ // infinite loop
        scanf("%d", &x);
        if(x <= 0) break;
        else if(y == -1){
            y = x;
        }
        else{
            y = gcd(x,y);
        }
    }
    printf("gcd of all numbers entered is %d\n",y);
    return 0;
}