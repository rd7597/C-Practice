#include <stdio.h>

int mul(int, int);

int mul(int a, int b)
{
    return a * b;
}
struct calculator
{
    int (*fp)(int, int);
};

int main()
{
    struct calculator calc = {mul};
    int result = calc.fp(4, 10);
    printf("Result=%d\n", result);
    return 0;
    
}