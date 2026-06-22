#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    long long sum=0;
    int original=num;
    while(num!=0){
        sum=sum+num%10;
        num/=10;
    }
    printf("Sum of digits of %d is %lld\n",original,sum);

    return 0;
}