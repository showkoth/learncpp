#include<stdio.h>

int main(){
    int a[5], sum = 0;
    //input an array
    for(int i = 0; i < 5; i++){
        printf("Please enter the element %d \n", i + 1);
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < 5; i++){
        sum += a[i];
    }
    printf("the sum is %d \n", sum);
    printf("the average is %f \n", sum / 5.0);
    return 0;
}