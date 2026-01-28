#include <stdio.h>

int main()
{
    int n, org, digit, count = 0, sum = 0;
    printf("enter a number: ");
    scanf("%d", &n);
    org = n;
    while (n > 0)
    {
        count++;
        n = n / 10;
    }
    printf("Total no of digits in the number:%d\n", count);
    n = org;

    while (n > 0)
    {
        digit = n % 10;
        int power = 1;
        for (int i = 1; i <= count; i++)
        {
            power = power * digit;
        }
        
        sum = power + sum;
        n = n / 10;
    }
    printf("the sum is:%d\n", sum);
    if (sum == org)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");
    return 0;
}