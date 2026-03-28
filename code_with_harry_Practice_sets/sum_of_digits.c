#include <stdio.h>

int main()
{
    int num;
    printf("Enter A Number:\n");
    scanf("%d", &num);
    int sum = 0;
    while (num != 0)
    {

        sum = sum + num % 10;
        num /= 10;
    }
    printf("The Sum Of Digits Is %d", sum);

    return 0;
}