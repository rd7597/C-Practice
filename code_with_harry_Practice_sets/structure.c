#include <stdio.h>

struct student{
    int age;
    char grade;
};

int main() {
    struct student s1={15,'B'};
    struct student *ptr;
    ptr=&s1;

    printf("%d %c\n",s1.age,s1.grade);
    ptr->age=10;
    ptr->grade='A';
    printf("%d %c",(*ptr).age,(*ptr).grade);

    return 0;
}