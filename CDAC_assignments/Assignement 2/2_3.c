#include <stdio.h>

int main() {
    int subject, marks;
    int total_marks=subject*100;

    printf("Enter Number of Subjects:\n");
    scanf("%d",&subject);
    printf("Enter Marks Obtained:\n");
    scanf("%d",&marks);

    float grade = marks/subject;

    if(grade >=90)
    printf("Grade: A\n");
    else if(grade >=80 || grade<90)
    printf("Grade: B\n");
    else if(grade >=70 || grade<80)
    printf("Grade: C\n");
    else if(grade >=60 || grade<70)
    printf("Grade: D\n");
    else if(grade >=50 || grade<60)
    printf("Grade: E\n");
    else if(grade >=40 || grade<50)
    printf("Grade: F\n");
    else
    printf("You have failed the Exam!!");

    return 0;
}