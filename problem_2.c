#include <stdio.h>

int main() {
    int num;

    printf("Enter A Number:");
    scanf("%d",&num);
    switch(num){
        case 1:
        printf("You Entered One\n");
        break;
        case 2:
        printf("You entered two\n");
        break;
        default:
        printf("Nothing Matched\n");
    }
    return 0;
}