#include<stdio.h>

int main(){
    int a, b; // 5, 2
    printf("Please enter the number a and b : \n");
    scanf("%d %d ", &a, &b);
    printf("The value of a and b before swap : %d , %d\n", a, b);

    a = a + b; // a = 5 + 2 = 7
    b = a - b; // b = 7 - 2 = 5
    a = a - b; // a = 7 - 5 = 2

    printf("The value of a and b after swap : %d , %d \n", a, b);
    return 0;
}
