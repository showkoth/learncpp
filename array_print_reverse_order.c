#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Please enter the number of elements: \n");
    scanf("%d", &n);
    int a[n];
    //input
    for(int i = 0; i < n; i++){
        a[i] = rand() % 100;
    }
    printf("Array: \n");
    for(int i = 0; i < n; i++){
        printf("%d ",a[i]);
    }
    printf("\nReverse array: \n");
    for(int i = n - 1; i >= 0; i--){
        printf("%d ", a[i]);
    }
    return 0;
}