#include <stdio.h>

int main()
{
    int a = 0, b = 1, c,n;
    printf("Enter no of steps:\n");
    scanf("%d", &n);
   
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;     
    }
    printf("...\n");

    return 0;
}