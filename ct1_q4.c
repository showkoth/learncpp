#include <stdio.h>
int fact(int n){
    int f = 1;
    for(int i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}

int main()
{
    int i, originalNum, num, lastDigit, sum;

    printf("Enter any number to check Strong number: ");
    scanf("%d", &num);

    originalNum = num;
    sum = 0;

    while(num > 0)
    {
        lastDigit = num % 10;
        sum = sum + fact(lastDigit);
        num = num / 10;
    }

    if(sum == originalNum)
    {
        printf("%d is Strong Number", originalNum);
    }
    else
    {
        printf("%d is not Strong Number", originalNum);
    }

    return 0;
}