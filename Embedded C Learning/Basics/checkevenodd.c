#include <stdio.h>

int main()
{
    int num;
    printf("Enter a Number:\n");
    scanf("%d", &num);
    
    if (num % 2 == 0)
    {
        printf("Even Number Entered!\n");
    }
    else
    {
        printf("Odd Number Entered!\n");
    }

    return 0;
}