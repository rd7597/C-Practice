#include <stdio.h>

int string_compare(char *str1,char *str2){
	while(*str1!='\0' && *str2!='\0'){
		if(*str1!=*str2){
			return *str1-*str2;
		}
			str1++;
			str2++;
	}
		return *str1-*str2;
}

int main(){
	char str1[50];
	char str2[100];

	printf("Enter a string: ");
	scanf("%s",str1);

	printf("Enter another string: ");
	scanf("%s",str2);

	int result = string_compare(str1,str2);
	if(result==0)
		printf("Both Strings are Equal\n");
	else if(result>0)
		printf("String1 is greater than String2\n");
	else
		printf("String 2 is greater than String1\n");
	
	return 0;
}
