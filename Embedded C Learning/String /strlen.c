#include <stdio.h>
#include <stddef.h>

size_t mystrlen(const char *str)
{
    if (str == NULL)
    {
        return 0;
    }

    size_t i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

int main()
{
    char str[50];

    printf("Enter a String:\n");
    fgets(str, sizeof(str), stdin);

    size_t length = mystrlen(str);

    if (length > 0 && str[length - 1] == '\n')
    {
        str[length - 1] = '\0';
        length--;
    }

    printf("String Length is %zu\n", length);

    return 0;
}