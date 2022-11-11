#include <stdio.h>

void bubbleSort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n - i; j++)
        {
            if (a[j] < a[j - 1])
            {
                int tmp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = tmp;
            }
        }
    }
}

void square(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i] = a[i] * a[i];
    }
}

int main()
{
    int n;
    printf("Please enter the size of the array: \n");
    scanf("%d", &n);
    int a[n];
    printf("Please enter the elements of the array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element %d \n", i + 1);
        scanf("%d", &a[i]);
    }
    square(a, n);
    bubbleSort(a, n);
    printf("Sorted array after squared : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}