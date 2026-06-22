#include <stdio.h>

int string_length(char *str){
	int count = 0;
	while(*str!='\0'){
		str++;
		count++;
	}
	return count;
}

void reverse_string(char *str){
	char *start=str;
	char *end=str+string_length(str)-1;
	while(start<end){
		char temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}

int main(){
	char str[50];
	printf("Enter a string: ");
	scanf("%s",str);

	printf("Length of string:%d\n",string_length(str));

	reverse_string(str);
	printf("reversed string: %s\n",str);
	return 0;
}
