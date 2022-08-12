#include<stdio.h>

int main(){
    int n;
    printf("Please enter the number: \n");
    scanf("%d", &n);
    if(n % 2 == 0){
        printf("The number %d is even\n", n);
    }
    else{
        printf("The number %d is odd\n", n);
    }
    return 0;
}