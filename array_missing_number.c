#include<stdio.h>

int main(){
    int n;
    printf("Please enter the size of the array: \n");
    scanf("%d", &n);
    int a[n], sum = 0;
    for(int i = 0; i < n - 1; i++){
        printf("Enter the element %d : ", i + 1);
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n - 1; i++){
        sum += a[i];
    }
    int totalSum = (n * (n + 1)) / 2;
    int missingNumber = totalSum - sum;
    printf("The missing number is:  %d \n", missingNumber);
    return 0;
}