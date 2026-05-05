#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;
    int sum = 0;

        for (int i = 0; i < 5; i++)
    {
        sum = sum + *p;
        p++;
    }
    printf("The sum of all the elements of the array is %d\n", sum);

    return 0;
}