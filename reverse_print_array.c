#include <stdio.h>

void reverse_array(int arr[],int size){
	printf("Reversed array: \n");
	for(int i=size-1;i>=0;i--){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

int main(){
	int size;

	printf("Enter size of array: ");
	scanf("%d",&size);

	int arr[size];
	printf("Enter array elements:");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}

	reverse_array(arr,size);

	return 0;
}
