#include <stdio.h>

int string_length(char *str){
	int count = 0;
	while(*str!='\0'){
		count++;
		str++;
	}
	return count;
}

int check_palindrome(char str[]){
	int i;
	int len=string_length(str);
	for(i=0;i<len/2;i++){
		if(str[i]!= str[len-i-1]){
			return 0;
		}
	}
		return 1;
}


int main(){
	char str[100];

	printf("Enter a String: ");
	scanf("%s",str);

	if(check_palindrome(str))
		printf("Palindrome String!\n");
	else
		printf("Not Palidrome!\n");
	
	return 0;
}
