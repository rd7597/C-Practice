#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int x=0,y=1,z=1;
    
    if (num>=1)
        printf("Fibonacci Series: %d ",x);
    if(num>=2)
        printf("%d ",y);
    
    for(int i=3;i<=num;i++){
        z=x+y;
        printf("%d ",z);
        x=y;
        y=z;
    }


    return 0;
}