#include <stdio.h>

int main() {
    int num;
    printf("Enter a Number:\n");
    scanf("%d",&num);

    int reverse=0;
    int original=num;
    while(num!=0){
        reverse=reverse*10+num%10;
        num=num/10;
    }

    if(original==reverse){
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}