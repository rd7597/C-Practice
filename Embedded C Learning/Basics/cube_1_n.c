#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Cubes of numbers from 1 to %d:\n", n);
    for (int i = 1; i <= n; i++)
    {
        int cube = i * i * i;
        if (cube % 3 == 0)
            printf("%d ", cube);
    }
    printf("\n");

    return 0;
}