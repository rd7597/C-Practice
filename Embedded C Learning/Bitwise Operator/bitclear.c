#include <stdio.h>

int main() {
    int num,pos;
    printf("Enter Number:\n");
    scanf("%d",&num);
    
    printf("Enter Position:\n");
    scanf("%d",&pos);
    num=num & ~(1<<pos);
    
    printf("After clearing bit: %d",num);
    return 0;
}