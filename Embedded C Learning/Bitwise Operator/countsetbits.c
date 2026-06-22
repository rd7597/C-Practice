#include <stdio.h>

int main() {
    int n,count=0;

    printf("Enter a number:\n");
    scanf("%d",&n);

    while(n){
        n=n&(n-1);
        count++;
    }
    printf("Set Bits:%d",count);

    return 0;
}