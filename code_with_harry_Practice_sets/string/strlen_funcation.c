#include <stdio.h>

int mystrlen(char str[])
{
    int i = 0, count = 0;
    char c = str[i];
    while (c != '\0')
    {
        c = str[i];
        i++;
    }
    count = i - 1;
    return count;
}

int main()
{
    char str[50];
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    //fgets(str, sizeof(str), stdin);


    printf("the Length of string is %d\n", mystrlen(str));

    return 0;
}