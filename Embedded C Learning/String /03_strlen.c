#include <stdio.h>

int strlen(char str[]){
    
    int i = 0, count;
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
    scanf("%[^\n]s",str);

    printf("The length of string is %d\n", strlen(str));

    return 0;
}