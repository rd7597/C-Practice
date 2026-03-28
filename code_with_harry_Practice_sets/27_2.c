#include <stdio.h>

int main() {
    int n,i=0;
    printf("Enter a Number: \n");
    scanf("%d", &n);
    int arr[30];

    while(n>0){ 
        arr[i]=n%2;
        n=n/2;
        i++;
    }

    printf("Binary:\n");
    
    for(i=i-1;i>=0;i--){
        printf("%d",arr[i]);
    }
    return 0;
}