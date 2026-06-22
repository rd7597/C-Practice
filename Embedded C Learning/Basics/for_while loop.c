#include <stdio.h>

int main() {
    int n;
    printf("Enter a Number: \n");
    scanf("%d", &n);
    int org=n;
    printf("In While Loop:\n");
    int i=1;
    while(i<=n){
        printf("%d ",i);
        i++;
    }

    n=org;
    printf("\nIn For Loop:\n");
    for(int i=1;i<=n;i++){
        printf("%d ",i);
    }
    return 0;
}