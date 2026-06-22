#include <stdio.h>

int main() {
    int binary,decimal=0,rem,base=1;
    printf("Enter the number in binary:\n");
    scanf("%d",&binary);

    while(binary>0){
        rem=binary%10;
        decimal+=rem*base;
        base=base*2;
        binary/=10;
    }
    printf("The decimal equivalent is: %d", decimal);

    return 0;
}