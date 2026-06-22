#include <stdio.h>

void string_copy(char *src, char *dest){

	while(*src!='\0'){
		*src=*dest;
		src++;
		dest++;
	}
	*src='\0';
}

void string_concate(char *src, char *dest){
	while(*src!='\0'){
		src++;
	}
	while(*dest!='\0'){
		*src=*dest;
		src++;
		dest++;
	}
	*src='\0';
}

int string_compare(char *src, char *dest){
	while(*src!='\0' && *dest!='\0'){
		if(*src!=*dest){
			return *src-*dest;
		}
		src++;
		dest++;
	}
	return *src-*dest;
}

int main(){
	char src[100];
	char dest[200];

	printf("Enter a source string: ");
	scanf("%s",src);

	printf("Enter another string: ");
	scanf("%s",dest);

	int result=string_compare(src,dest);

	if(result==0)
		printf("Both strings are same\n");
	else if(result>0)
		printf("string 1 is greater than string 2\n");
	else
		printf("String 2 is greater than string 1\n");

	string_concate(src,dest);

	printf("Concatenated string is %s\n",src);

	string_copy(src,dest);

	printf("source: %s Destination: %s\n",src,dest);
	return 0;
}
