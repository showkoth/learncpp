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
    print(a, n); // print the array
    // for(int i = 0; i < n/2; i++){
    //     swap(a, i, n - 1 - i);
    // }
    int low = 0, high = n - 1;
    while(low <= high){
        swap(a,low++, high--);
        // low++;
        // high--;
    }
    printf("Reverse array: \n");
    print(a, n); // print the array
    return 0;
}