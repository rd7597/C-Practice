#include <stdio.h>

int main()
{
    int n, last, sum = 0;
    printf("Enter a Number:\n");
    scanf("%d", &n);

    while (n > 0)
    {
        last = n % 10;
        sum = sum + last;
        n = n / 10;
    }
    printf("%d", sum);
    return 0;
}