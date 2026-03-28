#include <stdio.h>

void prime(int);

void prime(int a)
{
    int count = 0;
    if (a <= 1)
    {
        printf("Not Prime\n");
        return;
    }
    for (int i = 2; i < a; i++)
    { 
        if (a % i == 0)
        {
            printf("Not Prime!\n");
            return;
        }
    }
    printf("Prime Number!\n");
}

int main()
{
    int a;
    printf("Enter A Number:\n");
    scanf("%d", &a);
    prime(a);

    return 0;
}