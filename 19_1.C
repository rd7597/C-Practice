#include <stdio.h>

int main()
{
    int n, last, sum = 0;
    printf("Enter a Number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        last = n % 10;
        sum = sum + last;
        n = n / 10;
    }
    printf("the sum of digits:%d\n", sum);
    return 0;
}