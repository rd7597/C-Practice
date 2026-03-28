#include <stdio.h>

int main()
{
    int arr[5];
    int count = 0,target;
    printf("Enter 5 numbers: \n"); // enter 5 numbers from user

    // taking inputs from user and storing in array
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target element: \n");
    scanf("%d", &target);
   

    // logic to count occurrences of target element in array
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == target)
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf("Element %d does not occur in the Array.\n", target);
    }
    else
    {
        printf("Element %d occurs %d times in the array.\n", target, count);
    }
    return 0;
}