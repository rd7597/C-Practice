#include <stdio.h>

int main() {
    int n;
    printf("Enter No. of rows:\n");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        int num = 1;  // har row ka first element

        for(int j = 0; j <= i; j++) {
            printf("%d ", num);

            // next value calculate
            num = num * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}