#include <stdio.h>

int reverse_num(int n)
{
    static int rev = 0;
    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    printf("Reverse of the Number Entered is:%d\n", rev);
    return rev;
}

int is_palindrome(int n)
{
    int rev;
    int temp = n; // Store the original number in a temporary variable
    if (temp == rev)
    {
        printf("%d is a Palindrome Number.\n", n);
    }
    else
    {
        printf("%d is not a Palindrome Number.\n", n);
    }
}

int main()
{

    int n;
    printf("Enter a Number:\n");
    scanf("%d", &n);
    int temp = n; // Store the original number in a temporary variable
    int rev = reverse_num(n);
    // reverse_num(number);
    is_palindrome(n);
    return 0;
}