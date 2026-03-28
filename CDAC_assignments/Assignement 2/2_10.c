#include <stdio.h>

int main()
{
    int num;
    printf("Enter limit:\n");
    scanf("%d", &num);

    for (int i = 2; i <= num; i++)   // check each number
    {
        int count = 0;

        for (int j = 1; j <= i; j++) // check factors
        {
            if (i % j == 0)
            {
                count++;
            }
        }

        if (count == 2) // prime condition
        {
            printf("%d ", i);
        }
    }

    return 0;
}