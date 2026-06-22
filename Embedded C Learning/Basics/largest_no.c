#include <stdio.h>

int main()
{
    int n,largest;
    printf("Enter 10 Numbers:\n");
    scanf("%d", &largest);

    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &n);
        if (n > largest)
        {
            largest = n;
        }
    }
    printf("The largest number is: %d\n", largest);

    return 0;
}