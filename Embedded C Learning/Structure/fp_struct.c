#include <stdio.h>

void hello();

void hello(){
    printf("Hello Rahul\n");
}

struct student{
    void (*fp)();
};

int main() {
    struct student s1={hello};
    s1.fp();    

    return 0;
}