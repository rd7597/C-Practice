#include <stdio.h>

int main() {
    int a,b,x,y;
    printf("Enter two Numbers:\n");
    scanf("%d %d",&a,&b);

    x=a;
    y=b;
    while(b!=0){
    int temp = b;
    b = a % b;
    a = temp;
    }
    int gcd =a;
    printf("Gcd:%d\n",gcd);

    int lcm= (x*y)/gcd;
    printf("LCM: %d\n",lcm);

    return 0;
}