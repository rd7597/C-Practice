#include <stdio.h>

int main()
{
    char a;
    printf("Enter a character:(a-z) or (A-Z):\n");
    scanf("%c", &a);

    if ((a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') || (a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U'))
        printf("Vowel\n");
    else
        printf("Not a Vowel\n");

    return 0;
}