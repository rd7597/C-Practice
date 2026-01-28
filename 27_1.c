#include <stdio.h>

int main()
{
    int i, n, size;
    printf("Enter size of array: \n");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d Array Elements:", size);

    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("You Entered:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nReverse Of the Array is:\n");
    for (i = size - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}