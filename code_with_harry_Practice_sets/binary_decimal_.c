#include <stdio.h>

int main()
{
    int num, rem, base=1,decimal = 0;

    printf("Enter a Number in Binary:\n");
    scanf("%d", &num);

    while (num > 0)
    {
        rem = num % 10;
        decimal += rem * base;
        base = base * 2;
        num = num / 10;
    }
    printf("Decimal equivalent of entered binary is:%d\n", decimal);

    return 0;
}