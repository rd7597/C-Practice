#include <stdio.h>

int fab(int n, int a, int b)
{
    if (n == 0)
        return a;
    if (n == 1)
        return b;
    return fab(n - 1, b, a + b);
}

int main()
{
printf("Fibonacci Series:\n");
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fab(i, 0, 1));
    }
    printf("\n");
    return 0;
}