#include <stdio.h>

int main()
{
    int age;
    printf("Enter Your Age\n");
    //scanf("%*d", &age); // Dummy read to consume the first input
    char condition;
    do
    {
        int age;
        scanf("%d", &age);
        if (age < 18)
        {
            printf("You are a minor\n");
        }
        else if (age >= 18 && age < 65)
        {
            printf("You are an adult\n");
        }
        else
        {
            printf("You are a senior citizen\n");
        }

        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &condition); // Note the space before %c to consume any leftover newline character
    } while (condition == 'y' || condition == 'Y');

    return 0;
}