#include <stdio.h>

int main()
{
    int n;
    printf("Enter A Number:");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("Even\n");
    }
    else
    {
        printf("ODD\n");
    }

    return 0;
}