#include <stdio.h>

int add(int ,int );
int sub(int ,int );
int mul(int ,int );
int div(int ,int );

int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int mul(int a,int b){
    return a*b;
}
int div(int a,int b){
    if(b==0){
        printf("Divided by Zero Error!\n");
    }
    return a/b;
}

int main() {
    int (*fp)(int,int);
    fp=add;
    int result=fp(14,77);
    printf("Result of addition is %d\n",result);

    fp=sub;
    int result=fp(14,5);
    printf("Result of addition is %d\n",result);

    fp=mul;
    int result=fp(14,10);
    printf("Result of multiplication is %d\n",result);

    fp=div;
    int result=fp(14,7);
    printf("Result of Division is %d\n",result);
    return 0;
}