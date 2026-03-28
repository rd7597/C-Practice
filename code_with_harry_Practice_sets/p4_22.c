#include <stdio.h>

int main() {
    int decimal;

    printf("Enter a Decimal Number:\n");
    scanf("%d",&decimal);

    printf("The Octal Equivalent of Decimal Number is:%o\n",decimal);
    printf("The Hexadecimal Equivalent of Decimal Number is:%X\n",decimal);

    return 0;
}