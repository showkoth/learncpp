#include<stdio.h>

void printArray(int a[], int start, int size){
    if(start >= size){  // base case where the function returns// backtracking starts from here 
        return;
    }
    printf("%d ", a[start]); // business logic 
    printArray(a, start + 1, size); // recursive call that heads to the base case by a particular unit
    // business logic 
    //printf("%d ", a[start]);

}

int main(){
    int x[] = {1, 2, 3, 4, 5};
    int sz = sizeof(x) / sizeof(x[0]); 
    printArray(x, 0, sz);
    return 0;
}