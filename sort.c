#include<stdio.h>
#include<stdlib.h>

void print(int a[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

void swap(int a[], int i, int j){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void sort(int a[], int n){
    for(int i = 0; i < n; i++){
        for(int j = 1; j < n; j++){
            if(a[j] < a[j - 1]) swap(a, j, j - 1);
        }
    }
}

int main(){
    int n;
    printf("Please enter the number of elements: \n");
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        a[i] = rand() % 100;
    }
    printf("Array: \n");
    print(a, n); // print the array
    printf("Sorted Array: \n");
    sort(a,n);
    print(a,n);
    return 0;
}