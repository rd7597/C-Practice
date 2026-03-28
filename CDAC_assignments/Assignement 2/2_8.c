#include <stdio.h>

int main()
{
    int num, a, sum = 0;
    printf("Enter a Number:\n");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }

    a = sum / 2;
    if (a == num)
        printf("Perfect No!\n");
    else
        printf("Not A Perfect No!\n");
    return 0;
}