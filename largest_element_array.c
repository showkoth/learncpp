#include<stdio.h>

int main(){
    // int a[] = {22, 453, 77, 555, 998, -222, 3, 1, 88, 888, 56, -43, 777};
    int a[5];
    // scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);
    for(int i = 0; i < 5; i++){
        printf("Enter the element %d \n", i + 1);
        scanf("%d", &a[i]);
    }
    int max = a[0];
    int sz = sizeof(a) / sizeof(a[0]);
    for(int i = 1; i < sz; i++){
        if(a[i] > max) max = a[i];
    }
    printf("The maximum number is %d \n", max);
    return 0;
}