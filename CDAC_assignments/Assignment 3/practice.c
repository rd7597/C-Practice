#include <stdio.h>

int main()
{
    int n, fact = 1;
    printf("Enter a Number:\n");
    scanf("%d", &n);
    int original = n;
    if (n < 0)
        printf("The Factorial is not defined for a Negative Number!\n");
    else
        while (n > 1)
        {
            fact = fact * n;
            n--;
        }
    printf("The Factorial of %d is %d\n", original, fact);

    return 0;
}