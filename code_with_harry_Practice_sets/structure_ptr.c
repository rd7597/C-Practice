#include <stdio.h>

struct student {
    int a;
    char b;
};

struct student s1;
struct student *ptr =&s1;

int main() {
    /*ptr->a=10;
    ptr->b='A'; */

    printf("%d\n",ptr->a=10);
    printf("%c",ptr->b='A');

    return 0;
}