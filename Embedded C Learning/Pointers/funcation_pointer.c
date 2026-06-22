#include <stdio.h>

int sum(int a,int b){
	return a+b;
}

int main(){
	int (*fp)(int,int);
	fp=sum;
	int a=10,b=7;
	printf("Sum of a & b is %d\n",fp(a,b));
	return 0;
}
