#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age:\n");
    scanf("%d", &age);

    switch (age)
    {
    case 1:
        printf("You are a Baby\n");
        break;
    case 2:
        printf("You are a Toddler\n");
        break;
    case 3:
        printf("You are a Kid\n");
        break;
    case 5:
        printf("You are a Child\n");
        break;
    case 18:
        printf("You are a Teenager\n");
        break;
    case 21:
        printf("You are an Adult\n");
        break;
    case 65:
        printf("You are a Senior Citizen\n");
        break;
    default:
        printf("You have entered an invalid age\n");
        break;
    }
    return 0;
}