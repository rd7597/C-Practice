#include <stdio.h>
#include <string.h>

void string_copy(char *dest, char *src){
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

	string_copy(dest,src);
	printf("\nafter copy\n");
	printf("destination:%s ,  source: %s\n",dest,src);

	return 0;
}

