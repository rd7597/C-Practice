#include <stdio.h>
int add(int a, int b);

void printstars(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("*");
    }
    printf("\n");
}

int main()
{
    int a, b, c;
    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);
    c = add(a, b);
    printstars(20);
    printf("Sum is %d", c);
    return 0;
}

int add(int a, int b)
{

    return a + b;
}
