#include <stdio.h>

int main()
{
    int n = 1, last;
    int sum = 0;
    float avg;
    printf("Enter a number:\n");
    scanf("%d", &last);
    while (n <= last)
    {
        sum = sum + n;
        n++;
    }
    avg = (float)sum / last;
    printf("The sum of first %d Numbers:%3d\n", last, sum);
    printf("The avrage of first %d numbers:%5.2f\n", last, avg);
    return 0;
}