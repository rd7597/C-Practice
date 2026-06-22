#include <stdio.h>

int main()
{
    int num;
    printf("Enter a Number:\n");
    scanf("%d", &num);

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)  
        {
            printf("The number is not a prime number.\n");
            return 0;
        }
    }
    printf("The number is a prime number.\n");
    return 0;
}