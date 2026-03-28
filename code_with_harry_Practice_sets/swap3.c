#include <stdio.h>

void swap(int*,int*);

void swap(int* a,int* b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

}

int main() {
    int a,b;

    printf("Enter a and b:\n");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("After swap:a=%d,b=%d",a,b);
    return 0;
}