#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;

    while (1)
    {
        printf("1. Create Database\n");
        printf("2. Insert new Record\n");
        printf("3. Modify a Record\n");
        printf("4. Delete a Record\n");
        printf("5. Display all records\n");
        printf("6. Exit\n");

        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Database Created...\n\n");
            break;

        case 2:
            printf("Record inserted...\n\n");
            break;

        case 3:
            printf("Record modified...\n\n");
            break;

        case 4:
            printf("Record deleted...\n\n");
            break;

        case 5:
            printf("Displaying all records...\n\n");
            break;

        case 6:
            printf("Exiting...\n\n");
            exit (0);

        default:
            printf("Invalid choice. Please try again.\n\n");
        }
    }

    return 0;
}