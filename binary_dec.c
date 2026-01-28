#include <stdio.h>

int main() {
    int n,i=0;
    int arr[20];
    printf("Enter a Number: \n");
    scanf("%d",&n);

    while(n>0){
        arr[i]=n%2;
        n=n/2;
        i++;
    }

    printf("Binary Number is: \n");
    while(i>0){
        i--;
        printf("%d",arr[i]);
}
    return 0;
}