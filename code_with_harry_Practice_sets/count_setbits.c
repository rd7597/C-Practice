#include <stdio.h>

// Convert binary string to decimal
unsigned int binaryToDecimal(char bin[])
{
    unsigned int num = 0;
    int i = 0;

    while (bin[i] != '\0')
    {
        num = num * 2 + (bin[i] - '0');
        i++;
    }

    return num;
}

// Method 1: Basic
int countSetBits_basic(unsigned int n)
{
    int count = 0;

    while (n)
    {
        count += (n & 1);
        n >>= 1;
    }

    return count;
}

// Method 2: Optimized (Brian Kernighan)
int countSetBits_optimized(unsigned int n)
{
    int count = 0;

    while (n)
    {
        n = n & (n - 1);
        count++;
    }

    return count;
}

int main()
{
    char binary[50];
    unsigned int num;

    printf("Enter a binary number:\n");
    scanf("%s", binary);

    num = binaryToDecimal(binary);

    int basic = countSetBits_basic(num);
    int optimized = countSetBits_optimized(num);

    printf("Set bits (Basic)     : %d\n", basic);
    printf("Set bits (Optimized) : %d\n", optimized);

    return 0;
}