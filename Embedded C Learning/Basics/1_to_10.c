#include <stdio.h>

int main() {
    int a,b,sum=0;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    
    for(int i=1;i<=b;i++){
        sum=sum+a;
    }
    printf("multiplication of %d and %d is: %d", a, b, sum);

    return 0;
}