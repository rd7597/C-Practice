#include <stdio.h>

int main() {
    int binary,decimal;

    printf("Enter the number in binary:\n");
    scanf("%d",&binary);
    int original=binary; // Store the original binary number for later use

    while(binary>0){
        decimal = decimal * 10 + (binary % 10);
        binary /= 10;
    }
    printf("The decimal equivalent of %d is %d", original, decimal);


    return 0;
}