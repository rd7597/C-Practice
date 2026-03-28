#include <stdio.h>

// Functions
int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    if (b == 0)
    {
        printf("Error: Division by zero\n");
        return 0;
    }
    return a / b;
}

int main()
{
    int a, b, choice;

    while (1)
    {
        printf("\n---- Calculator ----\n");
        printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n0. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Exit condition
        if (choice == 0)
        {
            printf("Exiting calculator...\n");
            break;
        }

        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);

        switch (choice)
        {
            case 1:
                printf("Result = %d\n", add(a, b));
                break;

            case 2:
                printf("Result = %d\n", sub(a, b));
                break;

            case 3:
                printf("Result = %d\n", mul(a, b));
                break;

            case 4:
                printf("Result = %d\n", divide(a, b));
                break;

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}