#include <stdio.h>
#include <stdlib.h>

int string_length(char *str){
	int length = 0;
	while(*str!='\0'){
		length++;
		str++;
	}
	return length;
}

void string_reverse(char *str){
	char *start=str;
	char *end=str+string_length(str)-1;
	while(start<end){
		char temp = *start;
		*start=*end;
		*end=temp;

		start++;
		end--;
	}
}

void string_concat(char *dest,char *src){
	while(*dest!='\0'){
		dest++;
	}
	while(*src!='\0'){
		*dest=*src;
		dest++;
		src++;
	}
	*dest='\0';
}

void string_copy(char *dest, char *src){
	while(*dest!='\0'){
		*dest=*src;
		dest++;
		src++;
	}
	*dest='\0';
}

int string_compare(const char *dest,const char *src){
	while(*src!='\0' && *dest!='\0'){
		if(*src!=*dest){
			return *src-*dest;
		}
		src++;
		dest++;
	}
	return *src-*dest;
}

int check_palindrome(char *str){
	char *start = str;
	char *end = str+string_length(str)-1;
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
	char *str= (char *) malloc(50*sizeof(char));
	char *dest= (char *) malloc(200*sizeof(char));
	char *src= (char *) malloc(100*sizeof(char));
	
	printf("enter a string: ");
	scanf("%s",str);

	printf("enter destination string: ");
	scanf("%s",dest);

	printf("enter source string: ");
	scanf("%s",src);

	printf("string length is %d\n",string_length(str));

	string_reverse(str);
	printf("After reverse: %s\n", str); 

	int result =string_compare(dest,src);
	
	string_concat(dest,src);
	printf("After Concatenation: Source:%s Destination: %s\n",src,dest);

	string_copy(dest,src);
	printf("After Copy: Source:%s Destination: %s\n",src,dest);
	
	if(result>0)
		printf("Source is greater\n");
	else if(result<0)
		printf("destination is greater\n");
	else
		printf("Equal Strings\n");

	if(check_palindrome(str))
		printf("Palindrome string!\n");
	else
		printf("Not Palindrome string!\n");
	return 0;
}
