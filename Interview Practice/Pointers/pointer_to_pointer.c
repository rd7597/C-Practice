#include <stdio.h>

int main()
{
    int a = 5;
    int *p = &a;
    int **q = &p;

    printf("The value of a is %d %d %d %d %d\n", a, *p, **q, *(&a), *(*(&p)));

    return 0;
}