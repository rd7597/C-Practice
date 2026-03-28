#include <stdio.h>

int main()
{
    long long int n;
    int sum = 0;
    printf("Enter a Number: \n");
    scanf("%lld", &n);

    int last_digit = n % 10;
    int second_last = (n / 10) % 10;
    sum = last_digit + second_last;

    if (n < 10)
    {
        printf("Sum is %d\n", n);
    }
    else
    {
        printf("Sum is %d\n", sum);
    }

    return 0;
}