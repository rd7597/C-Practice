#include <stdio.h>

void swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
    printf("Inside swap function: a=%d, b=%d\n", *a, *b);
}

int main()
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Before swapping: a=%d, b=%d\n", a, b);
    swap(&a, &b);
    printf("After swapping: a=%d, b=%d\n", a, b);
    return 0;
}