#include <stdio.h>

int main() {
    int i=6;
    int* ptr=&i;
    printf("The address of i is %p\n",ptr);
    printf("The address of i is %p\n",&i);
    printf("The address of ptr is %p\n",*ptr);


    return 0;
}