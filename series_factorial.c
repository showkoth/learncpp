#include<stdio.h>

// int fact(int x){
//     int f = 1;
//     while(x > 0){  //5! = 5 * 4 * 3 * 2 * 1
//         f *= x;
//         x--;
//     }
//     return f;
// }

int main(){
    double n, i = 1, sum = 0;
    printf("Enter the number : \n");
    scanf("%lf", &n);
    while(i <= n){
        int f = 1;
        int x = i;
        while(x > 0){  //5! = 5 * 4 * 3 * 2 * 1
            f *= x;
            x--;
        }
        // sum += (i/fact(i)); // 3/6 = 1/2 = 0.5 = 0
        sum += i/f;
        i++;
    }
    printf("Sum is %.2lf \n", sum);
    return 0;
}