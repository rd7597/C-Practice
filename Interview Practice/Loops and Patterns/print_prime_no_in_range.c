#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");

    if (scanf("%d", &num) != 1 || num < 2) {
        printf("No prime numbers\n");
        return 1;
    }

    printf("Prime numbers from 1 to %d are:\n", num);

    for (int range = 2; range <= num; range++) {
        int isPrime = 1;

        for (int i = 2; i * i <= range; i++) {
            if (range % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("%d ", range);
        }
    }

    return 0;
}