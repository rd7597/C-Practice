#include <stdio.h>

void max_min(int arr[], int size){

    int max = arr[0];
    int min = arr[0];

    for(int i = 1; i < size; i++){

        // maximum check
        if(arr[i] > max){

            max = arr[i];
        }

        // minimum check
        if(arr[i] < min){

            min = arr[i];
        }
    }

    printf("\nMaximum element = %d\n", max);

    printf("Minimum element = %d\n", min);
}

int main(){

    int size;

    printf("Enter size of array: ");

    scanf("%d", &size);

    int arr[size];

    printf("Enter elements of array:\n");

    for(int i = 0; i < size; i++){

        scanf("%d", &arr[i]);
    }

    printf("\nArray is:\n");

    for(int i = 0; i < size; i++){

        printf("%d ", arr[i]);
    }

    printf("\n\n");

    max_min(arr, size);

    return 0;
}
