#include <stdio.h>

int main()
{
    int num = 1,i;
    for (int num = 2; num <= 99; num++)
    {
        for(i = 2; i*i <= num; i++){
        if (num % i == 0)
        {
            break;
        }

    }

    if (i*i > num)
    {
        printf("%d ", num);
    }
    }

    return 0;
}