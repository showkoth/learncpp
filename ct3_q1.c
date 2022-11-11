#include <stdio.h>

void moveZeroes(int nums[], int len)
{
    int nonZeroIndex = 0;
    int temp;
    for (int i = 0; i < len; i++)
    {
        if (nums[i] != 0)
        {
            temp = nums[nonZeroIndex];
            nums[nonZeroIndex++] = nums[i];
            nums[i] = temp;
        }
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
    printf("\nArray before moving zeroes: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    moveZeroes(a, n);
    printf("\nArray after moving zeros: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}