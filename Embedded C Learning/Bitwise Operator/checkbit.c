#include <stdio.h>

int main() {
    int num,pos;
    printf("Enter Number:\n");
    scanf("%d",&num);
    
    printf("Enter Position:\n");
    scanf("%d",&pos);

    if((num & (1<<pos))!=0)
        printf("Bit set");
    else
        printf("Bit not Set");
    
    return 0;
}