#include <stdio.h>

int main()
{
    int n;
    printf("Enter No. of rows:\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int num = n; // starting number of each row
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", num);
            num--;
        }
        printf("\n");
    }

    return 0;
}