#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Numbers from 1 to %d:\n", n);
    int i = 1;
    while (i <= n) {
        printf("%d\t", i);
        i++;
    }   
    printf("\n");

    return 0;
}