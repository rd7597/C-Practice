#include <stdio.h>

int power(int base, int exp)
{
    int result = 1;
    for (int i = 0; i < exp; i++)
    {
        result = result * base;
    }
    return result;
}

int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    int original = num;
    int count = 0;

    while (num != 0)
    {
        num = num / 10;
        count++;
    }
    int sum = 0;
    num = original;
    while (num != 0)
    {
        sum = sum + power(num % 10, count);
        num = num / 10;
    }
    if (original == sum)
    {
        printf("%d is an armstrong number\n", original);
    }
    else
    {
        printf("%d is not an armstrong number\n", original);
    }
    return 0;
}