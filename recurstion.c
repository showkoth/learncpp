#include<stdio.h>

void C(){
    printf(".");
}
void B(){
    C();
    printf("is samin ");
}
void A(){
    // B();
    // printf("my name ");
    A(); // recursion
}

int main(){
    A(); // r
    return 0;
}