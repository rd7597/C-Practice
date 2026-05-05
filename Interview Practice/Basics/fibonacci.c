#include <stdio.h>

int main()
{   //0, 1, 1, 2, 3, 5, 8, 13, 21 ...
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Error! Fibonacci series is not defined for negative numbers.\n");
        return 0;
    }

    int x = 0, y = 1, z;

    printf("Fibonacci Series: ");

    if (num >= 1)
        printf("%d ", x);

    if (num >= 2)
        printf("%d ", y);

    for (int i = 3; i <= num; i++)
    {
        z = x + y;
        printf("%d ", z);
        x = y;
        y = z;
    }

    return 0;
}