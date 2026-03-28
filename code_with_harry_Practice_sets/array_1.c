// DEFULT CODE... THIS CODE IS NOT SET YET

#include <stdio.h>

// Write the function here...
void solution(int n)
{
	// Your code here...
	int arr[n];
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		sum = sum + arr[i];
	}
	printf("%d\n", sum);
}

// Driver code starts here... DO NOT CHANGE THIS
int main()
{
	int t;
	scanf("%d", &t);

	while (t-- > 0)
	{
		int n;
		scanf("%d", &n);

		// Make changes accordingly
		solution(n);
	}

	return 0;
}