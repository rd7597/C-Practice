#include <stdio.h>

int main()
{
    int n, temp, rev = 0;
    printf("Enter a Number:");
    scanf("%d", &n);

    while (n > 0)
    {

        temp = n % 10;
        rev = rev * 10 + temp; 
        n = n / 10;
    }
    printf("%d ", rev);

    return 0;
}