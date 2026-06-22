#include <stdio.h>

void max_min(int arr[],int size){
	int MAX = arr[0];
	int MIN = arr[0];

	for(int i=0;i<size;i++){
		if(arr[i]>MAX){
			MAX=arr[i];
		}
		if(arr[i]<MIN){
			MIN=arr[i];
		}
	}
	printf("Maximum element:%d\n",MAX);
	printf("Minimum element:%d\n",MIN);
}

int main(){
	int size;
	printf("Enter size of array: ");
	scanf("%d",&size);

	int arr[size];

	printf("Enter elements of array: ");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}

	printf("Array is: ");

	for(int i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");

	max_min(arr,size);
	return 0;
}
