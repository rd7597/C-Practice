#include <stdio.h>

int main()
{
    int num;
    printf("Enter A Number:\n");
    scanf("%d", &num);
    int count = 0;

    if(num == 0)
    {
        count = 1; // Zero has one digit
    }
    
    while (num != 0)
    {
        count++;
        num = num / 10;
    }
    
    printf("Number of digits: %d\n", count);
    return 0;
}