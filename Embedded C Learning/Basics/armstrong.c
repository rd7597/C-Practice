#include <stdio.h>

int power(int base, int exp) {
	int result = 1;

	for(int i = 1; i <= exp; i++) {
		result = result * base;
	}

	return result;
}

int countDigits(int num) {
	int count = 0;

	while(num != 0) {
		count++;
		num = num / 10;
	}

	return count;
}

int main() {
	int num, original, sum = 0;

	printf("Enter a Number: ");
	scanf("%d", &num);

	original = num;

	int digits = countDigits(num);

	while(num != 0) {
		int digit = num % 10;

		sum = sum + power(digit, digits);

		num = num / 10;
	}

	if(sum == original)
		printf("Armstrong Number!\n");
	else
		printf("Not an Armstrong Number!\n");

	return 0;
}
