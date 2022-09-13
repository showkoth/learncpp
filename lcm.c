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
    int a, b;
    printf("Please enter the numbers: \n");
    scanf("%d %d", &a, &b);
    int g = gcd(a,b);
    int lcm = (a * b) / g; // a * b = gcd(a,b) * lcm(a,b)
    printf("LCM of %d and %d is %d \n", a, b, lcm);
    return 0;
}