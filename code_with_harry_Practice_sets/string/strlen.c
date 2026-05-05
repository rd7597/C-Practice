#include <stdio.h>

int mystrlen(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

int main()
{
    char str[100];
    printf("Enter a String: ");
    scanf("%[^\n]", str);

    printf("the string length is %d\n", mystrlen(str));

    return 0;
}