#include <stdio.h>

int main() {
    int n,sum=0,term=1;
    printf("Enter a number:\n");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        sum=sum+term;
        term=term+i;
    }
    printf("The sum of the series upto %d terms is %d\n",n,sum);

    return 0;
}