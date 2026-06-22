#include <stdio.h>

long long factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return (long long) n * factorial(n - 1);
}

int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    long long result = factorial(num);
    printf("The factorial of %d is %lld\n", num, result);
    return 0;
}