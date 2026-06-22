#include <stdio.h>
#include <string.h>

int check_palindrome(char *str){
	char *start = str;
	char *end = str+strlen(str)-1;
	while(start<end){
		if(*start!=*end){
			return 0;
		}
		start++;
		end--;
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
