#include <stdio.h>

int main()
{
    int num;
    printf("Enter A Number:\n");
    scanf("%d", &num);
    int product = 1;
    while (num != 0)
    {

        product = product * (num % 10);
        num /= 10;
    }
    printf("The Product Of Digits Is %d", product);

    return 0;
}