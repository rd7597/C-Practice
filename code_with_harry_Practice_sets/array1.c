#include <stdio.h>

int main() {
    int size;

    printf("enter the size of array:\n");
    scanf("%d",&size);
    int arr[size];
    int *ptr=arr;

    printf("Enter the elements Of array:\n");
    for(int i=0;i<size;i++){
            scanf("%d",&arr[i]);        
    }
    printf("Array is:\n");
    for(int i=0;i<size;i++){
            printf("%d ",arr[i]);        
    }
    printf("\nThe Reversed Array is:\n");
    for(int i=size-1;i>=0;i--){
        printf("%d ",arr[i]);
    }

    return 0;
}