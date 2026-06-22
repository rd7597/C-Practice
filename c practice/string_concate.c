#include <stdio.h>
#include <string.h>

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
	char src[100];
	char dest[200];

	printf("Enter destination string: ");
	fgets(dest,sizeof(dest),stdin);

	printf("Enter source string: ");
	fgets(src, sizeof(src),stdin);

	dest[strcspn(dest,"\n")]='\0';

	src[strcspn(src,"\n")]='\0';

	string_concat(dest,src);
	printf("\nafter concatenation\n");
	printf("destination:%s ,  source: %s\n",dest,src);

	return 0;
}

