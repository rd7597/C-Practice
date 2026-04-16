#include <stdio.h>

int main()
{
    int num, rev = 0;
    printf("Enter a Number:\n");
    scanf("%d", &num);
    int original_num = num; // Store the original number for later comparison

    while (num != 0)
    {
        rev = rev * 10 + (num % 10);
        num = num / 10;
    }
    printf("Reversed Number is %d\n", rev);
    if (original_num == rev)
    {
        printf("The number is a palindrome.\n");
    }
    else
    {
        printf("The number is not a palindrome.\n");
    }
    return 0;
}