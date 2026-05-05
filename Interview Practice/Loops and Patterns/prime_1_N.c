#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Prime Numbers from 2 to %d:\n ",num);

    for (int range = 2; range <= num; range++)
    {
        int isPrime = 1;
        for (int i = 2; i * i <= range; i++)
        {
            if (range % i == 0)
            {
                isPrime=0;
                break;
            }
        }
        if (isPrime)
        {
            printf("%d\t", range);
        }
    }

    return 0;
}