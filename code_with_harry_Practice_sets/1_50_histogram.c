#include <stdio.h>

int main()
{
    int num;

    printf("Enter 10 numbers (1 to 50):\n");

    for (int i = 1; i <= 10; i++)
    {
        scanf("%d", &num);

        // validation (optional but good practice)
        if (num < 1 || num > 50)
        {
            printf("Invalid input! Enter number between 1 and 50\n");
            i--; // repeat this iteration
            continue;
        }

        // print histogram line
        for (int j = 1; j <= num; j++)
        {
            printf("=");
        }

        printf("\n"); // next line for next number
    }

    return 0;
}