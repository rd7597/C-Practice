#include <stdio.h>

int main() {
    int x,y;
    printf("Enter base:\n");
    scanf("%d",&x);
    printf("Enter power:\n");
    scanf("%d",&y);

    int result = 1;
    for (int i = 0; i < y; i++) {
        result *= x;
    }
    printf("Result: %d\n", result);


    return 0;
}