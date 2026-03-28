#include <stdio.h>

int main()
{
    int n, temp, rev = 0, original;
    printf("Enter A Number: ");
    scanf("%d", &n);
    original = n;
    while (n > 0)
    {
        temp = n % 10;
        rev = rev * 10 + temp;
        n = n / 10;
    }
    printf("reverse of the number is:%d\n", rev);

    if (original == rev)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
}