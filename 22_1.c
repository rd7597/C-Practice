#include <stdio.h>

int main()
{
    int i, size;
    printf("Enter size of array: \n");
    scanf("%d", &size);
    int arr[size];

    printf("Enter %d elements of Array:\n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("You Entered:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nReverse of the array is:\n");
    for (i = size - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}