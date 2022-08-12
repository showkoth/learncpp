#include<stdio.h>

int main(){
    int i = 5, j = 10, k;
    k = ++i; // i = i + 1;
    int m = j++; // j = j + 1;
    printf("value of k and m are: %d and %d\n", k, m);
    printf("value of i and j are : %d and %d \n", i, j);
}