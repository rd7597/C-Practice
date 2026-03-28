#include <stdio.h>
#include <math.h>

int main()
{
    int num, count = 0, sum = 0;

    printf("Enter a Number:\n");
    scanf("%d", &num);

    int temp = num;
    int original = num;

    // Step 1: count digits
    while (temp != 0)
    {
        count++;
        temp = temp / 10;
    }

    // Step 2: calculate sum
    temp = num;
    while (temp != 0)
    {
        int digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }

    // Step 3: compare
    if (sum == original)
        printf("Armstrong Number!\n");
    else
        printf("Not Armstrong!\n");

    return 0;
}