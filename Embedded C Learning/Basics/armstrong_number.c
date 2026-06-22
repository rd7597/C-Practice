#include <stdio.h>

int power(int base, int exp)
{
    int result = 1;
    for (int i = 0; i < exp; i++)
    {
        result = result * base;
    } 
    return result;
}

int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d", &n);
    int original = n;
    int sum = 0, count = 0;

    while (n != 0)
    {
        count++;
        n = n / 10;
    }
    n = original;
    while(n!=0){
        int digit = n % 10;
        sum=sum+power(digit, count);
        n = n / 10;
    }

    if (sum == original)
    {
        printf("The number is an Armstrong number.\n");
    }
    else
    {
        printf("The number is not an Armstrong number.\n");
    }

    return 0;
}