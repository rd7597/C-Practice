#include <stdio.h>

int main() {
    int n,pro=1;
    printf("Enter a Number:\n");
    scanf("%d",&n);

    while(n!=0){
        pro=pro*(n%10);
        n=n/10;
    }
    printf("Product of the digits : %d\n",pro);

    return 0;
}