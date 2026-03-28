#include <stdio.h>

int main() {
    int i=7;
    int* j=&i;
    int** k=&j;

    printf("the value of i is %d\n",i);
    printf("the value of i is %d\n",*j);
    printf("the value of i is %d\n",**k);
    printf("the address of i is %p\n",j);
    printf("the address of i is %p\n",&i);
    printf("the address of i is %p\n",&(**k));
    printf("the address of j is %p\n",k);
    printf("the address of j is %p\n",&j);
   

    return 0;
}