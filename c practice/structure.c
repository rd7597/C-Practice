#include <stdio.h>

struct student{
	char name[50];
	int age;
	char grade;
};

	struct student s1;
int main(){
	printf("Enter name: \n");
	scanf("%s",s1.name);

	printf("Enter age: \n");
	scanf("%d",&s1.age);

	printf("Enter grade:\n");
	scanf("%c",&s1.grade);
	printf("\n");

	printf("Welcome to Student Portal\n");

	printf("Name: %s\n",s1.name);
	printf("Age: %d\n",s1.age);
	printf("Grade: %c",s1.grade);

	return 0;
}
