#include <stdio.h>

int main()
{
    int num;
    printf("Enter A Number:\n");
    scanf("%d", &num);
    int factorial = 1;
    int original_num = num; // Store the original number for later use
    while (num > 1)
    {

        factorial = factorial * num;
        num--;
    }
    printf("The Factorial Of %d Is %d", original_num, factorial);

    return 0;
}  