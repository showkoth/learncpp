#include<stdio.h>

int main(){
    int mark;
    int marks[60]; //declaration
    int a[5] = {22, 99, 23, 4, 3}; // initialization
    a[0] = 22;
    a[1] = 99; 
    scanf("%d", a[2]);
    printf("Size of mark: %d \n", sizeof(mark));
    printf("size of marks array %d \n", sizeof(marks));
    return 0;
}