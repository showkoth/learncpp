#include<stdio.h>

int getSum(int x, int y){
    // x and y are new local variable
    // x and y have different memory locations 
    return x + y;
}

int getSumPtr(int* x, int* y){
    // x has the same memory location of a
    // y have same memory location of b
    // return *x + *y; // dereference and add
    return *x + *y;
}

int main(){
    int a,b,sum;
    a = 10, b = 20;
    // sum = getSum(a,b); // value of a and b is copied to new variable x and y
    sum = getSumPtr(&a, &b);
    printf("Sum is %d \n", sum);
    return 0;
}