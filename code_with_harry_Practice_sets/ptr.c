#include <stdio.h>

int main()
{
    int a = 4;
    int *ptr = &a;
    printf("%d\n", *ptr); // prints the value of a using the pointer
    printf("%d\n", ptr); // prints the address of a
    printf("%d\n", &a); // prints the address of a
    printf("%d\n", &ptr); // prints the address of the pointer
    printf("%d\n", ptr + 1); // prints the address of the next integer (4 bytes ahead)

    return 0;
}