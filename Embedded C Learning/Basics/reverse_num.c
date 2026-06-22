#include <stdio.h>

void reverse_num(int n)
{
    int rev = 0;
    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    printf("Reverse of the Number Entered is:%d\n", rev);
}

int main()
{

    int number;
    printf("Enter a Number:\n");
    scanf("%d", &number);
    reverse_num(number);
    return 0;
}