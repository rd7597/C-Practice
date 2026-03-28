#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two Numbers:\n");
    scanf("%d %d", &a, &b);

    a>b ? printf("Difference of these two numbers is:%d\n",a-b):printf("Sum of these two numbers is:%d\n",a+b);

    return 0;
}