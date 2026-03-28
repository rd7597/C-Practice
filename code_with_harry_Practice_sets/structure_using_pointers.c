#include <stdio.h>
#include <string.h>

struct student{
    char name[50];
    int age;
    int marks;
    char grade;
}s1;

int main() {
    //struct student s1;
    struct student *ptr=&s1;
    //ptr=&s1;
    
    strcpy(ptr->name,"Rahul");
    ptr->age=25;
    ptr->marks=97;
    ptr->grade='A';

    printf("The Name is %s\n",ptr->name);
    printf("The Age is %d\n",ptr->age);
    printf("The Marks is %d\n",ptr->marks);
    printf("The Grade is %c\n",ptr->grade);

    return 0;
}