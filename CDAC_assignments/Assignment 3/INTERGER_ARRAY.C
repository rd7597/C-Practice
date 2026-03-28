#include <stdio.h>

int main()
{
    int arr[50];
    int n, i;
    printf("Enter the number of elements in the array (max 50):\n");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The elements of the array are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("\nThe sum of the elements in the array is: %d\n", sum);
    int avg = sum / n;
    printf("The average of the elements in the array is: %d\n", avg);
    int max = arr[0];
    int min = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("The maximum element in the array is: %d\n", max);
    printf("The minimum element in the array is: %d\n", min);
    return 0;
}