#include <stdio.h>

int main() {
    int num;
    long long fact=1;
    printf("Enter a number:\n");
    scanf("%d",&num);

    if(num<0){
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }
    if(num==0 || num==1){
        printf("Factorial of %d is 1\n",num);
        return 0;
    }

    for(int i=2;i<=num;i++){
        fact=fact*i;
    }
    printf("Factorial of %d is %lld\n",num,fact);

    return 0;
}