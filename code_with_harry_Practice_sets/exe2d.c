#include <stdio.h>

int main()
{
    int a, b, larger;
    printf("Enter Two Numbers:\n");
    scanf("%d %d", &a, &b);

    larger = (a > b) ? a : b;   
    printf("Larger number is %d\n", larger);

    return 0;
}
