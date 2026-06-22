#include <stdio.h>

int string_length(char *str){
	int count=0;
	while(*str!='\0'){
		count++;
		str++;
	}
	return count;
}

void string_copy(char *src, char *dest){
	while(*src!='\0'){
		*dest=*src;
		dest++;
		src++;
	}
	*dest='\0';
}

void string_concate(char *src , char *dest){
	while(*src!='\0'){
		src++;
	}
	while(*dest!='\0'){
		*src=*dest;
		dest++;
		src++;
	}
	*src='\0';
}

void string_reverse(char *str){
	char *start=str;
	char *end=str+string_length(str)-1;

	while(start<end){
		char temp=*start;
		*start=*end;
		*end=temp;
		start++;
		end--;
	}
}


int main(){
	char str[50];
	char src[100];
	char dest[200];

	printf("Enter a string:\n ");
	scanf("%[^\n]",str);
	
	printf("Enter a source string:");
	scanf("%s",src);

	printf("Enter destination String:");
	scanf("%s",dest);

	printf("String length is %d\n",string_length(str));

	string_reverse(str);
	printf("reversed string:%s\n",str);

	string_concate(src,dest);
	printf("Concatenated string is %s\n",src);

	string_copy(src,dest);
	printf("after copy:\nSource:%s destination:%s\n",src,dest);
	return 0;
}
