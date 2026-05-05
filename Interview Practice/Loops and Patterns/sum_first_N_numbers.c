#include <stdio.h>

int main() {
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);

    int sum=0;
    for(int i=1;i<=N;i++){
        sum=sum+i;
    }
    printf("Sum of first %d numbers is: %d\n", N, sum);

    return 0;
}