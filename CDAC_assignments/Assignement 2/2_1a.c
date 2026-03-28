#include <stdio.h>

int main()
{
    int a, b;
    int choice;

    printf("------- My Calculator -------\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");

    printf("Enter choice:\n");
    scanf("%d", &choice);
    printf("Enter Two Numbers:\n");
    scanf("%d %d", &a, &b);

    switch (choice)
    {
    case 1:
        printf("Addition is:%d\n", a + b);
        break;
    case 2:
        printf("Subtraction is:%d\n", a - b);
        break;
    case 3:
        printf("Multiplication is:%d\n", a * b);
        break;
    case 4:
        printf("Division is:%d\n", a / b);
        break;

    default:
        break;
    }
    return 0;
}