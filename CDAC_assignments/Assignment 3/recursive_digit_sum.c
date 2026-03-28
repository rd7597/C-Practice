#include <stdio.h>

int sumdigits(int n)
{
    if (n < 10)
    {
        return n;
    }

    int sum = 0;
    while (n != 0)
    {

        sum = sum + (n % 10);
        n = n / 10;
    }
    //printf("The sum is %d\n",sum);

    return sumdigits(sum);
}

int main()
{
    int num;
    printf("Enter a Number:\n");
    scanf("%d", &num);

    int result = sumdigits(num);

    printf("The sum of all the digits is %d\n", result);

    return 0;
}