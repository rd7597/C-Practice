#include <stdio.h>

int main(){

	int x=0,y=1,z;
	int num;
	printf("Enter number of terms: ");
	scanf("%d",&num);

	printf("Fibonacci Series: \n");
	if(num>=1)
		printf("%d ",x);
	if(num>=2)
		printf("%d ",y);

	for(int i=3;i<=num;i++){
		z=x+y;
		printf("%d ",z);
		x=y;
		y=z;
	}
	printf("\n");

	return 0;
}
