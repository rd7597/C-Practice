#include <stdio.h>

int main()
{
    int arr[5];
    int sum = 0;
    printf("Enter 5 numbers: \n"); // enter 5 numbers from user

    // taking inputs from user and storing in array
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    // logic to sum of array
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i]; // sum=sum+arr[i];
    }
    printf("%d ", sum); // print the sum of array elements
    return 0;
}