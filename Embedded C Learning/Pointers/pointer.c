#include <stdio.h>

int main() {
    int a=50;
    int* b=&a;
    int **c=&b;
    printf("The address of a is %p\n",&a);
    printf("The address of b is %p\n",&b);
    printf("The address of c is %p\n",&c);
    printf("The value of a is %d\n",a);
    printf("The value of a is %d\n",*b);
    printf("The value of a is %d\n",**c);
    
    return 0;
}