#include <stdio.h>

int main() {
    int i, j, n = 4;

    for(i = 0; i < n; i++) {

        // space
        for(j = 0; j < n - i; j++)
            printf(" ");

        int value = 1;

        for(j = 0; j <= i; j++) {
            printf("%d ", value);

            value = value * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}