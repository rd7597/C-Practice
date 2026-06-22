#include <stdio.h>

int power( int base,int exp){
	int result = 1;
	for(int i=1;i<=exp;i++){
		result = result * base;
	}
	return result;
}

int digit_count(int num){
	int count=0;
	while(num!=0){
		count++;
		num=num/10;
	}
	return count;
}

int main(){
	int num;
	printf("Enter a Number: ");
	scanf("%d",&num);
	int original=num;
	int count = digit_count(num);
	int result = 0;
	while(num!=0){
		int ld=num%10;
		result =result+power(ld,count);
		num=num/10;
	}
	if(result==original)
		printf("Armstrong Number!\n");
	else
		printf("Not Armstrong!\n");
	return 0;
}

