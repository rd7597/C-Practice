#include <stdio.h>

int main()
{
    int a,rev = 0;
    printf("Enter a Three Digit Number\n");
    scanf("%d", &a);

    while (a)
    {

        int ld = a % 10;
        rev = rev * 10 + ld;
        a = a / 10;
    }
    printf("Reversed Number is:%d\n", rev);
    return 0;
}