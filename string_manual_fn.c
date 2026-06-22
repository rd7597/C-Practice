#include <stdio.h>
#include <string.h>

int string_length(char *str){
	int count=0;
	while(*str!='\0'){
		count++;
		str++;
	}
	return count;
}

int reverse_string(char *str){
	char *start=str;
	char *end = str+string_length(str)-1;
	while(start<end){
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
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

void string_copy(char *dest,char *src){
	while(*src!='\0'){
		*dest=*src;
		dest++;
		src++;
	}
	*dest='\0';
}

int string_compare(char *dest,char *src){
	while(*src!='\0' && *dest!='\0'){
		if(*src!=*dest){
			return 0;
		}
		src++;
		dest++;
	}
	return 1;
}

int count_vowel_consonent(char *str){
	int vowel=0;
	int consonent=0;
	while(*str!='\0'){
		if(*str=='A' ||*str=='E' ||*str=='I' ||*str=='O' ||*str=='U'
		||*str=='a' ||*str=='e' ||*str=='i' ||*str=='o' ||*str=='u' )
			vowel++;
		else if((*str >= 'A' && *str <= 'Z') || (*str >='a' && *str<= 'z'))
			consonent++;
		str++;
	}
	printf("Vowels: %d\n",vowel);
	printf("Consonent: %d\n",consonent);
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
	char str[50];
	char dest[200];
	char src[100];

	printf("Enter a string: ");
	fgets(str,sizeof(str),stdin);

	printf("Enter destination string: ");
	fgets(dest,sizeof(dest),stdin);

	printf("Enter source string: ");
	fgets(src,sizeof(src),stdin);

	str[strcspn(str,"\n")]='\0';
	dest[strcspn(dest,"\n")]='\0';
	src[strcspn(src,"\n")]='\0';
	
	
	return 0;
}
