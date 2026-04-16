#include <stdio.h>

int main() {
    int base,exp;
    printf("Enter Base:\n");
    scanf("%d",&base);
    printf("Enter Power:\n");
    scanf("%d",&exp);

        int result = 1;
        for(int j=0;j<exp;j++){
            result *= base;
        }
        printf("%d^%d = %d\n",base,exp,result);

    return 0;
}