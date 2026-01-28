#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age:");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("you can Vote\n");
    }
    if (age < 18)
    {
        printf("you cannot vote.wait %d years to vote\n", 18 - age);
    }
    if (age >= 65)
    {
        printf("you are seniour citizen");
    }
    return 0;
}