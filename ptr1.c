#include <stdio.h>

int main()
{
    int a=10;
    int *p = &a;

    printf("Value of a is %d\n",a);
    printf("Value of a using pointer is %d\n",*p);
    printf("address of a is %p\n",&a);
    printf("address of a is %p\n",p);
    printf("address of pointer p is %p\n",&p);
    
    return 0;
}