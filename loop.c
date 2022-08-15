#include<stdio.h>

int main(){
    int n, i = 1, sum = 0;
    printf("Please enter the number: \n");
    scanf("%d", &n); // n = 5
    while (i <= n) //condition //true, true, true, true, true, false 
    {
        printf("%d\n", i); // 1, 2, 3, 4, 5
        sum += i;
        i++; // i = 1 + 1 = 2, 3, 4, 5, 6
    }
    // sum = (n * (n + 1))/2
    printf("The sum is %d \n", sum);
    return 0;
}