#include <stdio.h>

int productdigits(int n)
{
    if (n<0)
        n=-n;
    if (n < 10)
        return n;
    int pro = 1;

    while (n != 0)
    {
        pro = pro * (n % 10);
        n = n / 10;
    }
    return productdigits(pro);
}

int main()
{
    int num;
    printf("Enter a Number:\n");
    scanf("%d", &num);

    int result = productdigits(num);

    printf("recursive Product of the all digits : %d\n", result);

    return 0;
}