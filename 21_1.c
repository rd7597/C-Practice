#include <stdio.h>

int main() {
    int n,a,c,b=0,rev=0;
    printf("Enter A Number: ");
    scanf("%d",&n);

    while(n>0){
        a=n%2;
        b=b*10+a;
        n=n/2;
    }
    printf("the Number is:%d\n",b);
    while(b>0){
        c=b%10;
        rev=rev*10+c;
        b=b/10;
    }
    printf("The Binary of the Entered decimal Number is:%d\n",rev);
    return 0;
}