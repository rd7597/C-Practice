#include <stdio.h>

int main() {
    long num;
    int digit,sum;

    printf("Enter a number:\n");
    scanf("%ld",&num);
    printf("%ld-> ",num);
    do{
        sum=0;
        while(num!=0){
            digit=num%10;
            sum=sum+digit;
            num/=10;
        }
        printf("%d\t",sum);
        num=sum;
    }while(num/10!=0);
    return 0;
}