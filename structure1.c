#include <stdio.h>

struct student{
	int age;
	char name[50];
	char grade;
	
};


int main(){
	struct student s1;
	printf("\n******Welcome to Student Portal******\n");

	printf("Enter Name: ");
	scanf("%s",s1.name);

	printf("Enter Grade: ");
	scanf(" %c",&s1.grade);

	printf("Enter Age: ");
	scanf("%d",&s1.age);

	printf("\nStudent Details:\n");

	printf("Name: %s\n",s1.name);
	
	printf("Grade: %c\n",s1.grade);

	printf("Age: %d\n",s1.age);
	printf("size of structure is %lu\n",sizeof(s1));
	return 0;
}
