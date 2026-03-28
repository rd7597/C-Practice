#include <stdio.h>
#include <stdlib.h>

struct student{
    char name[50];
    int age;
    int marks;
};

struct student s1;
int main() {
    printf("\t\t*****Student Portal*****\n");

    printf("Enter name:\n");
    scanf("%s",s1.name);
    //fgets("%s",sizeof(s1.name),stdin);

    printf("Enter Age:\n");
    scanf("%d",&s1.age);
    
    printf("Enter Marks:\n");
    scanf("%d",&s1.marks);
    
    printf("\n----- Student Details -----\n");
    printf("Name  : %s\n", s1.name);
    printf("Age   : %d\n", s1.age);
    printf("Marks : %d\n", s1.marks);

    return 0;
}