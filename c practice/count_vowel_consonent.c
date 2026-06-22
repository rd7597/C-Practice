#include <stdio.h>
#include <string.h>

void count_vowel_consonants(char *str){
	int vowel=0;
	int consonant =0;

	while(*str!='\0'){
	if(*str== 'a' ||*str== 'e'||*str== 'i' ||*str== 'o'||*str== 'u'
		|| *str == 'A'||*str == 'E'||*str == 'I'||*str == 'O'|| *str == 'U'){
				vowel++;
	}
	else if((*str>='a' &&  *str<='z')||(*str>='A' && *str<='Z')){
		consonant++;
	}
	str++;
	}
	printf("Vowels:%d\n",vowel);
	printf("Consonants:%d\n",consonant);
}

int main(){

	char str[50];
	printf("Enter a string: \n");
	fgets(str,sizeof(str),stdin);
	str[strcspn(str,"\n")]='\0';

	count_vowel_consonants(str);
	return 0;
}
