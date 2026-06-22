#include <stdio.h>
    
int reverse_num(int n){
	int rev=0;
	if(n<0){
		n=-n;
	}
	while(n!=0){
		rev=(rev*10)+(n%10);
		n=n/10;
	}
	return rev;
}

int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);

	int result = reverse_num(n);
	printf("Reverse of %d is %d\n",n,result);
	return 0;
}
