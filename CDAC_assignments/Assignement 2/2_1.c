#include <stdio.h>

int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);

int a, b;

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int div(int a, int b)
{
    return a / b;
}

int main()
{
    printf("Enter Two Numbers:\n");
    scanf("%d %d", &a, &b);
    int result_add = add(a, b);
    int result_sub = sub(a, b);
    int result_mul = mul(a, b);
    int result_div = div(a, b);

    printf("Addition: %d\nSubtraction:%d\nMultiplication:%d\nDivision:%d\n", result_add, result_sub, result_mul, result_div);

    return 0;
}