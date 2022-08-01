#include<stdio.h>

int main(){
    int n;
    printf("Please enter the number: \n");
    scanf("%d", &n);
    if(n > 0){
        printf("Positive\n");
    }
    else if(n < 0){
        printf("Negative\n");
    }
    else{
        printf("Zero\n");
    }
    return 0;
}