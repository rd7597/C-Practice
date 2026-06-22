#include <stdio.h>

int main(){
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	printf("Number before swap: a=%d, b=%d\n",a,b);
	int temp;
	
	//Version1 integer overflow
	//a=a+b;
	//b=a-b;
	//a=a-b;
	
	temp=a;
	a=b;
	b=temp;

	printf("Number after swap: a=%d, b=%d\n",a,b);
	return 0;
}



