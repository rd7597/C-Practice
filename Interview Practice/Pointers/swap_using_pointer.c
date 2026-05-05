#include <stdio.h>

void swapNumber(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

int main() {
    int a,b;
    printf("Enter two number:\n");
    scanf("%d %d",&a,&b);

    printf("Before Swap: a=%d b=%d\n",a,b);
    swapNumber(&a,&b);
    printf("after swap: a=%d b=%d\n",a,b);


    return 0;
}