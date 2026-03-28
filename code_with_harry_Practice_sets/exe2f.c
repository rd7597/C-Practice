#include <stdio.h>

int main()
{
    int num, sum=0, rem;
    printf("Enter a Number:\n"); 
    scanf("%d", &num);
    while (num > 0)
    {
        rem = num % 10;
        num = num / 10;
        printf("%d\t %d\n",num ,rem); // to check the values of num and rem at each step
        sum = rem + sum;
    }
    printf("Sum of Digits is %d\n", sum); // Final Output
    return 0;
}