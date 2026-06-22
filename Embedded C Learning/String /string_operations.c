#include <stdio.h>

int string_length(char *str){
	int length =0;
	while(*str!='\0'){
		str++;
		length++;
	}
	return length;
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
	while(*src!='\0'){
		*dest=*src;
		src++;
		dest++;
	}
	*dest='\0';
}

void reverse_string(char *str){
	char *start= str;
	char *end = str+string_length(str)-1;
	while(start<end){
		char temp=*start;
		*start=*end;
		*end=temp;
		
		start++;
		end--;
	}
}

int string_compare(char *src,char *dest){
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
	char *start=str;
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
	char str[100];
	char dest[200];
	char src[100];
	
	printf("Enter a string: ");
	scanf("%s",str);
	
	printf("Enter a source string: ");
	scanf("%s",src);
	
	printf("Enter a destination string: ");
	scanf("%s",dest);
	
	printf("string length is %d\n",string_length(str));
	
	if(check_palindrome(str))
		printf("Palindrome String\n");
	else
		printf("Not Palindrome string\n");
	
	reverse_string(str);
	printf("After Reverse: %s\n",str);
	
	int result=string_compare(src,dest);
	
	string_concat(dest,src);
	printf("After concatenation: Source:%s Destination:%s\n",src,dest);
	
	string_copy(dest,src);
	printf("after copy: Source:%s Destination: %s\n",src,dest);
	
	if(result>0)
		printf("Source string is greater\n");
	else if(result<0)
		printf("Destination string is greater\n");
	else
		printf("both strings are equal\n");

	return 0;
}
