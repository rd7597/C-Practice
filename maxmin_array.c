#include <stdio.h>

void maxmin_element(int arr[],int size){
	int max=arr[0];
	int min=arr[0];

	for(int i=1;i<size;i++){
		if(arr[i]>max){
			max=arr[i];
		}
		if(arr[i]<min){
			min=arr[i];
		}
	}
	printf("maximum element: %d\n",max);
	printf("minimum element: %d\n",min);
}

int main(){
	int size;
	printf("Enter size of array: ");
	//scanf("%d",&size);
	if(scanf("%d",&size)!=1 || size<=0){
		printf("Invalid size!");
		return 1;
}
	int arr[size];

	printf("enter elements of array:\n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
		}
	printf("array is:\n");
	for(int i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	maxmin_element(arr,size);
	return 0;
}




