#include <stdio.h>

int main() {
    int a,b;
    printf("Enter Two Numbers:\n");
    scanf("%d %d",&a,&b);

    if(a>b){
        printf("%d is bigger than %d",a,b);
    }
    else if(b>a){
        printf("%d is bigger than %d",b,a);
    }
    else{
        printf("Both numbers are equal.");
    }

    return 0;
}