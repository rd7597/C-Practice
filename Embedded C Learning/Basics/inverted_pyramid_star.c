#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter No. of rows:\n");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf(" ");
        }
        for(j=1;j<=2*(n-i)+1;j++){
            printf("*");
        }
        printf("\n");

    }

    return 0;
}