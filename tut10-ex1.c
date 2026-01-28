#include <stdio.h>

int main()
{

    int n;
    printf("Enter the subject choice in which you have passed:\n");
    printf("1 for maths\n2 for science\n3 for both\n Enter choice:\n");
    scanf("%d", &n);
    printf("You have entered %d\n", n);

    if (n == 1)
    {
        printf("You have passed in maths\n");
        printf("Congratulations! You have got 15rs reward money\n");
    }
    else if (n == 2)
    {
        printf("You have passed in science\n");
        printf("Congratulations! You have got 15rs reward money\n");
    }
    else if (n == 3)
    {
        printf("Great!You have passed in both the subject\n");
        printf("Wohooo! You have got 45rs reward money\n");
    }
    else
    {
        printf("You have entered an invalid choice\n");
    }
    return 0;
}