#include <stdio.h>

int main(){
	int num;
	printf("Enter a Number: ");
	scanf("%d", &num);
	
	int isPrime=1;

	if(num<=1){
		isPrime=0;
	}

	for(int i=2;i*i<=num;i++){
		if(num%i==0){
			isPrime=0;
			break;
		}
	}

	if(isPrime){
		printf("Prime Number!\n");
	}
	else{
		printf("Not Prime!\n");
	}
	return 0;
	}
