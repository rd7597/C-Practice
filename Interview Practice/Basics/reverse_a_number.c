#include <stdio.h>

int main() {
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    int reverse=0;
    int original=num;

    while(num!=0){
        reverse=reverse*10+num%10;
        num=num/10;
    }
    printf("Reverse of %d is %d\n", original, reverse);
    return 0;
}