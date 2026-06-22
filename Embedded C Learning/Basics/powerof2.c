#include <stdio.h>

int main() {
    int num,pos;
    printf("Enter Number:\n");
    scanf("%d",&num);
    
    if(num>0 && (num & (num-1))==0){
        printf("Power Of 2");
    }
    else{
        printf("Not Power of 2");
    }
    
    return 0;
}