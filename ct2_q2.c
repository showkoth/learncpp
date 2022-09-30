#include<stdio.h>

int main(){
    int n;
    printf("Please enter the number: \n");
    scanf("%d", &n);
    int i = 1;
    while(i < n){
        i *= 4;
    }
    if(i == n) printf("true\n");
    else printf("false\n");
    return 0;
}