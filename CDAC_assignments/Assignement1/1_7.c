#include <stdio.h>

int main() {
    int n,fact=1;

    printf("Enter a Number:\n");
    scanf("%d",&n);

    if(n<0){
        printf("Factorial is not defined for negative numbers:\n");
    return 0;
}
    int i=1;
    while(i<=n){
        fact = fact*i;
        i++;
    }
    printf("The factorial of %d is %d\n",n,fact);   

    return 0;
}