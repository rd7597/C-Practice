#include <stdio.h>

int main()
{
    int a, b;
    int choice;

    while (1)
    {
        printf("\n------- My Calculator -------\n");
        printf("\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("0. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        // Exit condition
        if (choice == 0)
        {
            printf("Exiting...\n");
            break;
        }

        // Invalid choice check
        if (choice < 1 || choice > 4)
        {
            printf("Invalid choice! Try again\n");
            continue;   // wapas loop start
        }

        // Numbers tab hi lo jab choice valid ho
        printf("Enter Two Numbers: ");
        scanf("%d %d", &a, &b);

        switch (choice)
        {
            case 1:
                printf("Addition is: %d\n", a + b);
                break;

            case 2:
                printf("Subtraction is: %d\n", a - b);
                break;

            case 3:
                printf("Multiplication is: %d\n", a * b);
                break;

            case 4:
                if (b != 0)
                    printf("Division is: %d\n", a / b);
                else
                    printf("Error: Division by zero\n");
                break;
        }
    }

    return 0;
}