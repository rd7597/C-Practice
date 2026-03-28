#include <stdio.h>

int add(int ,int );
struct calculator{
    int (*operation)(int,int);
};

int add(int a,int b){
    return a+b;
}

int main() {
    struct calculator calc={add};
    int result=calc.operation(2,3);
    printf("Result = %d\n",result);
    return 0;
}