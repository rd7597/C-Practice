#include <stdio.h>

int main()
{
    int a, b, temp;
    printf("Enter two Numbers:\n");
    scanf("%d %d", &a, &b);
    printf("Before Swap: a=%d, b=%d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After Swap: a=%d b=%d\n", a, b);

    return 0;
}