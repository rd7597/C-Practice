#include <stdio.h>

int main() {
    int x = 0, y = 1, z, n;

    printf("Enter the number:\n");
    scanf("%d", &n);

    // Handle edge cases
    if (n == 0 || n == 1) {
        printf("%d is a Fibonacci number.\n", n);
        return 0;
    }

    while (y < n) {
        z = x + y;
        x = y;
        y = z;
    }

    if (y == n) {
        printf("%d is a Fibonacci number.\n", n);
    } else {
        printf("%d is not a Fibonacci number.\n", n);
    }

    return 0;
}