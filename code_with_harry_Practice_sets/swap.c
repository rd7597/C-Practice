#include <stdio.h>

int main() {
    int temp,a,b;

    printf("Enter a and b:\n");
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("After swap:a=%d,b=%d",a,b);
    return 0;
}