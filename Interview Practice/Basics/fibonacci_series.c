#include <stdio.h>

int main() {
    //0, 1, 1, 2, 3, 5, 8, 13, 21 ...
    int num;
    printf("Enter a Number:\n");
    scanf("%d",&num);
    int x=0,y=1,z=1;
    printf("Fibonacci Series: %d ", x);
    if(num<0){
        printf("Fibonacci series is not possible for negative numbers.\n");
        return 0;
    }
    if(num==0|| num==1){
        return x;
    }
    for(int i=2;i<num;i++){
        printf("%d ", z);
        z=x+y;
        x=y;
        y=z;
    }

    return 0;
}