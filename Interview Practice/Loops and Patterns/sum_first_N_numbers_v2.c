#include <stdio.h>

int main() {
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);

    long long  sum=N*(N+1)/2; // Using the formula for the sum of the first N natural numbers
    printf("Sum of first %d numbers is: %lld\n", N, sum);

    return 0;
}