#include <stdio.h>

int main() {
    int n,sum=0;
    printf("Enter a Number:\n");
    scanf("%d",&n);
    int temp=n;

    while(n!=0){
        sum=sum+n%10;
        n=n/10;
    }
    printf("The sum of all the digits of %d is %d\n",temp,sum);

    return 0;
}