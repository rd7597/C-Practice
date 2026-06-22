#include <stdio.h>

int modify(int *x,int *y){
    *x=*x+5;
    *y=*y+2;
}

int main() {
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    printf("a=%d b=%d\n",a,b);
    modify(&a,&b);
    printf("after modification: a=%d b=%d\n",a,b);


    return 0;
}