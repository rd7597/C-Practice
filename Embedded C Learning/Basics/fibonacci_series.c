#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);
    long int x = 0, y = 1, z;
    printf("Fibonacci series: %ld ", y);
    for (int i = 2; i <= n; i++)
    {
        z = x + y;
        printf("%ld ", z);
        x = y;
        y = z;
    }
    printf("\n");

    return 0;
}