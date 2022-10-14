#include<stdio.h>

void print(int a[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

int main(){
    int a[] = {5, 7, 10, 18};
    int b[] = {3, 8, 11, 15, 22, 38, 50};
    int size_a = sizeof(a)/sizeof(a[0]); 
    int size_b = sizeof(b)/sizeof(b[0]);
    int c[size_a + size_b];
    int i = 0, j = 0, k = 0;
    while(i < size_a && j < size_b){
        if(a[i] < b[j]){
            c[k++] = a[i++];
        }
        else{
            c[k++] = b[j++];
            // c[k] = b[j];
            // k++;
            // j++;
        }
    }
    while(i < size_a){
        c[k++] = a[i++];
    }
    while(j < size_b){
        c[k++] = b[j++];
    }
    printf("First Array: \n");
    print(a, size_a);
    printf("Second Array: \n");
    print(b, size_b);
    printf("Array after merged: \n");
    print(c,size_a + size_b);
    return 0;
}