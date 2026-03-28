#include <stdio.h>

int main()
{
    int total_marks = 500, obtained_marks;

    printf("Enter marks obtained(out of 500): ");
    scanf("%d", &obtained_marks);

    int percentage = (obtained_marks * 100) / total_marks;
    printf("You got %d%%\n", percentage);

    if (percentage >= 90)
    {
        printf("Grade: A");
    }
    else if (percentage >= 80)
    {
        printf("Grade: B");
    }
    else if (percentage >= 70)
    {
        printf("Grade: C");
    }
    else if (percentage >= 60)
    {
        printf("Grade: D");
    }
    else if (percentage >= 50)
    {
        printf("Grade: E");
    }
    else
    {
        printf("Grade: F");
    }

    return 0;
}