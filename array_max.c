#include <stdio.h>

void max_min_element(int arr[],int size){
	int max = arr[0];
	int min = arr[0];

	for(int i=1;i<size;i++){
		if(arr[i]>max){
			max=arr[i];
		}
		
		if(arr[i]<min){
			min=arr[i];
		}
	}
	printf("Maximum Element of array is %d\n",max);
	printf("Minimum Element of array is %d\n",min);
}

int main(){
	int size;
	printf("Enter size of array:");
	scanf("%d",&size);

	int arr[size];
	
	printf("Enter elements of array: ");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("Array is :\n");
	for(int i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	
	max_min_element(arr,size);
	return 0;
}

