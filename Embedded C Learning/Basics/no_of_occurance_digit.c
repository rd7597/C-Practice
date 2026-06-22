#include <stdio.h>

int main() {
    int num,digit, count=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter a digit to count: ");
    scanf("%d", &digit);

    while(num>0){
        int last_digit = num % 10;
        if(last_digit == digit){
            count++;
        }
        num /= 10;
    }
    printf("The digit %d occurs %d times in the number.\n", digit, count);

    return 0;
}