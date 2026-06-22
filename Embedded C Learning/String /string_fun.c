#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int string_length(char *str){
	int count =0;

	while(*str!='\0'){
		count++;
		str++;
	}
	return count;
}

void string_concat(char *dest, char *src){
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

int main(){
	char *str;
	char *dest;
	char *src;

	str=malloc(50*sizeof(char));
	src=malloc(100*sizeof(char));
	dest=malloc(200*sizeof(char));

	printf("Enter a string: ");
	fgets(str,50,stdin);
	
	printf("Enter a destination string: ");
	fgets(dest,200,stdin);
	
	printf("Enter a source string: ");
	fgets(src,100,stdin);
	
	str[strcspn(str,"\n")]='\0';
	dest[strcspn(dest,"\n")]='\0';
	src[strcspn(src,"\n")]='\0';
	
	printf("Length of the string is %d\n",string_length(str));
	string_concat(dest,src);
	printf("string after concatenation: source:%s , Destination:%s\n",src,dest);
	free(str);
	free(dest);
	free(src);

	return 0;
}
