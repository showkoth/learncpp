#include <stdio.h>

int searchPositon(int nums[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (nums[mid] == target)
            return mid;
        if (target > nums[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int n, target;
    printf("Please enter the size of the array: \n");
    scanf("%d", &n);
    int a[n];
    printf("Please enter the elements of the array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element %d \n", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Please enter the target : \n");
    scanf("%d", &target);
    printf("Target found at position %d \n", searchPositon(a, n, target));
    return 0;
}