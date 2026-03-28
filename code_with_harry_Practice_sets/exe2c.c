#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter Two Numbers:\n");
    scanf("%d %d", &a, &b);
    if (a > b)
        printf("%d is Greater\n", a);
    else if (b>a)
        printf("%d is Greater\n", b);
    else
        printf("Both are Equal\n");
    return 0;
}