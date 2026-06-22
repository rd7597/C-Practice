#include <stdio.h>
#include <string.h>

void string_copy(char *dest,char *src){
	while(*src!='\0'){
		*dest=*src;
		src++;
		dest++;
	}
	*dest='\0';
}

void string_concat(char *dest,char *src){
	while(*dest!='\0'){
		dest++;
	}
	while(*src!='\0'){
		*dest=*src;
		src++;
		dest++;
	}
	*dest='\0';
}

int string_length(char *str){
	int count = 0;
	while(*str!='\0'){
		count++;
		str++;
	}
	return count;
}

void string_reverse(char *str){
	if(*str=='\0')
		return;
	char *start=str;
	char *end=str+string_length(str)-1;

	while(start<end){
		char temp=*start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}

int string_compare(char *dest,char *src){
	while(*src!='\0' && *dest!='\0'){
		if(*dest!=*src){
			return *dest-*src;
		}
		dest++;
		src++;
	}
	return *dest-*src;
}

int count_vowel(char *str){
	int vowel=0;
	while(*str!='\0'){
		if(*str=='a' || *str=='e' || *str=='i'||
		*str=='o'|| *str=='u'||*str=='A'||
		*str=='E' || *str=='I'|| *str=='O'|| *str=='U'){
			vowel++;
		}
		str++;
	}
		return vowel;
}	

int main(){
	char str[50];
	char dest[200];
	char src[100];

	printf("Enter string: ");
	fgets(str,sizeof(str),stdin);
	str[strcspn(str,"\n")]='\0';

	printf("Enter source string: ");
	fgets(src,sizeof(src),stdin);
	src[strcspn(src,"\n")]='\0';

	printf("Enter destination string: ");
	fgets(dest,sizeof(dest),stdin);
	dest[strcspn(dest,"\n")]='\0';

	printf("String Length is %d\n",string_length(str));
	string_reverse(str);
	printf("Reversed string is %s\n",str);
	string_concat(dest,src);
	printf("Concatenated string is %s\n",dest);
	string_copy(dest,src);
	printf("after copy:\n");
	printf("Source:%s  Destination:%s\n",src,dest);
	int result = string_compare(dest,src);
	if(result == 0)
		printf("Both strings are equal!\n");
	else if(result > 0)
		printf("Destination string is bigger than source\n");
	else
		printf("Source string is bigger than destination\n");
	printf("total no of vowels in string is %d\n",count_vowel(str));

	return 0;
}



