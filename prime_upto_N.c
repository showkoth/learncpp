#include<stdio.h>
int isPrime(int n){
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("The prime numbers are: 2 ");
    for(int i = 3; i <= n; i++){
        if(isPrime(i)) printf("%d ", i);
    }
    return 0;
}