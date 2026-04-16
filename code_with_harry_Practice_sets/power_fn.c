#include <stdio.h>

int power(int base, int exp)
{
    int result = 1;
    for (int i = 1; i <= exp; i++)
    {
        result = result * base;
    }
    return result;
}

int main()
{
    int n, exp;
    printf("Enter Base:\n");
    scanf("%d", &n);
    printf("Enter Power:\n");
    scanf("%d", &exp);

    int result = power(n, exp);
    printf("%d^%d = %d\n", n, exp, result);
    
    return 0;
}