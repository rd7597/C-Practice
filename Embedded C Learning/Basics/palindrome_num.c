#include <stdio.h>

int palindrome(int num){
	int rev=0;
	int original = num;
	while(num!=0){
		rev = (rev*10)+(num%10);
		num=num/10;
	}
	return original == rev;
}

int main(){
	int num;
	printf("Enter a Number: ");
	scanf("%d",&num);

	if(palindrome(num))
		printf("palindrome number!\n");
	else
		printf("Not a palindrome Number!\n");
	return 0;
}
