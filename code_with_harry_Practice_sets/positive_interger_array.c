#include <stdio.h>

int main()
{
    int size;

    printf("Enter the size of array:\n");
    scanf("%d", &size);
    int arr[size];
    int *ptr = arr;

    printf("Enter the elements Of array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    int count=0;
    printf("Number of positive Intergers In Array:\n");
    for (int i = 0; i < size; i++)
    {   
        if(arr[i]>0){
            count++;
        }
        
    }
    printf("%d", count);
    return 0;
}