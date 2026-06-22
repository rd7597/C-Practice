#include <stdio.h>

struct A{
	int a;
	char b;
};

int main(){
	struct A s1;
	struct A *ptr=&s1; //pointer to structure s1

	printf("Enter a:\n");
	scanf("%d",&s1.a);
	printf("a:%d\n",s1.a);
	printf("a:%d\n",ptr->a);
	return 0;
}

