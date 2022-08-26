#include<stdio.h>

int main(){
    int a[] = {3, 1, 5,-1, 10, 20};
    int sum = 0;
    int* ptr =  a;
    int sz = sizeof(a) / sizeof(a[0]);
    for(int i = 0; i < sz; i++){ // looping inside array
        sum += *ptr;
        ptr++;
    }
    printf("The sum is %d \n", sum);
    return 0;
}