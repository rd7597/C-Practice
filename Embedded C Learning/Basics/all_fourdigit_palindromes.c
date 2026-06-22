#include <stdio.h>

int main()
{
    int num, rev = 0;
    /*printf("Enter a Number:\n");
    scanf("%d", &num);
    int original_num = num; // Store the original number for later comparison
*/
    for (num = 1000; num <= 9999; num++)
    {
        int temp = num; // Store the original number for later comparison
        rev = 0; // Reset the reversed number for each iteration
        while (temp != 0)
        {
            rev = rev * 10 + (temp % 10);
            temp = temp / 10;
        }
        //printf("Reversed Number is %d\n", rev);
        if (num == rev)
        {
            printf("%d ",rev);
        }
    }
    return 0;
}