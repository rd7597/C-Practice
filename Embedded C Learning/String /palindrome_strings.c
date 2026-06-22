#include <stdio.h>
#include <string.h>

int check_palindrome(char *str){
	int len = strlen(str);
	
	for(int i=0;i<len/2;i++){
		if(str[i]!=str[len-i-1]){
			return 0;
		}
	}
	return 1;
}

int main(){
	char str[50];
	printf("Enter a string: ");
	scanf("%s",str);

	if(check_palindrome(str))
		printf("palindrome string!\n");
	else
		printf("not palindrome\n");

	return 0;
}
