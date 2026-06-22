#include <stdio.h>

int main() {
    int n,sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Squares of numbers from 1 to %d:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", i * i);
        sum += i * i;
    }
    printf("\nSum of squares: %d\n", sum);


    return 0;
}