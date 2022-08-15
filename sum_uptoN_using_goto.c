#include<stdio.h>

int main(){
    int n, sum = 0, i = 1;
    printf("Please enter the number n : \n");
    scanf("%d", &n);
    // label:
    //     sum = sum + n; // sum = 0 + 5, sum = 5 + 4, .....
    //     n--;
    // if(n > 0) goto label;
    label:
        sum = sum + i;
        i++;
    if(i <= n) goto label;
    printf("The sum is %d \n", sum);
    return 0;
}