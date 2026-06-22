#include <stdio.h>

int main()
{
    char str[] = "rahul";
    int i = 0, count;
    char c = str[i];
    while (c != '\0')
    {
        c = str[i];
        i++;
    }
    count = i - 1;
    printf("The length of string is %d\n", count);

    return 0;
}