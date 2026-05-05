#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");

    if (scanf("%d", &n) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    if (n < 2) {
        printf("%d is not a Prime Number\n", n);
        return 0;
    }

    int isPrime = 1;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime)
        printf("%d is a Prime Number\n", n);
    else
        printf("%d is not a Prime Number\n", n);

    return 0;
}