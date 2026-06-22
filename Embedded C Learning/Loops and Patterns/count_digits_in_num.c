#include <stdio.h>

int main()
{
    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);
    int count = 0;
    if (num < 0)
        num = -num;
    if (num == 0)
    {
        printf("Number of digits: 1");
        return 0;
    }

    while (num != 0)
    {
        num /= 10;
        count++;
    }
    printf("The number of digits are: %d\n", count);

    return 0;
}