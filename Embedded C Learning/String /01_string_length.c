#include <stdio.h>

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);
    int i = 0, count;

    while (str[i] != '\0')
    {
        i++;
    }
    count = i - 1;
    printf("The Length of string is %d\n", count);

    return 0;
}