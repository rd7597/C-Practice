#include <stdio.h>

int main()
{
    float b = 123.1265;
    printf("%f\n", b);
    printf("%.2f\n", b);
    printf("%.3f\n", b);
    printf("%d\n", (int) b); // Corrected cast to int
    return 0;
}