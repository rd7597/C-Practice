#include <stdio.h>

int mul(int a,int b){
	return a*b;
}

int main(){
	int (*fp)(int,int);
	fp=mul;
	int a=5,b=10;
	printf("Multiplication of a and b is %d\n",fp(a,b));
	return 0;
}
