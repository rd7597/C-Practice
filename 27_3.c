#include <stdio.h>

int main() {
    int n,sum=0,pow=1,digit;
    printf("Enter a binary Number: \n");
    scanf("%ld", &n);

    while(n>0){ 
        digit=n%10;
        sum=digit*pow+sum;
        pow=pow*2;
        n=n/10;
    }

    printf("Decimal:%d\n",sum);
    return 0;
}