#include <stdio.h>

int factorial(int num){
	int fact=1;
	for(int i=1;i<=num;i++){
		fact = fact*i;
	}
	return fact;
}

int main(){
	int num;
	printf("Enter a Number: ");
	scanf("%d",&num);

	int result = factorial(num);
	printf("factorial of %d is %d\n",num,result);
	return 0;
}
