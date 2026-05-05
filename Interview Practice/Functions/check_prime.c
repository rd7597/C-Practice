#include <stdio.h>

void checkPrime(int n)
{
    if (n < 2)
        printf("%d is not prime!\n", n);
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
        printf("%d is a prime number!\n", n);
    else
        printf("%d is not prime!\n", n);
}

int main()
{
    int num;
    printf("enter a number:\n");
    scanf("%d", &num);

    checkPrime(num);

    return 0;
}