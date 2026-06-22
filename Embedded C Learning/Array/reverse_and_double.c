#include <stdio.h>

int main()
{
    int num, rev = 0;
    printf("Enter a Number:\n");
    scanf("%d", &num);

    while (num != 0)
    {
        rev = rev * 10 + (num % 10);
        num = num / 10;
    }
    printf("Reversed Number is %d\n", rev);
    printf("Double of Reversed Number is %d\n", rev * 2);

    return 0;
}