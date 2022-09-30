#include <stdio.h>

int isPrimeNumber(int n){
    for(int i =2;i <= n/2; i++) {
        if(n % i == 0)
            return 0;
     }
     return 1;
}

int main()
{
    int i, j, num, isPrime;

    printf("Enter any number to print Prime factors: ");
    scanf("%d", &num);

    printf("All Prime Factors of %d are: \n", num);

    for(i=2; i<=num; i++)
    {
        if(num%i==0)
        {
            isPrime = isPrimeNumber(i);
            if(isPrime==1)
            {
                printf("%d ", i);
            }
        }
    }

    return 0;
}