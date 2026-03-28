#include <stdio.h>

int main()
{
    int n;
    long long fact = 1;  //for overflow prevention
    printf("Enter a Number:\n");
    scanf("%d", &n);

    int original = n; //saving a copy of n in original

    if(n<0){
        printf("factorial is not defined for negative numbers!");
    }

    if (n <= 1)
    {
        return 1;
    }
    else
        while (n > 1)
        {
            fact = fact * n;
            n--;
        }
    printf("The Factorial of %d is %lld\n", original, fact);

    return 0;
}