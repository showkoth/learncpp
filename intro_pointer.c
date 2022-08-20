#include<stdio.h>

int main(){
    int a;
    a = 10;
    //referencing
    int* p = &a; // *p means pointer to variable a// &a = address of a = reference of a
    // double d;
    // double* p = &d;
    // char c = 'a';
    // char* ptr = &c;

    printf("memory location :%d \n", p); // 204
    p = p + 1;
    printf("memroy location of p + 1 is : %d \n", p); // 208
    printf("memory location :%d \n", &a);
    printf("value : %d \n", *p); // *p = dereferencing 
    *p = 20;
    printf("value after change: %d \n", a);
    printf("value of p + 1: %d \n", *p);
    return 0;
}