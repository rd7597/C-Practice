#include <stdio.h>
#include <stdlib.h>


void reverse_array(int arr[],int size){	
	int temp;
	for(int i=0;i<size/2;i++){
		temp=arr[i];
		arr[i]=arr[size-i-1];
		arr[size-i-1]=temp;
	}
}

int main(){
	int size;

	printf("Enter size of array: ");
	scanf("%d",&size);

	int *arr;

	arr=malloc(size * sizeof(*arr));
	if(arr==NULL){
		printf("Memory allocation failed!\n");
		return 1;
		}

	printf("Enter elements of array: ");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("Array is:\n");
	for(int i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	reverse_array(arr,size);
	printf("reversed array is: ");
	for(int i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	free(arr);
	return 0;
}
