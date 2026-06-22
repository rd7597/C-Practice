#include <stdio.h>

void display();
void display(){
    printf("Hello Rahul\n");
}

struct show{
    void(*test)();
};


int main() {
    struct show s1={display};
    s1.test();

    return 0;
}